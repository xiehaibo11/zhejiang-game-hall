
/* cocos2d::LabelRenderer::doRender() */

void __thiscall cocos2d::LabelRenderer::doRender(LabelRenderer *this)

{
  long lVar1;
  EffectVariant *pEVar2;
  
  if ((((*(long *)(this + 0x10) != 0) && (*(long *)(this + 0x38) != 0)) &&
      (*(NodeProxy **)(this + 0x30) != (NodeProxy *)0x0)) &&
     (lVar1 = renderer::NodeProxy::getAssembler(*(NodeProxy **)(this + 0x30)), lVar1 != 0)) {
    pEVar2 = (EffectVariant *)renderer::NodeProxy::getAssembler(*(NodeProxy **)(this + 0x30));
    LabelLayout::fillAssembler(*(CustomAssembler **)(this + 0x10),pEVar2);
    return;
  }
  return;
}

