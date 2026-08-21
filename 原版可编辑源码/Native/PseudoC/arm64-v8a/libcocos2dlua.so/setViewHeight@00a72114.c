
/* fairygui::GComponent::setViewHeight(float) */

void __thiscall fairygui::GComponent::setViewHeight(GComponent *this,float param_1)

{
                    /* catch() { ... } // from try @ 00a71bc0 with catch @ 00a72114 */
                    /* catch() { ... } // from try @ 00a71b44 with catch @ 00a72118 */
  if (*(ScrollPane **)(this + 0x230) != (ScrollPane *)0x0) {
                    /* catch() { ... } // from try @ 00a71aac with catch @ 00a7211c */
    ScrollPane::setViewHeight(*(ScrollPane **)(this + 0x230),param_1);
    return;
  }
  GObject::setSize((GObject *)this,*(float *)(this + 0xd0),
                   *(float *)(this + 0x23c) + param_1 + *(float *)(this + 0x244),false);
  return;
}

