
undefined8 BLAKE2b_Update(long param_1,void *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0xe0);
  uVar2 = 0x80 - lVar1;
  if (uVar2 < param_3) {
    if (lVar1 != 0) {
      memcpy((void *)(param_1 + 0x60 + lVar1),param_2,uVar2);
      FUN_00bf6b4c(param_1,param_1 + 0x60,0x80);
      param_2 = (void *)((long)param_2 + uVar2);
      param_3 = param_3 - uVar2;
      *(undefined8 *)(param_1 + 0xe0) = 0;
    }
    if (param_3 < 0x81) {
      lVar1 = 0;
    }
    else {
      uVar2 = param_3 & 0x7f;
      if ((param_3 & 0x7f) == 0) {
        uVar2 = 0x80;
      }
      FUN_00bf6b4c(param_1,param_2,param_3 - uVar2);
      lVar1 = *(long *)(param_1 + 0xe0);
      param_2 = (void *)((long)param_2 + (param_3 - uVar2));
      param_3 = uVar2;
    }
  }
  memcpy((void *)(param_1 + lVar1 + 0x60),param_2,param_3);
  *(ulong *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + param_3;
  return 1;
}

