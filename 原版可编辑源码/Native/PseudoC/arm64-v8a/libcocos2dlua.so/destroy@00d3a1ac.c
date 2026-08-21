
/* std::__ndk1::__tree<std::__ndk1::__value_type<tinyobj::vertex_index, unsigned int>,
   std::__ndk1::__map_value_compare<tinyobj::vertex_index,
   std::__ndk1::__value_type<tinyobj::vertex_index, unsigned int>,
   std::__ndk1::less<tinyobj::vertex_index>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index, unsigned int> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<tinyobj::vertex_index, unsigned
   int>, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
::destroy(__tree<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::__map_value_compare<tinyobj::vertex_index,std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>,std::__ndk1::less<tinyobj::vertex_index>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<tinyobj::vertex_index,unsigned_int>>>
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

