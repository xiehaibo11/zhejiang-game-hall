
/* cocos2d::FadeOutUpTiles::transformTile(cocos2d::Vec2 const&, float) */

void __thiscall
cocos2d::FadeOutUpTiles::transformTile(FadeOutUpTiles *this,Vec2 *param_1,float param_2)

{
  long lVar1;
  float fVar2;
  Quad3 aQStack_68 [4];
  float local_64;
  float local_58;
  float local_4c;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  TiledGrid3DAction::getOriginalTile(this);
  fVar2 = (1.0 - param_2) * *(float *)(*(long *)(*(long *)(this + 0x60) + 0x300) + 0x3c) * 0.5;
  local_64 = local_64 + fVar2;
  local_58 = fVar2 + local_58;
  local_4c = local_4c - fVar2;
  local_40 = local_40 - fVar2;
  TiledGrid3DAction::setTile((TiledGrid3DAction *)this,param_1,aQStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

