
undefined8 OPENSSL_sk_set(int *param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (-1 < (int)param_2)) {
    if (*param_1 <= (int)param_2) {
      return 0;
    }
    uVar2 = -(ulong)(param_2 >> 0x1f) & 0xfffffff800000000 | (ulong)param_2 << 3;
    *(undefined8 *)(*(long *)(param_1 + 2) + uVar2) = param_3;
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 2) + uVar2);
  }
  return uVar1;
}

