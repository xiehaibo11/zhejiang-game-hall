
/* cocos2d::BezierBy::update(float) */

void __thiscall cocos2d::BezierBy::update(BezierBy *this,float param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(this + 0x38);
  if (plVar3 != (long *)0x0) {
    uVar10 = *(undefined8 *)(this + 0x58);
    uVar11 = *(undefined8 *)(this + 0x60);
    uVar12 = *(undefined8 *)(this + 0x68);
    fVar9 = 1.0 - param_1;
    fVar4 = powf(fVar9,3.0);
                    /* catch() { ... } // from try @ 00ee1450 with catch @ 00ee14dc */
    fVar5 = param_1 * 3.0 * fVar9 * fVar9;
    fVar9 = fVar9 * param_1 * param_1 * 3.0;
    fVar6 = powf(param_1,3.0);
                    /* catch() { ... } // from try @ 00ee1420 with catch @ 00ee1514 */
                    /* catch() { ... } // from try @ 00ee1414 with catch @ 00ee1534 */
    puVar2 = (undefined8 *)(**(code **)(*plVar3 + 0xb0))(plVar3);
                    /* try { // try from 00ee1550 to 00fe1583 has its CatchHandler @ 00ee1550
                       catch() { ... } // from try @ 00ee1550 with catch @ 00ee1550
                       catch() { ... } // from try @ 00ee15bc with catch @ 00ee1550 */
    fVar7 = ((float)*puVar2 - (float)*(undefined8 *)(this + 0x78)) +
            (float)*(undefined8 *)(this + 0x70);
    fVar8 = ((float)((ulong)*puVar2 >> 0x20) - (float)((ulong)*(undefined8 *)(this + 0x78) >> 0x20))
            + (float)((ulong)*(undefined8 *)(this + 0x70) >> 0x20);
    *(ulong *)(this + 0x70) = CONCAT44(fVar8,fVar7);
    local_70 = CONCAT44((float)((ulong)uVar10 >> 0x20) * fVar6 +
                        (float)((ulong)uVar12 >> 0x20) * fVar9 +
                        fVar4 * 0.0 + (float)((ulong)uVar11 >> 0x20) * fVar5 + fVar8,
                        (float)uVar10 * fVar6 +
                        (float)uVar12 * fVar9 + fVar4 * 0.0 + (float)uVar11 * fVar5 + fVar7);
    (**(code **)(**(long **)(this + 0x38) + 0x98))(*(long **)(this + 0x38),&local_70);
    *(undefined8 *)(this + 0x78) = local_70;
  }
                    /* try { // try from 00ee1584 to 00fe1597 has its CatchHandler @ 00ee164c */
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

