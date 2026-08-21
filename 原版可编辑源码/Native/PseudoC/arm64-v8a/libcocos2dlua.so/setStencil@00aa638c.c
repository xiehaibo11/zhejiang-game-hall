
/* fairygui::FUIContainer::setStencil(cocos2d::Node*) */

void __thiscall fairygui::FUIContainer::setStencil(FUIContainer *this,Node *param_1)

{
  Node *pNVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  StencilClippingSupport *this_00;
  
                    /* try { // try from 00aa639c to 00ba63b3 has its CatchHandler @ 00aa64ec */
  this_00 = *(StencilClippingSupport **)(this + 0x308);
  if (this_00 == (StencilClippingSupport *)0x0) {
    if (param_1 == (Node *)0x0) {
      return;
    }
    this_00 = operator_new(0x130);
    StencilClippingSupport::StencilClippingSupport(this_00);
    *(StencilClippingSupport **)(this + 0x308) = this_00;
  }
  pNVar1 = *(Node **)this_00;
  if (pNVar1 != param_1) {
                    /* try { // try from 00aa63d8 to 00ba6403 has its CatchHandler @ 00aa64c8 */
    if ((pNVar1 != (Node *)0x0) &&
       (uVar2 = (**(code **)(*(long *)pNVar1 + 0x318))(), (uVar2 & 1) != 0)) {
      (**(code **)(*(long *)**(undefined8 **)(this + 0x308) + 0x338))();
                    /* try { // try from 00aa6404 to 00ba642b has its CatchHandler @ 00aa62e4 */
      (**(code **)(*(long *)**(undefined8 **)(this + 0x308) + 0x330))();
    }
    puVar4 = *(undefined8 **)(this + 0x308);
    if ((Ref *)*puVar4 != (Ref *)0x0) {
      cocos2d::Ref::release((Ref *)*puVar4);
      puVar4 = *(undefined8 **)(this + 0x308);
      *puVar4 = 0;
    }
    *puVar4 = param_1;
                    /* try { // try from 00aa642c to 00ba643f has its CatchHandler @ 00aa64ec */
    if ((((param_1 != (Node *)0x0) &&
         (cocos2d::Ref::retain((Ref *)param_1), **(long **)(this + 0x308) != 0)) &&
        (uVar2 = (**(code **)(*(long *)this + 0x318))(this), (uVar2 & 1) != 0)) &&
       ((**(code **)(*(long *)**(undefined8 **)(this + 0x308) + 800))(),
       this[0x1fc] != (FUIContainer)0x0)) {
      (**(code **)(*(long *)**(undefined8 **)(this + 0x308) + 0x328))();
    }
    if ((Node *)**(undefined8 **)(this + 0x308) != (Node *)0x0) {
      uVar3 = cocos2d::Node::getGLProgram((Node *)**(undefined8 **)(this + 0x308));
      *(undefined8 *)(*(long *)(this + 0x308) + 0x30) = uVar3;
    }
  }
  return;
}

