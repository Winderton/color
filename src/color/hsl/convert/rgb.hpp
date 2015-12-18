#ifndef color_hsl_convert_rgb
#define color_hsl_convert_rgb

#include "../../_internal/convert.hpp"
#include "../../rgb/rgb.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"

namespace color
 {
  namespace _internal
   {
    namespace  _privateHSL
     {

      template< typename category_left_name, typename category_right_name >
       struct convert_rgb2hsl
        {
         public:
           typedef category_left_name category_left_type;
           typedef category_right_name category_right_type;

           typedef ::color::_internal::container<category_left_type>     container_left_trait_type;
           typedef ::color::_internal::container<category_right_type>    container_right_trait_type;

           typedef typename container_left_trait_type::input_type         container_left_input_type;
           typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

           static void process
            (
              container_left_input_type         left
             ,container_right_const_input_type  right
            )
            {
             // TODO
            }
        };

     }

     template< > struct convert<::color::category::hsl_uint8,::color::category::rgb_uint8  > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint8,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::hsl_uint8,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint8,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::hsl_uint8,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint8,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::hsl_uint8,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint8,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::hsl_uint8,::color::category::rgb_float  > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint8,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::hsl_uint8,::color::category::rgb_double > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint8,::color::category::rgb_double >{};
     template< > struct convert<::color::category::hsl_uint8,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint8,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::hsl_uint16,::color::category::rgb_uint8  > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint16,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::hsl_uint16,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint16,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::hsl_uint16,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint16,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::hsl_uint16,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint16,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::hsl_uint16,::color::category::rgb_float  > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint16,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::hsl_uint16,::color::category::rgb_double > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint16,::color::category::rgb_double >{};
     template< > struct convert<::color::category::hsl_uint16,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint16,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::hsl_uint32,::color::category::rgb_uint8  > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint32,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::hsl_uint32,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint32,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::hsl_uint32,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint32,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::hsl_uint32,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint32,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::hsl_uint32,::color::category::rgb_float  > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint32,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::hsl_uint32,::color::category::rgb_double > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint32,::color::category::rgb_double >{};
     template< > struct convert<::color::category::hsl_uint32,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint32,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::hsl_uint64,::color::category::rgb_uint8  > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint64,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::hsl_uint64,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint64,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::hsl_uint64,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint64,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::hsl_uint64,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint64,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::hsl_uint64,::color::category::rgb_float  > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint64,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::hsl_uint64,::color::category::rgb_double > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint64,::color::category::rgb_double >{};
     template< > struct convert<::color::category::hsl_uint64,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_uint64,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::hsl_float,::color::category::rgb_uint8  > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_float,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::hsl_float,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_float,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::hsl_float,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_float,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::hsl_float,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_float,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::hsl_float,::color::category::rgb_float  > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_float,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::hsl_float,::color::category::rgb_double > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_float,::color::category::rgb_double >{};
     template< > struct convert<::color::category::hsl_float,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_float,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::hsl_double,::color::category::rgb_uint8  > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_double,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::hsl_double,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_double,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::hsl_double,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_double,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::hsl_double,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_double,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::hsl_double,::color::category::rgb_float  > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_double,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::hsl_double,::color::category::rgb_double > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_double,::color::category::rgb_double >{};
     template< > struct convert<::color::category::hsl_double,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_double,::color::category::rgb_ldouble>{};

     template< > struct convert<::color::category::hsl_ldouble,::color::category::rgb_uint8  > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_ldouble,::color::category::rgb_uint8  >{};
     template< > struct convert<::color::category::hsl_ldouble,::color::category::rgb_uint16 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_ldouble,::color::category::rgb_uint16 >{};
     template< > struct convert<::color::category::hsl_ldouble,::color::category::rgb_uint32 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_ldouble,::color::category::rgb_uint32 >{};
     template< > struct convert<::color::category::hsl_ldouble,::color::category::rgb_uint64 > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_ldouble,::color::category::rgb_uint64 >{};
     template< > struct convert<::color::category::hsl_ldouble,::color::category::rgb_float  > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_ldouble,::color::category::rgb_float  >{};
     template< > struct convert<::color::category::hsl_ldouble,::color::category::rgb_double > : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_ldouble,::color::category::rgb_double >{};
     template< > struct convert<::color::category::hsl_ldouble,::color::category::rgb_ldouble> : public ::color::_internal::_privateHSL::convert_rgb2hsl<::color::category::hsl_ldouble,::color::category::rgb_ldouble>{};


   }
 }

#endif