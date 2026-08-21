
void FUN_01123108(long param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                 int param_6,int param_7,int param_8,long param_9)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  
  if ((param_6 != 0) && (param_5 != 0)) {
    uVar6 = (ulong)*(ushort *)(param_1 + 0x1e);
    lVar7 = *(long *)(param_1 + 0x78);
    pbVar8 = (byte *)(param_9 + 1);
    do {
      lVar9 = 0;
      param_6 = param_6 + -1;
      pbVar10 = pbVar8;
      do {
        pbVar1 = pbVar10 + 2;
        pbVar3 = pbVar10 + -1;
        bVar5 = *pbVar10;
        pbVar2 = pbVar10 + 1;
        lVar4 = lVar7 + (ulong)*pbVar1 * 0x100;
        pbVar10 = pbVar10 + uVar6;
        *(uint *)(param_2 + lVar9 * 4) =
             CONCAT13(*pbVar1,CONCAT12(*(undefined1 *)(lVar4 + (ulong)*pbVar2),
                                       CONCAT11(*(undefined1 *)(lVar4 + (ulong)bVar5),
                                                *(undefined1 *)(lVar4 + (ulong)*pbVar3))));
        lVar9 = lVar9 + 1;
      } while (param_5 != (int)lVar9);
      param_2 = param_2 + (long)param_8 * 4 + (ulong)(param_5 - 1) * 4 + 4;
      pbVar8 = pbVar8 + uVar6 * (long)param_7 + ((ulong)(param_5 - 1) + 1) * uVar6;
    } while (param_6 != 0);
  }
  return;
}

