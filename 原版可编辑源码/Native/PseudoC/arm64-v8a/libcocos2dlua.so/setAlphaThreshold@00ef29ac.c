
/* cocos2d::ClippingNode::setAlphaThreshold(float) */

void __thiscall cocos2d::ClippingNode::setAlphaThreshold(ClippingNode *this,float param_1)

{
  float fVar1;
  
  if (((param_1 == 1.0) &&
      (fVar1 = (float)StencilStateManager::getAlphaThreshold
                                (*(StencilStateManager **)(this + 0x308)), fVar1 != 1.0)) &&
     (*(long *)(this + 0x2f8) != 0)) {
    FUN_00ef28d0(*(long *)(this + 0x2f8),*(undefined8 *)(this + 0x300));
  }
  StencilStateManager::setAlphaThreshold(*(StencilStateManager **)(this + 0x308),param_1);
  return;
}

