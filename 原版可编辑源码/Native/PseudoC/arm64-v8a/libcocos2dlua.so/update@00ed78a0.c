
/* cocos2d::Liquid::update(float) */

void __thiscall cocos2d::Liquid::update(Liquid *this,float param_1)

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
  float fVar11;
  float fVar12;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  float local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  fVar9 = 1.0;
  fVar6 = *(float *)(this + 0x58);
  if (1.0 < fVar6) {
    fVar8 = *(float *)(this + 0x5c);
    iVar2 = 1;
    do {
      if (1.0 < fVar8) {
        fVar12 = 1.0;
        iVar3 = 2;
        do {
          local_a0 = fVar9;
          fStack_9c = fVar12;
          fVar4 = (float)Grid3DAction::getOriginalVertex((Grid3DAction *)this,(Vec2 *)&local_a0);
          fVar5 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x68));
          fVar5 = param_1 * 3.1415927 * fVar5;
                    /* try { // try from 00ed7960 to 00fd796b has its CatchHandler @ 00ed85dc */
          fVar5 = fVar5 + fVar5;
          local_90 = fVar8;
          fVar8 = sinf(fVar4 * 0.01 + fVar5);
          fVar10 = *(float *)(this + 0x6c);
          fVar11 = *(float *)(this + 0x70);
          fVar7 = fVar6 * 0.01;
          local_98 = fVar4 + fVar11 * fVar10 * fVar8;
          fVar8 = sinf(fVar7 + fVar5);
          local_94 = fVar6 + fVar11 * fVar10 * fVar8;
          local_a0 = fVar9;
          fStack_9c = fVar12;
          Grid3DAction::setVertex((Grid3DAction *)this,(Vec2 *)&local_a0,(Vec3 *)&local_98);
          fVar8 = *(float *)(this + 0x5c);
          fVar12 = (float)iVar3;
          iVar3 = iVar3 + 1;
          fVar6 = fVar7;
        } while (fVar12 < fVar8);
        fVar6 = *(float *)(this + 0x58);
      }
      iVar2 = iVar2 + 1;
      fVar9 = (float)iVar2;
    } while (fVar9 < fVar6);
  }
                    /* try { // try from 00ed79e0 to 00fd79eb has its CatchHandler @ 00ed85cc */
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

