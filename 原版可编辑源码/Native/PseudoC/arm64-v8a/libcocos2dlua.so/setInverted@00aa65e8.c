
/* fairygui::FUIContainer::setInverted(bool) */

void __thiscall fairygui::FUIContainer::setInverted(FUIContainer *this,bool param_1)

{
  StencilClippingSupport *this_00;
  
  this_00 = *(StencilClippingSupport **)(this + 0x308);
  if (this_00 == (StencilClippingSupport *)0x0) {
    this_00 = operator_new(0x130);
    StencilClippingSupport::StencilClippingSupport(this_00);
    *(StencilClippingSupport **)(this + 0x308) = this_00;
  }
  cocos2d::StencilStateManager::setInverted(*(StencilStateManager **)(this_00 + 8),param_1);
  return;
}

