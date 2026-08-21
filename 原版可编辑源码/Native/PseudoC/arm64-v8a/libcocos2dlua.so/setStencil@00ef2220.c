
/* cocos2d::ClippingNode::setStencil(cocos2d::Node*) */

void __thiscall cocos2d::ClippingNode::setStencil(ClippingNode *this,Node *param_1)

{
  Node *pNVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  pNVar1 = *(Node **)(this + 0x2f8);
  if (pNVar1 != param_1) {
    if (pNVar1 != (Node *)0x0) {
      uVar2 = (**(code **)(*(long *)pNVar1 + 0x318))();
      if ((uVar2 & 1) != 0) {
        (**(code **)(**(long **)(this + 0x2f8) + 0x338))();
        (**(code **)(**(long **)(this + 0x2f8) + 0x330))();
      }
      if (*(Ref **)(this + 0x2f8) != (Ref *)0x0) {
        Ref::release(*(Ref **)(this + 0x2f8));
        *(undefined8 *)(this + 0x2f8) = 0;
      }
    }
    *(Node **)(this + 0x2f8) = param_1;
    if ((param_1 != (Node *)0x0) && (Ref::retain((Ref *)param_1), *(long *)(this + 0x2f8) != 0)) {
      uVar2 = (**(code **)(*(long *)this + 0x318))(this);
      if (((uVar2 & 1) != 0) &&
         ((**(code **)(**(long **)(this + 0x2f8) + 800))(), this[0x1fc] != (ClippingNode)0x0)) {
        (**(code **)(**(long **)(this + 0x2f8) + 0x328))();
      }
      if (*(Node **)(this + 0x2f8) != (Node *)0x0) {
        uVar3 = Node::getGLProgram(*(Node **)(this + 0x2f8));
        *(undefined8 *)(this + 0x300) = uVar3;
      }
    }
  }
  return;
}

