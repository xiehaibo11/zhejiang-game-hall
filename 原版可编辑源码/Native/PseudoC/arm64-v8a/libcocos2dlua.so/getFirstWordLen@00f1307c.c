
/* cocos2d::Label::getFirstWordLen(std::__ndk1::basic_string<char32_t,
   std::__ndk1::char_traits<char32_t>, std::__ndk1::allocator<char32_t> > const&, int, int) const */

void __thiscall
cocos2d::Label::getFirstWordLen(Label *this,basic_string *param_1,int param_2,int param_3)

{
  wchar32 wVar1;
  basic_string *pbVar2;
  wchar32 wVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  FontLetterDefinition aFStack_a0 [8];
  float local_98;
  float local_90;
  int local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  lVar6 = Director::getInstance();
  uVar4 = param_3 - param_2;
  if (uVar4 == 0 || param_3 < param_2) {
    uVar8 = 0;
  }
  else {
    fVar11 = *(float *)(lVar6 + 0x1a0);
    uVar8 = 0;
    iVar9 = 0;
    do {
      pbVar2 = param_1 + 4;
      if (((byte)*param_1 & 1) != 0) {
        pbVar2 = *(basic_string **)(param_1 + 0x10);
      }
      wVar3 = *(wchar32 *)
               (pbVar2 + uVar8 * 4 +
                         (-(ulong)((uint)param_2 >> 0x1f) & 0xfffffffc00000000 |
                         (ulong)(uint)param_2 << 2));
      if ((wVar3 == L'\n') ||
         ((uVar7 = StringUtils::isUnicodeNonBreaking(wVar3), (uVar7 & 1) == 0 &&
          ((uVar7 = StringUtils::isUnicodeSpace(wVar3), (uVar7 & 1) != 0 ||
           (uVar7 = StringUtils::isCJKUnicode(wVar3), (uVar7 & 1) != 0)))))) goto LAB_00f131b0;
      wVar1 = L' ';
      if (wVar3 != L'\xa0') {
        wVar1 = wVar3;
      }
      uVar7 = FontAtlas::getLetterDefinitionForChar(*(FontAtlas **)(this + 0x3d0),wVar1,aFStack_a0);
      if ((uVar7 & 1) == 0) goto LAB_00f131b0;
      if (*(float *)(this + 0x43c) <= 0.0) {
        fVar10 = *(float *)(this + 0x680);
      }
      else {
        fVar10 = *(float *)(this + 0x680);
        if (*(float *)(this + 0x43c) <
            fVar10 * local_98 + (local_90 * fVar10 + (float)iVar9) / fVar11) goto LAB_00f131b0;
      }
      uVar8 = uVar8 + 1;
      iVar9 = (int)(fVar10 * (float)local_80 + *(float *)(this + 0x42c) + (float)iVar9);
    } while (uVar4 != (uint)uVar8);
    uVar8 = (ulong)uVar4;
  }
LAB_00f131b0:
  iVar9 = (int)uVar8;
  if (iVar9 == 0 && param_3 != 0) {
    iVar9 = 1;
  }
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar9);
}

