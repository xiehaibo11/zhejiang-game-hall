
uint FUN_00b7003c(int param_1,long *param_2,X509 *param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  X509_PUBKEY *a;
  EVP_MD *type;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  uchar *ptr;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uchar *__s1;
  uint local_b8;
  uint local_b4;
  uint local_ac;
  uchar auStack_a8 [64];
  uchar *local_68;
  
                    /* try { // try from 00b70040 to 00c70043 has its CatchHandler @ 00b700d4 */
  local_ac = 0;
  uVar10 = 10;
  if (param_4 != 0) {
    uVar10 = 5;
  }
                    /* try { // try from 00b70078 to 00c7007b has its CatchHandler @ 00b700c0 */
  if (param_1 <= param_4) {
    uVar10 = uVar10 & 3;
  }
  uVar2 = uVar10 & 0xc;
  if (*(int *)((long)param_2 + 0x2c) < 0) {
    uVar2 = uVar10;
  }
  if (((uVar2 & *(uint *)(param_2 + 5)) == 0) || (iVar3 = OPENSSL_sk_num(param_2[1]), iVar3 < 1)) {
    ptr = (uchar *)0x0;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6ff90 with catch @ 00b700b8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6ff14 with catch @ 00b700bc
                        */
    iVar11 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b70078 with catch @ 00b700c0
                        */
    __s1 = (uchar *)0x0;
    ptr = (uchar *)0x0;
    uVar10 = 0;
    local_b4 = 0x100;
    uVar8 = 0x100;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b70040 with catch @ 00b700d4
                        */
    uVar9 = 0x100;
    local_b8 = 0x100;
    do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b70008 with catch @ 00b700e8
                        */
      pbVar5 = (byte *)OPENSSL_sk_value(param_2[1],iVar11);
      bVar1 = *pbVar5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6ff70 with catch @ 00b700fc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6ff40 with catch @ 00b70100
                        */
      if ((1 << (ulong)(bVar1 & 0x1f) & uVar2) != 0) {
        if (local_b4 != bVar1) {
          uVar8 = 0x100;
          local_b8 = (uint)*(byte *)(*(long *)(*param_2 + 8) + (ulong)pbVar5[2]);
          local_b4 = (uint)bVar1;
        }
        bVar1 = pbVar5[1];
        if (uVar9 == bVar1) {
          bVar1 = pbVar5[2];
          uVar6 = (ulong)bVar1;
          if ((uVar6 != 0) && (*(byte *)(*(long *)(*param_2 + 8) + uVar6) < local_b8))
          goto LAB_00b70240;
          if ((uint)uVar8 != (uint)bVar1) {
            plVar7 = (long *)*param_2;
            uVar8 = (ulong)(uint)bVar1;
            goto LAB_00b701e0;
          }
        }
        else {
          CRYPTO_free(ptr);
          local_68 = (uchar *)0x0;
          if (bVar1 == 1) {
            a = (X509_PUBKEY *)X509_get_X509_PUBKEY(param_3);
            uVar10 = i2d_X509_PUBKEY(a,&local_68);
            ptr = local_68;
          }
          else {
            if (bVar1 != 0) {
              iVar3 = 0x85;
              iVar11 = 0xa03;
              goto LAB_00b702c8;
            }
            uVar10 = i2d_X509(param_3,&local_68);
            ptr = local_68;
          }
          local_68 = ptr;
          if (((int)uVar10 < 0) || (ptr == (uchar *)0x0)) {
            iVar3 = 0x41;
            iVar11 = 0xa08;
LAB_00b702c8:
            ERR_put_error(0xb,0x6b,iVar3,"crypto/x509/x509_vfy.c",iVar11);
            return 0xffffffff;
          }
          plVar7 = (long *)*param_2;
          uVar6 = (ulong)pbVar5[2];
          local_b8 = (uint)*(byte *)(plVar7[1] + uVar6);
          uVar8 = uVar6;
          uVar9 = (uint)bVar1;
LAB_00b701e0:
                    /* catch() { ... } // from try @ 00b70214 with catch @ 00b701e4
                       catch() { ... } // from try @ 00b70288 with catch @ 00b701e4 */
          type = *(EVP_MD **)(*plVar7 + uVar6 * 8);
          __s1 = ptr;
          local_ac = uVar10;
          if (type != (EVP_MD *)0x0) {
            __s1 = auStack_a8;
            iVar4 = EVP_Digest(ptr,(ulong)uVar10,auStack_a8,&local_ac,type,(ENGINE *)0x0);
                    /* try { // try from 00b7020c to 00c70213 has its CatchHandler @ 00b70304 */
            if (iVar4 == 0) {
              uVar10 = 0xffffffff;
              goto LAB_00b7025c;
            }
          }
        }
        if ((*(ulong *)(pbVar5 + 0x10) == (ulong)local_ac) &&
           (iVar4 = memcmp(__s1,*(void **)(pbVar5 + 8),(ulong)local_ac), iVar4 == 0)) {
          uVar2 = 1 << (ulong)(local_b4 & 0x1f);
          uVar10 = (uint)((uVar2 & 0xc) != 0);
          if (((uVar2 & 0xc) != 0) || (*(int *)((long)param_2 + 0x2c) < 0)) {
                    /* catch() { ... } // from try @ 00b70280 with catch @ 00b70300 */
                    /* catch() { ... } // from try @ 00b7020c with catch @ 00b70304 */
            *(int *)((long)param_2 + 0x2c) = param_4;
            param_2[3] = (long)pbVar5;
            CRYPTO_free((void *)param_2[4]);
            param_2[4] = (long)param_3;
            X509_up_ref();
            goto LAB_00b7025c;
          }
          break;
        }
      }
LAB_00b70240:
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar3);
  }
  uVar10 = 0;
LAB_00b7025c:
  CRYPTO_free(ptr);
                    /* try { // try from 00b70280 to 00c70287 has its CatchHandler @ 00b70300 */
                    /* try { // try from 00b70288 to 00c7031f has its CatchHandler @ 00b701e4 */
  return uVar10;
}

