#ifndef  color_generic_make_violet
#define color_generic_make_violet

// ::color::make::violet( c )

// TODO #include "model.hpp"
#include "../constant/violet.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void violet( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      violet()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::violet( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      template< typename category_name >
       struct make<::color::constant::violet_type, category_name >
        {
         typedef category_name                        category_type;
         typedef ::color::constant::violet_type       constant_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::violet<category_type>( ).container();
          }

        };

     }

  }

#endif
