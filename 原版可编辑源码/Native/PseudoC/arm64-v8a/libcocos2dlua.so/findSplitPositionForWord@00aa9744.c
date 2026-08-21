
/* fairygui::FUIRichText::findSplitPositionForWord(cocos2d::Label*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

uint __thiscall
fairygui::FUIRichText::findSplitPositionForWord
          (FUIRichText *this,Label *param_1,basic_string *param_2)

{
  basic_string *pbVar1;
  basic_string bVar2;
  long lVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  locale local_a0 [16];
  void *local_90;
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  fVar13 = *(float *)(this + 0x34c);
  pfVar4 = (float *)(**(code **)(*(long *)param_1 + 0x168))(param_1);
  bVar2 = *param_2;
  fVar12 = *(float *)(this + 0x350);
  uVar8 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar8 = *(ulong *)(param_2 + 8);
  }
  fVar13 = fVar13 + *pfVar4;
  if (uVar8 != 0) {
    lVar11 = 0;
    do {
      pbVar1 = param_2 + 1;
      if (((byte)bVar2 & 1) != 0) {
        pbVar1 = *(basic_string **)(param_2 + 0x10);
      }
      bVar2 = pbVar1[lVar11];
      std::__ndk1::locale::locale(local_a0);
      lVar5 = std::__ndk1::locale::use_facet(local_a0,(id *)&std::__ndk1::ctype<char>::id);
      if ((char)bVar2 < '\0') {
        std::__ndk1::locale::~locale(local_a0);
LAB_00aa9858:
        uVar9 = (uint)((byte)*param_2 >> 1);
        if (((byte)*param_2 & 1) != 0) {
          uVar9 = *(uint *)(param_2 + 8);
        }
        uVar10 = uVar9 - 1;
        if (-1 < (int)(uVar9 - 1)) goto LAB_00aa9894;
        goto LAB_00aa99ac;
      }
      uVar7 = *(ulong *)(*(long *)(lVar5 + 0x10) + (long)(char)bVar2 * 8);
      std::__ndk1::locale::~locale(local_a0);
      if ((uVar7 & 0x60) == 0) goto LAB_00aa9858;
      if (uVar8 - 1 == lVar11) break;
      bVar2 = *param_2;
      lVar11 = lVar11 + 1;
    } while( true );
  }
  if (fVar12 != fVar13) {
    uVar10 = 0;
    goto LAB_00aa996c;
  }
  goto LAB_00aa9830;
  while( true ) {
    FUN_00aa99fc(local_a0,param_2,0,lVar11 >> 0x20);
    (**(code **)(*(long *)param_1 + 0x588))(param_1,local_a0);
    pfVar4 = (float *)(**(code **)(*(long *)param_1 + 0x168))(param_1);
    fVar14 = *pfVar4;
    if (((byte)local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    uVar10 = uVar9;
    if (fVar14 <= fVar13) goto LAB_00aa996c;
    if ((int)uVar9 < 0) break;
LAB_00aa9894:
    lVar11 = (long)(int)uVar10 << 0x20;
    lVar5 = (long)(int)uVar10;
    uVar9 = uVar10;
    do {
      uVar9 = uVar9 - 1;
      lVar11 = lVar11 + -0x100000000;
      if (lVar5 < 1) goto LAB_00aa9964;
      pbVar1 = param_2 + 1;
      if (((byte)*param_2 & 1) != 0) {
        pbVar1 = *(basic_string **)(param_2 + 0x10);
      }
      bVar2 = pbVar1[lVar5 + -1];
      std::__ndk1::locale::locale(local_a0);
      lVar6 = std::__ndk1::locale::use_facet(local_a0,(id *)&std::__ndk1::ctype<char>::id);
      if ((char)bVar2 < '\0') {
        std::__ndk1::locale::~locale(local_a0);
        break;
      }
      uVar8 = *(ulong *)(*(long *)(lVar6 + 0x10) + (long)(char)bVar2 * 8);
      std::__ndk1::locale::~locale(local_a0);
      lVar5 = lVar5 + -1;
    } while ((uVar8 & 0x60) != 0);
    if ((int)uVar9 < 0) {
LAB_00aa9964:
      if (fVar12 != fVar13) {
        uVar10 = 0;
      }
      goto LAB_00aa996c;
    }
  }
LAB_00aa99ac:
  (**(code **)(*(long *)param_1 + 0x588))(param_1,param_2);
                    /* try { // try from 00aa99c0 to 00ba99f3 has its CatchHandler @ 00aa9a44 */
LAB_00aa9830:
  uVar10 = (uint)((byte)*param_2 >> 1);
  if (((byte)*param_2 & 1) != 0) {
    uVar10 = *(uint *)(param_2 + 8);
  }
LAB_00aa996c:
                    /* try { // try from 00aa9974 to 00ba99a7 has its CatchHandler @ 00aa9a74 */
  if (*(long *)(lVar3 + 0x28) == local_88) {
                    /* try { // try from 00aa99a8 to 00ba99bb has its CatchHandler @ 00aa9a40 */
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

