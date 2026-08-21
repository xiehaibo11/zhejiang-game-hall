
/* std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   cocos2d::Value>, void*>*> std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int,
   cocos2d::Value>, std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   cocos2d::Value>, std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, cocos2d::Value>, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, cocos2d::Value> >
   >::__emplace_multi<std::__ndk1::pair<int const, cocos2d::Value> const&>(std::__ndk1::pair<int
   const, cocos2d::Value> const&) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
::__emplace_multi<std::__ndk1::pair<int_const,cocos2d::Value>const&>
          (__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::Value>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::Value>>>
           *this,pair *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = operator_new(0x28);
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(puVar2 + 4) = 0;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  cocos2d::Value::operator=((Value *)(puVar2 + 3),(Value *)(param_1 + 8));
  *puVar2 = 0;
  puVar2[1] = (long)*(int *)(puVar2 + 2);
  FUN_00887540(this,puVar2);
  return;
}

