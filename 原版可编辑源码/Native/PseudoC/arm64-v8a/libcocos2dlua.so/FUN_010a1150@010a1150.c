
undefined8
FUN_010a1150(long param_1,undefined1 *param_2,undefined1 *param_3,int param_4,int param_5)

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
  uint uVar11;
  undefined1 *puVar12;
  
  puVar12 = param_2 + 2;
  if ((param_3 < puVar12) ||
     (uVar5 = CONCAT11(*param_2,param_2[1]), param_3 < puVar12 + (ulong)uVar5 * 4)) {
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
      uVar11 = 0;
      do {
        uVar8 = FUN_010a02c8(param_1,CONCAT11(*puVar12,puVar12[1]),(uint)(byte)puVar12[2] + param_4,
                             (uint)(byte)puVar12[3] + param_5);
        if ((int)uVar8 != 0) goto LAB_010a1210;
        uVar11 = uVar11 + 1;
        puVar12 = puVar12 + 4;
      } while (uVar11 < uVar5);
      uVar8 = 0;
LAB_010a1210:
                    /* try { // try from 010a1210 to 011a122b has its CatchHandler @ 010a1268 */
      puVar9 = *(ushort **)(param_1 + 0x18);
    }
                    /* try { // try from 010a122c to 011a127f has its CatchHandler @ 010a110c */
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
                    /* catch() { ... } // from try @ 010a1210 with catch @ 010a1268 */
  return uVar8;
}

