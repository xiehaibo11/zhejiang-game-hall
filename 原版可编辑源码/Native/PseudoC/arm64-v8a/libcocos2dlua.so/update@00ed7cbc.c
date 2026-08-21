
/* cocos2d::Waves::update(float) */

void __thiscall cocos2d::Waves::update(Waves *this,float param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float local_80;
  long local_78;
  
                    /* try { // try from 00ed7ccc to 00fd7cd7 has its CatchHandler @ 00ed86bc */
                    /* try { // try from 00ed7ce0 to 00fd7ce7 has its CatchHandler @ 00ed8634 */
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  fVar5 = *(float *)(this + 0x58);
  if (0.0 < fVar5 + 1.0) {
                    /* try { // try from 00ed7d00 to 00fd7d07 has its CatchHandler @ 00ed8604 */
    fVar7 = *(float *)(this + 0x5c);
    iVar2 = 0;
    fVar8 = 0.0;
    do {
      if (0.0 < fVar7 + 1.0) {
        fVar9 = 0.0;
        iVar3 = 1;
        do {
          local_90 = fVar8;
          fStack_8c = fVar9;
          fVar4 = (float)Grid3DAction::getOriginalVertex((Grid3DAction *)this,(Vec2 *)&local_90);
          fVar6 = fVar5;
          local_84 = fVar5;
          local_80 = fVar7;
          if (this[0x74] != (Waves)0x0) {
            fVar7 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x68));
            fVar7 = param_1 * 3.1415927 * fVar7;
            local_88 = fVar4;
            fVar7 = sinf(fVar5 * 0.01 + fVar7 + fVar7);
            fVar6 = *(float *)(this + 0x6c);
            fVar4 = fVar4 + *(float *)(this + 0x70) * fVar6 * fVar7;
          }
          local_88 = fVar4;
          if (this[0x75] != (Waves)0x0) {
            fVar7 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x68));
            fVar7 = param_1 * 3.1415927 * fVar7;
            fVar7 = sinf(fVar4 * 0.01 + fVar7 + fVar7);
            local_84 = fVar5 + *(float *)(this + 0x70) * *(float *)(this + 0x6c) * fVar7;
            fVar6 = *(float *)(this + 0x6c);
          }
                    /* try { // try from 00ed7d5c to 00fd7d67 has its CatchHandler @ 00ed8620 */
          fVar5 = fVar6;
          local_90 = fVar8;
          fStack_8c = fVar9;
          Grid3DAction::setVertex((Grid3DAction *)this,(Vec2 *)&local_90,(Vec3 *)&local_88);
                    /* try { // try from 00ed7d70 to 00fd7d77 has its CatchHandler @ 00ed8624 */
          fVar7 = *(float *)(this + 0x5c);
          fVar9 = (float)iVar3;
                    /* try { // try from 00ed7d78 to 00fd7e63 has its CatchHandler @ 00ed788c */
          iVar3 = iVar3 + 1;
        } while (fVar9 < fVar7 + 1.0);
        fVar5 = *(float *)(this + 0x58);
      }
                    /* try { // try from 00ed7d30 to 00fd7d53 has its CatchHandler @ 00ed8684 */
      iVar2 = iVar2 + 1;
      fVar8 = (float)iVar2;
    } while (fVar8 < fVar5 + 1.0);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

