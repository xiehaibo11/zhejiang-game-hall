
/* cocostudio::ActionObject::setUnitTime(float) */

void __thiscall cocostudio::ActionObject::setUnitTime(ActionObject *this,float param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x28);
  puVar2 = *(undefined8 **)(this + 0x30);
  *(float *)(this + 0x5c) = param_1;
  if (puVar1 != puVar2) {
    ActionNode::setUnitTime((ActionNode *)*puVar1,param_1);
    while (puVar1 = puVar1 + 1, puVar1 != puVar2) {
      ActionNode::setUnitTime((ActionNode *)*puVar1,*(float *)(this + 0x5c));
    }
  }
  return;
}

