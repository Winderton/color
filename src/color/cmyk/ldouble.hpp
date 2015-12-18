#ifndef color_cmyk_ldouble
#define color_cmyk_ldouble

#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/array.hpp"
#include "../_internal/utility/container/array.hpp"

namespace color
 {
  namespace _internal
   {

    template< >
     struct bound< ::color::category::cmyk_ldouble >
      : public ::color::_internal::utility::bound::general< long double, unsigned >
      {
      };

    template< >
     struct index< ::color::category::cmyk_ldouble >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::cmyk_ldouble >
      : public ::color::_internal::utility::component::array< long double, unsigned>
      {
      };

    template< >
     struct container< ::color::category::cmyk_ldouble >
      : public  ::color::_internal::utility::container::array< long double, 4 >
      {
      };

   }
 }

#endif