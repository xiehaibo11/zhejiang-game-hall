
/* cocos2d::Value::Value(std::__ndk1::unordered_map<int, cocos2d::Value, std::__ndk1::hash<int>,
   std::__ndk1::equal_to<int>, std::__ndk1::allocator<std::__ndk1::pair<int const, cocos2d::Value> >
   >&&) */

void __thiscall cocos2d::Value::Value(Value *this,unordered_map *param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)(this + 8) = 10;
  puVar1 = operator_new(0x28,(nothrow_t *)&std::nothrow);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *(undefined4 *)(puVar1 + 4) = 0x3f800000;
  }
  *(undefined8 **)this = puVar1;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
  ::__move_assign(puVar1,param_1);
  return;
}

