
void FUN_0112454c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 int param_6,int param_7,int param_8,long param_9)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  
  if ((param_6 != 0) && (param_5 != 0)) {
    uVar5 = (ulong)*(ushort *)(param_1 + 0x1e);
    lVar6 = *(long *)(param_1 + 0x50);
    pbVar7 = (byte *)(param_9 + 1);
    do {
      lVar8 = 0;
      param_6 = param_6 + -1;
      pbVar9 = pbVar7;
      do {
        pbVar2 = pbVar9 + -1;
        bVar4 = *pbVar9;
        pbVar1 = pbVar9 + 1;
        uVar3 = ~(uint)pbVar9[2] & 0xff;
        pbVar9 = pbVar9 + uVar5;
        *(uint *)(param_2 + lVar8 * 4) =
             CONCAT12(*(undefined1 *)(lVar6 + (ulong)((~(uint)*pbVar1 & 0xff) * uVar3) / 0xff),
                      CONCAT11(*(undefined1 *)
                                (lVar6 + (ulong)((~(uint)bVar4 & 0xff) * uVar3) / 0xff),
                               *(undefined1 *)
                                (lVar6 + (ulong)((~(uint)*pbVar2 & 0xff) * uVar3) / 0xff))) |
             0xff000000;
        lVar8 = lVar8 + 1;
      } while (param_5 != (int)lVar8);
      param_2 = param_2 + (long)param_8 * 4 + (ulong)(param_5 - 1) * 4 + 4;
      pbVar7 = pbVar7 + uVar5 * (long)param_7 + ((ulong)(param_5 - 1) + 1) * uVar5;
    } while (param_6 != 0);
  }
  return;
}

