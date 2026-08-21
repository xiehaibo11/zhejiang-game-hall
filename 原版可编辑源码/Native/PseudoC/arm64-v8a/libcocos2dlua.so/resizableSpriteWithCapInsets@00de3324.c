
/* cocos2d::ui::Scale9Sprite::resizableSpriteWithCapInsets(cocos2d::Rect const&) const */

Sprite * __thiscall
cocos2d::ui::Scale9Sprite::resizableSpriteWithCapInsets(Scale9Sprite *this,Rect *param_1)

{
  Sprite *this_00;
  ulong uVar1;
  
  this_00 = operator_new(0x550,(nothrow_t *)&std::nothrow);
  if (this_00 != (Sprite *)0x0) {
    Sprite::Sprite(this_00);
    this_00[0x52d] = (Sprite)0x0;
    *(undefined8 *)(this_00 + 0x538) = 0;
    *(undefined8 *)(this_00 + 0x530) = 0;
    *(undefined8 *)(this_00 + 0x540) = 0x100000000;
    *(undefined ***)this_00 = &PTR__Scale9Sprite_016e4b08;
    *(undefined ***)(this_00 + 0x2f8) = &PTR__Scale9Sprite_016e51e8;
                    /* try { // try from 00de3398 to 00ee33a7 has its CatchHandler @ 00de4980 */
                    /* try { // try from 00de33a8 to 00ee33b7 has its CatchHandler @ 00de4970 */
    uVar1 = init((Scale9Sprite *)this_00,(Sprite *)this,this + 0x408,(bool)this[0x418],
                 (Vec2 *)&Vec2::ZERO,(Size *)(this + 0x438),param_1);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 00de33c8 to 00ee33d7 has its CatchHandler @ 00de4950 */
      (**(code **)(*(long *)this_00 + 8))(this_00);
      this_00 = (Sprite *)0x0;
    }
    else {
                    /* try { // try from 00de33b8 to 00ee33c7 has its CatchHandler @ 00de4960 */
      Ref::autorelease((Ref *)this_00);
    }
  }
                    /* try { // try from 00de33d8 to 00ee33e7 has its CatchHandler @ 00de4940 */
  return this_00;
}

