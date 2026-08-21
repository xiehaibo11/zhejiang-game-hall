
void FUN_00fd7bc4(__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
                  *param_1)

{
  void *pvVar1;
  
                    /* try { // try from 00fd7bd4 to 010d7bdb has its CatchHandler @ 00fd7c7c */
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::UniformValue>>>
  ::__deallocate_node(param_1,*(__hash_node_base **)(param_1 + 0x10));
  pvVar1 = *(void **)param_1;
  *(undefined8 *)param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
                    /* try { // try from 00fd7bfc to 010d7bff has its CatchHandler @ 00fd7c6c */
  return;
}

