
ulong FUN_014a9220(undefined8 param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 local_50;
  ulong *puStack_48;
  
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  iVar3 = (int)param_1 + -5;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  local_50 = param_1;
  puStack_48 = param_2;
  FUN_014aae74(param_3,param_2,&local_50,1,iVar3);
  uVar5 = *param_2;
  if (iVar3 == 0) {
    uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb);
  }
  else {
    plVar4 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                       ((ulong)*(byte *)((uVar5 & 0xffffffff00000000 | 10) +
                                        (ulong)*(uint *)(uVar5 - 1)) & 0xf8));
    uVar5 = (**(code **)(*plVar4 + 0x98))(plVar4,param_2,&local_50,iVar3);
    uVar5 = -(uVar5 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar5 & 0xffffffff) << 1;
  }
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  return uVar5;
}

