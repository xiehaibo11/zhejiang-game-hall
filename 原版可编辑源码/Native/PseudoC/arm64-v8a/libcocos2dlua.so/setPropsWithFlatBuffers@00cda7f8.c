
/* non-virtual thunk to cocostudio::ComAudioReader::setPropsWithFlatBuffers(cocos2d::Node*,
   flatbuffers::Table const*) */

void __thiscall
cocostudio::ComAudioReader::setPropsWithFlatBuffers
          (ComAudioReader *this,Node *param_1,Table *param_2)

{
  long *plVar1;
  Table *pTVar2;
  ulong uVar3;
  
  plVar1 = (long *)NodeReader::getInstance();
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) ||
     (uVar3 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4), uVar3 == 0)) {
    pTVar2 = (Table *)0x0;
  }
  else {
    pTVar2 = param_2 + uVar3 + *(uint *)(param_2 + uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00cda854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1,pTVar2);
  return;
}

