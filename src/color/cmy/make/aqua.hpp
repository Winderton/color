#ifndef color_cmy_make_aqua
#define color_cmy_make_aqua

// ::color::make::aqua( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0, 1, 1 } ) 

      inline
      void aqua( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x7;
       }

      inline
      void aqua( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x1f;
       }

      inline
      void aqua( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff0000ffu;
       }

      inline
      void aqua( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff00000000fffful;
       }

      inline
      void aqua( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 1, 0, 0 } );
       }

      inline
      void aqua( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 1, 0, 0 } );
       }

      inline
      void aqua( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 1, 0, 0 } );
       }

    }
  }

#endif