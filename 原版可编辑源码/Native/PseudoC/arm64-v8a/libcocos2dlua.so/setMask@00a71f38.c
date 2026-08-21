
/* fairygui::GComponent::setMask(cocos2d::Node*, bool) */

void __thiscall fairygui::GComponent::setMask(GComponent *this,Node *param_1,bool param_2)

{
  long *plVar1;
  GObject *pGVar2;
  long lVar3;
  
  pGVar2 = *(GObject **)(this + 0x260);
  if (pGVar2 != (GObject *)0x0) {
    pGVar2[0x9a] = (GObject)0x0;
    childStateChanged(this,pGVar2);
    (**(code **)(**(long **)(this + 0x260) + 0x70))();
    cocos2d::Ref::release(*(Ref **)(this + 0x260));
    *(undefined8 *)(this + 0x260) = 0;
  }
  if (param_1 == (Node *)0x0) {
    FUIContainer::setStencil(*(FUIContainer **)(this + 0xa8),(Node *)0x0);
    return;
  }
  plVar1 = *(long **)(this + 0x1e0);
  do {
    if (plVar1 == *(long **)(this + 0x1e8)) goto LAB_00a72028;
    lVar3 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (*(Node **)(lVar3 + 0xa8) != param_1);
  *(long *)(this + 0x260) = lVar3;
  lVar3 = (**(code **)(*(long *)param_1 + 0x260))(param_1);
  if (lVar3 != 0) {
    plVar1 = (long *)(**(code **)(*(long *)param_1 + 0x260))(param_1);
                    /* try { // try from 00a72004 to 00b7200b has its CatchHandler @ 00a72040 */
    (**(code **)(*plVar1 + 0x280))(plVar1,param_1,0);
  }
  plVar1 = *(long **)(this + 0x260);
  *(undefined1 *)((long)plVar1 + 0x9a) = 1;
                    /* try { // try from 00a7201c to 00b72023 has its CatchHandler @ 00a72038 */
  (**(code **)(*plVar1 + 0x70))();
                    /* try { // try from 00a72024 to 00b72137 has its CatchHandler @ 00a71a2c */
  cocos2d::Ref::retain(*(Ref **)(this + 0x260));
LAB_00a72028:
  FUIContainer::setStencil(*(FUIContainer **)(this + 0xa8),param_1);
                    /* catch() { ... } // from try @ 00a71d80 with catch @ 00a72038
                       catch() { ... } // from try @ 00a7201c with catch @ 00a72038 */
                    /* catch() { ... } // from try @ 00a71d60 with catch @ 00a7203c */
                    /* catch() { ... } // from try @ 00a71c6c with catch @ 00a72040
                       catch() { ... } // from try @ 00a72004 with catch @ 00a72040 */
                    /* catch() { ... } // from try @ 00a71d44 with catch @ 00a72044 */
  FUIContainer::setAlphaThreshold(*(FUIContainer **)(this + 0xa8),0.05);
                    /* catch() { ... } // from try @ 00a71c50 with catch @ 00a72048 */
  FUIContainer::setInverted(*(FUIContainer **)(this + 0xa8),param_2);
  return;
}

