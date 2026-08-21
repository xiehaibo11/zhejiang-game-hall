
/* cocos2d::GLView::getVisibleSize() const */

void cocos2d::GLView::getVisibleSize(void)

{
  long in_x0;
  Size *in_x8;
  
  if (*(int *)(in_x0 + 0x68) == 1) {
    Size::Size(in_x8,*(float *)(in_x0 + 0x24) / *(float *)(in_x0 + 0x60),
               *(float *)(in_x0 + 0x28) / *(float *)(in_x0 + 100));
    return;
  }
  Size::Size(in_x8,(Size *)(in_x0 + 0x2c));
  return;
}

