
/* cocos2d::experimental::ui::WebView::setVisible(bool) */

void __thiscall cocos2d::experimental::ui::WebView::setVisible(WebView *this,bool param_1)

{
  ulong uVar1;
  
                    /* try { // try from 00de3ffc to 00ee4007 has its CatchHandler @ 00de4990 */
  Node::setVisible((Node *)this,param_1);
  if ((param_1) && (uVar1 = (**(code **)(*(long *)this + 0x318))(this), (uVar1 & 1) == 0)) {
    return;
  }
                    /* try { // try from 00de403c to 00ee403f has its CatchHandler @ 00de4890 */
                    /* WARNING: Could not recover jumptable at 0x00de4040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x5b0) + 0x18))(*(long **)(this + 0x5b0),param_1);
  return;
}

