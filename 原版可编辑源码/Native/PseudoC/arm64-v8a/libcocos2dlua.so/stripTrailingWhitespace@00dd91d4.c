
/* cocos2d::ui::RichText::stripTrailingWhitespace(cocos2d::Vector<cocos2d::Node*> const&) */

float __thiscall cocos2d::ui::RichText::stripTrailingWhitespace(RichText *this,Vector *param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  float *pfVar9;
  basic_string *pbVar10;
  size_t sVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  float fVar18;
  ulong local_98;
  size_t sStack_90;
  byte *local_88;
  ulong local_80;
  size_t sStack_78;
  byte *local_70;
  locale alStack_60 [8];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  fVar18 = 0.0;
  if (*(long *)param_1 == *(long *)(param_1 + 8)) goto LAB_00dd9488;
  lVar7 = *(long *)(*(long *)(param_1 + 8) + -8);
  if ((lVar7 != 0) &&
     (plVar8 = (long *)__dynamic_cast(lVar7,&Node::typeinfo,&Label::typeinfo,0),
     plVar8 != (long *)0x0)) {
    pfVar9 = (float *)(**(code **)(*plVar8 + 0x168))();
    fVar18 = *pfVar9;
    pbVar10 = (basic_string *)(**(code **)(*plVar8 + 0x590))(plVar8);
                    /* try { // try from 00dd9264 to 00ed926b has its CatchHandler @ 00dd9610 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_98,pbVar10);
    if ((local_98 & 1) == 0) {
      pbVar15 = (byte *)((ulong)&local_98 | 1);
      pbVar14 = pbVar15 + (local_98 >> 1 & 0x7f);
      pbVar12 = pbVar14;
      if (pbVar14 != pbVar15) {
LAB_00dd92ac:
        while( true ) {
          pbVar16 = pbVar14 + -1;
          bVar3 = *pbVar16;
                    /* try { // try from 00dd92b4 to 00ed92c3 has its CatchHandler @ 00dd95fc */
          std::__ndk1::locale::locale(alStack_60);
          lVar7 = std::__ndk1::locale::use_facet(alStack_60,(id *)&std::__ndk1::ctype<char>::id);
          pbVar12 = pbVar14;
          if ((char)bVar3 < '\0') break;
          uVar17 = *(ulong *)(*(long *)(lVar7 + 0x10) + (long)(char)bVar3 * 8);
          std::__ndk1::locale::~locale(alStack_60);
          if (((uVar17 & 1) == 0) || (pbVar14 = pbVar16, pbVar12 = pbVar15, pbVar15 == pbVar16))
          goto joined_r0x00dd9310;
        }
        std::__ndk1::locale::~locale(alStack_60);
      }
    }
    else {
                    /* try { // try from 00dd9290 to 00ed92a3 has its CatchHandler @ 00dd9644 */
      pbVar14 = local_88 + sStack_90;
      pbVar15 = local_88;
      pbVar12 = pbVar14;
      if (pbVar14 != local_88) goto LAB_00dd92ac;
    }
joined_r0x00dd9310:
    pbVar14 = local_88;
    uVar17 = sStack_90;
    if ((local_98 & 1) == 0) {
                    /* try { // try from 00dd92f4 to 00ed92fb has its CatchHandler @ 00dd9624 */
      pbVar14 = (byte *)((ulong)&local_98 | 1);
      uVar17 = (local_98 & 0xff) >> 1;
    }
    uVar13 = (long)pbVar12 - (long)pbVar14;
    pbVar15 = (byte *)(uVar17 - uVar13);
    if (uVar17 < uVar13) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00dd94d0 to 00ed94ef has its CatchHandler @ 00dd9608 */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
    pbVar14 = pbVar14 + (uVar17 - (long)pbVar12);
    if (pbVar14 != (byte *)0x0) {
      pbVar12 = (byte *)((ulong)&local_98 | 1);
      if ((local_98 & 1) != 0) {
        pbVar12 = local_88;
      }
      pbVar16 = pbVar15;
      if (pbVar14 <= pbVar15) {
        pbVar16 = pbVar14;
      }
      if ((long)pbVar15 - (long)pbVar16 != 0) {
        memmove(pbVar12 + uVar13,pbVar12 + uVar13 + (long)pbVar16,(long)pbVar15 - (long)pbVar16);
      }
      sVar11 = uVar17 - (long)pbVar16;
      sVar1 = sVar11;
      if ((local_98 & 1) == 0) {
        local_98 = CONCAT71(local_98._1_7_,(char)((int)sVar11 << 1));
        sVar1 = sStack_90;
      }
      sStack_90 = sVar1;
      pbVar12[sVar11] = 0;
    }
    local_70 = local_88;
    sStack_78 = sStack_90;
    local_80 = local_98;
    local_98 = 0;
    sStack_90 = 0;
    local_88 = (byte *)0x0;
    pbVar14 = (byte *)(**(code **)(*plVar8 + 0x590))(plVar8);
    uVar17 = local_80;
    bVar3 = *pbVar14;
    sVar11 = (size_t)(bVar3 >> 1);
    sVar1 = sVar11;
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(pbVar14 + 8);
    }
    sVar2 = local_80 >> 1 & 0x7f;
    if ((local_80 & 1) != 0) {
      sVar2 = sStack_78;
    }
    if (sVar1 == sVar2) {
      pbVar12 = *(byte **)(pbVar14 + 0x10);
                    /* try { // try from 00dd93e0 to 00ed93e7 has its CatchHandler @ 00dd9644 */
                    /* try { // try from 00dd93e8 to 00ed9407 has its CatchHandler @ 00dd9620 */
      if ((bVar3 & 1) == 0) {
        pbVar12 = pbVar14 + 1;
      }
      pbVar15 = (byte *)((ulong)&local_80 | 1);
      if ((local_80 & 1) != 0) {
        pbVar15 = local_70;
      }
      if ((bVar3 & 1) == 0) {
        while (sVar1 != 0) {
          pbVar14 = pbVar14 + 1;
          if (*pbVar14 != *pbVar15) goto LAB_00dd943c;
          pbVar15 = pbVar15 + 1;
          sVar11 = sVar11 - 1;
          sVar1 = sVar11;
        }
      }
      else if ((sVar1 != 0) && (iVar6 = memcmp(pbVar12,pbVar15,sVar1), iVar6 != 0))
      goto LAB_00dd943c;
      bVar5 = false;
    }
    else {
LAB_00dd943c:
                    /* try { // try from 00dd943c to 00ed9443 has its CatchHandler @ 00dd95b0 */
                    /* try { // try from 00dd9448 to 00ed9467 has its CatchHandler @ 00dd9604 */
      (**(code **)(*plVar8 + 0x588))(plVar8,&local_80);
      pfVar9 = (float *)(**(code **)(*plVar8 + 0x168))(plVar8);
                    /* try { // try from 00dd9468 to 00ed946b has its CatchHandler @ 00dd9608 */
      bVar5 = true;
      fVar18 = *pfVar9 - fVar18;
      uVar17 = local_80;
    }
    if ((uVar17 & 1) != 0) {
      operator_delete(local_70);
    }
    if (bVar5) goto LAB_00dd9488;
  }
  fVar18 = 0.0;
LAB_00dd9488:
                    /* try { // try from 00dd9488 to 00ed94a3 has its CatchHandler @ 00dd960c */
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00dd94ac to 00ed94b7 has its CatchHandler @ 00dd95b8 */
  return fVar18;
}

