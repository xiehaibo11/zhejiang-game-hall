
/* cocos2d::TurnOffTiles::turnOffTile(cocos2d::Vec2 const&) */

void __thiscall cocos2d::TurnOffTiles::turnOffTile(TurnOffTiles *this,Vec2 *param_1)

{
  long lVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Vec3::Vec3((Vec3 *)&local_70);
  Vec3::Vec3((Vec3 *)((ulong)&local_70 | 0xc));
  Vec3::Vec3((Vec3 *)&uStack_58);
  Vec3::Vec3((Vec3 *)((long)&uStack_50 + 4));
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  TiledGrid3DAction::setTile((TiledGrid3DAction *)this,param_1,(Quad3 *)&local_70);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

