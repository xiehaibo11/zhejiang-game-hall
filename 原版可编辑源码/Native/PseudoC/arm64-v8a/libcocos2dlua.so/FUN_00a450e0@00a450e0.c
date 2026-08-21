
undefined8 FUN_00a450e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((((*(long *)(param_1 + 0x968) < 0) || (*(long *)(param_1 + 0x398) == 0)) ||
      (lVar1 = FUN_00a2e8f8(*(undefined8 *)(param_1 + 0xae0),*(undefined8 *)(param_1 + 0xae8)),
      lVar1 == 0)) || (*(long *)(param_1 + 0x390) <= *(long *)(param_1 + 0x968))) {
    *(undefined8 *)(param_1 + 0xae0) = param_2;
    *(undefined8 *)(param_1 + 0xae8) = param_3;
    if (*(long *)(param_1 + 0x390) == 0) {
      return 0;
    }
    lVar1 = *(long *)(param_1 + 0x398) * 1000;
  }
  else {
    lVar1 = FUN_00a2e888(param_2,param_3,*(undefined8 *)(param_1 + 0xae0),
                         *(undefined8 *)(param_1 + 0xae8));
    lVar1 = *(long *)(param_1 + 0x398) * 1000 - lVar1;
    if (lVar1 < 1) {
      FUN_00a38a08(param_1,
                   "Operation too slow. Less than %ld bytes/sec transferred the last %ld seconds",
                   *(undefined8 *)(param_1 + 0x390));
      return 0x1c;
    }
  }
  FUN_00a2ade0(param_1,lVar1);
  return 0;
}

