
/* cocostudio::Node3DReader::setPropsWithFlatBuffers(cocos2d::Node*, flatbuffers::Table const*) */

void __thiscall
cocostudio::Node3DReader::setPropsWithFlatBuffers(Node3DReader *this,Node *param_1,Table *param_2)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  Table *pTVar4;
  ulong uVar5;
  Table *pTVar6;
  undefined4 uVar7;
  Table *pTVar8;
  Table *pTVar9;
  Vec3 aVStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pTVar6 = param_2 + -(long)*(int *)param_2;
  uVar1 = *(ushort *)pTVar6;
  if ((uVar1 < 7) || ((ulong)*(ushort *)(pTVar6 + 6) == 0)) {
    pTVar4 = (Table *)0x0;
  }
  else {
    pTVar4 = param_2 + *(ushort *)(pTVar6 + 6);
  }
  if ((uVar1 < 9) || ((ulong)*(ushort *)(pTVar6 + 8) == 0)) {
    pTVar9 = (Table *)0x0;
  }
  else {
    pTVar9 = param_2 + *(ushort *)(pTVar6 + 8);
  }
  if ((uVar1 < 0xb) || ((ulong)*(ushort *)(pTVar6 + 10) == 0)) {
    pTVar8 = (Table *)0x0;
  }
  else {
    pTVar8 = param_2 + *(ushort *)(pTVar6 + 10);
  }
  if ((uVar1 < 0xd) || ((ulong)*(ushort *)(pTVar6 + 0xc) == 0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(param_2 + *(ushort *)(pTVar6 + 0xc));
  }
  if (pTVar4 != (Table *)0x0) {
    cocos2d::Vec3::Vec3(aVStack_58,*(float *)pTVar4,*(float *)(pTVar4 + 4),*(float *)(pTVar4 + 8));
    (**(code **)(*(long *)param_1 + 0xf8))(param_1,aVStack_58);
  }
  if (pTVar9 != (Table *)0x0) {
    cocos2d::Vec3::Vec3(aVStack_58,*(float *)pTVar9,*(float *)(pTVar9 + 4),*(float *)(pTVar9 + 8));
    (**(code **)(*(long *)param_1 + 400))(param_1,aVStack_58);
  }
  if (pTVar8 != (Table *)0x0) {
    (**(code **)(*(long *)param_1 + 0x50))(*(undefined4 *)pTVar8,param_1);
    (**(code **)(*(long *)param_1 + 0x60))(*(undefined4 *)(pTVar8 + 4),param_1);
    (**(code **)(*(long *)param_1 + 0x70))(*(undefined4 *)(pTVar8 + 8),param_1);
  }
  (**(code **)(*(long *)param_1 + 0x4f0))(param_1,uVar7,1);
  plVar3 = (long *)NodeReader::getInstance();
  if ((*(ushort *)(param_2 + -(long)*(int *)param_2) < 5) ||
     (uVar5 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 4), uVar5 == 0)) {
    pTVar6 = (Table *)0x0;
  }
  else {
    pTVar6 = param_2 + uVar5 + *(uint *)(param_2 + uVar5);
  }
  (**(code **)(*plVar3 + 0x18))(plVar3,param_1,pTVar6);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

