
/* cocos2d::ui::Layout::getLayoutContentSize() const */

void cocos2d::ui::Layout::getLayoutContentSize(void)

{
  long *in_x0;
  Size *pSVar1;
  Size *in_x8;
  
                    /* try { // try from 00db0134 to 00eb0203 has its CatchHandler @ 00db0134
                       catch() { ... } // from try @ 00db0134 with catch @ 00db0134
                       catch() { ... } // from try @ 00db020c with catch @ 00db0134
                       catch() { ... } // from try @ 00db039c with catch @ 00db0134 */
  pSVar1 = (Size *)(**(code **)(*in_x0 + 0x168))();
  Size::Size(in_x8,pSVar1);
  return;
}

