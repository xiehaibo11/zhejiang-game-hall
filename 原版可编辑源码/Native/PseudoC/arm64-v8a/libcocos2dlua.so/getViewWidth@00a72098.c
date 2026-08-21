
/* fairygui::GComponent::getViewWidth() const */

float __thiscall fairygui::GComponent::getViewWidth(GComponent *this)

{
  if (*(long *)(this + 0x230) != 0) {
    return *(float *)(*(long *)(this + 0x230) + 100);
  }
                    /* catch() { ... } // from try @ 00a71b0c with catch @ 00a720b4
                       catch() { ... } // from try @ 00a71f2c with catch @ 00a720b4 */
                    /* catch() { ... } // from try @ 00a71cfc with catch @ 00a720b8 */
                    /* catch() { ... } // from try @ 00a71c08 with catch @ 00a720bc */
  return (*(float *)(this + 200) - *(float *)(this + 0x238)) - *(float *)(this + 0x240);
}

