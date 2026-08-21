
/* cocostudio::ActionNode::clearAllFrame() */

void __thiscall cocostudio::ActionNode::clearAllFrame(ActionNode *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar2 = *(undefined8 **)(this + 0x58);
  for (puVar1 = *(undefined8 **)(this + 0x50); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    plVar4 = (long *)*puVar1;
    puVar6 = (undefined8 *)*plVar4;
    puVar3 = (undefined8 *)plVar4[1];
    if (puVar6 != puVar3) {
      do {
        puVar5 = puVar6 + 1;
        cocos2d::Ref::release((Ref *)*puVar6);
        puVar6 = puVar5;
      } while (puVar3 != puVar5);
      puVar6 = (undefined8 *)*plVar4;
    }
    plVar4[1] = (long)puVar6;
  }
  return;
}

