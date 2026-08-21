
ulong * FUN_0155a39c(undefined8 param_1,long param_2,uint param_3,undefined8 *param_4,
                    undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong local_18;
  
  puVar3 = (ulong *)(*(long *)(param_2 + 8) - (long)(int)((param_3 & 0x3ffffffe) << 2));
  if (5 < (int)param_3) {
    FUN_0155a44c(param_1,*puVar3,*param_4);
    uVar2 = *puVar3 & 0xffffffff00000000;
    uVar1 = *(uint *)((uVar2 | *(uint *)(*puVar3 + 0xb)) + 7);
    if (((uVar1 & 1) == 0) ||
       (*(short *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar1) - 1)) != 0x83)) {
      if (uVar1 != 0) {
        return puVar3;
      }
    }
    else {
      local_18 = uVar2 | uVar1;
      uVar2 = v8::internal::ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_18);
      if ((uVar2 & 1) != 0) {
        return puVar3;
      }
    }
    uVar2 = v8::internal::JSFunction::SetName(puVar3,param_6,param_5);
    if ((uVar2 & 1) == 0) {
      puVar3 = (ulong *)0x0;
    }
  }
  return puVar3;
}

