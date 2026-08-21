
/* non-virtual thunk to TabHeaderReader::createNodeWithFlatBuffers(flatbuffers::Table const*) */

undefined8 __thiscall
TabHeaderReader::createNodeWithFlatBuffers(TabHeaderReader *this,Table *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  Table *pTVar3;
  ulong uVar4;
  
  uVar1 = cocos2d::ui::TabHeader::create();
  (**(code **)(*(long *)(this + -0x28) + 0x18))(this + -0x28,uVar1,param_1);
  plVar2 = (long *)cocostudio::WidgetReader::getInstance();
  if ((*(ushort *)(param_1 + -(long)*(int *)param_1) < 5) ||
     (uVar4 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 4), uVar4 == 0)) {
    pTVar3 = (Table *)0x0;
  }
  else {
    pTVar3 = param_1 + uVar4 + *(uint *)(param_1 + uVar4);
  }
  (**(code **)(*plVar2 + 0x30))(plVar2,uVar1,pTVar3);
  return uVar1;
}

