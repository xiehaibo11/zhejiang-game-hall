
/* cocos2d::JumpTiles3D::update(float) */

void __thiscall cocos2d::JumpTiles3D::update(JumpTiles3D *this,float param_1)

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
  float local_a0;
  float fStack_9c;
  Quad3 aQStack_98 [8];
  float local_90;
  float local_84;
  float local_78;
  float local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  fVar10 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x68));
  fVar4 = param_1 * 3.1415927 * fVar10;
  fVar5 = sinf(fVar4 + fVar4);
  fVar7 = *(float *)(this + 0x6c);
  fVar8 = *(float *)(this + 0x70);
  fVar10 = sinf((fVar10 * param_1 + fVar10 * param_1 + 1.0) * 3.1415927);
  fVar4 = *(float *)(this + 0x58);
  if (0.0 < fVar4) {
    fVar6 = *(float *)(this + 0x5c);
    iVar2 = 0;
    fVar9 = 0.0;
    do {
      if (0.0 < fVar6) {
        fVar4 = 0.0;
        iVar3 = 1;
        do {
          local_a0 = fVar9;
          fStack_9c = fVar4;
          TiledGrid3DAction::getOriginalTile(this);
          fVar6 = fVar5;
          if (((iVar2 + iVar3) - 1U & 1) != 0) {
            fVar6 = fVar10;
          }
          fVar6 = fVar8 * fVar7 * fVar6;
          local_90 = fVar6 + local_90;
          local_84 = fVar6 + local_84;
          local_78 = fVar6 + local_78;
          local_6c = fVar6 + local_6c;
          local_a0 = fVar9;
          fStack_9c = fVar4;
          TiledGrid3DAction::setTile((TiledGrid3DAction *)this,(Vec2 *)&local_a0,aQStack_98);
          fVar6 = *(float *)(this + 0x5c);
          fVar4 = (float)iVar3;
          iVar3 = iVar3 + 1;
        } while (fVar4 < fVar6);
        fVar4 = *(float *)(this + 0x58);
      }
      iVar2 = iVar2 + 1;
      fVar9 = (float)iVar2;
    } while (fVar9 < fVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

