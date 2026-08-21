
/* cocos2d::FontAtlas::addLetterDefinition(char32_t, cocos2d::FontLetterDefinition const&) */

void __thiscall
cocos2d::FontAtlas::addLetterDefinition
          (FontAtlas *this,wchar32 param_1,FontLetterDefinition *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  wchar32 local_3c [3];
  wchar32 *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00efd530 with catch @ 00efd000 */
  local_30 = local_3c;
  local_3c[0] = param_1;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
          ::
          __emplace_unique_key_args<char32_t,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<char32_t_const&>,std::__ndk1::tuple<>>
                    ((wchar32 *)(this + 0x50),(piecewise_construct_t *)local_3c,
                     (tuple *)&DAT_0143a342,(tuple *)&local_30);
  uVar6 = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(lVar2 + 0x34) = *(undefined4 *)(param_2 + 0x20);
  *(undefined8 *)(lVar2 + 0x2c) = uVar4;
  *(undefined8 *)(lVar2 + 0x24) = uVar3;
  *(undefined8 *)(lVar2 + 0x1c) = uVar6;
  *(undefined8 *)(lVar2 + 0x14) = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

