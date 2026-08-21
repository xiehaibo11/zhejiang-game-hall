
/* non-virtual thunk to cocos2d::experimental::ui::WebView::~WebView() */

void __thiscall cocos2d::experimental::ui::WebView::~WebView(WebView *this)

{
  ~WebView(this + -0x318);
                    /* try { // try from 00de3e84 to 00ee3e9f has its CatchHandler @ 00de4ac0 */
  operator_delete(this + -0x318);
  return;
}

