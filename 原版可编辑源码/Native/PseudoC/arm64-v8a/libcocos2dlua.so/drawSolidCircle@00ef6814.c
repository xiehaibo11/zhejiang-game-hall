
/* cocos2d::DrawNode::drawSolidCircle(cocos2d::Vec2 const&, float, float, unsigned int, float,
   float, cocos2d::Color4F const&) */

void __thiscall
cocos2d::DrawNode::drawSolidCircle
          (DrawNode *this,Vec2 *param_1,float param_2,float param_3,uint param_4,float param_5,
          float param_6,Color4F *param_7)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *__s;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  int iVar10;
  int iVar12;
  int iVar13;
  undefined1 auVar11 [16];
  int iVar14;
  float fVar15;
  float fVar16;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  Color4F aCStack_80 [16];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar8 = (ulong)param_4;
  __s = operator_new__(uVar8 << 3,(nothrow_t *)&std::nothrow);
  if (__s == (float *)0x0) goto LAB_00ef6ae8;
  if (param_4 != 0) {
    fVar9 = 6.2831855 / (float)param_4;
    memset(__s,0,uVar8 << 3);
    fVar15 = *(float *)param_1;
    fVar16 = *(float *)(param_1 + 4);
    if (param_4 < 4) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar8 & 0xfffffffc;
      iVar10 = 0;
      iVar12 = 1;
      iVar13 = 2;
      iVar14 = 3;
      uVar6 = uVar7;
      pfVar5 = __s;
      do {
        auVar11._4_4_ = iVar12;
        auVar11._0_4_ = iVar10;
        auVar11._8_4_ = iVar13;
        auVar11._12_4_ = iVar14;
        auVar11 = NEON_ucvtf(auVar11,4);
        sincosf(fVar9 * auVar11._0_4_ + param_3,&local_9c,&local_a0);
        fVar2 = local_a0;
        sincosf(fVar9 * auVar11._4_4_ + param_3,&local_94,&local_98);
        fVar3 = local_98;
        sincosf(fVar9 * auVar11._8_4_ + param_3,&local_8c,&local_90);
        fVar4 = local_90;
        sincosf(fVar9 * auVar11._12_4_ + param_3,&local_84,&local_88);
        uVar6 = uVar6 - 4;
        *pfVar5 = fVar2 * param_2 * param_5 + fVar15;
        pfVar5[1] = local_9c * param_2 * param_6 + fVar16;
        pfVar5[2] = fVar3 * param_2 * param_5 + fVar15;
        pfVar5[3] = local_94 * param_2 * param_6 + fVar16;
        pfVar5[4] = fVar4 * param_2 * param_5 + fVar15;
        pfVar5[5] = local_8c * param_2 * param_6 + fVar16;
        pfVar5[6] = local_88 * param_2 * param_5 + fVar15;
        pfVar5[7] = local_84 * param_2 * param_6 + fVar16;
        pfVar5 = pfVar5 + 8;
        iVar10 = iVar10 + 4;
        iVar12 = iVar12 + 4;
        iVar13 = iVar13 + 4;
        iVar14 = iVar14 + 4;
      } while (uVar6 != 0);
      if (uVar7 == uVar8) goto LAB_00ef6aac;
    }
    pfVar5 = __s + uVar7 * 2 + 1;
    do {
      sincosf(fVar9 * (float)(uVar7 & 0xffffffff) + param_3,&fStack_a4,&local_a8);
                    /* try { // try from 00ef6a80 to 00ff6adf has its CatchHandler @ 00ef6a80
                       catch() { ... } // from try @ 00ef6a80 with catch @ 00ef6a80
                       catch() { ... } // from try @ 00ef6bb4 with catch @ 00ef6a80 */
      uVar7 = uVar7 + 1;
      pfVar5[-1] = local_a8 * param_2 * param_5 + fVar15;
      *pfVar5 = fStack_a4 * param_2 * param_6 + fVar16;
      pfVar5 = pfVar5 + 2;
    } while (uVar8 != uVar7);
  }
LAB_00ef6aac:
  Color4F::Color4F(aCStack_80,0.0,0.0,0.0,0.0);
  drawPolygon(this,(Vec2 *)__s,param_4,param_7,0.0,aCStack_80);
                    /* try { // try from 00ef6ae0 to 00ff6ae7 has its CatchHandler @ 00ef6d6c */
  operator_delete__(__s);
LAB_00ef6ae8:
                    /* try { // try from 00ef6aec to 00ff6aff has its CatchHandler @ 00ef6d5c */
  if (*(long *)(lVar1 + 0x28) == local_70) {
                    /* try { // try from 00ef6b0c to 00ff6b13 has its CatchHandler @ 00ef6d4c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

