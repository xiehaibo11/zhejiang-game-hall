
/* cocos2d::experimental::ui::WebView::~WebView() */

void __thiscall cocos2d::experimental::ui::WebView::~WebView(WebView *this)

{
  WebView *pWVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__WebView_016e5240;
  *(undefined ***)(this + 0x318) = &PTR__WebView_016e58e8;
  if (*(long **)(this + 0x5b0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x5b0) + 8))();
  }
  pWVar1 = *(WebView **)(this + 0x5a0);
  *(undefined8 *)(this + 0x5b0) = 0;
  if (this + 0x580 == pWVar1) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x20);
LAB_00de3da8:
                    /* try { // try from 00de3da8 to 00ee3dcb has its CatchHandler @ 00de2ff0 */
    (*pcVar2)();
  }
  else if (pWVar1 != (WebView *)0x0) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x28);
    goto LAB_00de3da8;
  }
  pWVar1 = *(WebView **)(this + 0x570);
  if (this + 0x550 == pWVar1) {
                    /* try { // try from 00de3dcc to 00ee3dd7 has its CatchHandler @ 00de49d4 */
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x20);
LAB_00de3dd4:
    (*pcVar2)();
  }
  else if (pWVar1 != (WebView *)0x0) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x28);
    goto LAB_00de3dd4;
  }
  pWVar1 = *(WebView **)(this + 0x540);
  if (this + 0x520 == pWVar1) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x20);
LAB_00de3e00:
    (*pcVar2)();
  }
  else if (pWVar1 != (WebView *)0x0) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x28);
    goto LAB_00de3e00;
  }
                    /* try { // try from 00de3e04 to 00ee3e07 has its CatchHandler @ 00de49a4 */
  pWVar1 = *(WebView **)(this + 0x510);
  if (this + 0x4f0 == pWVar1) {
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x20);
  }
  else {
    if (pWVar1 == (WebView *)0x0) goto LAB_00de3e30;
    pcVar2 = *(code **)(*(long *)pWVar1 + 0x28);
                    /* try { // try from 00de3e20 to 00ee3e23 has its CatchHandler @ 00de48ac */
  }
  (*pcVar2)();
LAB_00de3e30:
  cocos2d::ui::Widget::~Widget((Widget *)this);
  return;
}

