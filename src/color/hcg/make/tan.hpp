#ifndef color_hcg_make_tan
#define color_hcg_make_tan

// ::color::make::tan( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 0.823529, 0.705882, 0.54902 } ) - rgb(209,180,140) - #D1B48C

     template< typename tag_name >
      inline
      void tan( ::color::model< ::color::category::hcg< tag_name > > & color_parameter )
       {
        typedef ::color::category::hcg< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::hcg< double >      right_type;

        static left_type local( right_type( { 34.2857142857143, 27.4509803921569, 75.6756756756757 } ) );

        color_parameter = local;
       }

    }
  }

#endif
