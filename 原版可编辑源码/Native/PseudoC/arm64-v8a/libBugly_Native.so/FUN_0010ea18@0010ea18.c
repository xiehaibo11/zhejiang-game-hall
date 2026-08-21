
byte * FUN_0010ea18(byte *param_1,ulong param_2,char *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  uint local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((param_1 != (byte *)0x0) && (param_3 != (char *)0x0)) {
    if (0xfff < param_2) {
      param_2 = 0x1000;
    }
    if ((long)param_2 < 1) {
      local_70 = 0;
      local_68 = 0;
      local_78 = 0;
      local_7c = 0;
      uVar25 = 0;
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      uVar24 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0;
      uVar8 = 0;
    }
    else {
      uVar12 = 0;
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      local_7c = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar6 = 0;
      uVar7 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar11 = 0;
      uVar5 = 0;
      pbVar4 = param_1 + param_2;
      do {
        uVar5 = uVar5 ^ *param_1;
        uVar11 = (ulong)((uint)uVar11 ^ (uint)param_1[1]);
        uVar10 = (ulong)((uint)uVar10 ^ (uint)param_1[2]);
        uVar9 = (ulong)((uint)uVar9 ^ (uint)param_1[3]);
        uVar7 = uVar7 ^ param_1[4];
        uVar6 = uVar6 ^ param_1[5];
        uVar20 = uVar20 ^ param_1[6];
        uVar19 = uVar19 ^ param_1[7];
        uVar18 = uVar18 ^ param_1[8];
        local_7c = local_7c ^ param_1[9];
        uVar17 = uVar17 ^ param_1[10];
        pbVar1 = param_1 + 0xd;
        uVar16 = uVar16 ^ param_1[0xb];
        pbVar2 = param_1 + 0xe;
        uVar15 = uVar15 ^ param_1[0xc];
        pbVar3 = param_1 + 0xf;
        param_1 = param_1 + 0x10;
        uVar14 = uVar14 ^ *pbVar1;
        uVar13 = uVar13 ^ *pbVar2;
        uVar12 = uVar12 ^ *pbVar3;
      } while (param_1 < pbVar4);
      uVar8 = (ulong)uVar5;
      uVar24 = (ulong)uVar7;
      uVar23 = (ulong)uVar6;
      uVar22 = (ulong)uVar20;
      uVar21 = (ulong)uVar19;
      uVar25 = (ulong)uVar18;
      local_78 = CONCAT44(uVar16,uVar17);
      local_70 = CONCAT44(uVar14,uVar15);
      local_68 = CONCAT44(uVar12,uVar13);
    }
    snprintf(param_3,3,"%02x",uVar8);
    snprintf(param_3 + 2,3,"%02x",uVar11);
    snprintf(param_3 + 4,3,"%02x",uVar10);
    snprintf(param_3 + 6,3,"%02x",uVar9);
    snprintf(param_3 + 8,3,"%02x",uVar24);
    snprintf(param_3 + 10,3,"%02x",uVar23);
    snprintf(param_3 + 0xc,3,"%02x",uVar22);
    snprintf(param_3 + 0xe,3,"%02x",uVar21);
    snprintf(param_3 + 0x10,3,"%02x",uVar25);
    snprintf(param_3 + 0x12,3,"%02x",(ulong)local_7c);
    snprintf(param_3 + 0x14,3,"%02x",local_78 & 0xffffffff);
    snprintf(param_3 + 0x16,3,"%02x",local_78 >> 0x20);
    snprintf(param_3 + 0x18,3,"%02x",local_70 & 0xffffffff);
    snprintf(param_3 + 0x1a,3,"%02x",local_70 >> 0x20);
    snprintf(param_3 + 0x1c,3,"%02x",local_68 & 0xffffffff);
    uVar5 = snprintf(param_3 + 0x1e,3,"%02x",local_68 >> 0x20);
    param_1 = (byte *)(ulong)uVar5;
    param_3[0x20] = '\0';
  }
  return param_1;
}

