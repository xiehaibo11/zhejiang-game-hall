
/* fairygui::GComponent::setHitArea(fairygui::IHitTest*) */

void __thiscall fairygui::GComponent::setHitArea(GComponent *this,IHitTest *param_1)

{
  IHitTest *pIVar1;
  
  pIVar1 = *(IHitTest **)(this + 0x268);
  if (pIVar1 != param_1) {
    if (pIVar1 != (IHitTest *)0x0) {
      operator_delete(pIVar1);
    }
    *(IHitTest **)(this + 0x268) = param_1;
  }
                    /* catch() { ... } // from try @ 00a71d20 with catch @ 00a72090 */
                    /* catch() { ... } // from try @ 00a71c2c with catch @ 00a72094 */
  return;
}

