
uint BN_GF2m_mod_mul_arr(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                        BN_CTX *param_5)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  BIGNUM *pBVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong local_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  ulong local_68;
  
  if (param_2 == param_3) {
    uVar10 = BN_GF2m_mod_sqr_arr(param_1,param_2,param_4,param_5);
    return uVar10;
  }
  BN_CTX_start(param_5);
  pBVar4 = BN_CTX_get(param_5);
  if (pBVar4 != (BIGNUM *)0x0) {
    lVar12 = param_2[1];
    lVar13 = param_3[1];
    iVar3 = (int)lVar12 + (int)lVar13 + 4;
    lVar5 = bn_wexpand(pBVar4,iVar3);
    if (lVar5 != 0) {
      pBVar4->top = iVar3;
      if (0 < iVar3) {
        memset(pBVar4->d,0,(ulong)((int)lVar12 + (int)lVar13 + 3) * 8 + 8);
      }
      uVar6 = (ulong)*(uint *)(param_3 + 1);
      if (0 < (int)*(uint *)(param_3 + 1)) {
        lVar12 = 0;
        uVar8 = 0;
        do {
          uVar14 = *(ulong *)(*param_3 + uVar8 * 8);
          if ((uVar8 | 1) == uVar6) {
            uVar11 = 0;
          }
          else {
            uVar11 = *(ulong *)(*param_3 + (uVar8 | 1) * 8);
          }
          uVar7 = (ulong)*(uint *)(param_2 + 1);
          if (0 < (int)*(uint *)(param_2 + 1)) {
            lVar13 = 0;
            lVar5 = 0x18;
            do {
              uVar6 = *(ulong *)(*param_2 + lVar13 * 8);
              if (lVar13 + 1U == (uVar7 & 0xffffffff)) {
                uVar7 = 0;
              }
              else {
                uVar7 = *(ulong *)(*param_2 + lVar13 * 8 + 8);
              }
              FUN_00bdeb30(&local_78,&uStack_80,uVar7,uVar11);
              FUN_00bdeb30(&local_88,&local_90,uVar6,uVar14);
              FUN_00bdeb30(&local_68,&uStack_70,uVar7 ^ uVar6,uVar11 ^ uVar14);
              uVar6 = local_88 ^ local_68 ^ local_78 ^ uStack_80;
              local_88 = local_88 ^ uStack_80 ^ local_90 ^ uStack_70;
              puVar9 = pBVar4->d;
              puVar1 = (ulong *)((long)puVar9 + lVar5 + lVar12);
              lVar2 = lVar13 * 8 + lVar12;
              lVar13 = lVar13 + 2;
              lVar5 = lVar5 + 0x10;
              puVar1[-3] = puVar1[-3] ^ local_90;
              *(ulong *)((long)puVar9 + lVar2 + 8) = *(ulong *)((long)puVar9 + lVar2 + 8) ^ local_88
              ;
              *(ulong *)((long)puVar9 + lVar2 + 0x10) =
                   *(ulong *)((long)puVar9 + lVar2 + 0x10) ^ uVar6;
              *puVar1 = *puVar1 ^ local_78;
              uVar7 = (ulong)(int)param_2[1];
              uStack_80 = uVar6;
            } while (lVar13 < (long)uVar7);
            uVar6 = (ulong)*(uint *)(param_3 + 1);
          }
          uVar8 = uVar8 + 2;
          lVar12 = lVar12 + 0x10;
        } while ((long)uVar8 < (long)(int)uVar6);
      }
      bn_correct_top(pBVar4);
      iVar3 = BN_GF2m_mod_arr(param_1,pBVar4,param_4);
      uVar10 = (uint)(iVar3 != 0);
      goto LAB_00bdce24;
    }
  }
  uVar10 = 0;
LAB_00bdce24:
  BN_CTX_end(param_5);
  return uVar10;
}

