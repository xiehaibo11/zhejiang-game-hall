
/* cocos2d::CardinalSplineTo::update(float) */

void __thiscall cocos2d::CardinalSplineTo::update(CardinalSplineTo *this,float param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  fVar11 = 1.0;
                    /* catch() { ... } // from try @ 00ecd98c with catch @ 00ecd924 */
  if (param_1 == 1.0) {
    lVar6 = *(long *)(*(long *)(this + 0x58) + 0x30);
    uVar7 = *(long *)(*(long *)(this + 0x58) + 0x38) - lVar6 >> 3;
    uVar8 = uVar7 - 1;
    uVar9 = uVar8;
  }
  else {
    fVar11 = *(float *)(this + 0x60);
    lVar6 = *(long *)(*(long *)(this + 0x58) + 0x30);
    uVar9 = (ulong)(param_1 / fVar11);
    uVar7 = *(long *)(*(long *)(this + 0x58) + 0x38) - lVar6 >> 3;
    fVar11 = (param_1 - fVar11 * (float)(long)uVar9) / fVar11;
    uVar8 = uVar7 - 1;
  }
  uVar10 = uVar9;
  if ((long)uVar9 < 2) {
    uVar10 = 1;
  }
                    /* try { // try from 00ecd984 to 00fcd98b has its CatchHandler @ 00ecd99c */
                    /* try { // try from 00ecd98c to 00fcd9d7 has its CatchHandler @ 00ecd924 */
  uVar1 = uVar8;
  if ((long)uVar10 <= (long)uVar7) {
    uVar1 = uVar10 - 1;
  }
  if (uVar1 < uVar7) {
                    /* catch() { ... } // from try @ 00ecd984 with catch @ 00ecd99c */
    uVar10 = uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU);
    if ((long)uVar7 <= (long)uVar10) {
      uVar10 = uVar8;
    }
    if (uVar10 < uVar7) {
      uVar3 = uVar9;
      if ((long)uVar9 < 0) {
        uVar3 = 0xffffffffffffffff;
      }
      uVar2 = uVar8;
      if ((long)(uVar3 + 1) < (long)uVar7) {
        uVar2 = uVar3 + 1;
      }
      if (uVar2 < uVar7) {
        if ((long)uVar9 < -1) {
          uVar9 = 0xfffffffffffffffe;
        }
                    /* catch() { ... } // from try @ 00ecda40 with catch @ 00ecd9d8 */
        uVar3 = uVar9 + 2;
        if ((long)uVar7 <= (long)(uVar9 + 2)) {
          uVar3 = uVar8;
        }
        if (uVar3 < uVar7) {
          fVar18 = fVar11 * fVar11;
          fVar20 = fVar11 * fVar18;
          uVar13 = *(undefined8 *)(lVar6 + uVar1 * 8);
          uVar14 = *(undefined8 *)(lVar6 + uVar10 * 8);
          uVar15 = *(undefined8 *)(lVar6 + uVar2 * 8);
          fVar17 = (1.0 - *(float *)(this + 100)) * 0.5;
                    /* try { // try from 00ecda38 to 00fcda3f has its CatchHandler @ 00ecda50 */
          uVar16 = *(undefined8 *)(lVar6 + uVar3 * 8);
                    /* try { // try from 00ecda40 to 00fcda8b has its CatchHandler @ 00ecd9d8 */
          fVar19 = (((fVar18 + fVar18) - fVar20) - fVar11) * fVar17;
                    /* catch() { ... } // from try @ 00ecda38 with catch @ 00ecda50 */
          fVar12 = ((fVar20 + fVar20) - fVar18 * 3.0) + 1.0 + (fVar18 - fVar20) * fVar17;
          fVar11 = (fVar18 * 3.0 - (fVar20 + fVar20)) +
                   (fVar11 + (fVar20 - (fVar18 + fVar18))) * fVar17;
          fVar17 = (fVar20 - fVar18) * fVar17;
          fVar18 = (float)uVar16 * fVar17 +
                   (float)uVar15 * fVar11 + (float)uVar13 * fVar19 + (float)uVar14 * fVar12;
          fVar17 = (float)((ulong)uVar16 >> 0x20) * fVar17 +
                   (float)((ulong)uVar15 >> 0x20) * fVar11 +
                   (float)((ulong)uVar13 >> 0x20) * fVar19 + (float)((ulong)uVar14 >> 0x20) * fVar12
          ;
          local_40 = CONCAT44(fVar17,fVar18);
                    /* catch() { ... } // from try @ 00ecdaf4 with catch @ 00ecda8c */
          puVar5 = (undefined8 *)(**(code **)(**(long **)(this + 0x38) + 0xb0))();
          fVar11 = (float)*puVar5 - (float)*(undefined8 *)(this + 0x68);
          fVar12 = (float)((ulong)*puVar5 >> 0x20) -
                   (float)((ulong)*(undefined8 *)(this + 0x68) >> 0x20);
          if (((bool)(~(fVar11 == 0.0) & 1)) || ((bool)(~(fVar12 == 0.0) & 1))) {
            fVar11 = fVar11 + (float)*(undefined8 *)(this + 0x70);
            fVar12 = fVar12 + (float)((ulong)*(undefined8 *)(this + 0x70) >> 0x20);
            *(ulong *)(this + 0x70) = CONCAT44(fVar12,fVar11);
            local_40 = CONCAT44(fVar12 + fVar17,fVar11 + fVar18);
          }
          (**(code **)(*(long *)this + 0x50))(this,&local_40);
          if (*(long *)(lVar4 + 0x28) == local_38) {
                    /* try { // try from 00ecdaec to 00fcdaf3 has its CatchHandler @ 00ecdb04 */
                    /* try { // try from 00ecdaf4 to 00fcdb3f has its CatchHandler @ 00ecda8c */
            return;
          }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00ecdaec with catch @ 00ecdb04 */
          __stack_chk_fail();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
}

