
FrameStateDescriptor * FUN_01641618(Zone *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  FrameStateDescriptor *pFVar8;
  undefined4 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  long local_48;
  
  puVar6 = (undefined4 *)v8::internal::compiler::FrameStateInfoOf((Operator *)*param_2);
  uVar2 = *puVar6;
  uVar1 = *(undefined8 *)(puVar6 + 2);
  puVar6 = *(undefined4 **)(puVar6 + 4);
  plVar12 = param_2 + 4;
  plVar10 = plVar12;
  if ((~*(uint *)((long)param_2 + 0x14) & 0xf000000) == 0) {
    plVar10 = (long *)(*plVar12 + 0x10);
  }
  local_48 = *plVar10;
  iVar3 = v8::internal::compiler::StateValuesAccess::size((StateValuesAccess *)&local_48);
  plVar10 = plVar12;
  if ((~*(uint *)((long)param_2 + 0x14) & 0xf000000) == 0) {
    plVar10 = (long *)(*plVar12 + 0x10);
  }
  local_48 = plVar10[1];
  iVar4 = v8::internal::compiler::StateValuesAccess::size((StateValuesAccess *)&local_48);
  plVar10 = plVar12;
  if ((~*(uint *)((long)param_2 + 0x14) & 0xf000000) == 0) {
    plVar10 = (long *)(*plVar12 + 0x10);
  }
  local_48 = plVar10[2];
  iVar5 = v8::internal::compiler::StateValuesAccess::size((StateValuesAccess *)&local_48);
  if ((~*(uint *)((long)param_2 + 0x14) & 0xf000000) == 0) {
    plVar12 = (long *)(*plVar12 + 0x10);
  }
  if (*(short *)(*(long *)plVar12[5] + 0x10) == 0x29) {
    uVar7 = FUN_01641618(param_1);
  }
  else {
    uVar7 = 0;
  }
  pFVar8 = *(FrameStateDescriptor **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)pFVar8) < 0x80) {
    pFVar8 = (FrameStateDescriptor *)v8::internal::Zone::NewExpand(param_1,0x80);
  }
  else {
    *(FrameStateDescriptor **)(param_1 + 0x10) = pFVar8 + 0x80;
  }
  if (puVar6 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar6;
  }
  if (puVar6 == (undefined4 *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(puVar6 + 4);
  }
  v8::internal::compiler::FrameStateDescriptor::FrameStateDescriptor
            (pFVar8,param_1,uVar9,uVar2,uVar1,(long)iVar3,(long)iVar4,(long)iVar5,uVar11,uVar7);
  return pFVar8;
}

