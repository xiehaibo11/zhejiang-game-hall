
undefined8 inflatePrime(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 == 0) {
    return 0xfffffffe;
  }
  if ((int)param_2 < 0) {
    *(undefined8 *)(lVar2 + 0x48) = 0;
    *(undefined4 *)(lVar2 + 0x50) = 0;
    return 0;
  }
  if (0x10 < (int)param_2) {
    return 0xfffffffe;
  }
  uVar1 = *(uint *)(lVar2 + 0x50) + param_2;
  if (0x20 < uVar1) {
    return 0xfffffffe;
  }
  *(long *)(lVar2 + 0x48) =
       *(long *)(lVar2 + 0x48) +
       (long)(int)(((int)(1L << ((ulong)param_2 & 0x3f)) - 1U & param_3) <<
                  (ulong)(*(uint *)(lVar2 + 0x50) & 0x1f));
  *(uint *)(lVar2 + 0x50) = uVar1;
  return 0;
}

