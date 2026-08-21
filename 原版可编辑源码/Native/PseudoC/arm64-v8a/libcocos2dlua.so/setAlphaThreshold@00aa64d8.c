
/* fairygui::FUIContainer::setAlphaThreshold(float) */

void __thiscall fairygui::FUIContainer::setAlphaThreshold(FUIContainer *this,float param_1)

{
  long lVar1;
  StencilClippingSupport *this_00;
  float fVar2;
  
                    /* catch() { ... } // from try @ 00aa6324 with catch @ 00aa64dc */
  this_00 = *(StencilClippingSupport **)(this + 0x308);
                    /* catch() { ... } // from try @ 00aa639c with catch @ 00aa64ec
                       catch() { ... } // from try @ 00aa642c with catch @ 00aa64ec */
  if (this_00 == (StencilClippingSupport *)0x0) {
    this_00 = operator_new(0x130);
    StencilClippingSupport::StencilClippingSupport(this_00);
    *(StencilClippingSupport **)(this + 0x308) = this_00;
  }
  if ((param_1 == 1.0) &&
     (fVar2 = (float)cocos2d::StencilStateManager::getAlphaThreshold
                               (*(StencilStateManager **)(this_00 + 8)), fVar2 != 1.0)) {
    lVar1 = **(long **)(this + 0x308);
    if (lVar1 != 0) {
      FUN_00aa656c(lVar1,(*(long **)(this + 0x308))[6]);
    }
  }
                    /* try { // try from 00aa6540 to 00ba658b has its CatchHandler @ 00aa6540
                       catch() { ... } // from try @ 00aa6540 with catch @ 00aa6540
                       catch() { ... } // from try @ 00aa6590 with catch @ 00aa6540 */
  cocos2d::StencilStateManager::setAlphaThreshold
            (*(StencilStateManager **)(*(long *)(this + 0x308) + 8),param_1);
  return;
}

