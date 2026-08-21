
/* std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, cocos2d::UniformValue>,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   cocos2d::UniformValue>, std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::UniformValue>, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, cocos2d::UniformValue> >
   >::__deallocate_node(std::__ndk1::__hash_node_base<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::UniformValue>, void*>*>*) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
::__deallocate_node(__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
                    *this,__hash_node_base *param_1)

{
  long *plVar1;
  code *pcVar2;
  __hash_node_base *p_Var3;
  long *plVar4;
  
  do {
    if (param_1 == (__hash_node_base *)0x0) {
      return;
    }
    p_Var3 = *(__hash_node_base **)param_1;
                    /* try { // try from 00fda7ec to 010da7f3 has its CatchHandler @ 00fda860 */
    if ((*(int *)(param_1 + 0x28) == 2) &&
       (plVar4 = *(long **)(param_1 + 0x30), plVar4 != (long *)0x0)) {
      plVar1 = (long *)plVar4[4];
                    /* try { // try from 00fda7f4 to 010da87b has its CatchHandler @ 00fda7b4 */
      if (plVar4 == plVar1) {
        pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00fda814:
        (*pcVar2)();
      }
      else if (plVar1 != (long *)0x0) {
        pcVar2 = *(code **)(*plVar1 + 0x28);
        goto LAB_00fda814;
      }
      operator_delete(plVar4);
    }
    if ((*(int *)(*(long *)(param_1 + 0x18) + 8) == 0x8b5e) &&
       (*(Ref **)(param_1 + 0x38) != (Ref *)0x0)) {
      cocos2d::Ref::release(*(Ref **)(param_1 + 0x38));
    }
    operator_delete(param_1);
    param_1 = p_Var3;
  } while( true );
}

