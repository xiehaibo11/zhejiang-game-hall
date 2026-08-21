
/* cocos2d::Color4B::Color4B(cocos2d::Color4F const&) */

void __thiscall cocos2d::Color4B::Color4B(Color4B *this,Color4F *param_1)

{
  *this = SUB41((int)(*(float *)param_1 * 255.0),0);
  this[1] = SUB41((int)(*(float *)(param_1 + 4) * 255.0),0);
  this[2] = SUB41((int)(*(float *)(param_1 + 8) * 255.0),0);
  this[3] = SUB41((int)(*(float *)(param_1 + 0xc) * 255.0),0);
  return;
}

