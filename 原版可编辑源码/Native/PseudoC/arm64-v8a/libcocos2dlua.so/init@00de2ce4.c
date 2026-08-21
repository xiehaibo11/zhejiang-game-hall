
/* cocos2d::ui::Scale9Sprite::init(cocos2d::Sprite*, cocos2d::Rect const&, bool, cocos2d::Vec2
   const&, cocos2d::Size const&, cocos2d::Rect const&) */

uint __thiscall
cocos2d::ui::Scale9Sprite::init
          (Scale9Sprite *this,Sprite *param_1,Rect *param_2,bool param_3,Vec2 *param_4,Size *param_5
          ,Rect *param_6)

{
  long lVar1;
  uint uVar2;
  Texture2D *pTVar3;
  ulong uVar4;
  undefined8 uVar5;
  Size aSStack_70 [8];
  Rect aRStack_68 [8];
  Size aSStack_60 [8];
  long local_58;
  
                    /* catch() { ... } // from try @ 00de2d24 with catch @ 00de2cec */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00de2d1c to 00ee2d23 has its CatchHandler @ 00de2d50 */
                    /* try { // try from 00de2d24 to 00ee2d6b has its CatchHandler @ 00de2cec */
  Rect::Rect(aRStack_68,(Rect *)param_2);
  if (param_1 == (Sprite *)0x0) {
    uVar2 = (**(code **)(*(long *)this + 0x608))(this,0,aRStack_68,param_3);
    if (this[0x52d] == (Scale9Sprite)0x0) {
      setCapInsets(this,param_6);
    }
  }
  else {
    pTVar3 = (Texture2D *)(**(code **)(*(long *)param_1 + 0x550))(param_1);
                    /* catch() { ... } // from try @ 00de2d1c with catch @ 00de2d50 */
    uVar4 = Rect::equals((Rect *)param_2,(Rect *)Rect::ZERO);
    if ((uVar4 & 1) != 0) {
      Texture2D::getContentSize();
      Size::operator=(aSStack_60,aSStack_70);
    }
    uVar5 = SpriteFrame::createWithTexture(pTVar3,aRStack_68,param_3,param_4,param_5);
    uVar2 = (**(code **)(*(long *)this + 0x610))(this,uVar5);
    setupSlice9(this,pTVar3,param_6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

