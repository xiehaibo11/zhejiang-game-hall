
undefined8
FUN_00e5c618(long param_1,undefined1 *param_2,undefined1 *param_3,int param_4,int param_5,
            int param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined8 uVar8;
  ushort *puVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  uint uVar12;
  
  puVar11 = param_2 + 2;
  if ((param_3 < puVar11) ||
     (uVar5 = CONCAT11(*param_2,param_2[1]), param_3 < puVar11 + (ulong)uVar5 * 4)) {
    uVar8 = 3;
  }
  else {
    puVar9 = *(ushort **)(param_1 + 0x18);
    uVar1 = puVar9[2];
    uVar2 = puVar9[3];
    uVar6 = puVar9[4];
    uVar3 = puVar9[5];
    uVar4 = puVar9[6];
    uVar7 = puVar9[7];
    if (uVar5 == 0) {
      uVar8 = 0;
    }
    else {
      uVar12 = 0;
      do {
        uVar8 = FUN_00e5b788(param_1,CONCAT11(*puVar11,puVar11[1]),(char)puVar11[2] + param_4,
                             (char)puVar11[3] + param_5,param_6 + 1,0);
        if ((int)uVar8 != 0) break;
        uVar12 = uVar12 + 1;
        puVar11 = puVar11 + 4;
      } while (uVar12 < uVar5);
      puVar9 = *(ushort **)(param_1 + 0x18);
    }
    puVar9[4] = (ushort)(byte)uVar6;
    puVar9[2] = (short)(char)uVar1;
    puVar9[3] = (short)(char)uVar2;
    puVar9[5] = (short)(char)uVar3;
    puVar9[6] = (short)(char)uVar4;
    puVar9[7] = (ushort)(byte)uVar7;
    pbVar10 = *(byte **)(param_1 + 0x10);
    puVar9[1] = (ushort)pbVar10[4];
    *puVar9 = (ushort)*pbVar10;
  }
  return uVar8;
}

