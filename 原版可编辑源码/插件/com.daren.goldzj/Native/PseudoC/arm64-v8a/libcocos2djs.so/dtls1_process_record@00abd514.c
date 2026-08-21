
undefined8 dtls1_process_record(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  EVP_MD *pEVar4;
  EVP_CIPHER *pEVar5;
  ulong uVar6;
  COMP_CTX *ctx;
  uchar *out;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  undefined1 *b;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [64];
  
  b = auStack_c0;
  lVar10 = *(long *)(param_1 + 0x178);
  lVar1 = *(long *)(param_1 + 0x10d8) + 0xd;
                    /* try { // try from 00abd54c to 00bbd553 has its CatchHandler @ 00abd644 */
  *(long *)(param_1 + 0x7f8) = lVar1;
  if (*(uint *)(param_1 + 0x7e0) < 0x4541) {
    *(long *)(param_1 + 0x7f0) = lVar1;
    *(uint *)(param_1 + 0x7e4) = *(uint *)(param_1 + 0x7e0);
    lVar1 = param_1 + 0x7d8;
    uVar8 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 8) + 0xc0))(param_1,lVar1,1,0);
    iVar7 = (int)uVar8;
    if (iVar7 == 0) goto LAB_00abd728;
    if (((lVar10 != 0) && (*(long *)(param_1 + 0x118) != 0)) &&
       (pEVar4 = EVP_MD_CTX_md(*(EVP_MD_CTX **)(param_1 + 0x120)), pEVar4 != (EVP_MD *)0x0)) {
      pEVar4 = EVP_MD_CTX_md(*(EVP_MD_CTX **)(param_1 + 0x120));
      uVar2 = EVP_MD_size(pEVar4);
      if (0x40 < uVar2) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: mac_size <= EVP_MAX_MD_SIZE","ssl/record/ssl3_record.c",0x543
                   );
      }
      if (uVar2 <= *(uint *)(param_1 + 0x7e4)) {
        pEVar5 = EVP_CIPHER_CTX_cipher(*(EVP_CIPHER_CTX **)(param_1 + 0x118));
        uVar6 = EVP_CIPHER_flags(pEVar5);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00abd4e4 with catch @ 00abd640
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00abd54c with catch @ 00abd644
                        */
        if (((uVar6 & 0xf0007) != 2) || (uVar2 + 1 <= *(uint *)(param_1 + 0x7e4))) {
          pEVar5 = EVP_CIPHER_CTX_cipher(*(EVP_CIPHER_CTX **)(param_1 + 0x118));
          uVar6 = EVP_CIPHER_flags(pEVar5);
          if ((uVar6 & 0xf0007) == 2) {
            ssl3_cbc_copy_mac(auStack_c0,lVar1,uVar2);
            uVar9 = *(int *)(param_1 + 0x7e0) - uVar2;
          }
          else {
            uVar9 = *(int *)(param_1 + 0x7e0) - uVar2;
            b = (undefined1 *)(*(long *)(param_1 + 0x7f0) + (ulong)uVar9);
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00abd360 with catch @ 00abd694
                        */
          *(uint *)(param_1 + 0x7e0) = uVar9;
          iVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 8))
                            (param_1,lVar1,auStack_80,0);
          if (((b == (undefined1 *)0x0) || (iVar3 < 0)) ||
             (iVar3 = CRYPTO_memcmp(auStack_80,b,(ulong)uVar2), iVar3 != 0)) {
            iVar7 = -1;
          }
          if (*(uint *)(param_1 + 0x7e0) <= uVar2 + 0x4400) goto LAB_00abd6ec;
          goto LAB_00abd724;
        }
      }
      ERR_put_error(0x14,0x101,0xa0,"ssl/record/ssl3_record.c",0x550);
      uVar8 = 0x32;
      goto LAB_00abd574;
    }
LAB_00abd6ec:
    if (iVar7 < 0) {
LAB_00abd724:
      uVar8 = 0;
LAB_00abd728:
      *(undefined4 *)(param_1 + 0x7e0) = 0;
      *(undefined4 *)(param_1 + 0x10e0) = 0;
      return uVar8;
    }
    ctx = *(COMP_CTX **)(param_1 + 0x130);
    uVar2 = *(uint *)(param_1 + 0x7e0);
    if (ctx != (COMP_CTX *)0x0) {
      if (0x4400 < uVar2) {
        iVar7 = 0x8c;
        iVar3 = 0x57c;
        goto LAB_00abd56c;
      }
      out = *(uchar **)(param_1 + 0x800);
      if (out == (uchar *)0x0) {
        out = CRYPTO_malloc(0x4540,"ssl/record/ssl3_record.c",0x20b);
        *(uchar **)(param_1 + 0x800) = out;
        if (out != (uchar *)0x0) {
          ctx = *(COMP_CTX **)(param_1 + 0x130);
          uVar2 = *(uint *)(param_1 + 0x7e0);
          goto LAB_00abd778;
        }
      }
      else {
LAB_00abd778:
        uVar2 = COMP_expand_block(ctx,out,0x4000,*(uchar **)(param_1 + 0x7f0),uVar2);
        if (-1 < (int)uVar2) {
          *(uint *)(param_1 + 0x7e0) = uVar2;
          *(undefined8 *)(param_1 + 0x7f0) = *(undefined8 *)(param_1 + 0x800);
          goto LAB_00abd79c;
        }
      }
      ERR_put_error(0x14,0x101,0x6b,"ssl/record/ssl3_record.c",0x581);
      uVar8 = 0x1e;
      goto LAB_00abd574;
    }
LAB_00abd79c:
    if (uVar2 < 0x4001) {
      *(undefined4 *)(param_1 + 0x7e8) = 0;
      *(undefined4 *)(param_1 + 0x10e0) = 0;
      dtls1_record_bitmap_update(param_1,param_2);
      return 1;
    }
    iVar7 = 0x92;
    iVar3 = 0x588;
  }
  else {
                    /* try { // try from 00abd554 to 00bbd697 has its CatchHandler @ 00abd310 */
    iVar7 = 0x96;
    iVar3 = 0x51d;
  }
LAB_00abd56c:
  ERR_put_error(0x14,0x101,iVar7,"ssl/record/ssl3_record.c",iVar3);
  uVar8 = 0x16;
LAB_00abd574:
  ssl3_send_alert(param_1,2,uVar8);
  return 0;
}

