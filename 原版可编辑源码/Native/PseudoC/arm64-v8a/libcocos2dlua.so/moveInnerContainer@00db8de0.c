
/* cocos2d::ui::PageView::moveInnerContainer(cocos2d::Vec2 const&, bool) */

void __thiscall cocos2d::ui::PageView::moveInnerContainer(PageView *this,Vec2 *param_1,bool param_2)

{
  Widget *pWVar1;
  long lVar2;
  
                    /* try { // try from 00db8df0 to 00eb8df7 has its CatchHandler @ 00db8eb8 */
  ScrollView::moveInnerContainer((ScrollView *)this,param_1,param_2);
  pWVar1 = (Widget *)ListView::getCenterItemInCurrentView((ListView *)this);
                    /* try { // try from 00db8e00 to 00eb8e0b has its CatchHandler @ 00db8ea8 */
  lVar2 = ListView::getIndex((ListView *)this,pWVar1);
  *(long *)(this + 0x960) = lVar2;
  if (*(PageViewIndicator **)(this + 0x950) != (PageViewIndicator *)0x0) {
                    /* try { // try from 00db8e20 to 00eb8e2b has its CatchHandler @ 00db8ebc */
    PageViewIndicator::indicate(*(PageViewIndicator **)(this + 0x950),lVar2);
    return;
  }
                    /* try { // try from 00db8e2c to 00eb8f03 has its CatchHandler @ 00db8cf0 */
  return;
}

