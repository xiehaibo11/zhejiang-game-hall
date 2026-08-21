
void ecp_nistz256_scatter_w7(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + param_3;
  lVar1 = 8;
  do {
    uVar2 = *param_2;
    lVar1 = lVar1 + -1;
    Hint_Prefetch(param_1 + 0x1000,2,0,1);
    Hint_Prefetch(param_1 + 0x1040,2,0,1);
    Hint_Prefetch(param_1 + 0x1080,2,0,1);
    Hint_Prefetch(param_1 + 0x10c0,2,0,1);
    Hint_Prefetch(param_1 + 0x1100,2,0,1);
    Hint_Prefetch(param_1 + 0x1140,2,0,1);
    Hint_Prefetch(param_1 + 0x1180,2,0,1);
    Hint_Prefetch(param_1 + 0x11c0,2,0,1);
    *(char *)(param_1 + -1) = (char)uVar2;
    *(char *)(param_1 + 0x3f) = (char)((ulong)uVar2 >> 8);
    *(char *)(param_1 + 0x7f) = (char)((ulong)uVar2 >> 0x10);
    *(char *)(param_1 + 0xbf) = (char)((ulong)uVar2 >> 0x18);
    *(char *)(param_1 + 0xff) = (char)((ulong)uVar2 >> 0x20);
    *(char *)(param_1 + 0x13f) = (char)((ulong)uVar2 >> 0x28);
    *(char *)(param_1 + 0x17f) = (char)((ulong)uVar2 >> 0x30);
    *(char *)(param_1 + 0x1bf) = (char)((ulong)uVar2 >> 0x38);
    param_1 = param_1 + 0x200;
    param_2 = param_2 + 1;
  } while (lVar1 != 0);
  return;
}

