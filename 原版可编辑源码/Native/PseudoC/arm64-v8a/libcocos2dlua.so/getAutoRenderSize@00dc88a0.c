
/* cocos2d::ui::Text::getAutoRenderSize() */

void cocos2d::ui::Text::getAutoRenderSize(void)

{
  long in_x0;
  Size *pSVar1;
  Size *in_x8;
  
  pSVar1 = (Size *)(**(code **)(**(long **)(in_x0 + 0x528) + 0x168))();
  Size::Size(in_x8,pSVar1);
  if (*(char *)(in_x0 + 0x387) != '\0') {
    return;
  }
  Label::setDimensions(*(Label **)(in_x0 + 0x528),0.0,0.0);
  pSVar1 = (Size *)(**(code **)(**(long **)(in_x0 + 0x528) + 0x168))();
  Size::operator=(in_x8,pSVar1);
  Label::setDimensions(*(Label **)(in_x0 + 0x528),*(float *)(in_x0 + 0x80),*(float *)(in_x0 + 0x84))
  ;
  return;
}

