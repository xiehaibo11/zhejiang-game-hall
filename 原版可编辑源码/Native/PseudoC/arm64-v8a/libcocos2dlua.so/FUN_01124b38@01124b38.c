
void FUN_01124b38(long param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 int param_6,int param_7,int param_8,long param_9)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  
  if ((param_6 != 0) && (param_5 != 0)) {
    uVar3 = *(ushort *)(param_1 + 0x1e);
    lVar4 = *(long *)(param_1 + 0x58);
    pbVar5 = (byte *)(param_9 + 1);
    do {
      lVar6 = 0;
      param_6 = param_6 + -1;
      pbVar7 = pbVar5;
      do {
        pbVar1 = pbVar7 + -1;
        bVar2 = *pbVar7;
        pbVar7 = pbVar7 + uVar3;
        *(uint *)(param_2 + lVar6 * 4) =
             ((uint)bVar2 << 0x18 | 0xffffff) & **(uint **)(lVar4 + (ulong)*pbVar1 * 8);
        lVar6 = lVar6 + 1;
      } while (param_5 != (int)lVar6);
      param_2 = param_2 + (long)param_8 * 4 + (ulong)(param_5 - 1) * 4 + 4;
      pbVar5 = pbVar5 + (long)param_7 + ((ulong)(param_5 - 1) + 1) * (ulong)uVar3;
    } while (param_6 != 0);
  }
  return;
}

