
/* std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::pair<int, int>,
   v8::internal::FunctionLiteral*>, std::__ndk1::__map_value_compare<std::__ndk1::pair<int, int>,
   std::__ndk1::__value_type<std::__ndk1::pair<int, int>, v8::internal::FunctionLiteral*>,
   std::__ndk1::less<std::__ndk1::pair<int, int> >, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<int, int>,
   v8::internal::FunctionLiteral*> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::pair<int, int>,
   v8::internal::FunctionLiteral*>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<std::__ndk1::pair<int,int>,v8::internal::FunctionLiteral*>,std::__ndk1::__map_value_compare<std::__ndk1::pair<int,int>,std::__ndk1::__value_type<std::__ndk1::pair<int,int>,v8::internal::FunctionLiteral*>,std::__ndk1::less<std::__ndk1::pair<int,int>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<int,int>,v8::internal::FunctionLiteral*>>>
::destroy(__tree<std::__ndk1::__value_type<std::__ndk1::pair<int,int>,v8::internal::FunctionLiteral*>,std::__ndk1::__map_value_compare<std::__ndk1::pair<int,int>,std::__ndk1::__value_type<std::__ndk1::pair<int,int>,v8::internal::FunctionLiteral*>,std::__ndk1::less<std::__ndk1::pair<int,int>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<int,int>,v8::internal::FunctionLiteral*>>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    operator_delete(param_1);
    return;
  }
  return;
}

