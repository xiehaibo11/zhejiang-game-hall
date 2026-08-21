
/* cocos2d::ShuffleTiles::placeTile(cocos2d::Vec2 const&, cocos2d::Tile*) */

void __thiscall cocos2d::ShuffleTiles::placeTile(ShuffleTiles *this,Vec2 *param_1,Tile *param_2)

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
  TiledGrid3DAction::getOriginalTile(this);
                    /* catch() { ... } // from try @ 00ee92a8 with catch @ 00ee9310 */
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(this + 0x60) + 0x300) + 0x38);
                    /* catch() { ... } // from try @ 00ee927c with catch @ 00ee9340 */
  uVar4 = NEON_scvtf(CONCAT44((int)((float)((ulong)uVar4 >> 0x20) *
                                   (float)((ulong)*(undefined8 *)param_2 >> 0x20)),
                              (int)((float)uVar4 * (float)*(undefined8 *)param_2)),4);
  fVar2 = (float)uVar4;
  fVar3 = (float)((ulong)uVar4 >> 0x20);
  local_68 = CONCAT44((float)((ulong)local_68 >> 0x20) + fVar3,(float)local_68 + fVar2);
  local_5c = CONCAT44((float)((ulong)local_5c >> 0x20) + fVar3,(float)local_5c + fVar2);
  local_50 = CONCAT44((float)((ulong)local_50 >> 0x20) + fVar3,(float)local_50 + fVar2);
  local_44 = CONCAT44((float)((ulong)local_44 >> 0x20) + fVar3,(float)local_44 + fVar2);
                    /* try { // try from 00ee935c to 00fe9397 has its CatchHandler @ 00ee935c
                       catch() { ... } // from try @ 00ee935c with catch @ 00ee935c
                       catch() { ... } // from try @ 00ee93e8 with catch @ 00ee935c */
  TiledGrid3DAction::setTile((TiledGrid3DAction *)this,param_1,(Quad3 *)&local_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

