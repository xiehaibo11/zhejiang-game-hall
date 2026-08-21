
/* cocos2d::Sprite::initWithTexture(cocos2d::Texture2D*) */

uint __thiscall cocos2d::Sprite::initWithTexture(Sprite *this,Texture2D *param_1)

{
  long lVar1;
  uint uVar2;
  Size aSStack_50 [8];
  Rect aRStack_48 [8];
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Rect::Rect(aRStack_48,(Rect *)Rect::ZERO);
  if (param_1 != (Texture2D *)0x0) {
    Texture2D::getContentSize();
    Size::operator=(aSStack_40,aSStack_50);
  }
  uVar2 = (**(code **)(*(long *)this + 0x608))(this,param_1,aRStack_48,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

