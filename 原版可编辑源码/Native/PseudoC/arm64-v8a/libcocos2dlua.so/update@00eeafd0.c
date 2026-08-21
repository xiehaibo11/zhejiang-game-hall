
/* cocos2d::SplitRows::update(float) */

void __thiscall cocos2d::SplitRows::update(SplitRows *this,float param_1)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  undefined4 local_90;
  float local_8c;
  float local_88 [3];
  float local_7c;
  float local_70;
  float local_64;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (0.0 < *(float *)(this + 0x5c)) {
    fVar4 = 0.0;
    uVar2 = 1;
    do {
      local_90 = 0;
      local_8c = fVar4;
      TiledGrid3DAction::getOriginalTile(this);
      fVar3 = -1.0;
      if ((uVar2 - 1 & 1) != 0) {
        fVar3 = 1.0;
      }
      fVar3 = fVar3 * *(float *)(this + 0x6c) * param_1;
      local_88[0] = local_88[0] + fVar3;
      local_7c = fVar3 + local_7c;
      local_70 = fVar3 + local_70;
      local_64 = fVar3 + local_64;
      local_90 = 0;
      local_8c = fVar4;
      TiledGrid3DAction::setTile((TiledGrid3DAction *)this,(Vec2 *)&local_90,(Quad3 *)local_88);
      fVar4 = (float)uVar2;
      uVar2 = uVar2 + 1;
    } while (fVar4 < *(float *)(this + 0x5c));
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

