
/* cocos2d::Sprite::isFrameDisplayed(cocos2d::SpriteFrame*) const */

uint __thiscall cocos2d::Sprite::isFrameDisplayed(Sprite *this,SpriteFrame *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  Texture2D *this_00;
  Vec2 *this_01;
  Rect aRStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Rect::Rect(aRStack_48,(Rect *)(param_1 + 0x5c));
  uVar5 = Rect::equals(aRStack_48,(Rect *)(this + 0x408));
  if ((uVar5 & 1) != 0) {
    this_00 = (Texture2D *)SpriteFrame::getTexture(param_1);
    iVar2 = Texture2D::getName(this_00);
    iVar3 = Texture2D::getName(*(Texture2D **)(this + 0x368));
    if (iVar2 == iVar3) {
      this_01 = (Vec2 *)SpriteFrame::getOffset(param_1);
      uVar4 = Vec2::equals(this_01,this + 0x448);
      goto LAB_00f41674;
    }
  }
  uVar4 = 0;
LAB_00f41674:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

