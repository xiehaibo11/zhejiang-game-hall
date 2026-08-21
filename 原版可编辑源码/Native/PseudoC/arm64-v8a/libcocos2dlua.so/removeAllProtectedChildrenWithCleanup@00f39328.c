
/* cocos2d::ProtectedNode::removeAllProtectedChildrenWithCleanup(bool) */

void __thiscall
cocos2d::ProtectedNode::removeAllProtectedChildrenWithCleanup(ProtectedNode *this,bool param_1)

{
  ProtectedNode PVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = *(undefined8 **)(this + 0x2f8);
  puVar4 = *(undefined8 **)(this + 0x300);
  if (puVar2 != puVar4) {
    PVar1 = this[0x1f8];
    while( true ) {
      if (PVar1 != (ProtectedNode)0x0) {
        (**(code **)(*(long *)*puVar2 + 0x338))();
        (**(code **)(*(long *)*puVar2 + 0x330))();
      }
      if (param_1) {
        (**(code **)(*(long *)*puVar2 + 0x340))();
      }
      (**(code **)(*(long *)*puVar2 + 600))((long *)*puVar2,0);
      if (puVar4 == puVar2 + 1) break;
      PVar1 = this[0x1f8];
      puVar2 = puVar2 + 1;
    }
    puVar2 = *(undefined8 **)(this + 0x2f8);
    puVar4 = *(undefined8 **)(this + 0x300);
    if (puVar2 != puVar4) {
      do {
        puVar3 = puVar2 + 1;
        Ref::release((Ref *)*puVar2);
        puVar2 = puVar3;
      } while (puVar4 != puVar3);
      puVar2 = *(undefined8 **)(this + 0x2f8);
    }
  }
  *(undefined8 **)(this + 0x300) = puVar2;
  return;
}

