
/* non-virtual thunk to BoneNodeReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table
   const*) */

void __thiscall
BoneNodeReader::setPropsWithFlatBuffers(BoneNodeReader *this,Node *param_1,Table *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = 0;
  if ((6 < *(ushort *)(param_2 + -(long)*(int *)param_2)) &&
     (uVar2 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 6), uVar2 != 0)) {
    uVar3 = *(undefined4 *)(param_2 + uVar2);
  }
  (**(code **)(*(long *)param_1 + 0x5a0))(uVar3,param_1);
  if (((8 < *(ushort *)(param_2 + -(long)*(int *)param_2)) &&
      (uVar2 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 8), uVar2 != 0)) &&
     (param_2 + uVar2 != (Table *)0x0)) {
    local_40 = *(undefined8 *)(param_2 + uVar2);
    (**(code **)(*(long *)param_1 + 0x580))(param_1,&local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

