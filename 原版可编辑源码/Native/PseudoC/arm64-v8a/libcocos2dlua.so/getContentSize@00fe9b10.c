
/* cocos2d::Texture2D::getContentSize() const */

void cocos2d::Texture2D::getContentSize(void)

{
  long in_x0;
  long lVar1;
  Size *in_x8;
  float fVar2;
  
  Size::Size(in_x8);
  fVar2 = *(float *)(in_x0 + 0x3c);
  lVar1 = Director::getInstance();
  *(float *)in_x8 = fVar2 / *(float *)(lVar1 + 0x1a0);
  fVar2 = *(float *)(in_x0 + 0x40);
  lVar1 = Director::getInstance();
  *(float *)(in_x8 + 4) = fVar2 / *(float *)(lVar1 + 0x1a0);
  return;
}

