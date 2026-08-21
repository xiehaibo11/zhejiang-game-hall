
/* cocos2d::Ripple3D::update(float) */

void __thiscall cocos2d::Ripple3D::update(Ripple3D *this,float param_1)

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
  float fVar10;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  fVar6 = *(float *)(this + 0x58);
  if (0.0 < fVar6 + 1.0) {
    fVar8 = *(float *)(this + 0x5c);
    iVar2 = 0;
    fVar9 = 0.0;
    do {
      if (0.0 < fVar8 + 1.0) {
        fVar10 = 0.0;
        iVar3 = 1;
        do {
          local_90 = fVar9;
          fStack_8c = fVar10;
          local_88 = (float)Grid3DAction::getOriginalVertex((Grid3DAction *)this,(Vec2 *)&local_90);
          fVar4 = *(float *)(this + 0x70);
                    /* try { // try from 00ed7200 to 00fd721f has its CatchHandler @ 00ed74cc */
          fVar7 = SQRT((*(float *)(this + 0x68) - local_88) * (*(float *)(this + 0x68) - local_88) +
                       (*(float *)(this + 0x6c) - fVar6) * (*(float *)(this + 0x6c) - fVar6));
          fStack_84 = fVar6;
          local_80 = fVar8;
          if (fVar7 < fVar4) {
            fVar6 = (fVar4 - fVar7) / fVar4;
                    /* try { // try from 00ed7220 to 00fd751b has its CatchHandler @ 00ed6e68 */
            fVar5 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x74));
            fVar5 = param_1 * 3.1415927 * fVar5;
            fVar7 = sinf((fVar4 - fVar7) * 0.1 + fVar5 + fVar5);
            local_80 = fVar8 + fVar6 * fVar6 *
                               *(float *)(this + 0x7c) * *(float *)(this + 0x78) * fVar7;
            fVar7 = *(float *)(this + 0x78);
          }
          fVar6 = fVar7;
          local_90 = fVar9;
          fStack_8c = fVar10;
          Grid3DAction::setVertex((Grid3DAction *)this,(Vec2 *)&local_90,(Vec3 *)&local_88);
          fVar8 = *(float *)(this + 0x5c);
          fVar10 = (float)iVar3;
          iVar3 = iVar3 + 1;
        } while (fVar10 < fVar8 + 1.0);
        fVar6 = *(float *)(this + 0x58);
      }
      iVar2 = iVar2 + 1;
      fVar9 = (float)iVar2;
    } while (fVar9 < fVar6 + 1.0);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

