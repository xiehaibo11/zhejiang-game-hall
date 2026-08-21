
/* fairygui::GComponent::isChildInView(fairygui::GObject*) */

ulong __thiscall fairygui::GComponent::isChildInView(GComponent *this,GObject *param_1)

{
  ulong uVar1;
  
                    /* try { // try from 00a717f4 to 00b71827 has its CatchHandler @ 00a718f4 */
  if (*(ScrollPane **)(this + 0x230) == (ScrollPane *)0x0) {
    uVar1 = FUIContainer::isClippingEnabled(*(FUIContainer **)(this + 0xa8));
    if ((uVar1 & 1) == 0) {
      uVar1 = 1;
    }
    else {
                    /* try { // try from 00a71828 to 00b7183b has its CatchHandler @ 00a718c0 */
                    /* try { // try from 00a71840 to 00b71873 has its CatchHandler @ 00a718c4 */
      if (((*(float *)(param_1 + 0xc0) + *(float *)(param_1 + 200) < 0.0) ||
          (*(float *)(this + 200) < *(float *)(param_1 + 0xc0))) ||
         (*(float *)(param_1 + 0xc4) + *(float *)(param_1 + 0xcc) < 0.0)) {
        uVar1 = 0;
      }
      else {
        uVar1 = (ulong)(*(float *)(param_1 + 0xc4) <= *(float *)(this + 0xcc));
                    /* try { // try from 00a71874 to 00b7190f has its CatchHandler @ 00a7170c */
      }
    }
    return uVar1;
  }
  uVar1 = ScrollPane::isChildInView(*(ScrollPane **)(this + 0x230),param_1);
  return uVar1;
}

