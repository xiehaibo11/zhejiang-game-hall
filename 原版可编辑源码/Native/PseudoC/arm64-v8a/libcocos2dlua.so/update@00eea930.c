
/* cocos2d::WavesTiles3D::update(float) */

void __thiscall cocos2d::WavesTiles3D::update(WavesTiles3D *this,float param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float local_74;
  float local_68;
  float local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar5 = *(float *)(this + 0x58);
  if (0.0 < fVar5) {
    fVar4 = *(float *)(this + 0x5c);
    iVar2 = 0;
    fVar6 = 0.0;
    do {
      if (0.0 < fVar4) {
        fVar5 = 0.0;
        iVar3 = 1;
        do {
          local_90 = fVar6;
          fStack_8c = fVar5;
          TiledGrid3DAction::getOriginalTile(this);
          fVar4 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x68));
          fVar4 = param_1 * 3.1415927 * fVar4;
          fVar4 = sinf(fVar4 + fVar4 + (fStack_84 + local_88) * 0.01);
          local_80 = *(float *)(this + 0x70) * *(float *)(this + 0x6c) * fVar4;
          local_90 = fVar6;
          fStack_8c = fVar5;
          local_74 = local_80;
          local_68 = local_80;
          local_5c = local_80;
          TiledGrid3DAction::setTile((TiledGrid3DAction *)this,(Vec2 *)&local_90,(Quad3 *)&local_88)
          ;
          fVar4 = *(float *)(this + 0x5c);
          fVar5 = (float)iVar3;
          iVar3 = iVar3 + 1;
        } while (fVar5 < fVar4);
        fVar5 = *(float *)(this + 0x58);
      }
      iVar2 = iVar2 + 1;
      fVar6 = (float)iVar2;
    } while (fVar6 < fVar5);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

