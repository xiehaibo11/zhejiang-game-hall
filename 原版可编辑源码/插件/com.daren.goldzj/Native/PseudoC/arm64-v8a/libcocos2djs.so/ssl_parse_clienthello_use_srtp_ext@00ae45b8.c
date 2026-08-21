
undefined8 ssl_parse_clienthello_use_srtp_ext(long param_1,long *param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  
  uVar8 = param_2[1] - 2;
  if (1 < (ulong)param_2[1]) {
    puVar9 = (undefined1 *)*param_2;
    bVar1 = puVar9[1];
    uVar2 = *puVar9;
    puVar9 = puVar9 + 2;
    *param_2 = (long)puVar9;
    param_2[1] = uVar8;
    if ((bVar1 & 1) == 0) {
      uVar11 = (ulong)CONCAT11(uVar2,bVar1);
                    /* try { // try from 00ae460c to 00be461f has its CatchHandler @ 00ae4700 */
      if (uVar11 <= uVar8) {
        *param_2 = (long)(puVar9 + uVar11);
        param_2[1] = uVar8 - uVar11;
        if ((param_1 == 0) ||
           ((lVar10 = *(long *)(param_1 + 0x2e8), lVar10 == 0 &&
            ((*(long *)(param_1 + 0x1b8) == 0 ||
             (lVar10 = *(long *)(*(long *)(param_1 + 0x1b8) + 0x328), lVar10 == 0)))))) {
          lVar10 = 0;
        }
        *(undefined8 *)(param_1 + 0x2f0) = 0;
        iVar4 = OPENSSL_sk_num(lVar10);
        if (0 < iVar4) {
          do {
            if (uVar11 == 0) goto LAB_00ae4720;
            if (uVar11 == 1) goto LAB_00ae4704;
            uVar2 = *puVar9;
            uVar3 = puVar9[1];
            iVar6 = 0;
            puVar9 = puVar9 + 2;
            uVar11 = uVar11 - 2;
            do {
              lVar5 = OPENSSL_sk_value(lVar10,iVar6);
              if (*(ulong *)(lVar5 + 8) == (ulong)CONCAT11(uVar2,uVar3)) {
                *(long *)(param_1 + 0x2f0) = lVar5;
                iVar4 = iVar6;
                if (iVar6 < 1) goto LAB_00ae46f8;
                break;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < iVar4);
          } while( true );
        }
LAB_00ae46f8:
        do {
          if (uVar11 == 0) goto LAB_00ae4720;
                    /* catch() { ... } // from try @ 00ae460c with catch @ 00ae4700 */
          if (uVar11 == 1) goto LAB_00ae4704;
          uVar11 = uVar11 - 2;
        } while( true );
      }
    }
  }
                    /* try { // try from 00ae4620 to 00be471f has its CatchHandler @ 00ae4508 */
  iVar4 = 0x161;
  iVar6 = 0xc2;
LAB_00ae4628:
  ERR_put_error(0x14,0x136,iVar4,"ssl/d1_srtp.c",iVar6);
  *param_3 = 0x32;
  return 1;
LAB_00ae4720:
                    /* catch() { ... } // from try @ 00ae4790 with catch @ 00ae4720
                       catch() { ... } // from try @ 00ae4894 with catch @ 00ae4720 */
  if (param_2[1] == 0) {
    iVar4 = 0x161;
    iVar6 = 0xe9;
  }
  else {
    uVar11 = param_2[1] - 1;
    pbVar7 = (byte *)*param_2 + 1;
    uVar8 = (ulong)*(byte *)*param_2;
    *param_2 = (long)pbVar7;
    param_2[1] = uVar11;
    if (uVar8 <= uVar11) {
      *param_2 = (long)(pbVar7 + uVar8);
      param_2[1] = uVar11 - uVar8;
      if (uVar11 - uVar8 == 0) {
        return 0;
      }
    }
    iVar4 = 0x160;
    iVar6 = 0xf1;
  }
  goto LAB_00ae4628;
LAB_00ae4704:
                    /* catch() { ... } // from try @ 00ae4570 with catch @ 00ae4704 */
  iVar4 = 0x161;
  iVar6 = 0xcf;
  goto LAB_00ae4628;
}

