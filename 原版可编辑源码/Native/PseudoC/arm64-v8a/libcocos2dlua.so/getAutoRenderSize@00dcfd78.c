
/* cocos2d::ui::TextField::getAutoRenderSize() */

void cocos2d::ui::TextField::getAutoRenderSize(void)

{
  long in_x0;
  Size *pSVar1;
  Size *in_x8;
  
                    /* try { // try from 00dcfd78 to 00ecfdb7 has its CatchHandler @ 00dd0388 */
  pSVar1 = (Size *)(**(code **)(**(long **)(in_x0 + 0x4f0) + 0x168))();
  Size::Size(in_x8,pSVar1);
  if (*(char *)(in_x0 + 0x387) != '\0') {
    return;
  }
  Label::setDimensions(*(Label **)(in_x0 + 0x4f0),0.0,0.0);
                    /* try { // try from 00dcfdcc to 00ecfddb has its CatchHandler @ 00dd0310 */
  pSVar1 = (Size *)(**(code **)(**(long **)(in_x0 + 0x4f0) + 0x168))();
  Size::operator=(in_x8,pSVar1);
  Label::setDimensions(*(Label **)(in_x0 + 0x4f0),*(float *)(in_x0 + 0x80),*(float *)(in_x0 + 0x84))
  ;
  return;
}

