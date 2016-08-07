#ifndef  color_generic_make_red
#define color_generic_make_red

// ::color::make::red( c )

// TODO #include "model.hpp"
#include "../constant/red.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void red( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      red()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::red( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      template< typename category_name >
       struct make<::color::constant::red_type, category_name >
        {
         typedef category_name                     category_type;
         typedef ::color::constant::red_type       constant_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::red<category_type>( ).container();
          }

        };

     }

  }

#endif
