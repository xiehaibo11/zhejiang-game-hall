
/* cocos2d::experimental::ui::WebView::onExit() */

void __thiscall cocos2d::experimental::ui::WebView::onExit(WebView *this)

{
                    /* try { // try from 00de40c0 to 00ee40cf has its CatchHandler @ 00de4ab4 */
  cocos2d::ui::Widget::onExit((Widget *)this);
                    /* WARNING: Could not recover jumptable at 0x00de40e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x5b0) + 0x18))(*(long **)(this + 0x5b0),0);
  return;
}

