#ifndef color_cmyk_make_wheat
#define color_cmyk_make_wheat

// ::color::make::wheat( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 0.960784, 0.870588, 0.701961 } ) 

      inline
      void wheat( ::color::_internal::model< color::category::cmyk_uint8 > & color_parameter )
       {
        color_parameter.container() = 0x9441700;
       }

      inline
      void wheat( ::color::_internal::model< color::category::cmyk_uint16 > & color_parameter )
       {
        color_parameter.container() = 0x410;
       }

      inline
      void wheat( ::color::_internal::model< color::category::cmyk_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff441700u;
       }

      inline
      void wheat( ::color::_internal::model< color::category::cmyk_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xffff44f618080000ul;
       }

      inline
      void wheat( ::color::_internal::model< color::category::cmyk_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,4>( { 0, 0.0938776, 0.269388, 0.0392157 } );
       }

      inline
      void wheat( ::color::_internal::model< color::category::cmyk_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,4>( { 0, 0.0938776, 0.269388, 0.0392157 } );
       }

      inline
      void wheat( ::color::_internal::model< color::category::cmyk_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,4>( { 0, 0.0938776, 0.269388, 0.0392157 } );
       }

    }
  }

#endif