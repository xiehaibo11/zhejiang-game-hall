
/* cocos2d::Label::isHorizontalClamp() */

undefined4 __thiscall cocos2d::Label::isHorizontalClamp(Label *this)

{
  piecewise_construct_t *ppVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  piecewise_construct_t *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(int *)(this + 0x420) < 1) {
    uVar5 = 0;
  }
  else {
    lVar4 = *(long *)(this + 0x3f0);
    lVar6 = 0;
    lVar7 = 0;
    uVar5 = 0;
    do {
      ppVar1 = (piecewise_construct_t *)(lVar4 + lVar6);
      if (ppVar1[4] != (piecewise_construct_t)0x0) {
        local_60 = ppVar1;
        lVar3 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
                ::
                __emplace_unique_key_args<char32_t,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<char32_t_const&>,std::__ndk1::tuple<>>
                          ((wchar32 *)(*(long *)(this + 0x3d0) + 0x50),ppVar1,(tuple *)&DAT_0143ae14
                           ,(tuple *)&local_60);
        lVar4 = *(long *)(this + 0x3f0);
        if (0.0 < *(float *)(this + 0x448)) {
          fVar8 = *(float *)(lVar4 + lVar6 + 8) +
                  *(float *)(lVar3 + 0x1c) * 0.5 * *(float *)(this + 0x680);
          if (this[0x678] == (Label)0x0) {
            if (*(float *)(this + 0x80) < fVar8) goto LAB_00f13edc;
          }
          else if (*(float *)(this + 0x80) <
                   *(float *)(*(long *)(this + 0x460) + (long)*(int *)(lVar4 + lVar6 + 0x14) * 4) &&
                   *(float *)(this + 0x80) < fVar8) {
LAB_00f13edc:
            uVar5 = 1;
            break;
          }
        }
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (lVar7 < *(int *)(this + 0x420));
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

