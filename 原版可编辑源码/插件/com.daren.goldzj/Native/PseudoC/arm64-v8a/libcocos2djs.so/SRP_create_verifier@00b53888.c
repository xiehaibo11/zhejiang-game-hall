
undefined1 *
SRP_create_verifier(long param_1,long param_2,long *param_3,undefined8 *param_4,long param_5,
                   undefined8 param_6)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  undefined1 *puVar16;
  BIGNUM *a;
  BIGNUM *a_00;
  char *pcVar17;
  BIGNUM *pBVar18;
  BIGNUM *pBVar19;
  byte local_13f8;
  byte local_13f7 [2499];
  byte local_a34 [2500];
  BIGNUM *local_70;
  BIGNUM *local_68;
  
  iVar4 = 0;
  puVar16 = (undefined1 *)0x0;
  local_70 = (BIGNUM *)0x0;
  local_68 = (BIGNUM *)0x0;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (long *)0x0)) {
    pcVar17 = (char *)0x0;
    a = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    goto LAB_00b53ae4;
  }
  pcVar17 = (char *)0x0;
  a = (BIGNUM *)0x0;
  a_00 = (BIGNUM *)0x0;
  if (param_4 == (undefined8 *)0x0) goto LAB_00b53ae4;
  if (param_5 == 0) {
    puVar7 = (undefined8 *)SRP_get_default_gN(param_6);
    if (puVar7 == (undefined8 *)0x0) goto LAB_00b53ab8;
    pBVar18 = (BIGNUM *)puVar7[1];
    pBVar19 = (BIGNUM *)puVar7[2];
    puVar16 = (undefined1 *)*puVar7;
    a = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    if (*param_3 == 0) goto LAB_00b5395c;
LAB_00b539ac:
    iVar4 = FUN_00b53d24(&local_13f8);
    iVar5 = iVar4;
joined_r0x00b539bc:
    if (0 < iVar5) {
      local_68 = BN_bin2bn(&local_13f8,iVar4,(BIGNUM *)0x0);
      iVar4 = SRP_create_verifier_BN(param_1,param_2,&local_68,&local_70,pBVar19,pBVar18);
      if (iVar4 != 0) {
        BN_bn2bin(local_70,local_a34);
        iVar5 = BN_num_bits(local_70);
        iVar4 = iVar5 + 0xe;
        if (-1 < iVar5 + 7) {
          iVar4 = iVar5 + 7;
        }
        iVar4 = (iVar4 >> 3) << 1;
        pcVar17 = CRYPTO_malloc(iVar4,"crypto/srp/srp_vfy.c",0x252);
        if (pcVar17 != (char *)0x0) {
          iVar6 = BN_num_bits(local_70);
          iVar5 = iVar6 + 0xe;
          if (-1 < iVar6 + 7) {
            iVar5 = iVar6 + 7;
          }
          iVar6 = (iVar5 >> 3) % 3;
          uVar15 = 0;
          pcVar10 = pcVar17;
          if (iVar6 == 1) {
            pbVar14 = local_a34;
            uVar11 = 0;
          }
          else {
            uVar11 = 0;
            uVar13 = 0;
            bVar3 = false;
            if (iVar6 != 2) goto LAB_00b53b58;
            uVar11 = (uint)local_a34[0];
            pbVar14 = (byte *)((ulong)local_a34 | 1);
            iVar6 = 2;
          }
          bVar3 = false;
          uVar15 = 0;
          do {
            uVar13 = (uint)*pbVar14;
LAB_00b53b58:
            if ((uVar15 >> 2 != 0) || (bVar2 = false, pcVar9 = pcVar10, bVar3)) {
              pcVar9 = pcVar10 + 1;
              *pcVar10 = s_0123456789ABCDEFGHIJKLMNOPQRSTUV_01d20958[uVar15 >> 2];
              bVar2 = true;
            }
            uVar15 = uVar11 >> 4 | (uVar15 & 3) << 4;
            if ((uVar15 != 0) || (bVar3 = false, pcVar10 = pcVar9, bVar2)) {
              pcVar10 = pcVar9 + 1;
              *pcVar9 = s_0123456789ABCDEFGHIJKLMNOPQRSTUV_01d20958[uVar15];
              bVar3 = true;
            }
            uVar15 = uVar13 >> 6 | (uVar11 & 0xf) << 2;
            if ((uVar15 != 0) || (bVar3)) {
              pcVar9 = pcVar10 + 1;
              *pcVar10 = s_0123456789ABCDEFGHIJKLMNOPQRSTUV_01d20958[uVar15];
LAB_00b53ce4:
              bVar3 = true;
              pcVar10 = pcVar9 + 1;
              *pcVar9 = s_0123456789ABCDEFGHIJKLMNOPQRSTUV_01d20958[uVar13 & 0x3f];
            }
            else {
              pcVar9 = pcVar10;
              if ((uVar13 & 0x3f) != 0) goto LAB_00b53ce4;
              bVar3 = false;
            }
            if (iVar5 >> 3 <= iVar6) goto LAB_00b53bd0;
            uVar15 = (uint)local_a34[iVar6];
            uVar11 = (uint)local_a34[(long)iVar6 + 1];
            pbVar14 = local_a34 + (long)iVar6 + 2;
            iVar6 = iVar6 + 3;
          } while( true );
        }
        goto LAB_00b53d1c;
      }
    }
  }
  else {
    iVar4 = FUN_00b53d24(local_a34,param_5);
    if (iVar4 < 1) {
LAB_00b53ab8:
      a = (BIGNUM *)0x0;
    }
    else {
      a = BN_bin2bn(local_a34,iVar4,(BIGNUM *)0x0);
      iVar4 = FUN_00b53d24(local_a34,param_6);
      if (0 < iVar4) {
        a_00 = BN_bin2bn(local_a34,iVar4,(BIGNUM *)0x0);
        puVar16 = &DAT_01895dc4;
        pBVar18 = a_00;
        pBVar19 = a;
        if (*param_3 != 0) goto LAB_00b539ac;
LAB_00b5395c:
        iVar4 = 0x14;
        iVar5 = RAND_bytes(&local_13f8,0x14);
        goto joined_r0x00b539bc;
      }
    }
    a_00 = (BIGNUM *)0x0;
  }
  pcVar17 = (char *)0x0;
  puVar16 = (undefined1 *)0x0;
  iVar4 = 0;
  goto LAB_00b53ae4;
