
undefined8 FUN_0107f7a8(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*param_1 + 0x428);
  if (*(long *)(lVar2 + 0x4f0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0107f7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(long *)(lVar2 + 0x1280) + 8))
                      (*(undefined8 *)(*param_1 + 0xb8),param_1,*(undefined4 *)(lVar2 + 0x14),
                       FUN_01089800,0);
    return uVar1;
  }
  return 0xa3;
}

