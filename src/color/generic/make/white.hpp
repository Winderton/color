#ifndef  color_generic_make_white
#define color_generic_make_white

// ::color::make::white( c )

// TODO #include "model.hpp"
#include "../constant/white.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void white( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      white()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::white( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      template< typename category_name >
       struct make<::color::constant::white_type, category_name >
        {
         typedef category_name                       category_type;
         typedef ::color::constant::white_type       constant_type;

         typedef typename ::color::trait::container<category_type>::output_type       container_output_type;

         inline static void process( container_output_type & m )
          {
           m = ::color::make::white<category_type>( ).container();
          }

        };

     }

  }

#endif
