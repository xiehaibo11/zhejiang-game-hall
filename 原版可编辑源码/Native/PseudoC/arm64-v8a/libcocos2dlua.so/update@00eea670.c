
/* cocos2d::TurnOffTiles::update(float) */

void __thiscall cocos2d::TurnOffTiles::update(TurnOffTiles *this,float param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  float local_98;
  float fStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar1 = *(uint *)(this + 0x6c);
  if (uVar1 != 0) {
    uVar6 = 0;
    do {
      uVar2 = *(uint *)(*(long *)(this + 0x70) + uVar6 * 4);
      uVar5 = (uint)*(float *)(this + 0x5c);
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = uVar2 / uVar5;
      }
      fStack_94 = (float)(uVar2 - uVar3 * uVar5);
      local_98 = (float)(uint)(int)((float)uVar2 / *(float *)(this + 0x5c));
      if (uVar6 < (uint)(int)((float)uVar1 * param_1)) {
        Vec3::Vec3((Vec3 *)&local_90);
        Vec3::Vec3((Vec3 *)((long)&uStack_88 + 4));
        Vec3::Vec3((Vec3 *)&uStack_78);
        Vec3::Vec3((Vec3 *)((long)&uStack_70 + 4));
        uStack_78 = 0;
        local_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        local_90 = 0;
      }
      else {
        TiledGrid3DAction::getOriginalTile(this);
      }
      TiledGrid3DAction::setTile((TiledGrid3DAction *)this,(Vec2 *)&local_98,(Quad3 *)&local_90);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(this + 0x6c));
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

