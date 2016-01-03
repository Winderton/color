#ifndef color_generic_operation_compare_great_strict
#define color_generic_operation_compare_great_strict

// using namespace  ::color::compare::great_strict

#include "../../_internal/model.hpp"


 namespace color
  {
   namespace compare
    {

     template < typename category_left_name, typename category_right_name >
      bool great_strict( color::_internal::model< category_left_name > const& left, color::_internal::model< category_right_name > const& right )
       {
        return left.container() > color::_internal::model< category_left_name >( right ).container();
       }

     template < typename category_name >
      bool great_strict( color::_internal::model< category_name > const& left, color::_internal::model< category_name > const& right )
       {
        return left.container() > right.container();
       }

    }
 }

#endif