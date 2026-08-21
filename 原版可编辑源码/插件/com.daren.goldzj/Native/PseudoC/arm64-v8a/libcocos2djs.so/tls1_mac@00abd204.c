
ulong tls1_mac(undefined4 *param_1,long param_2,uchar *param_3,int param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined2 *puVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  EVP_MD *md;
  EVP_CIPHER *cipher;
  ulong uVar7;
  uint uVar8;
  EVP_MD_CTX *out;
  EVP_MD_CTX *ctx;
  ulong uVar9;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  ulong local_58;
  
  puVar1 = (undefined8 *)(param_1 + 0x50);
  if (param_4 == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x48);
  }
  ctx = (EVP_MD_CTX *)*puVar1;
  uVar4 = param_1[0x44];
                    /* try { // try from 00abd244 to 00bbd247 has its CatchHandler @ 00abd2f4 */
                    /* try { // try from 00abd248 to 00bbd2d3 has its CatchHandler @ 00abd1f0 */
  pcVar2 = (char *)(param_1 + 0x446);
  if (param_4 == 0) {
    pcVar2 = (char *)(param_1 + 0x444);
  }
  md = EVP_MD_CTX_md(ctx);
  iVar6 = EVP_MD_size(md);
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: t >= 0","ssl/record/ssl3_record.c",0x3ca);
  }
  uVar8 = 1;
  if (param_4 != 0) {
    uVar8 = 2;
  }
  uVar9 = (ulong)iVar6;
  local_58 = uVar9;
  if ((uVar4 & uVar8) == 0) {
    out = (EVP_MD_CTX *)EVP_MD_CTX_new();
    if (out == (EVP_MD_CTX *)0x0) {
      return 0xffffffff;
    }
                    /* try { // try from 00abd4e4 to 00bbd4eb has its CatchHandler @ 00abd640 */
    iVar6 = EVP_MD_CTX_copy(out,ctx);
    ctx = out;
    if (iVar6 == 0) {
      return 0xffffffff;
    }
  }
  else {
    out = (EVP_MD_CTX *)0x0;
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) >> 3 & 1) == 0) {
    local_68 = *(undefined8 *)pcVar2;
  }
  else {
    puVar3 = *(undefined2 **)(param_1 + 0x44a) + 1;
    if (param_4 == 0) {
      puVar3 = *(undefined2 **)(param_1 + 0x44a);
    }
                    /* try { // try from 00abd2d4 to 00bbd2d7 has its CatchHandler @ 00abd2f4 */
    local_68 = CONCAT26(*(undefined2 *)(pcVar2 + 6),
                        CONCAT42(*(undefined4 *)(pcVar2 + 2),
                                 CONCAT11((char)*puVar3,(char)((ushort)*puVar3 >> 8))));
  }
                    /* try { // try from 00abd2d8 to 00bbd30f has its CatchHandler @ 00abd1f0 */
  local_60 = (undefined1)*(undefined4 *)(param_2 + 4);
  local_5f = (undefined1)((uint)*param_1 >> 8);
  local_5e = (undefined1)*param_1;
                    /* catch() { ... } // from try @ 00abd244 with catch @ 00abd2f4
                       catch() { ... } // from try @ 00abd2d4 with catch @ 00abd2f4 */
  local_5d = (undefined1)((uint)*(undefined4 *)(param_2 + 8) >> 8);
  local_5c = (undefined1)*(undefined4 *)(param_2 + 8);
  if ((param_4 == 0) && ((*(byte *)(*(long *)(param_1 + 0x24) + 1) & 1) == 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00abd368 with catch @ 00abd310
                       catch(type#1 @ 00000000) { ... } // from try @ 00abd554 with catch @ 00abd310
                        */
    cipher = EVP_CIPHER_CTX_cipher(*(EVP_CIPHER_CTX **)(param_1 + 0x46));
    uVar7 = EVP_CIPHER_flags(cipher);
    if (((uVar7 & 0xf0007) == 2) && (cVar5 = ssl3_cbc_record_digest_supported(ctx), cVar5 != '\0'))
    {
                    /* try { // try from 00abd360 to 00bbd367 has its CatchHandler @ 00abd694 */
                    /* try { // try from 00abd368 to 00bbd4e3 has its CatchHandler @ 00abd310 */
      iVar6 = ssl3_cbc_digest_record
                        (ctx,param_3,&local_58,&local_68,*(undefined8 *)(param_2 + 0x20),
                         uVar9 + *(uint *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                         *(long *)(param_1 + 0x24) + 0xc,
                         *(undefined4 *)(*(long *)(param_1 + 0x24) + 8),0);
      if (0 < iVar6) goto LAB_00abd3f8;
      goto LAB_00abd4b0;
    }
  }
  iVar6 = EVP_DigestUpdate(ctx,&local_68,0xd);
  if ((((0 < iVar6) &&
       (iVar6 = EVP_DigestUpdate(ctx,*(void **)(param_2 + 0x20),(ulong)*(uint *)(param_2 + 8)),
       0 < iVar6)) && (iVar6 = EVP_DigestSignFinal(ctx,param_3,&local_58), 0 < iVar6)) &&
     ((((param_4 != 0 || ((*(byte *)(*(long *)(param_1 + 0x24) + 1) & 1) != 0)) ||
       (iVar6 = FIPS_mode(), iVar6 == 0)) ||
      (iVar6 = tls_fips_digest_extra
                         (*(undefined8 *)(param_1 + 0x46),ctx,*(undefined8 *)(param_2 + 0x20),
                          *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc)), iVar6 != 0))
     )) {
LAB_00abd3f8:
    EVP_MD_CTX_free(out);
    if ((((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) >> 3 & 1) == 0) &&
        (cVar5 = pcVar2[7], pcVar2[7] = cVar5 + '\x01', (char)(cVar5 + '\x01') == '\0')) &&
       ((cVar5 = pcVar2[6], pcVar2[6] = cVar5 + '\x01', (char)(cVar5 + '\x01') == '\0' &&
        ((((cVar5 = pcVar2[5], pcVar2[5] = cVar5 + '\x01', (char)(cVar5 + '\x01') == '\0' &&
           (cVar5 = pcVar2[4], pcVar2[4] = cVar5 + '\x01', (char)(cVar5 + '\x01') == '\0')) &&
          (cVar5 = pcVar2[3], pcVar2[3] = cVar5 + '\x01', (char)(cVar5 + '\x01') == '\0')) &&
         ((cVar5 = pcVar2[2], pcVar2[2] = cVar5 + '\x01', (char)(cVar5 + '\x01') == '\0' &&
          (cVar5 = pcVar2[1], pcVar2[1] = cVar5 + '\x01', (char)(cVar5 + '\x01') == '\0')))))))) {
      *pcVar2 = *pcVar2 + '\x01';
    }
    return local_58 & 0xffffffff;
  }
LAB_00abd4b0:
  EVP_MD_CTX_free(out);
  return 0xffffffff;
}

