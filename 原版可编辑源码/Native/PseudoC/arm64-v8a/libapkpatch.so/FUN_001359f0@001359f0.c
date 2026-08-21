
undefined8 FUN_001359f0(long *param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(ulong *)(lVar2 + 8) < (ulong)((param_2 - param_3) + param_4)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00135a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)(lVar2 + 0x20) + 0x10))
                    (*(long *)(lVar2 + 0x20),*(long *)(lVar2 + 0x28) + param_2);
  return uVar1;
}

