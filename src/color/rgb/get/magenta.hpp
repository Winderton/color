#ifndef color_rgb_get_magenta
#define color_rgb_get_magenta

// ::color::get::magenta( c )

#include "../category.hpp"
#include "../place/place.hpp"
#include "../../generic/get/magenta.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"


#include "../../_internal/diverse.hpp"
#include "../../_internal/normalize.hpp"
#include "../../generic/operation/invert.hpp"


 namespace color
  {
   namespace get
    {

     namespace constant
      {
       namespace rgb { namespace magenta
        {

         enum formula_enum
          {
             cmy_entity
            ,cmyk_entity
            ,hsl_star_entity
          };

        }}
      }

     namespace _internal { namespace rgb
      {
       namespace magenta
        {

         template
          <
            typename category_name
           ,enum ::color::get::constant::rgb::magenta::formula_enum formula_number
          >
          struct usher
           {
            typedef category_name category_type;

            typedef ::color::model<category_type>          model_type;
            typedef typename ::color::trait::component< category_name >::return_type return_type;

            static return_type process( model_type const& m )
             {
              return m.template get<0>();
             }
           };


         template< typename tag_name >
          struct usher< ::color::category::rgb< tag_name >, ::color::get::constant::rgb::magenta::cmy_entity >
           {
            typedef ::color::category::rgb< tag_name >  category_type;
            typedef ::color::model< category_type > model_type;

            typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;

            typedef typename ::color::trait::component< category_type >::return_type return_type;

            typedef ::color::_internal::diverse< category_type >     diverse_type;
            typedef ::color::_internal::normalize< category_type > normalize_type;

            typedef  ::color::operation::_internal::invert< category_type > invert_type;
            enum
             {


               green_p  = ::color::place::_internal::green<category_type>::position_enum
             };

            static return_type process( model_type const& color_parameter )
             {
              return invert_type::template component< green_p >( color_parameter.template get<green_p>());
            }
          };


         template< typename tag_name >
          struct usher< ::color::category::rgb< tag_name >, ::color::get::constant::rgb::magenta::cmyk_entity >
           {
            typedef ::color::category::rgb< tag_name >  category_type;
            typedef ::color::model< category_type > model_type;

            typedef typename ::color::trait::scalar<category_type>     scalar_trait_type;
            typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;

            typedef typename ::color::trait::component< category_type >::return_type return_type;

            typedef ::color::_internal::diverse< category_type >     diverse_type;
            typedef ::color::_internal::normalize< category_type > normalize_type;

            enum
             {
               red_p   = ::color::place::_internal::red<category_type>::position_enum
              ,green_p = ::color::place::_internal::green<category_type>::position_enum
              ,blue_p  = ::color::place::_internal::blue<category_type>::position_enum
             };

            static return_type process( model_type const& color_parameter )
             {
              scalar_type r = normalize_type::template process<red_p  >( color_parameter.template get<red_p  >() );
              scalar_type g = normalize_type::template process<green_p>( color_parameter.template get<green_p>() );
              scalar_type b = normalize_type::template process<blue_p >( color_parameter.template get<blue_p >() );

              scalar_type max = std::max<scalar_type>( { r, g, b } );



              scalar_type m = scalar_type(0);

              if( false == scalar_trait_type::is_small( max ) )
               {

                m = scalar_type(1) - g / max;
               }

              return diverse_type::template process< green_p >( m );
             }
          };

         template< typename tag_name >
          struct usher< ::color::category::rgb< tag_name >, ::color::get::constant::rgb::magenta::hsl_star_entity >
           {
            typedef ::color::category::rgb< tag_name>  category_type;
            typedef ::color::model< category_type > model_type;

            typedef typename ::color::trait::scalar<category_type>::instance_type     scalar_type;

            typedef typename ::color::trait::component< category_type >::return_type return_type;

            typedef ::color::_internal::diverse< category_type >     diverse_type;
            typedef ::color::_internal::normalize< category_type > normalize_type;

            enum
             {
               red_p   = ::color::place::_internal::red<category_type>::position_enum
              ,green_p = ::color::place::_internal::green<category_type>::position_enum
              ,blue_p  = ::color::place::_internal::blue<category_type>::position_enum
             };


            static return_type process( model_type const& color_parameter )
             {
              scalar_type c = scalar_type(1) - normalize_type::template process<red_p  >( color_parameter.template get<red_p  >(  ) );
              scalar_type m = scalar_type(1) - normalize_type::template process<green_p>( color_parameter.template get<green_p>(  ) );
              scalar_type y = scalar_type(1) - normalize_type::template process<blue_p >( color_parameter.template get<blue_p >(  ) );

              scalar_type result;
              while( true )
               {
                if( c < y )
                 {
                  result = ( m - y ) * ( scalar_type(1) - ( y - c ) );
                  break;
                 }

                {
                 result = ( m - c ) * ( scalar_type(1) - ( c - y ) );
                 break;
                }
               }

              return diverse_type::template process<red_p >( result );
             }
           };

        }
      }}


     template
      <
        enum ::color::get::constant::rgb::magenta::formula_enum formula_number = ::color::get::constant::rgb::magenta::cmy_entity
       ,typename tag_name
      >
      inline
      typename ::color::model< ::color::category::rgb< tag_name> >::component_const_type
       magenta
       (
         ::color::model< ::color::category::rgb< tag_name> > const& color_parameter
       )
       {
        return ::color::get::_internal::rgb::magenta::usher< ::color::category::rgb< tag_name >, formula_number  >::process( color_parameter );
       }

    }
  }

#endif