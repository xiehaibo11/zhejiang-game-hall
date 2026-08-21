
/* cocos2d::renderer::Pass::copy(cocos2d::renderer::Pass const&) */

void __thiscall cocos2d::renderer::Pass::copy(Pass *this,Pass *param_1)

{
  ulong uVar1;
  Pass *pPVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (this != param_1) {
    uVar1 = *(ulong *)(param_1 + 0x18);
    pPVar2 = *(Pass **)(param_1 + 0x20);
    if (((byte)param_1[0x10] & 1) == 0) {
      pPVar2 = param_1 + 0x11;
      uVar1 = (ulong)((byte)param_1[0x10] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x10),(char *)pPVar2,uVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x28) = uVar3;
  if (this != param_1) {
    uVar1 = *(ulong *)(param_1 + 0xf8);
    pPVar2 = *(Pass **)(param_1 + 0x100);
    if (((byte)param_1[0xf0] & 1) == 0) {
      pPVar2 = param_1 + 0xf1;
      uVar1 = (ulong)((byte)param_1[0xf0] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0xf0),(char *)pPVar2,uVar1);
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
    ::
    __assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,void*>*,long>>
              ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                *)(this + 0x60),*(undefined8 *)(param_1 + 0x60),param_1 + 0x68);
    *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>>>
    ::
    __assign_multi<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,void*>*>>
              ((__hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::Technique::Parameter>>>
                *)(this + 0x38),*(undefined8 *)(param_1 + 0x48),0);
  }
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
  uVar7 = *(undefined8 *)(param_1 + 0x90);
  uVar4 = *(undefined8 *)(param_1 + 0xa8);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(this + 0x90) = uVar7;
  *(undefined8 *)(this + 0xa8) = uVar4;
  *(undefined8 *)(this + 0xa0) = uVar3;
  *(undefined8 *)(this + 0x88) = uVar6;
  *(undefined8 *)(this + 0x80) = uVar5;
  uVar3 = *(undefined8 *)(param_1 + 0xdc);
  uVar9 = *(undefined8 *)(param_1 + 200);
  uVar8 = *(undefined8 *)(param_1 + 0xc0);
  uVar5 = *(undefined8 *)(param_1 + 0xd8);
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  uVar7 = *(undefined8 *)(param_1 + 0xb8);
  uVar6 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(this + 0xe4) = *(undefined8 *)(param_1 + 0xe4);
  *(undefined8 *)(this + 0xdc) = uVar3;
  *(undefined8 *)(this + 200) = uVar9;
  *(undefined8 *)(this + 0xc0) = uVar8;
  *(undefined8 *)(this + 0xd8) = uVar5;
  *(undefined8 *)(this + 0xd0) = uVar4;
  *(undefined8 *)(this + 0xb8) = uVar7;
  *(undefined8 *)(this + 0xb0) = uVar6;
  return;
}

