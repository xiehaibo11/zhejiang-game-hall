
/* cocos2d::PageTurn3D::update(float) */

void __thiscall cocos2d::PageTurn3D::update(PageTurn3D *this,float param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_88;
  float local_84;
  float local_80;
  long local_78;
  
                    /* try { // try from 00ee7d14 to 00fe7d27 has its CatchHandler @ 00ee7d60 */
                    /* try { // try from 00ee7d28 to 00fe7d7b has its CatchHandler @ 00ee7cd8 */
  lVar1 = tpidr_el0;
  fVar4 = SQRT(param_1);
  local_78 = *(long *)(lVar1 + 0x28);
  if (fVar4 <= 0.5) {
    fVar4 = 1.0 - fVar4;
  }
                    /* catch() { ... } // from try @ 00ee7d14 with catch @ 00ee7d60 */
  sincosf(fVar4 * 1.5707964,&fStack_9c,&local_a0);
  fVar4 = *(float *)(this + 0x58);
                    /* try { // try from 00ee7d7c to 00fe7dbb has its CatchHandler @ 00ee7d7c
                       catch() { ... } // from try @ 00ee7d7c with catch @ 00ee7d7c
                       catch() { ... } // from try @ 00ee7f00 with catch @ 00ee7d7c */
  if (0.0 <= fVar4) {
    fVar6 = -500.0;
    fVar5 = param_1 + -0.25;
    uVar9 = (ulong)(uint)(2.0 - param_1);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
                    /* try { // try from 00ee7dbc to 00fe7dd3 has its CatchHandler @ 00ee7f70 */
    fVar10 = fVar5 * fVar5 * -500.0 + -100.0;
    sincosf((2.0 - param_1) * 3.1415927,&fStack_a4,&local_a8);
    fVar5 = *(float *)(this + 0x5c);
    iVar2 = 0;
    fVar11 = 0.0;
                    /* try { // try from 00ee7dec to 00fe7dff has its CatchHandler @ 00ee7f50 */
    do {
      if (0.0 <= fVar5) {
        fVar4 = 0.0;
        iVar3 = 1;
        do {
          uVar8 = (undefined4)uVar9;
          local_98 = fVar11;
          fStack_94 = fVar4;
          local_88 = (float)Grid3DAction::getOriginalVertex((Grid3DAction *)this,(Vec2 *)&local_98);
          local_84 = fVar6;
          local_80 = (float)uVar8;
          Grid3DAction::getGridRect();
          fVar6 = local_88 - local_98;
          fVar5 = local_84 - fVar10;
          fVar12 = SQRT(fVar6 * fVar6 + fVar5 * fVar5);
          fVar5 = asinf(fVar6 / fVar12);
                    /* try { // try from 00ee7e70 to 00fe7e77 has its CatchHandler @ 00ee7f84 */
          sincosf(fVar5 / fStack_9c,&fStack_ac,&local_b0);
                    /* try { // try from 00ee7e98 to 00fe7ebb has its CatchHandler @ 00ee7f94 */
          fVar7 = (1.0 - local_b0) * fStack_9c * fVar12;
          fVar6 = 0.0;
          if (fVar5 / fStack_9c <= 3.1415927) {
            fVar6 = fStack_ac * fStack_9c * fVar12;
          }
          fVar5 = local_a0 * fVar7;
          local_84 = (fVar10 + fVar12) - fStack_9c * fVar7;
          uVar9 = (ulong)(uint)local_84;
          local_88 = fStack_a4 * fVar5 + local_a8 * fVar6;
                    /* try { // try from 00ee7ef0 to 00fe7eff has its CatchHandler @ 00ee7f84 */
          local_80 = (local_a8 * fVar5 - fStack_a4 * local_88) / 7.0;
          if (local_80 <= 0.5) {
            local_80 = 0.5;
          }
                    /* try { // try from 00ee7f00 to 00fe7ff3 has its CatchHandler @ 00ee7d7c */
          Grid3DAction::getGridRect();
          fVar5 = local_98 + local_88;
          fVar6 = local_88;
          local_98 = fVar11;
          fStack_94 = fVar4;
          local_88 = fVar5;
          Grid3DAction::setVertex((Grid3DAction *)this,(Vec2 *)&local_98,(Vec3 *)&local_88);
          fVar5 = *(float *)(this + 0x5c);
          fVar4 = (float)iVar3;
          iVar3 = iVar3 + 1;
        } while (fVar4 <= fVar5);
        fVar4 = *(float *)(this + 0x58);
                    /* catch() { ... } // from try @ 00ee7dec with catch @ 00ee7f50 */
      }
      iVar2 = iVar2 + 1;
      fVar11 = (float)iVar2;
    } while (fVar11 <= fVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* catch() { ... } // from try @ 00ee7dbc with catch @ 00ee7f70 */
                    /* catch() { ... } // from try @ 00ee7e70 with catch @ 00ee7f84
                       catch() { ... } // from try @ 00ee7ef0 with catch @ 00ee7f84 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

