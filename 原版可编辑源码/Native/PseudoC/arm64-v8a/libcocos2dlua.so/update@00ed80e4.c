
/* cocos2d::Twirl::update(float) */

void __thiscall cocos2d::Twirl::update(Twirl *this,float param_1)

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
  float fVar13;
  float fVar14;
  float fVar15;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  fVar6 = *(float *)(this + 0x58);
  if (0.0 < fVar6 + 1.0) {
    fVar12 = *(float *)(this + 0x68);
    fVar13 = *(float *)(this + 0x6c);
    fVar8 = *(float *)(this + 0x5c);
    iVar2 = 0;
    fVar15 = 0.0;
    do {
                    /* try { // try from 00ed8180 to 00fd818f has its CatchHandler @ 00ed869c */
      if (0.0 < fVar8 + 1.0) {
        fVar14 = 0.0;
        iVar3 = 1;
        do {
          local_a0 = fVar15;
          fStack_9c = fVar14;
          fVar4 = (float)Grid3DAction::getOriginalVertex((Grid3DAction *)this,(Vec2 *)&local_a0);
          fVar9 = *(float *)(this + 0x74);
          fVar11 = *(float *)(this + 0x78);
          fVar5 = fVar15 - *(float *)(this + 0x58) * 0.5;
          fVar10 = fVar14 - *(float *)(this + 0x5c) * 0.5;
          fVar7 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x70));
          fVar7 = param_1 * 3.1415927 * fVar7;
          local_90 = fVar8;
          fVar8 = cosf(fVar7 + fVar7 + 1.5707964);
                    /* try { // try from 00ed8200 to 00fd820f has its CatchHandler @ 00ed861c */
          sincosf(fVar9 * 0.1 * fVar11 * SQRT(fVar5 * fVar5 + fVar10 * fVar10) * fVar8,&fStack_a4,
                  &local_a8);
          fVar8 = fVar6 - fVar13;
          fVar4 = fVar4 - fVar12;
          fVar6 = fVar12 + fVar8 * fStack_a4 + fVar4 * local_a8;
          fStack_94 = fVar13 + (fVar8 * local_a8 - fVar4 * fStack_a4);
          local_a0 = fVar15;
          fStack_9c = fVar14;
          local_98 = fVar6;
                    /* try { // try from 00ed8258 to 00fd8273 has its CatchHandler @ 00ed867c */
          Grid3DAction::setVertex((Grid3DAction *)this,(Vec2 *)&local_a0,(Vec3 *)&local_98);
          fVar8 = *(float *)(this + 0x5c);
          fVar14 = (float)iVar3;
          iVar3 = iVar3 + 1;
        } while (fVar14 < fVar8 + 1.0);
        fVar6 = *(float *)(this + 0x58);
      }
      iVar2 = iVar2 + 1;
      fVar15 = (float)iVar2;
    } while (fVar15 < fVar6 + 1.0);
  }
                    /* try { // try from 00ed828c to 00fd829b has its CatchHandler @ 00ed8684 */
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

