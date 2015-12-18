#ifndef  color_generic_make_cyan
#define color_generic_make_cyan

// ::color::make::cyan( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void cyan( ::color::_internal::model< category_name > & color_parameter )
       {
        typedef ::color::_internal::model< category_name > model_type;
        typedef ::color::_internal::trait< category_name > trait_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

    }
  }

#endif