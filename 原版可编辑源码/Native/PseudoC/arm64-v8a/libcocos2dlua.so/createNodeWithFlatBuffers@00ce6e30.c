
/* SkeletonNodeReader::createNodeWithFlatBuffers(flatbuffers::Table const*) */

undefined8 __thiscall
SkeletonNodeReader::createNodeWithFlatBuffers(SkeletonNodeReader *this,Table *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  Table *pTVar3;
  ulong uVar4;
  
  uVar1 = cocostudio::timeline::SkeletonNode::create();
  (**(code **)(*(long *)this + 0x18))(this,uVar1,param_1);
  plVar2 = (long *)cocostudio::NodeReader::getInstance();
  if ((*(ushort *)(param_1 + -(long)*(int *)param_1) < 5) ||
     (uVar4 = (ulong)*(ushort *)(param_1 + -(long)*(int *)param_1 + 4), uVar4 == 0)) {
    pTVar3 = (Table *)0x0;
  }
  else {
    pTVar3 = param_1 + uVar4 + *(uint *)(param_1 + uVar4);
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,uVar1,pTVar3);
  return uVar1;
}

