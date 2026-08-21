
/* cocos2d::TurnOffTiles::turnOnTile(cocos2d::Vec2 const&) */

void __thiscall cocos2d::TurnOffTiles::turnOnTile(TurnOffTiles *this,Vec2 *param_1)

{
  long lVar1;
  Quad3 aQStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00eea404 with catch @ 00eea4b0 */
  TiledGrid3DAction::getOriginalTile(this);
  TiledGrid3DAction::setTile((TiledGrid3DAction *)this,param_1,aQStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

