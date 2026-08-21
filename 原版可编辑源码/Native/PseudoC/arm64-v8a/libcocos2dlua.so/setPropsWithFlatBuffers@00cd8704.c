
/* cocostudio::ParticleReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table const*) */

void __thiscall
cocostudio::ParticleReader::setPropsWithFlatBuffers
          (ParticleReader *this,Node *param_1,Table *param_2)

{
  long lVar1;
  long *plVar2;
  Table *pTVar3;
  ulong uVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1 == (Node *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = (long *)__dynamic_cast(param_1,&cocos2d::Node::typeinfo,
                                    &cocos2d::ParticleSystemQuad::typeinfo,0);
  }
  if ((((8 < *(ushort *)(param_2 + -(long)*(int *)param_2)) &&
       (uVar4 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 8), uVar4 != 0)) &&
      (plVar2 != (long *)0x0)) && (param_2 + uVar4 != (Table *)0x0)) {
    local_40 = *(undefined8 *)(param_2 + uVar4);
    (**(code **)(*plVar2 + 0x680))(plVar2,&local_40);
  }
  plVar2 = (long *)NodeReader::getInstance();
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) ||
     (uVar4 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4), uVar4 == 0)) {
    pTVar3 = (Table *)0x0;
  }
  else {
    pTVar3 = param_2 + uVar4 + *(uint *)(param_2 + uVar4);
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,param_1,pTVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

