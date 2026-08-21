
/* cocos2d::ui::RichText::doHorizontalAlignment(cocos2d::Vector<cocos2d::Node*> const&, float) */

void __thiscall
cocos2d::ui::RichText::doHorizontalAlignment(RichText *this,Vector *param_1,float param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  RichText *this_00;
  float *pfVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                      *)(this + 0x548),(basic_string *)KEY_HORIZONTAL_ALIGNMENT);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_007d44e0("unordered_map::at: key not found");
  }
  this_00 = (RichText *)cocos2d::Value::asInt((Value *)(lVar4 + 0x28));
  iVar3 = (int)this_00;
  if (iVar3 != 0) {
    fVar9 = (float)stripTrailingWhitespace(this_00,param_1);
    pfVar5 = (float *)(**(code **)(*(long *)this + 0x168))(this);
    fVar9 = *pfVar5 - (fVar9 + param_2);
    if (iVar3 != 2) {
      if (iVar3 == 1) {
        fVar9 = fVar9 * 0.5;
      }
      else {
        fVar9 = 0.0;
      }
    }
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (puVar8 = *(undefined8 **)param_1; puVar8 != puVar1; puVar8 = puVar8 + 1) {
      plVar7 = (long *)*puVar8;
      puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0xb0))(plVar7);
      local_50 = CONCAT44((float)((ulong)*puVar6 >> 0x20) + 0.0,fVar9 + (float)*puVar6);
      (**(code **)(*plVar7 + 0x98))(plVar7,&local_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* try { // try from 00dd91c0 to 00ed9263 has its CatchHandler @ 00dd91c0
                       catch() { ... } // from try @ 00dd91c0 with catch @ 00dd91c0
                       catch() { ... } // from try @ 00dd954c with catch @ 00dd91c0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

