
/* cocos2d::SplitCols::update(float) */

void __thiscall cocos2d::SplitCols::update(SplitCols *this,float param_1)

{
  long lVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float local_90 [2];
  Quad3 aQStack_88 [4];
  float local_84;
  float local_78;
  float local_6c;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (0.0 < *(float *)(this + 0x58)) {
    fVar4 = 0.0;
    uVar2 = 1;
    do {
      local_90[1] = 0.0;
      local_90[0] = fVar4;
      TiledGrid3DAction::getOriginalTile(this);
      fVar3 = -1.0;
      if ((uVar2 - 1 & 1) != 0) {
        fVar3 = 1.0;
      }
      fVar3 = fVar3 * *(float *)(this + 0x70) * param_1;
      local_84 = local_84 + fVar3;
      local_78 = fVar3 + local_78;
      local_6c = fVar3 + local_6c;
      local_60 = fVar3 + local_60;
      local_90[1] = 0.0;
      local_90[0] = fVar4;
      TiledGrid3DAction::setTile((TiledGrid3DAction *)this,(Vec2 *)local_90,aQStack_88);
      fVar4 = (float)uVar2;
      uVar2 = uVar2 + 1;
    } while (fVar4 < *(float *)(this + 0x58));
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

