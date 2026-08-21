
void FUN_01124bc0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 int param_6,int param_7,int param_8,long param_9)

{
  byte *pbVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((param_6 != 0) && (param_5 != 0)) {
    uVar2 = *(ushort *)(param_1 + 0x1e);
    lVar3 = *(long *)(param_1 + 0x58);
    do {
      lVar4 = 0;
      lVar5 = 0;
      param_6 = param_6 + -1;
      do {
        pbVar1 = (byte *)(param_9 + lVar4);
        lVar4 = lVar4 + (ulong)uVar2;
        *(undefined4 *)(param_2 + lVar5 * 4) = **(undefined4 **)(lVar3 + (ulong)*pbVar1 * 8);
        lVar5 = lVar5 + 1;
      } while (param_5 != (int)lVar5);
      param_9 = param_9 + ((ulong)(param_5 - 1) + 1) * (ulong)uVar2 + (long)param_7;
      param_2 = param_2 + (long)param_8 * 4 + (ulong)(param_5 - 1) * 4 + 4;
    } while (param_6 != 0);
  }
  return;
}

