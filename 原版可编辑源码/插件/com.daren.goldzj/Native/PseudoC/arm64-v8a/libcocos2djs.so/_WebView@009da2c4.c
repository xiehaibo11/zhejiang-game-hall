
/* cocos2d::WebView::~WebView() */

void __thiscall cocos2d::WebView::~WebView(WebView *this)

{
                    /* try { // try from 009da2cc to 00ada2db has its CatchHandler @ 009da408 */
  ~WebView(this);
                    /* try { // try from 009da2e0 to 00ada2e7 has its CatchHandler @ 009da444 */
  operator_delete(this);
  return;
}

