
/* fairygui::GComponent::getViewHeight() const */

float __thiscall fairygui::GComponent::getViewHeight(GComponent *this)

{
                    /* catch() { ... } // from try @ 00a71b68 with catch @ 00a720ec */
                    /* catch() { ... } // from try @ 00a71ad0 with catch @ 00a720f0 */
  if (*(long *)(this + 0x230) != 0) {
    return *(float *)(*(long *)(this + 0x230) + 0x68);
  }
                    /* catch() { ... } // from try @ 00a71cb4 with catch @ 00a72110 */
  return (*(float *)(this + 0xcc) - *(float *)(this + 0x23c)) - *(float *)(this + 0x244);
}

