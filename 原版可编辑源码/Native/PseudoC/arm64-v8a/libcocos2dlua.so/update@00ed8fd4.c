
/* cocos2d::FlipX::update(float) */

void cocos2d::FlipX::update(float param_1)

{
  long in_x0;
  
  *(undefined1 *)(in_x0 + 0x50) = 1;
  Sprite::setFlippedX(*(Sprite **)(in_x0 + 0x38),*(bool *)(in_x0 + 0x51));
  return;
}

