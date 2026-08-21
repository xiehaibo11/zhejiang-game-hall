
undefined8
ssl_add_clienthello_use_srtp_ext(long param_1,undefined1 *param_2,int *param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  int line;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  
                    /* try { // try from 00ae4488 to 00be448f has its CatchHandler @ 00ae44ec */
                    /* try { // try from 00ae4490 to 00be4507 has its CatchHandler @ 00ae4438 */
  if ((param_1 == 0) ||
     ((lVar4 = *(long *)(param_1 + 0x2e8), lVar4 == 0 &&
      ((*(long *)(param_1 + 0x1b8) == 0 ||
       (lVar4 = *(long *)(*(long *)(param_1 + 0x1b8) + 0x328), lVar4 == 0)))))) {
    lVar4 = 0;
  }
  uVar1 = OPENSSL_sk_num(lVar4);
  if (param_2 == (undefined1 *)0x0) {
    iVar6 = uVar1 * 2 + 3;
LAB_00ae4598:
    uVar2 = 0;
    *param_3 = iVar6;
  }
  else {
    if (uVar1 == 0) {
      iVar6 = 0x162;
      line = 0x9c;
    }
    else {
      iVar6 = uVar1 * 2 + 3;
                    /* catch() { ... } // from try @ 00ae4488 with catch @ 00ae44ec */
      if (iVar6 <= param_4) {
        param_2[1] = (char)(uVar1 * 2);
        puVar7 = param_2 + 2;
        *param_2 = (char)(uVar1 >> 7);
        if (0 < (int)uVar1) {
          uVar5 = 0;
          do {
            lVar3 = OPENSSL_sk_value(lVar4,uVar5);
                    /* try { // try from 00ae4570 to 00be457b has its CatchHandler @ 00ae4704 */
            uVar5 = uVar5 + 1;
                    /* try { // try from 00ae457c to 00be460b has its CatchHandler @ 00ae4508 */
            *puVar7 = (char)((ulong)*(undefined8 *)(lVar3 + 8) >> 8);
            puVar7[1] = (char)*(undefined8 *)(lVar3 + 8);
            puVar7 = puVar7 + 2;
          } while (uVar1 != uVar5);
          puVar7 = param_2 + (ulong)(uVar1 - 1) * 2 + 4;
        }
        *puVar7 = 0;
        goto LAB_00ae4598;
      }
      iVar6 = 0x16b;
      line = 0xa2;
                    /* catch() { ... } // from try @ 00ae457c with catch @ 00ae4508
                       catch() { ... } // from try @ 00ae4620 with catch @ 00ae4508 */
    }
    ERR_put_error(0x14,0x133,iVar6,"ssl/d1_srtp.c",line);
    uVar2 = 1;
  }
  return uVar2;
}

