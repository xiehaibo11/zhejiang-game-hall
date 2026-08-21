
/* fairygui::GComponent::setViewWidth(float) */

void __thiscall fairygui::GComponent::setViewWidth(GComponent *this,float param_1)

{
  if (*(ScrollPane **)(this + 0x230) != (ScrollPane *)0x0) {
    ScrollPane::setViewWidth(*(ScrollPane **)(this + 0x230),param_1);
    return;
  }
                    /* catch() { ... } // from try @ 00a71aec with catch @ 00a720dc */
                    /* catch() { ... } // from try @ 00a71b84 with catch @ 00a720e0
                       catch() { ... } // from try @ 00a71ef4 with catch @ 00a720e0 */
                    /* catch() { ... } // from try @ 00a71cd8 with catch @ 00a720e4 */
                    /* catch() { ... } // from try @ 00a71be4 with catch @ 00a720e8 */
  GObject::setSize((GObject *)this,*(float *)(this + 0x238) + param_1 + *(float *)(this + 0x240),
                   *(float *)(this + 0xd4),false);
  return;
}

