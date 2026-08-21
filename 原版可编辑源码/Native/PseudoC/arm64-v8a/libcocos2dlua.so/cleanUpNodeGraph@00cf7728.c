
/* cocosbuilder::CCBReader::cleanUpNodeGraph(cocos2d::Node*) */

void __thiscall cocosbuilder::CCBReader::cleanUpNodeGraph(CCBReader *this,Node *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  (**(code **)(*(long *)param_1 + 0x300))(param_1,0);
  plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x240))(param_1);
  puVar1 = (undefined8 *)plVar2[1];
  for (puVar3 = (undefined8 *)*plVar2; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    cleanUpNodeGraph(this,(Node *)*puVar3);
  }
  return;
}

