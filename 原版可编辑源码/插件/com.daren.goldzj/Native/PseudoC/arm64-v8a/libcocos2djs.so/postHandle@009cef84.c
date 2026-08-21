
/* cocos2d::renderer::MaskAssembler::postHandle(cocos2d::renderer::NodeProxy*,
   cocos2d::renderer::ModelBatcher*, cocos2d::renderer::Scene*) */

void cocos2d::renderer::MaskAssembler::postHandle
               (NodeProxy *param_1,ModelBatcher *param_2,Scene *param_3)

{
  StencilManager *this;
  EffectVariant *pEVar1;
  
                    /* catch() { ... } // from try @ 009ced58 with catch @ 009cef98 */
                    /* catch() { ... } // from try @ 009ced4c with catch @ 009cef9c */
  ModelBatcher::flush((ModelBatcher *)param_3);
                    /* catch() { ... } // from try @ 009ced2c with catch @ 009cefa0 */
  ModelBatcher::flushIA((ModelBatcher *)param_3);
                    /* catch() { ... } // from try @ 009ced64 with catch @ 009cefb0 */
  if (*(IARenderData **)(param_1 + 0x48) == *(IARenderData **)(param_1 + 0x40)) {
    pEVar1 = (EffectVariant *)0x0;
  }
  else {
    pEVar1 = (EffectVariant *)Assembler::IARenderData::getEffect(*(IARenderData **)(param_1 + 0x40))
    ;
  }
  ModelBatcher::setCurrentEffect((ModelBatcher *)param_3,pEVar1);
  if (StencilManager::_instance == (StencilManager *)0x0) {
    this = operator_new(0x28);
    StencilManager::StencilManager(this);
    StencilManager::_instance = this;
  }
  StencilManager::exitMask(StencilManager::_instance);
  return;
}

