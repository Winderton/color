#ifndef color_hcg_make_pink
#define color_hcg_make_pink

// ::color::make::pink( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.752941, 0.796078 } ) - rgb(255,191,202) - #FFBFCA

     template< typename tag_name >
      inline
      void pink( ::color::model< ::color::category::hcg< tag_name > > & color_parameter )
       {
        typedef ::color::category::hcg< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hcg< double >      right_type;

        static left_type local( right_type( { 349.52380952381, 24.7058823529412, 100 } ) );

        color_parameter = local;
       }

    }
  }

#endif
