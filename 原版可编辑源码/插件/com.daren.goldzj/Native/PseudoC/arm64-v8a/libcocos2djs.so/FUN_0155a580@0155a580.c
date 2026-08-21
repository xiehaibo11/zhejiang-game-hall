
ulong * FUN_0155a580(Factory *param_1,long param_2,uint param_3,undefined8 *param_4,
                    undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong local_38;
  
  puVar4 = (ulong *)(*(long *)(param_2 + 8) - (long)(int)((param_3 & 0x3ffffffe) << 2));
  if (5 < (int)param_3) {
    FUN_0155a44c(param_1,*puVar4,*param_4);
    uVar3 = *puVar4 & 0xffffffff00000000;
    uVar1 = *(uint *)((uVar3 | *(uint *)(*puVar4 + 0xb)) + 7);
    if (((uVar1 & 1) == 0) ||
       (*(short *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar1) - 1)) != 0x83)) {
      if (uVar1 != 0) {
        return puVar4;
      }
    }
    else {
      local_38 = uVar3 | uVar1;
      uVar3 = v8::internal::ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_38);
      if ((uVar3 & 1) != 0) {
        return puVar4;
      }
    }
    uVar2 = v8::internal::Factory::NumberToString(param_1,param_6,1);
    uVar3 = v8::internal::JSFunction::SetName(puVar4,uVar2,param_5);
    if ((uVar3 & 1) == 0) {
      puVar4 = (ulong *)0x0;
    }
  }
  return puVar4;
}

