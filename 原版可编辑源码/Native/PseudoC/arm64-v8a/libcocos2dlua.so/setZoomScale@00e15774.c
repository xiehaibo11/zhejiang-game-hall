
/* cocos2d::extension::ScrollView::setZoomScale(float, bool) */

void __thiscall
cocos2d::extension::ScrollView::setZoomScale(ScrollView *this,float param_1,bool param_2)

{
                    /* try { // try from 00e15774 to 00f1577b has its CatchHandler @ 00e1589c */
  if (param_2) {
    setZoomScaleInDuration(this,param_1,0.15);
    return;
  }
  setZoomScale(this,param_1);
  return;
}

