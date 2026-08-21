
void FUN_00ef7b88(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong local_18;
  
  if ((param_2 & 1) == 0) {
    if (param_1 == (long *)0x0) {
      return;
    }
  }
  else {
    puVar4 = *(ulong **)(param_1[3] + 0x20);
    uVar3 = *puVar4;
    local_18 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0xb);
    uVar2 = v8::internal::SharedFunctionInfo::GetCode((SharedFunctionInfo *)&local_18);
    *(int *)(uVar3 + 0x17) = (int)uVar2;
    if (((uVar2 & 1) != 0) && ((*(byte *)((uVar2 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
      v8::internal::Heap_MarkingBarrierSlow(uVar3,uVar3 + 0x17);
    }
    uVar3 = *puVar4;
    uVar2 = uVar3 & 0xffffffff00000000;
    uVar1 = *(uint *)((uVar2 | *(uint *)(uVar3 + 0xb)) + 3);
    if (((uVar1 != 0x84) &&
        ((((uVar1 & 1) == 0 ||
          (1 < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar1) - 1)) - 0x95)) &&
         (uVar3 = uVar2 | *(uint *)((uVar2 | *(uint *)(uVar3 + 0x13)) + 3),
         *(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x9f)))) &&
       (*(int *)(uVar3 + 7) == 8)) {
      local_18 = *puVar4 & 0xffffffff00000000;
      local_18 = local_18 | *(uint *)((local_18 | *(uint *)(*puVar4 + 0x13)) + 3);
      v8::internal::FeedbackVector::ClearOptimizationMarker((FeedbackVector *)&local_18);
    }
  }
  (**(code **)(*param_1 + 8))(param_1);
  return;
}

