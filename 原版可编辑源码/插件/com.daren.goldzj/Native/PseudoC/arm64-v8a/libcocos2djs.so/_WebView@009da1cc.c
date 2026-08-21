
/* cocos2d::WebView::~WebView() */

void __thiscall cocos2d::WebView::~WebView(WebView *this)

{
  WebView *pWVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__WebView_01c6bd48;
  if (*(long **)(this + 0xd0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xd0) + 8))();
  }
  pWVar1 = *(WebView **)(this + 0xc0);
                    /* try { // try from 009da208 to 00ada20f has its CatchHandler @ 009da424 */
  *(undefined8 *)(this + 0xd0) = 0;
                    /* try { // try from 009da210 to 00ada217 has its CatchHandler @ 009da420 */
  if (this + 0xa0 == pWVar1) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x20);
LAB_009da22c:
    (*pcVar2)();
  }
  else if (pWVar1 != (WebView *)0x0) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x28);
                    /* try { // try from 009da220 to 00ada277 has its CatchHandler @ 009da434 */
    goto LAB_009da22c;
  }
  pWVar1 = *(WebView **)(this + 0x90);
  if (this + 0x70 == pWVar1) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x20);
LAB_009da258:
    (*pcVar2)();
  }
  else if (pWVar1 != (WebView *)0x0) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x28);
    goto LAB_009da258;
  }
  pWVar1 = *(WebView **)(this + 0x60);
  if (this + 0x40 == pWVar1) {
                    /* try { // try from 009da280 to 00ada2b3 has its CatchHandler @ 009da444 */
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x20);
LAB_009da284:
    (*pcVar2)();
  }
  else if (pWVar1 != (WebView *)0x0) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x28);
    goto LAB_009da284;
  }
  pWVar1 = *(WebView **)(this + 0x30);
  if (this + 0x10 == pWVar1) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x20);
  }
  else {
    if (pWVar1 == (WebView *)0x0) goto LAB_009da2b4;
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x28);
  }
  (*pcVar2)();
LAB_009da2b4:
  Ref::~Ref((Ref *)this);
  return;
}

