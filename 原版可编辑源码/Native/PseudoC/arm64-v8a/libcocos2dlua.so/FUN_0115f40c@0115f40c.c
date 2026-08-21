
bool FUN_0115f40c(long *param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = WebPSafeCalloc((long)(1 << (ulong)(param_2 & 0x1f)),4);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(uint *)(param_1 + 1) = 0x20 - param_2;
    *(uint *)((long)param_1 + 0xc) = param_2;
  }
  return lVar1 != 0;
}

