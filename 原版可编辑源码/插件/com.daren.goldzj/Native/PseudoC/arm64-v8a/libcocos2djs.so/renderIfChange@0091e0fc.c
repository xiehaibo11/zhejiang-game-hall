
/* cocos2d::LabelRenderer::renderIfChange() */

void __thiscall cocos2d::LabelRenderer::renderIfChange(LabelRenderer *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  EffectVariant *pEVar4;
  basic_string local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0x10);
  if (plVar2 != (long *)0x0) {
    if ((**(uint **)(this + 0x20) & 6) == 0) {
      if ((**(uint **)(this + 0x20) & 1) != 0) {
        getString();
        if (((((*(LabelLayout **)(this + 0x10))[0x79] != (LabelLayout)0x0) &&
             (LabelLayout::setString(*(LabelLayout **)(this + 0x10),local_40,true),
             *(long *)(this + 0x10) != 0)) && (*(long *)(this + 0x38) != 0)) &&
           ((*(NodeProxy **)(this + 0x30) != (NodeProxy *)0x0 &&
            (lVar3 = renderer::NodeProxy::getAssembler(*(NodeProxy **)(this + 0x30)), lVar3 != 0))))
        {
          pEVar4 = (EffectVariant *)renderer::NodeProxy::getAssembler(*(NodeProxy **)(this + 0x30));
          LabelLayout::fillAssembler(*(CustomAssembler **)(this + 0x10),pEVar4);
        }
        if (((byte)local_40[0] & 1) != 0) {
          operator_delete(local_30);
        }
      }
    }
    else {
      *(undefined8 *)(this + 0x10) = 0;
      (**(code **)(*plVar2 + 8))();
      genStringLayout(this);
      if (((*(long *)(this + 0x10) != 0) && (*(long *)(this + 0x38) != 0)) &&
         ((*(NodeProxy **)(this + 0x30) != (NodeProxy *)0x0 &&
          (lVar3 = renderer::NodeProxy::getAssembler(*(NodeProxy **)(this + 0x30)), lVar3 != 0)))) {
        pEVar4 = (EffectVariant *)renderer::NodeProxy::getAssembler(*(NodeProxy **)(this + 0x30));
        LabelLayout::fillAssembler(*(CustomAssembler **)(this + 0x10),pEVar4);
      }
    }
    **(undefined4 **)(this + 0x20) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

