
bool BN_GF2m_mod_sqr_arr(undefined8 param_1,long *param_2,undefined8 param_3,BN_CTX *param_4)

{
  bool bVar1;
  int iVar2;
  BIGNUM *pBVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  
  BN_CTX_start(param_4);
  pBVar3 = BN_CTX_get(param_4);
  if ((pBVar3 == (BIGNUM *)0x0) || (lVar4 = bn_wexpand(pBVar3,(int)param_2[1] << 1), lVar4 == 0)) {
    bVar1 = false;
  }
  else {
    iVar2 = (int)param_2[1];
    if (0 < iVar2) {
      lVar5 = *param_2;
      puVar6 = pBVar3->d + (iVar2 * 2 + -1);
      puVar7 = pBVar3->d + (iVar2 * 2 + -2);
      lVar4 = (long)iVar2;
      do {
        lVar8 = (lVar4 + -1) * 8;
        uVar9 = *(ulong *)(lVar5 + lVar8);
        *puVar6 = *(long *)(&DAT_018d4e08 + (uVar9 >> 0x38 & 0xf) * 8) << 0x30 |
                  *(long *)(&DAT_018d4e08 + (uVar9 >> 0x39 & 0x78)) << 0x38 |
                  *(long *)(&DAT_018d4e08 + (uVar9 >> 0x34 & 0xf) * 8) << 0x28 |
                  *(long *)(&DAT_018d4e08 + (uVar9 >> 0x30 & 0xf) * 8) << 0x20 |
                  *(long *)(&DAT_018d4e08 + (uVar9 >> 0x2c & 0xf) * 8) << 0x18 |
                  *(long *)(&DAT_018d4e08 + (uVar9 >> 0x28 & 0xf) * 8) << 0x10 |
                  *(long *)(&DAT_018d4e08 + (uVar9 >> 0x24 & 0xf) * 8) << 8 |
                  *(ulong *)(&DAT_018d4e08 + (uVar9 >> 0x20 & 0xf) * 8);
        uVar9 = *(ulong *)(lVar5 + lVar8);
        *puVar7 = *(long *)(&DAT_018d4e08 + (uVar9 >> 0x18 & 0xf) * 8) << 0x30 |
                  *(long *)(&DAT_018d4e08 + (uVar9 >> 0x1c & 0xf) * 8) << 0x38 |
                  *(long *)(&DAT_018d4e08 + (uVar9 >> 0x14 & 0xf) * 8) << 0x28 |
                  *(long *)(&DAT_018d4e08 + (uVar9 >> 0x10 & 0xf) * 8) << 0x20 |
                  *(long *)(&DAT_018d4e08 + (uVar9 >> 0xc & 0xf) * 8) << 0x18 |
                  *(long *)(&DAT_018d4e08 + (uVar9 >> 8 & 0xf) * 8) << 0x10 |
                  *(long *)(&DAT_018d4e08 + (uVar9 >> 4 & 0xf) * 8) << 8 |
                  *(ulong *)(&DAT_018d4e08 + (uVar9 & 0xf) * 8);
        bVar1 = 1 < lVar4;
        puVar6 = puVar6 + -2;
        puVar7 = puVar7 + -2;
        lVar4 = lVar4 + -1;
      } while (bVar1);
      iVar2 = (int)param_2[1];
    }
    pBVar3->top = iVar2 << 1;
    bn_correct_top(pBVar3);
    iVar2 = BN_GF2m_mod_arr(param_1,pBVar3,param_3);
    bVar1 = iVar2 != 0;
  }
  BN_CTX_end(param_4);
  return bVar1;
}

