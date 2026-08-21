
undefined2 lws_hdr_fragment_length(long *param_1,uint param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (uVar2 = (ulong)*(byte *)(lVar1 + (ulong)param_2 + 0x300), uVar2 != 0)) {
    param_3 = ~param_3;
    do {
      param_3 = param_3 + 1;
      if (param_3 == 0) {
        return *(undefined2 *)(lVar1 + uVar2 * 8 + 0x20);
      }
      uVar2 = (ulong)*(byte *)(lVar1 + uVar2 * 8 + 0x22);
    } while (uVar2 != 0);
  }
  return 0;
}

