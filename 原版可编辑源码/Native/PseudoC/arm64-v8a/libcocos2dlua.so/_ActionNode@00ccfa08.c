
/* cocostudio::ActionNode::~ActionNode() */

void __thiscall cocostudio::ActionNode::~ActionNode(ActionNode *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  *(undefined ***)this = &PTR__ActionNode_016ce2a8;
  if (*(Ref **)(this + 0x40) == (Ref *)0x0) {
    if (*(Ref **)(this + 0x38) == (Ref *)0x0) goto LAB_00ccfa60;
    cocos2d::Ref::release(*(Ref **)(this + 0x38));
  }
  else {
    cocos2d::Ref::release(*(Ref **)(this + 0x40));
    *(undefined8 *)(this + 0x40) = 0;
    if (*(Ref **)(this + 0x38) == (Ref *)0x0) goto LAB_00ccfa60;
    cocos2d::Ref::release(*(Ref **)(this + 0x38));
  }
  *(undefined8 *)(this + 0x38) = 0;
LAB_00ccfa60:
  if (*(Ref **)(this + 0x48) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x48));
  }
  puVar3 = *(undefined8 **)(this + 0x50);
  puVar1 = *(undefined8 **)(this + 0x58);
  if (puVar3 == puVar1) {
    *(undefined8 **)(this + 0x58) = puVar3;
  }
  else {
    do {
      plVar4 = (long *)*puVar3;
      puVar5 = (undefined8 *)*plVar4;
      puVar2 = (undefined8 *)plVar4[1];
      if (puVar5 == puVar2) {
        plVar4[1] = (long)puVar5;
        if (plVar4 != (long *)0x0) {
          plVar4[1] = (long)puVar5;
          goto joined_r0x00ccfafc;
        }
      }
      else {
        do {
          cocos2d::Ref::release((Ref *)*puVar5);
          puVar5 = puVar5 + 1;
        } while (puVar2 != puVar5);
        puVar5 = (undefined8 *)*plVar4;
        plVar4[1] = (long)puVar5;
        plVar4[1] = (long)puVar5;
joined_r0x00ccfafc:
        if (puVar5 != (undefined8 *)0x0) {
          plVar4[1] = (long)puVar5;
          operator_delete(puVar5);
        }
        operator_delete(plVar4);
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
    puVar3 = *(undefined8 **)(this + 0x50);
    *(undefined8 **)(this + 0x58) = puVar3;
  }
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x58) = puVar3;
    operator_delete(puVar3);
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

