
/* cocos2d::ui::Scale9Sprite::setupSlice9(cocos2d::Texture2D*, cocos2d::Rect const&) */

void __thiscall
cocos2d::ui::Scale9Sprite::setupSlice9(Scale9Sprite *this,Texture2D *param_1,Rect *param_2)

{
  long lVar1;
  ulong uVar2;
  SpriteFrame *pSVar3;
  Rect *this_00;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1 != (Texture2D *)0x0) &&
     (uVar2 = Texture2D::isContain9PatchInfo(param_1), (uVar2 & 1) != 0)) {
    pSVar3 = (SpriteFrame *)(**(code **)(*(long *)this + 0x5b0))(this);
    this_00 = (Rect *)Texture2D::getSpriteFrameCapInset(param_1,pSVar3);
                    /* try { // try from 00de28dc to 00ee28ef has its CatchHandler @ 00de2b0c */
    uVar2 = Rect::equals(this_00,(Rect *)Rect::ZERO);
    if ((uVar2 & 1) == 0) {
      Rect::Rect((Rect *)&local_50,(Rect *)(this + 0x408));
                    /* try { // try from 00de28f4 to 00ee2903 has its CatchHandler @ 00de2b00 */
                    /* try { // try from 00de2904 to 00ee290f has its CatchHandler @ 00de2ad0 */
      local_50 = CONCAT44((float)((ulong)local_50 >> 0x20) + 1.3,(float)local_50 + 1.3);
      uStack_48 = CONCAT44((float)((ulong)uStack_48 >> 0x20) + -2.0,(float)uStack_48 + -2.0);
      (**(code **)(*(long *)this + 0x558))(this,&local_50);
      this[0x52d] = (Scale9Sprite)0x1;
                    /* try { // try from 00de2928 to 00ee292f has its CatchHandler @ 00de2acc */
      setCapInsets(this,this_00);
    }
  }
                    /* try { // try from 00de2930 to 00ee2947 has its CatchHandler @ 00de2b04 */
  if (this[0x52d] == (Scale9Sprite)0x0) {
    setCapInsets(this,param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

