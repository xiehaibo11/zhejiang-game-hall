
/* fairygui::GComponent::setupScroll(fairygui::ByteBuffer*) */

void __thiscall fairygui::GComponent::setupScroll(GComponent *this,ByteBuffer *param_1)

{
  ScrollPane *this_00;
  
  this_00 = operator_new(0x138);
  ScrollPane::ScrollPane(this_00,this);
  *(ScrollPane **)(this + 0x230) = this_00;
  ScrollPane::setup(this_00,param_1);
  return;
}

