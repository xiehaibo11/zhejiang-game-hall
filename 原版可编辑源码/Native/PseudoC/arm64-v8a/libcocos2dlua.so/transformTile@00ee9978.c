
/* cocos2d::FadeOutTRTiles::transformTile(cocos2d::Vec2 const&, float) */

void __thiscall
cocos2d::FadeOutTRTiles::transformTile(FadeOutTRTiles *this,Vec2 *param_1,float param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 local_68;
  undefined8 local_5c;
  undefined8 local_50;
  undefined8 local_44;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00ee9998 to 00fe99a7 has its CatchHandler @ 00ee9a00 */
                    /* try { // try from 00ee99ac to 00fe99b7 has its CatchHandler @ 00ee99e0 */
  TiledGrid3DAction::getOriginalTile(this);
                    /* try { // try from 00ee99b8 to 00fe9a3b has its CatchHandler @ 00ee98c8 */
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(this + 0x60) + 0x300) + 0x38);
                    /* catch() { ... } // from try @ 00ee99ac with catch @ 00ee99e0 */
  fVar2 = (float)uVar4 * 0.5 * (1.0 - param_2);
  fVar3 = (float)((ulong)uVar4 >> 0x20) * 0.5 * (1.0 - param_2);
  local_68 = CONCAT44((float)((ulong)local_68 >> 0x20) + fVar3,(float)local_68 + fVar2);
                    /* catch() { ... } // from try @ 00ee9998 with catch @ 00ee9a00 */
  local_5c = CONCAT44((float)((ulong)local_5c >> 0x20) + fVar3,(float)local_5c - fVar2);
  local_50 = CONCAT44((float)((ulong)local_50 >> 0x20) - fVar3,(float)local_50 + fVar2);
                    /* catch() { ... } // from try @ 00ee98e4 with catch @ 00ee9a18 */
  local_44 = CONCAT44((float)((ulong)local_44 >> 0x20) - fVar3,(float)local_44 - fVar2);
  TiledGrid3DAction::setTile((TiledGrid3DAction *)this,param_1,(Quad3 *)&local_68);
                    /* catch() { ... } // from try @ 00ee991c with catch @ 00ee9a20 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00ee9a3c to 00fe9a93 has its CatchHandler @ 00ee9a3c
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee9a3c with catch @ 00ee9a3c
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

