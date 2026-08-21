
long ssl3_choose_cipher(int *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  
  uVar9 = param_3;
  uVar10 = param_2;
  if (((*(byte *)((long)param_1 + 0x1e6) >> 6 & 1) == 0) &&
     (uVar9 = param_2, uVar10 = param_3,
     (*(uint *)(*(long *)(param_1 + 0x52) + 0x1c) & 0x30000) != 0)) {
    uVar9 = param_3;
    uVar10 = param_2;
  }
  tls1_set_cert_validity(param_1);
  ssl_set_masks(param_1);
  iVar5 = OPENSSL_sk_num(uVar9);
  if (iVar5 < 1) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    iVar5 = 0;
    iVar12 = 0xff00;
    do {
      lVar8 = OPENSSL_sk_value(uVar9,iVar5);
      iVar7 = *param_1;
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) >> 3 & 1) == 0) {
                    /* try { // try from 00abf9f8 to 00bbf9fb has its CatchHandler @ 00abfa38 */
        if ((*(int *)(lVar8 + 0x24) <= iVar7) && (iVar7 <= *(int *)(lVar8 + 0x28))) {
LAB_00abfa40:
          uVar1 = *(uint *)(lVar8 + 0x14);
          uVar2 = *(uint *)(lVar8 + 0x18);
          if (((uVar1 & 0x1c8) == 0) || (*(long *)(param_1 + 0x6c) != 0)) {
            bVar3 = ((*(ulong *)(param_1 + 0xe4) & 0x20 |
                     (ulong)*(uint *)(*(long *)(param_1 + 0x24) + 0x32c)) & (ulong)uVar1) != 0;
            bVar4 = (((ulong)*(uint *)(*(long *)(param_1 + 0x24) + 0x330) |
                     (*(ulong *)(param_1 + 0xe4) & 0x20) << 1) & (ulong)uVar2) != 0;
            if ((uVar1 >> 2 & 1) == 0) {
              if (bVar3 && bVar4) goto LAB_00abfaa8;
            }
            else if ((bVar3 && bVar4) &&
                    (iVar7 = tls1_check_ec_tmp_key(param_1,*(undefined4 *)(lVar8 + 0x10)),
                    iVar7 != 0)) {
LAB_00abfaa8:
              iVar7 = OPENSSL_sk_find(uVar10,lVar8);
                    /* try { // try from 00abfab8 to 00bbfabb has its CatchHandler @ 00abfaf8 */
              if ((-1 < iVar7) &&
                 (iVar6 = ssl_security(param_1,0x10002,*(undefined4 *)(lVar8 + 0x3c),0,lVar8),
                 iVar6 != 0)) {
                if ((((uVar2 >> 3 & 1) == 0) || ((uVar1 >> 2 & 1) == 0)) ||
                   (*(char *)(*(long *)(param_1 + 0x24) + 0x3f4) == '\0')) {
                  lVar11 = OPENSSL_sk_value(uVar10,iVar7);
                  return lVar11;
                }
                if (lVar11 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00abfab8 with catch @ 00abfaf8
                        */
                  lVar11 = OPENSSL_sk_value(uVar10,iVar7);
                }
              }
            }
          }
        }
      }
      else {
        iVar6 = iVar12;
        if (iVar7 != 0x100) {
          iVar6 = iVar7;
        }
        iVar7 = iVar12;
        if (*(int *)(lVar8 + 0x2c) != 0x100) {
          iVar7 = *(int *)(lVar8 + 0x2c);
        }
        if (iVar6 <= iVar7) {
          iVar7 = iVar12;
          if (*(int *)(lVar8 + 0x30) != 0x100) {
            iVar7 = *(int *)(lVar8 + 0x30);
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00abf9f8 with catch @ 00abfa38
                        */
          if (iVar7 <= iVar6) goto LAB_00abfa40;
        }
      }
      iVar5 = iVar5 + 1;
      iVar7 = OPENSSL_sk_num(uVar9);
    } while (iVar5 < iVar7);
  }
                    /* try { // try from 00abfb30 to 00bbfb7f has its CatchHandler @ 00abfb30
                       catch() { ... } // from try @ 00abfb30 with catch @ 00abfb30
                       catch() { ... } // from try @ 00abfb84 with catch @ 00abfb30 */
  return lVar11;
}

