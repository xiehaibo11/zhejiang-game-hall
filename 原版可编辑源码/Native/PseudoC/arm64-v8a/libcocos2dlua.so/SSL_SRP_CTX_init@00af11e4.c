
undefined8 SSL_SRP_CTX_init(long param_1)

{
  BIGNUM *pBVar1;
  char *pcVar2;
  int reason;
  int line;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x1b8);
  if (lVar3 == 0) {
    return 0;
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x248);
                    /* try { // try from 00af120c to 00bf122f has its CatchHandler @ 00af1250 */
  *(undefined8 *)(param_1 + 800) = *(undefined8 *)(lVar3 + 0x250);
  *(undefined8 *)(param_1 + 0x318) = uVar4;
  uVar4 = *(undefined8 *)(lVar3 + 600);
                    /* try { // try from 00af1230 to 00bf1273 has its CatchHandler @ 00af10cc */
  *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(lVar3 + 0x260);
  *(undefined8 *)(param_1 + 0x328) = uVar4;
  memset((undefined8 *)(param_1 + 0x338),0,0x48);
  *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(lVar3 + 0x2b0);
  *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(lVar3 + 0x2b8);
  if (*(BIGNUM **)(lVar3 + 0x270) != (BIGNUM *)0x0) {
                    /* catch() { ... } // from try @ 00af120c with catch @ 00af1250 */
    pBVar1 = BN_dup(*(BIGNUM **)(lVar3 + 0x270));
                    /* catch() { ... } // from try @ 00af1110 with catch @ 00af1254 */
    *(BIGNUM **)(param_1 + 0x340) = pBVar1;
                    /* catch() { ... } // from try @ 00af1174 with catch @ 00af1258 */
    if (pBVar1 != (BIGNUM *)0x0) goto LAB_00af125c;
LAB_00af1318:
                    /* try { // try from 00af1328 to 00bf1333 has its CatchHandler @ 00af137c */
    reason = 3;
    line = 0x7f;
LAB_00af1330:
    ERR_put_error(0x14,0x139,reason,"ssl/tls_srp.c",line);
                    /* try { // try from 00af1334 to 00bf1377 has its CatchHandler @ 00af1288 */
    CRYPTO_free(*(void **)(param_1 + 0x338));
    BN_free(*(BIGNUM **)(param_1 + 0x340));
    BN_free(*(BIGNUM **)(param_1 + 0x348));
    BN_free(*(BIGNUM **)(param_1 + 0x350));
    BN_free(*(BIGNUM **)(param_1 + 0x358));
    BN_free(*(BIGNUM **)(param_1 + 0x360));
    BN_free(*(BIGNUM **)(param_1 + 0x368));
                    /* try { // try from 00af1378 to 00bf137b has its CatchHandler @ 00af137c */
                    /* catch() { ... } // from try @ 00af1328 with catch @ 00af137c
                       catch() { ... } // from try @ 00af1378 with catch @ 00af137c
                       try { // try from 00af137c to 00bf1397 has its CatchHandler @ 00af1288 */
    BN_free(*(BIGNUM **)(param_1 + 0x370));
    BN_free(*(BIGNUM **)(param_1 + 0x378));
                    /* try { // try from 00af1398 to 00bf13e3 has its CatchHandler @ 00af1398
                       catch() { ... } // from try @ 00af1398 with catch @ 00af1398
                       catch() { ... } // from try @ 00af1464 with catch @ 00af1398 */
    return 0;
  }
LAB_00af125c:
  if (*(BIGNUM **)(lVar3 + 0x278) != (BIGNUM *)0x0) {
    pBVar1 = BN_dup(*(BIGNUM **)(lVar3 + 0x278));
    *(BIGNUM **)(param_1 + 0x348) = pBVar1;
    if (pBVar1 == (BIGNUM *)0x0) goto LAB_00af1318;
  }
  if (*(BIGNUM **)(lVar3 + 0x280) != (BIGNUM *)0x0) {
    pBVar1 = BN_dup(*(BIGNUM **)(lVar3 + 0x280));
    *(BIGNUM **)(param_1 + 0x350) = pBVar1;
    if (pBVar1 == (BIGNUM *)0x0) goto LAB_00af1318;
  }
                    /* try { // try from 00af1288 to 00bf1327 has its CatchHandler @ 00af1288
                       catch() { ... } // from try @ 00af1288 with catch @ 00af1288
                       catch() { ... } // from try @ 00af1334 with catch @ 00af1288
                       catch() { ... } // from try @ 00af137c with catch @ 00af1288 */
  if (*(BIGNUM **)(lVar3 + 0x288) != (BIGNUM *)0x0) {
    pBVar1 = BN_dup(*(BIGNUM **)(lVar3 + 0x288));
    *(BIGNUM **)(param_1 + 0x358) = pBVar1;
    if (pBVar1 == (BIGNUM *)0x0) goto LAB_00af1318;
  }
  if (*(BIGNUM **)(lVar3 + 0x290) != (BIGNUM *)0x0) {
    pBVar1 = BN_dup(*(BIGNUM **)(lVar3 + 0x290));
    *(BIGNUM **)(param_1 + 0x360) = pBVar1;
    if (pBVar1 == (BIGNUM *)0x0) goto LAB_00af1318;
  }
  if (*(BIGNUM **)(lVar3 + 0x298) != (BIGNUM *)0x0) {
    pBVar1 = BN_dup(*(BIGNUM **)(lVar3 + 0x298));
    *(BIGNUM **)(param_1 + 0x368) = pBVar1;
    if (pBVar1 == (BIGNUM *)0x0) goto LAB_00af1318;
  }
  if (*(BIGNUM **)(lVar3 + 0x2a8) != (BIGNUM *)0x0) {
    pBVar1 = BN_dup(*(BIGNUM **)(lVar3 + 0x2a8));
    *(BIGNUM **)(param_1 + 0x378) = pBVar1;
    if (pBVar1 == (BIGNUM *)0x0) goto LAB_00af1318;
  }
  if (*(BIGNUM **)(lVar3 + 0x2a0) != (BIGNUM *)0x0) {
    pBVar1 = BN_dup(*(BIGNUM **)(lVar3 + 0x2a0));
    *(BIGNUM **)(param_1 + 0x370) = pBVar1;
    if (pBVar1 == (BIGNUM *)0x0) goto LAB_00af1318;
  }
  if (*(char **)(lVar3 + 0x268) != (char *)0x0) {
    pcVar2 = CRYPTO_strdup(*(char **)(lVar3 + 0x268),"ssl/tls_srp.c",0x83);
    *(undefined8 *)(param_1 + 0x338) = pcVar2;
    if (pcVar2 == (char *)0x0) {
      reason = 0x44;
      line = 0x84;
      goto LAB_00af1330;
    }
  }
  *(undefined8 *)(param_1 + 0x390) = *(undefined8 *)(lVar3 + 0x2c0);
  return 1;
}

