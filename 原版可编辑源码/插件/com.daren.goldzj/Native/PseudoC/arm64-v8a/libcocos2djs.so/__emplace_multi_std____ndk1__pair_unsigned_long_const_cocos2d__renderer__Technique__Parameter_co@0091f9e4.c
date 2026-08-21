
/* std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long, cocos2d::renderer::Technique::Parameter>, void*>*>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::Technique::Parameter>, std::__ndk1::__unordered_map_hasher<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::Technique::Parameter>,
   std::__ndk1::hash<unsigned long>, true>, std::__ndk1::__unordered_map_equal<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, cocos2d::renderer::Technique::Parameter>,
   std::__ndk1::equal_to<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long,
   cocos2d::renderer::Technique::Parameter> > >::__emplace_multi<std::__ndk1::pair<unsigned long
   const, cocos2d::renderer::Technique::Parameter> const&>(std::__ndk1::pair<unsigned long const,
   cocos2d::renderer::Technique::Parameter> const&) */

void __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>>>
::
__emplace_multi<std::__ndk1::pair<unsigned_long_const,cocos2d::renderer::Technique::Parameter>const&>
          (__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>>>
           *this,pair *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x60);
  puVar1[2] = *(undefined8 *)param_1;
  cocos2d::renderer::Technique::Parameter::Parameter
            ((Parameter *)(puVar1 + 3),(Parameter *)(param_1 + 8));
  *puVar1 = 0;
  puVar1[1] = puVar1[2];
  FUN_0091f780(this,puVar1);
  return;
}

