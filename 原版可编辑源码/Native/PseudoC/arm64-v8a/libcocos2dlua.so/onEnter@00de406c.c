
/* cocos2d::experimental::ui::WebView::onEnter() */

void __thiscall cocos2d::experimental::ui::WebView::onEnter(WebView *this)

{
  ulong uVar1;
  
  cocos2d::ui::Widget::onEnter((Widget *)this);
  uVar1 = (**(code **)(*(long *)this + 0x178))(this);
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 00de40a0 to 00ee40bb has its CatchHandler @ 00de4ab8 */
                    /* WARNING: Could not recover jumptable at 0x00de40ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x5b0) + 0x18))(*(long **)(this + 0x5b0),1);
    return;
  }
  return;
}

