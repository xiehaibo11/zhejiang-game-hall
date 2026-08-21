
/* cocos2d::FadeOutTRTiles::turnOnTile(cocos2d::Vec2 const&) */

void __thiscall cocos2d::FadeOutTRTiles::turnOnTile(FadeOutTRTiles *this,Vec2 *param_1)

{
  long lVar1;
  Quad3 aQStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00ee97e4 with catch @ 00ee98ac */
  TiledGrid3DAction::getOriginalTile(this);
  TiledGrid3DAction::setTile((TiledGrid3DAction *)this,param_1,aQStack_68);
                    /* try { // try from 00ee98c8 to 00fe98e3 has its CatchHandler @ 00ee98c8
                       catch() { ... } // from try @ 00ee98c8 with catch @ 00ee98c8
                       catch() { ... } // from try @ 00ee99b8 with catch @ 00ee98c8 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00ee98e4 to 00fe98eb has its CatchHandler @ 00ee9a18 */
  __stack_chk_fail();
}

