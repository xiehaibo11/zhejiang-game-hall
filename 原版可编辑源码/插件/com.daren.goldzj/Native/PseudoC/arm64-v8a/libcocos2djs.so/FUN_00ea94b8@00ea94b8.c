
void FUN_00ea94b8(long *param_1,long param_2,ulong *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong local_38;
  
  *param_1 = param_2;
  param_1[1] = (long)param_3;
  *(undefined1 *)(param_1 + 2) = 0;
  uVar3 = *(undefined1 *)(param_2 + 0xb828);
  *(undefined1 *)((long)param_1 + 0x12) = uVar3;
  uVar1 = 2;
  if (*(char *)(param_2 + 0xb829) != '\0') {
    uVar1 = uVar3;
  }
  v8::internal::InterruptsScope::InterruptsScope((InterruptsScope *)(param_1 + 3),param_2,1,uVar1);
  param_1[9] = *(long *)(*param_1 + 0x2c08);
  *(long **)(*param_1 + 0x2c08) = param_1;
  *(undefined1 *)(*param_1 + 0xb828) = 0;
  if (param_3 != (ulong *)0x0) {
    uVar4 = *(ulong *)(param_2 + 0x2bc8);
    if (((int)uVar4 == 0) ||
       (*(int *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1)) + 0x13) !=
        *(int *)((*param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 - 1)) + 0x13))) {
      local_38 = uVar4;
      v8::internal::DetachableVector<v8::internal::Context>::push_back
                ((DetachableVector<v8::internal::Context> *)(*(long *)(param_2 + 0x95c0) + 0x50),
                 (Context *)&local_38);
      *(ulong *)(param_2 + 0x2bc8) = *param_3;
    }
    else {
      param_1[1] = 0;
    }
  }
  lVar5 = *param_1;
  puVar2 = *(undefined8 **)(lVar5 + 0xc630);
  for (puVar6 = *(undefined8 **)(lVar5 + 0xc628); puVar6 != puVar2; puVar6 = puVar6 + 1) {
    (*(code *)*puVar6)(lVar5);
  }
  return;
}

