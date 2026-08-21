
/* cocos2d::Sprite::setTextureRect(cocos2d::Rect const&, bool, cocos2d::Size const&) */

void __thiscall
cocos2d::Sprite::setTextureRect(Sprite *this,Rect *param_1,bool param_2,Size *param_3)

{
                    /* try { // try from 00f3f25c to 0103f273 has its CatchHandler @ 00f3f4b8 */
  this[0x418] = (Sprite)param_2;
  Node::setContentSize((Node *)this,param_3);
  Size::operator=((Size *)(this + 0x438),param_3);
  (**(code **)(*(long *)this + 0x568))(this,param_1);
                    /* try { // try from 00f3f288 to 0103f2cb has its CatchHandler @ 00f3f504 */
  updateStretchFactor(this);
  updatePoly(this);
  return;
}

