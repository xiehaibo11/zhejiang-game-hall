
/* fairygui::GComponent::handleControllerChanged(fairygui::GController*) */

void __thiscall fairygui::GComponent::handleControllerChanged(GComponent *this,GController *param_1)

{
  GObject::handleControllerChanged((GObject *)this,param_1);
  if (*(ScrollPane **)(this + 0x230) != (ScrollPane *)0x0) {
    ScrollPane::handleControllerChanged(*(ScrollPane **)(this + 0x230),param_1);
    return;
  }
  return;
}

