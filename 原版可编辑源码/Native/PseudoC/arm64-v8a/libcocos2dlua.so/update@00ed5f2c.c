
/* cocos2d::Waves3D::update(float) */

void __thiscall cocos2d::Waves3D::update(Waves3D *this,float param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  fVar4 = *(float *)(this + 0x58);
  if (0.0 < fVar4 + 1.0) {
    fVar5 = *(float *)(this + 0x5c);
    iVar2 = 0;
    fVar7 = 0.0;
    do {
      if (0.0 < fVar5 + 1.0) {
        fVar8 = 0.0;
        iVar3 = 1;
        do {
          local_80 = fVar7;
          fStack_7c = fVar8;
          local_78 = (float)Grid3DAction::getOriginalVertex((Grid3DAction *)this,(Vec2 *)&local_80);
          fVar6 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x68));
          fVar6 = param_1 * 3.1415927 * fVar6;
          fStack_74 = fVar4;
          fVar6 = sinf((fVar4 + local_78) * 0.01 + fVar6 + fVar6);
          fVar4 = *(float *)(this + 0x6c);
          local_70 = fVar5 + *(float *)(this + 0x70) * fVar4 * fVar6;
          local_80 = fVar7;
          fStack_7c = fVar8;
          Grid3DAction::setVertex((Grid3DAction *)this,(Vec2 *)&local_80,(Vec3 *)&local_78);
          fVar5 = *(float *)(this + 0x5c);
          fVar8 = (float)iVar3;
          iVar3 = iVar3 + 1;
        } while (fVar8 < fVar5 + 1.0);
        fVar4 = *(float *)(this + 0x58);
      }
      iVar2 = iVar2 + 1;
      fVar7 = (float)iVar2;
    } while (fVar7 < fVar4 + 1.0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

