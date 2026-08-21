
undefined8 pvmp3_get_side_info(undefined8 param_1,uint *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  byte bVar11;
  ulong uVar13;
  undefined1 auVar16 [13];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulong uVar14;
  undefined1 auVar19 [16];
  uint5 uVar12;
  undefined1 auVar15 [13];
  
  iVar1 = param_3[2];
  uVar5 = 1;
  if (param_3[7] != 3) {
    uVar5 = 2;
  }
  if (*param_3 == 0) {
    if (param_3[7] == 3) {
      uVar7 = getbits_crc(param_1,0xe,param_4,iVar1);
      uVar3 = (uint)(uVar7 >> 5) & 0x7ffffff;
      uVar4 = (uint)(uVar7 >> 4) & 0xfffffff;
      uVar6 = 0x1f;
    }
    else {
      uVar7 = getbits_crc(param_1,0xc,param_4,iVar1);
      uVar3 = (uint)(uVar7 >> 3) & 0x1fffffff;
      uVar4 = (uint)(uVar7 >> 6) & 0x3ffffff;
      uVar6 = 7;
    }
    uVar7 = 0;
    puVar8 = param_2 + 4;
    *param_2 = uVar3 & 0x1ff;
    param_2[1] = uVar4 & uVar6;
    do {
      uVar3 = getbits_crc(param_1,4,param_4,param_3[2]);
      uVar13 = NEON_ushl(CONCAT44(uVar3,uVar3),0xfffffffefffffffd,4);
      uVar7 = uVar7 + 1;
      *puVar8 = uVar3 >> 1 & 1;
      puVar8[1] = uVar3 & 1;
      *(ulong *)(puVar8 + -2) = uVar13 & 0x100000001;
      puVar8 = puVar8 + 0x28;
    } while (uVar7 < uVar5);
    uVar7 = 0;
    puVar9 = (ulong *)(param_2 + 0xd);
    do {
      uVar13 = 0;
      puVar10 = puVar9;
      do {
        uVar3 = getbits_crc(param_1,0xc,param_4,param_3[2]);
        *(uint *)((long)puVar10 + -0x1c) = uVar3;
        uVar3 = getbits_crc(param_1,0x16,param_4,param_3[2]);
        *(uint *)(puVar10 + -3) = uVar3 >> 0xd & 0x1ff;
        *(uint *)((long)puVar10 + -0x14) = (uVar3 >> 5 & 0xff) - 0xd2;
        *(uint *)(puVar10 + -2) = uVar3 >> 1 & 0xf;
        *(uint *)((long)puVar10 + -0xc) = uVar3 & 1;
        uVar4 = getbits_crc(param_1,0x16,param_4,param_3[2]);
        if ((uVar3 & 1) == 0) {
          uVar14 = NEON_ushl(CONCAT44(uVar4,uVar4),0xfffffff4ffffffef,4);
          *(uint *)(puVar10 + 1) = uVar4 >> 7 & 0x1f;
          *(uint *)(puVar10 + 3) = uVar4 >> 3 & 0xf;
          *(uint *)((long)puVar10 + 0x1c) = uVar4 & 7;
          *puVar10 = uVar14 & 0x1f0000001f;
          *(uint *)(puVar10 + -1) = 0;
        }
        else {
          auVar18[8] = 0xf2;
          auVar18._0_8_ = 0xffffffedffffffec;
          auVar19._4_4_ = uVar4;
          auVar19._0_4_ = uVar4;
          auVar19._8_4_ = uVar4;
          auVar19._12_4_ = uVar4;
          uVar14 = NEON_ushl(CONCAT44(uVar4,uVar4),0xfffffffdfffffffa,4);
          auVar18[9] = 0xff;
          auVar18[10] = 0xff;
          auVar18[0xb] = 0xff;
          auVar18[0xc] = 0xf7;
          auVar18[0xd] = 0xff;
          auVar18[0xe] = 0xff;
          auVar18[0xf] = 0xff;
          auVar18 = NEON_ushl(auVar19,auVar18,4);
          *(ulong *)((long)puVar10 + 0xc) = uVar14 & 0x700000007;
          bVar11 = auVar18[0] & 3;
          uVar12 = CONCAT14(auVar18[4],(uint)bVar11) & 0x100ffffff;
          uVar14 = CONCAT35(0,uVar12);
          auVar16[8] = auVar18[8] & 0x1f;
          auVar16._0_8_ = uVar14;
          auVar16._9_3_ = 0;
          auVar16[0xc] = auVar18[0xc] & 0x1f;
          *puVar10 = (ulong)auVar16._8_5_;
          puVar10[-1] = uVar14;
          *(uint *)((long)puVar10 + 0x14) = uVar4 & 7;
          if (bVar11 == 2) {
            if ((char)(uVar12 >> 0x20) == '\0') {
              puVar10[3] = 0xc00000008;
              goto LAB_00e9577c;
            }
          }
          else if (bVar11 == 0) {
            return 7;
          }
          puVar10[3] = 0xd00000007;
        }
LAB_00e9577c:
        uVar3 = getbits_crc(param_1,3,param_4,param_3[2]);
        uVar14 = NEON_ushl(CONCAT44(uVar3,uVar3),0xfffffffffffffffe,4);
        uVar13 = uVar13 + 1;
        *(uint *)(puVar10 + 5) = uVar3 & 1;
        puVar10[4] = uVar14 & 0x100000001;
        puVar10 = puVar10 + 0x14;
      } while (uVar13 < uVar5);
      uVar7 = uVar7 + 1;
      puVar9 = puVar9 + 9;
    } while (uVar7 < 2);
  }
  else {
    uVar3 = getbits_crc(param_1,8,param_4,iVar1);
    *param_2 = uVar3;
    uVar3 = getbits_crc(param_1,uVar5,param_4,param_3[2]);
    uVar7 = 0;
    puVar9 = (ulong *)(param_2 + 0xd);
    param_2[1] = uVar3;
    do {
      uVar3 = getbits_crc(param_1,0x15,param_4,param_3[2]);
      *(uint *)((long)puVar9 + -0x1c) = uVar3 >> 9 & 0xfff;
      *(uint *)(puVar9 + -3) = uVar3 & 0x1ff;
      uVar3 = getbits_crc(param_1,0x12,param_4,param_3[2]);
      *(uint *)((long)puVar9 + -0x14) = (uVar3 >> 10 & 0xff) - 0xd2;
      *(uint *)(puVar9 + -2) = uVar3 >> 1 & 0x1ff;
      *(uint *)((long)puVar9 + -0xc) = uVar3 & 1;
      uVar4 = getbits_crc(param_1,0x16,param_4,param_3[2]);
      if ((uVar3 & 1) == 0) {
        uVar13 = NEON_ushl(CONCAT44(uVar4,uVar4),0xfffffff4ffffffef,4);
        *(uint *)(puVar9 + 1) = uVar4 >> 7 & 0x1f;
        *(uint *)(puVar9 + 3) = uVar4 >> 3 & 0xf;
        *(uint *)((long)puVar9 + 0x1c) = uVar4 & 7;
        *puVar9 = uVar13 & 0x1f0000001f;
        *(uint *)(puVar9 + -1) = 0;
      }
      else {
        auVar2[8] = 0xf2;
        auVar2._0_8_ = 0xffffffedffffffec;
        auVar17._4_4_ = uVar4;
        auVar17._0_4_ = uVar4;
        auVar17._8_4_ = uVar4;
        auVar17._12_4_ = uVar4;
        uVar13 = NEON_ushl(CONCAT44(uVar4,uVar4),0xfffffffdfffffffa,4);
        auVar2[9] = 0xff;
        auVar2[10] = 0xff;
        auVar2[0xb] = 0xff;
        auVar2[0xc] = 0xf7;
        auVar2[0xd] = 0xff;
        auVar2[0xe] = 0xff;
        auVar2[0xf] = 0xff;
        auVar18 = NEON_ushl(auVar17,auVar2,4);
        *(ulong *)((long)puVar9 + 0xc) = uVar13 & 0x700000007;
        bVar11 = auVar18[0] & 3;
        uVar12 = CONCAT14(auVar18[4],(uint)bVar11) & 0x100ffffff;
        uVar13 = CONCAT35(0,uVar12);
        auVar15[8] = auVar18[8] & 0x1f;
        auVar15._0_8_ = uVar13;
        auVar15._9_3_ = 0;
        auVar15[0xc] = auVar18[0xc] & 0x1f;
        *puVar9 = (ulong)auVar15._8_5_;
        puVar9[-1] = uVar13;
        *(uint *)((long)puVar9 + 0x14) = uVar4 & 7;
        if (bVar11 == 2) {
          if ((char)(uVar12 >> 0x20) == '\0') {
            puVar9[3] = 0xc00000008;
            goto LAB_00e95540;
          }
        }
        else if (bVar11 == 0) {
          return 7;
        }
        puVar9[3] = 0xd00000007;
      }
LAB_00e95540:
      uVar13 = getbits_crc(param_1,2,param_4,param_3[2]);
      uVar7 = uVar7 + 1;
      *(uint *)((long)puVar9 + 0x24) = (uint)(uVar13 >> 1) & 0x7fffffff;
      *(uint *)(puVar9 + 5) = (uint)uVar13 & 1;
      puVar9 = puVar9 + 0x14;
    } while (uVar7 < uVar5);
  }
  return 0;
}

