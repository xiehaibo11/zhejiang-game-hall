
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 pvmp3_get_side_info(undefined8 param_1,uint *param_2,int *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  byte bVar11;
  ulong uVar13;
  int iVar17;
  int iVar18;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint5 uVar12;
  
  iVar17 = param_3[2];
  uVar4 = 1;
  if (param_3[7] != 3) {
    uVar4 = 2;
  }
  if (*param_3 == 0) {
    if (param_3[7] == 3) {
      uVar6 = getbits_crc(param_1,0xe,param_4,iVar17);
      uVar2 = (uint)(uVar6 >> 5) & 0x7ffffff;
      uVar3 = (uint)(uVar6 >> 4) & 0xfffffff;
      uVar5 = 0x1f;
    }
    else {
      uVar6 = getbits_crc(param_1,0xc,param_4,iVar17);
      uVar2 = (uint)(uVar6 >> 3) & 0x1fffffff;
      uVar3 = (uint)(uVar6 >> 6) & 0x3ffffff;
      uVar5 = 7;
    }
    uVar6 = 0;
    puVar8 = param_2 + 4;
    *param_2 = uVar2 & 0x1ff;
    param_2[1] = uVar3 & uVar5;
    do {
      uVar2 = getbits_crc(param_1,4,param_4,param_3[2]);
      uVar13 = NEON_ushl(CONCAT44(uVar2,uVar2),0xfffffffefffffffd,4);
      uVar6 = uVar6 + 1;
      *puVar8 = uVar2 >> 1 & 1;
      puVar8[1] = uVar2 & 1;
      *(ulong *)(puVar8 + -2) = uVar13 & 0x100000001;
      puVar8 = puVar8 + 0x28;
    } while (uVar6 < uVar4);
    lVar7 = 0;
    puVar9 = (ulong *)(param_2 + 0xd);
    do {
      uVar6 = 0;
      puVar10 = puVar9;
      do {
        uVar2 = getbits_crc(param_1,0xc,param_4,param_3[2]);
        *(uint *)((long)puVar10 + -0x1c) = uVar2;
        uVar2 = getbits_crc(param_1,0x16,param_4,param_3[2]);
        *(uint *)(puVar10 + -3) = uVar2 >> 0xd & 0x1ff;
        *(uint *)((long)puVar10 + -0x14) = (uVar2 >> 5 & 0xff) - 0xd2;
        *(uint *)(puVar10 + -2) = uVar2 >> 1 & 0xf;
        *(uint *)((long)puVar10 + -0xc) = uVar2 & 1;
                    /* try { // try from 00ec1cac to 00fc1cb3 has its CatchHandler @ 00ec1d84 */
        uVar3 = getbits_crc(param_1,0x16,param_4,param_3[2]);
                    /* try { // try from 00ec1cb4 to 00fc1d9f has its CatchHandler @ 00ec1c10 */
        if ((uVar2 & 1) == 0) {
          uVar13 = NEON_ushl(CONCAT44(uVar3,uVar3),0xfffffff4ffffffef,4);
          *(uint *)(puVar10 + 1) = uVar3 >> 7 & 0x1f;
          *(uint *)(puVar10 + 3) = uVar3 >> 3 & 0xf;
          *(uint *)((long)puVar10 + 0x1c) = uVar3 & 7;
                    /* try { // try from 00ec1c10 to 00fc1cab has its CatchHandler @ 00ec1c10
                       catch() { ... } // from try @ 00ec1c10 with catch @ 00ec1c10
                       catch() { ... } // from try @ 00ec1cb4 with catch @ 00ec1c10 */
          *puVar10 = uVar13 & 0x1f0000001f;
          *(uint *)(puVar10 + -1) = 0;
        }
        else {
          auVar15._8_4_ = 0xfffffff2;
          auVar15._0_8_ = 0xffffffedffffffec;
          auVar16._4_4_ = uVar3;
          auVar16._0_4_ = uVar3;
          auVar16._8_4_ = uVar3;
          auVar16._12_4_ = uVar3;
          uVar13 = NEON_ushl(CONCAT44(uVar3,uVar3),0xfffffffdfffffffa,4);
          auVar15._12_4_ = 0xfffffff7;
          auVar15 = NEON_ushl(auVar16,auVar15,4);
          *(ulong *)((long)puVar10 + 0xc) = uVar13 & 0x700000007;
          *(uint *)((long)puVar10 + 0x14) = uVar3 & 7;
          bVar11 = auVar15[0] & 3;
          uVar12 = CONCAT14(auVar15[4],(uint)bVar11) & 0x100ffffff;
          *puVar10 = (ulong)(CONCAT14(auVar15[0xc],(uint)(auVar15[8] & 0x1f)) & 0x1f00ffffff);
          puVar10[-1] = (ulong)uVar12;
          if (bVar11 == 2) {
            if ((char)(uVar12 >> 0x20) == '\0') {
              puVar10[3] = 0xc00000008;
              goto LAB_00ec1c18;
            }
          }
          else if (bVar11 == 0) {
            return 7;
          }
          puVar10[3] = 0xd00000007;
        }
LAB_00ec1c18:
        uVar2 = getbits_crc(param_1,3,param_4,param_3[2]);
        uVar13 = NEON_ushl(CONCAT44(uVar2,uVar2),0xfffffffffffffffe,4);
        uVar6 = uVar6 + 1;
        *(uint *)(puVar10 + 5) = uVar2 & 1;
        puVar10[4] = uVar13 & 0x100000001;
        puVar10 = puVar10 + 0x14;
      } while (uVar6 < uVar4);
      lVar7 = lVar7 + 1;
      puVar9 = puVar9 + 9;
    } while (lVar7 != 2);
  }
  else {
    uVar2 = getbits_crc(param_1,8,param_4,iVar17);
    *param_2 = uVar2;
    uVar2 = getbits_crc(param_1,uVar4,param_4,param_3[2]);
    uVar6 = 0;
    puVar9 = (ulong *)(param_2 + 0xd);
    auVar1._4_4_ = -DAT_01435b60._4_4_;
    auVar1._0_4_ = -(int)DAT_01435b60;
    iVar17 = DAT_01435b60._8_4_;
    iVar18 = DAT_01435b60._12_4_;
    param_2[1] = uVar2;
    do {
      uVar2 = getbits_crc(param_1,0x15,param_4,param_3[2]);
      *(uint *)((long)puVar9 + -0x1c) = uVar2 >> 9 & 0xfff;
      *(uint *)(puVar9 + -3) = uVar2 & 0x1ff;
      uVar2 = getbits_crc(param_1,0x12,param_4,param_3[2]);
      *(uint *)((long)puVar9 + -0x14) = (uVar2 >> 10 & 0xff) - 0xd2;
      *(uint *)(puVar9 + -2) = uVar2 >> 1 & 0x1ff;
      *(uint *)((long)puVar9 + -0xc) = uVar2 & 1;
      uVar3 = getbits_crc(param_1,0x16,param_4,param_3[2]);
      if ((uVar2 & 1) == 0) {
        uVar13 = NEON_ushl(CONCAT44(uVar3,uVar3),0xfffffff4ffffffef,4);
        *(uint *)(puVar9 + 1) = uVar3 >> 7 & 0x1f;
        *(uint *)(puVar9 + 3) = uVar3 >> 3 & 0xf;
        *(uint *)((long)puVar9 + 0x1c) = uVar3 & 7;
        *puVar9 = uVar13 & 0x1f0000001f;
        *(uint *)(puVar9 + -1) = 0;
      }
      else {
        auVar1._8_4_ = -iVar17;
        auVar14._4_4_ = uVar3;
        auVar14._0_4_ = uVar3;
        auVar14._8_4_ = uVar3;
        auVar14._12_4_ = uVar3;
        uVar13 = NEON_ushl(CONCAT44(uVar3,uVar3),0xfffffffdfffffffa,4);
        auVar1._12_4_ = -iVar18;
        auVar15 = NEON_ushl(auVar14,auVar1,4);
        *(ulong *)((long)puVar9 + 0xc) = uVar13 & 0x700000007;
        *(uint *)((long)puVar9 + 0x14) = uVar3 & 7;
        bVar11 = auVar15[0] & 3;
        uVar12 = CONCAT14(auVar15[4],(uint)bVar11) & 0x100ffffff;
        *puVar9 = (ulong)(CONCAT14(auVar15[0xc],(uint)(auVar15[8] & 0x1f)) & 0x1f00ffffff);
        puVar9[-1] = (ulong)uVar12;
        if (bVar11 == 2) {
          if ((char)(uVar12 >> 0x20) == '\0') {
            puVar9[3] = 0xc00000008;
            goto LAB_00ec19d0;
          }
        }
        else if (bVar11 == 0) {
          return 7;
        }
        puVar9[3] = 0xd00000007;
      }
LAB_00ec19d0:
      uVar13 = getbits_crc(param_1,2,param_4,param_3[2]);
      uVar6 = uVar6 + 1;
      *(uint *)((long)puVar9 + 0x24) = (uint)(uVar13 >> 1) & 0x7fffffff;
      *(uint *)(puVar9 + 5) = (uint)uVar13 & 1;
      puVar9 = puVar9 + 0x14;
    } while (uVar6 < uVar4);
  }
                    /* WARNING: Read-only address (ram,0x01435b60) is written */
  return 0;
}

