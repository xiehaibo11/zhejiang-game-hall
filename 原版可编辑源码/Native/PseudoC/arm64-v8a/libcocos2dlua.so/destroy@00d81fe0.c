
/* std::__ndk1::__tree<std::__ndk1::__value_type<unsigned long,
   std::__ndk1::vector<dragonBones::BaseObject*, std::__ndk1::allocator<dragonBones::BaseObject*> >
   >, std::__ndk1::__map_value_compare<unsigned long, std::__ndk1::__value_type<unsigned long,
   std::__ndk1::vector<dragonBones::BaseObject*, std::__ndk1::allocator<dragonBones::BaseObject*> >
   >, std::__ndk1::less<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__value_type<unsigned long,
   std::__ndk1::vector<dragonBones::BaseObject*, std::__ndk1::allocator<dragonBones::BaseObject*> >
   > > >::destroy(std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned long,
   std::__ndk1::vector<dragonBones::BaseObject*, std::__ndk1::allocator<dragonBones::BaseObject*> >
   >, void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<dragonBones::BaseObject*,std::__ndk1::allocator<dragonBones::BaseObject*>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<dragonBones::BaseObject*,std::__ndk1::allocator<dragonBones::BaseObject*>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<dragonBones::BaseObject*,std::__ndk1::allocator<dragonBones::BaseObject*>>>>>
::destroy(__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<dragonBones::BaseObject*,std::__ndk1::allocator<dragonBones::BaseObject*>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<dragonBones::BaseObject*,std::__ndk1::allocator<dragonBones::BaseObject*>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::vector<dragonBones::BaseObject*,std::__ndk1::allocator<dragonBones::BaseObject*>>>>>
          *this,__tree_node *param_1)

{
  void *pvVar1;
  
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
                    /* try { // try from 00d82000 to 00e8201b has its CatchHandler @ 00d82984 */
    destroy(this,*(__tree_node **)(param_1 + 8));
    pvVar1 = *(void **)(param_1 + 0x28);
    if (pvVar1 != (void *)0x0) {
      *(void **)(param_1 + 0x30) = pvVar1;
      operator_delete(pvVar1);
    }
                    /* try { // try from 00d82020 to 00e8202f has its CatchHandler @ 00d8298c */
    operator_delete(param_1);
    return;
  }
  return;
}

