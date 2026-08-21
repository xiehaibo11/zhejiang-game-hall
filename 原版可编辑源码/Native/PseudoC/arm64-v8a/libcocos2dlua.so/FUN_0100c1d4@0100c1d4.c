
void FUN_0100c1d4(undefined1 param_1 [16],float param_2,float param_3,float param_4,float param_5,
                 uint param_6,long param_7,DrawNode *param_8)

{
  long lVar1;
  Vec2 *__s;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  Vec2 *pVVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fStack0000000000000000;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  Color4F aCStack_88 [16];
  Color4F aCStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 0100c1f8 to 0110c273 has its CatchHandler @ 0100c1f8
                       catch() { ... } // from try @ 0100c1f8 with catch @ 0100c1f8
                       catch() { ... } // from try @ 0100c280 with catch @ 0100c1f8 */
  local_68 = *(long *)(lVar1 + 0x28);
  cocos2d::Color4F::Color4F
            (aCStack_78,fStack0000000000000000,fStack0000000000000004,fStack0000000000000008,
             fStack000000000000000c);
  cocos2d::Color4F::Color4F(aCStack_88,param_2,param_3,param_4,param_5);
  uVar2 = -(ulong)(param_6 >> 0x1f) & 0xfffffff800000000 | (ulong)param_6 << 3;
  if ((ulong)(long)(int)param_6 >> 0x3d != 0) {
    uVar2 = 0xffffffffffffffff;
  }
  __s = operator_new__(uVar2,(nothrow_t *)&std::nothrow);
  if (__s == (Vec2 *)0x0) {
    pVVar8 = (Vec2 *)0x0;
    if (0 < (int)param_6) goto LAB_0100c298;
LAB_0100c320:
                    /* catch() { ... } // from try @ 0100c274 with catch @ 0100c338 */
    cocos2d::DrawNode::drawPolygon(param_8,pVVar8,param_6,aCStack_78,1.0,aCStack_88);
    if (pVVar8 == (Vec2 *)0x0) goto LAB_0100c348;
  }
  else {
    pVVar8 = __s;
                    /* try { // try from 0100c274 to 0110c27f has its CatchHandler @ 0100c338 */
                    /* try { // try from 0100c280 to 0110c353 has its CatchHandler @ 0100c1f8 */
    if ((param_6 == 0) || (memset(__s,0,(long)(int)param_6 << 3), (int)param_6 < 1))
    goto LAB_0100c320;
LAB_0100c298:
    uVar2 = (ulong)param_6;
    if (param_6 < 8) {
      uVar4 = 0;
LAB_0100c2dc:
      lVar3 = uVar2 - uVar4;
      puVar5 = (undefined8 *)(pVVar8 + uVar4 * 8);
      puVar6 = (undefined8 *)(param_7 + uVar4 * 8);
      do {
        lVar3 = lVar3 + -1;
        *puVar5 = *puVar6;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (lVar3 != 0);
    }
    else {
      uVar4 = uVar2 & 0xfffffff8;
      puVar5 = (undefined8 *)(param_7 + 0x20);
      puVar6 = (undefined8 *)(pVVar8 + 0x20);
      uVar7 = uVar4;
      do {
        uVar9 = puVar5[-4];
        uVar11 = puVar5[-1];
        uVar10 = puVar5[-2];
        uVar13 = puVar5[1];
        uVar12 = *puVar5;
        uVar15 = puVar5[3];
        uVar14 = puVar5[2];
        uVar7 = uVar7 - 8;
        puVar6[-3] = puVar5[-3];
        puVar6[-4] = uVar9;
        puVar6[-1] = uVar11;
        puVar6[-2] = uVar10;
        puVar6[1] = uVar13;
        *puVar6 = uVar12;
        puVar6[3] = uVar15;
        puVar6[2] = uVar14;
        puVar5 = puVar5 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar7 != 0);
      if (uVar4 != uVar2) goto LAB_0100c2dc;
    }
    cocos2d::DrawNode::drawPolygon(param_8,pVVar8,param_6,aCStack_78,1.0,aCStack_88);
  }
  operator_delete__(__s);
LAB_0100c348:
                    /* try { // try from 0100c354 to 0110c3c3 has its CatchHandler @ 0100c354
                       catch() { ... } // from try @ 0100c354 with catch @ 0100c354
                       catch() { ... } // from try @ 0100c3d0 with catch @ 0100c354 */
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