LAB_00b53bd0:
  *pcVar10 = '\0';
  if (*param_3 == 0) {
    pcVar10 = CRYPTO_malloc(0x28,"crypto/srp/srp_vfy.c",0x259);
    if (pcVar10 != (char *)0x0) {
      lVar8 = 0;
      uVar15 = 0;
      bVar3 = false;
      pcVar9 = pcVar10;
      do {
        bVar1 = local_13f7[lVar8];
        if ((uVar15 >> 2 != 0) || (bVar2 = false, pcVar12 = pcVar9, bVar3)) {
          pcVar12 = pcVar9 + 1;
          *pcVar9 = s_0123456789ABCDEFGHIJKLMNOPQRSTUV_01d20958[uVar15 >> 2];
          bVar2 = true;
        }
        uVar15 = (uint)(local_13f8 >> 4) | (uVar15 & 3) << 4;
        if ((uVar15 != 0) || (bVar3 = false, pcVar9 = pcVar12, bVar2)) {
          pcVar9 = pcVar12 + 1;
          *pcVar12 = s_0123456789ABCDEFGHIJKLMNOPQRSTUV_01d20958[uVar15];
          bVar3 = true;
        }
        uVar15 = (uint)(bVar1 >> 6) | (local_13f8 & 0xf) << 2;
        if ((uVar15 != 0) || (bVar3)) {
          pcVar12 = pcVar9 + 1;
          *pcVar9 = s_0123456789ABCDEFGHIJKLMNOPQRSTUV_01d20958[uVar15];
LAB_00b53ca8:
          bVar3 = true;
          pcVar9 = pcVar12 + 1;
          *pcVar12 = s_0123456789ABCDEFGHIJKLMNOPQRSTUV_01d20958[bVar1 & 0x3f];
        }
        else {
          pcVar12 = pcVar9;
          if ((bVar1 & 0x3f) != 0) goto LAB_00b53ca8;
          bVar3 = false;
        }
        if (0x13 < lVar8 + 2) goto LAB_00b53cbc;
        uVar15 = (uint)local_13f7[lVar8 + 1];
        local_13f8 = local_13f7[lVar8 + 2];
        lVar8 = lVar8 + 3;
      } while( true );
    }
LAB_00b53d1c:
    puVar16 = (undefined1 *)0x0;
    goto LAB_00b53ae4;
  }
  goto LAB_00b53cc4;
LAB_00b53cbc:
  *pcVar9 = '\0';
  *param_3 = (long)pcVar10;
LAB_00b53cc4:
  *param_4 = pcVar17;
  pcVar17 = (char *)0x0;
LAB_00b53ae4:
  BN_free(a);
  BN_free(a_00);
  CRYPTO_clear_free(pcVar17,(long)iVar4,"crypto/srp/srp_vfy.c",0x267);
  BN_clear_free(local_68);
  BN_clear_free(local_70);
  return puVar16;
}

