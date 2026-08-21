
void FUN_00eaadd8(long *param_1,long param_2,ulong *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ulong local_38;
  
  *param_1 = param_2;
  param_1[1] = (long)param_3;
  *(undefined1 *)(param_1 + 2) = 0;
  uVar2 = *(undefined1 *)(param_2 + 0xb828);
  *(undefined1 *)((long)param_1 + 0x12) = uVar2;
  uVar1 = 2;
  if (*(char *)(param_2 + 0xb829) != '\0') {
    uVar1 = uVar2;
  }
  v8::internal::InterruptsScope::InterruptsScope((InterruptsScope *)(param_1 + 3),param_2,1,uVar1);
  param_1[9] = *(long *)(*param_1 + 0x2c08);
  *(long **)(*param_1 + 0x2c08) = param_1;
  *(undefined1 *)(*param_1 + 0xb828) = 0;
  if (param_3 != (ulong *)0x0) {
    local_38 = *(ulong *)(param_2 + 0x2bc8);
    if (((int)local_38 == 0) ||
       (*(int *)((local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 - 1)) + 0x13) !=
        *(int *)((*param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 - 1)) + 0x13))) {
      v8::internal::DetachableVector<v8::internal::Context>::push_back
                ((DetachableVector<v8::internal::Context> *)(*(long *)(param_2 + 0x95c0) + 0x50),
                 (Context *)&local_38);
      *(ulong *)(param_2 + 0x2bc8) = *param_3;
    }
    else {
      param_1[1] = 0;
    }
  }
  return;
}

