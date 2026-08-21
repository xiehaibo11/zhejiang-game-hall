
/* cocos2d::ui::LayoutComponent::getUsingPercentContentSize() const */

bool __thiscall cocos2d::ui::LayoutComponent::getUsingPercentContentSize(LayoutComponent *this)

{
                    /* try { // try from 00defab4 to 00eefabb has its CatchHandler @ 00defb10 */
  if (this[0x80] != (LayoutComponent)0x0) {
                    /* try { // try from 00defabc to 00eefb2b has its CatchHandler @ 00defa78 */
    return this[0x88] != (LayoutComponent)0x0;
  }
  return false;
}

