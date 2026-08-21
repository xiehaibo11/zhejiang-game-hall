
/* cocos2d::Value::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::unordered_map<int, cocos2d::Value,
   std::__ndk1::hash<int>, std::__ndk1::equal_to<int>, std::__ndk1::allocator<std::__ndk1::pair<int
   const, cocos2d::Value> > > const&) */

Value * __thiscall cocos2d::Value::operator=(Value *this,unordered_map *param_1)

{
  __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
  *p_Var1;
  
  if (*(int *)(this + 8) == 10) {
    p_Var1 = *(__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
               **)this;
  }
  else {
    clear(this);
    p_Var1 = operator_new(0x28,(nothrow_t *)&std::nothrow);
    if (p_Var1 != (__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
                   *)0x0) {
      *(undefined8 *)(p_Var1 + 8) = 0;
      *(undefined8 *)p_Var1 = 0;
      *(undefined8 *)(p_Var1 + 0x18) = 0;
      *(undefined8 *)(p_Var1 + 0x10) = 0;
      *(undefined4 *)(p_Var1 + 0x20) = 0x3f800000;
    }
    *(__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
      **)this = p_Var1;
    *(undefined4 *)(this + 8) = 10;
  }
  if (p_Var1 != (__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
                 *)param_1) {
    *(undefined4 *)(p_Var1 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
    ::
    __assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,cocos2d::Value>,void*>*>>
              (p_Var1,*(undefined8 *)(param_1 + 0x10),0);
  }
  return this;
}

