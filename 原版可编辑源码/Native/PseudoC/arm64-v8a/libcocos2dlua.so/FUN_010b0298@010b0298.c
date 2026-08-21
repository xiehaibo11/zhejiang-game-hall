
void FUN_010b0298(int param_1,int param_2,long param_3,long param_4)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  byte *pbVar4;
  byte *__s;
  long lVar5;
  byte *pbVar6;
  
  iVar1 = *(int *)(param_4 + 0x858);
  lVar5 = *(long *)(param_4 + 0x860) - (long)(iVar1 * param_1);
  if (-1 < iVar1) {
    lVar5 = lVar5 + (ulong)(uint)((*(int *)(param_4 + 0x850) + -1) * iVar1);
  }
  if (0 < param_2) {
    param_2 = param_2 + 1;
    pbVar6 = (byte *)(param_3 + 4);
    do {
      bVar2 = *pbVar6;
      if (bVar2 != 0) {
        uVar3 = *(ushort *)(pbVar6 + -2);
        __s = (byte *)(lVar5 + *(short *)(pbVar6 + -4));
        if ((ulong)uVar3 < 8) {
          pbVar4 = __s;
          switch(uVar3) {
          case 7:
            pbVar4 = __s + 1;
            *__s = bVar2;
          case 6:
            __s = pbVar4 + 1;
            *pbVar4 = bVar2;
          case 5:
            pbVar4 = __s + 1;
            *__s = bVar2;
          case 4:
            __s = pbVar4 + 1;
            *pbVar4 = bVar2;
          case 3:
            pbVar4 = __s + 1;
            *__s = bVar2;
          case 2:
            __s = pbVar4 + 1;
            *pbVar4 = bVar2;
          case 1:
            *__s = bVar2;
          }
        }
        else {
          memset(__s,(uint)bVar2,(ulong)uVar3);
        }
      }
      param_2 = param_2 + -1;
      pbVar6 = pbVar6 + 6;
    } while (1 < param_2);
  }
  return;
}

