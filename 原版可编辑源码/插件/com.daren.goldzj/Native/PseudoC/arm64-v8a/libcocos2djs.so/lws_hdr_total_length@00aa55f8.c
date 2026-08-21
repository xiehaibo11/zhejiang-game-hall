
int lws_hdr_total_length(long *param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return 0;
  }
  uVar4 = (ulong)*(byte *)(lVar3 + (ulong)param_2 + 0x300);
  if (uVar4 != 0) {
    iVar2 = 0;
    do {
      lVar1 = lVar3 + uVar4 * 8;
      uVar4 = (ulong)*(byte *)(lVar1 + 0x22);
      iVar2 = iVar2 + (uint)*(ushort *)(lVar1 + 0x20);
    } while (uVar4 != 0);
    return iVar2;
  }
  return 0;
}

