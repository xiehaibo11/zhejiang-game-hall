
undefined8 DTLSv1_listen(SSL *param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  BIO *b;
  BIO *pBVar9;
  BIO *pBVar10;
  undefined4 *puVar11;
  void *parg;
  ulong uVar12;
  _func_3150 *p_Var13;
  char cVar14;
  code *pcVar15;
  long lVar16;
  ssl2_state_st *str;
  char *data;
  undefined8 uVar17;
  ulong uVar18;
  uint local_16c;
  undefined8 local_168;
  undefined1 auStack_160 [256];
  
  iVar7 = SSL_clear(param_1);
  if (iVar7 == 0) {
    return 0xffffffff;
  }
  ERR_clear_error();
  b = SSL_get_rbio(param_1);
                    /* try { // try from 00ae3824 to 00be390b has its CatchHandler @ 00ae3a30 */
  pBVar9 = SSL_get_wbio(param_1);
  if ((b == (BIO *)0x0) || (pBVar9 == (BIO *)0x0)) {
                    /* catch() { ... } // from try @ 00ae3b24 with catch @ 00ae3c88 */
                    /* catch() { ... } // from try @ 00ae3b00 with catch @ 00ae3c8c */
                    /* catch() { ... } // from try @ 00ae3bc0 with catch @ 00ae3c90 */
    iVar7 = 0x80;
    iVar8 = 0x1c6;
  }
  else {
    pBVar10 = SSL_get_rbio(param_1);
    BIO_ctrl(pBVar10,0x32,1,(void *)0x0);
    if ((param_1->version & 0xff00U) == 0xfe00) {
      str = param_1->s2;
      if (str != (ssl2_state_st *)0x0) {
LAB_00ae386c:
        data = *(char **)&str->escape;
        bVar6 = false;
        do {
          puVar11 = (undefined4 *)__errno();
          *puVar11 = 0;
          iVar7 = BIO_read(b,data,0x4000);
          if (iVar7 < 1) {
                    /* try { // try from 00ae3da0 to 00be3daf has its CatchHandler @ 00ae3dc4 */
            iVar7 = BIO_test_flags(b,8);
            if (iVar7 == 0) {
              return 0xffffffff;
            }
            uVar17 = 0;
            goto LAB_00ae3eec;
          }
          if (iVar7 < 0xd) {
                    /* try { // try from 00ae3db0 to 00be3ddf has its CatchHandler @ 00ae3d70 */
            iVar7 = 0x12a;
                    /* catch() { ... } // from try @ 00ae3da0 with catch @ 00ae3dc4 */
            iVar8 = 0x215;
LAB_00ae3ee0:
            ERR_put_error(0x14,0x15e,iVar7,"ssl/d1_lib.c",iVar8);
            goto LAB_00ae3ee4;
          }
          if (param_1->msg_callback_arg != (code *)0x0) {
            (*param_1->msg_callback_arg)(0,0,0x100,data,0xd,param_1,*(undefined8 *)&param_1->hit);
          }
          if (*data != '\x16') {
            iVar7 = 0xf4;
            iVar8 = 0x225;
            goto LAB_00ae3ee0;
          }
          if (data[1] != -2) {
            iVar7 = 0x74;
            iVar8 = 0x22e;
            goto LAB_00ae3ee0;
          }
          lVar16 = (long)iVar7;
          if ((lVar16 - 3U < 8) || (local_168 = *(undefined8 *)(data + 3), lVar16 - 0xbU < 2)) {
LAB_00ae3d3c:
            iVar7 = 0x9f;
            iVar8 = 0x236;
            goto LAB_00ae3ee0;
          }
                    /* try { // try from 00ae3924 to 00be392b has its CatchHandler @ 00ae39f4 */
          uVar12 = (ulong)CONCAT11(data[0xb],data[0xc]);
          if (lVar16 - 0xdU < uVar12) goto LAB_00ae3d3c;
                    /* try { // try from 00ae3930 to 00be393b has its CatchHandler @ 00ae3a24 */
          if ((((uint)local_168 | (uint)((ulong)local_168 >> 8)) & 0xff) != 0) {
            iVar7 = 0xf4;
            iVar8 = 0x240;
            goto LAB_00ae3ee0;
          }
                    /* try { // try from 00ae3944 to 00be3953 has its CatchHandler @ 00ae3a0c */
                    /* try { // try from 00ae3974 to 00be3977 has its CatchHandler @ 00ae3a30 */
                    /* try { // try from 00ae3978 to 00be3a7f has its CatchHandler @ 00ae3730 */
          if ((((uVar12 == 0) || (uVar12 - 1 < 3)) ||
              (((ulong)(byte)data[0xc] & 0xfffe | (ulong)(byte)data[0xb] << 8) == 4)) ||
             (((uVar12 - 6 < 3 || (uVar12 - 9 < 3)) ||
              (uVar18 = (ulong)(byte)data[0x16] << 0x10 | (ulong)(byte)data[0x17] << 8 |
                        (ulong)(byte)data[0x18], uVar12 - 0xc != uVar18)))) {
            iVar7 = 0x9f;
            iVar8 = 0x24f;
            goto LAB_00ae3ee0;
          }
          if (data[0xd] != '\x01') {
            iVar7 = 0xf4;
            iVar8 = 0x254;
            goto LAB_00ae3ee0;
          }
          if (2 < CONCAT11(data[0x11],data[0x12])) {
            iVar7 = 0x192;
            iVar8 = 0x25a;
            goto LAB_00ae3ee0;
          }
          if (((data[0x13] != '\0' || data[0x14] != '\0') || data[0x15] != '\0') ||
             (((ulong)(byte)data[0xe] << 0x10 | (ulong)(byte)data[0xf] << 8 |
              (ulong)(byte)data[0x10]) < uVar18)) {
            iVar7 = 0x191;
            iVar8 = 0x267;
            goto LAB_00ae3ee0;
          }
                    /* catch() { ... } // from try @ 00ae3924 with catch @ 00ae39f4 */
          if (param_1->msg_callback_arg != (code *)0x0) {
                    /* catch() { ... } // from try @ 00ae3944 with catch @ 00ae3a0c */
            (*param_1->msg_callback_arg)
                      (0,param_1->version,0x16,data + 0xd,uVar18 + 0xc,param_1,
                       *(undefined8 *)&param_1->hit);
          }
          if (uVar18 < 2) {
            iVar7 = 0x9f;
            iVar8 = 0x271;
            goto LAB_00ae3ee0;
          }
                    /* catch() { ... } // from try @ 00ae3930 with catch @ 00ae3a24 */
                    /* catch() { ... } // from try @ 00ae379c with catch @ 00ae3a28 */
                    /* catch() { ... } // from try @ 00ae3824 with catch @ 00ae3a30
                       catch() { ... } // from try @ 00ae3974 with catch @ 00ae3a30 */
          uVar3 = param_1->method->version;
          uVar1 = 0xff00;
          if (CONCAT11(data[0x19],data[0x1a]) != 0x100) {
            uVar1 = (uint)CONCAT11(data[0x19],data[0x1a]);
          }
          uVar2 = 0xff00;
          if (uVar3 != 0x100) {
            uVar2 = uVar3;
          }
          if ((uVar3 != 0x1ffff) && (uVar2 < uVar1)) {
            iVar7 = 0x10b;
            iVar8 = 0x27a;
            goto LAB_00ae3ee0;
          }
          if ((uVar18 == 0x22) || (uVar18 - 2 < 0x20)) {
LAB_00ae3d7c:
            iVar7 = 0x9f;
            iVar8 = 0x285;
            goto LAB_00ae3ee0;
          }
          uVar12 = (ulong)(byte)data[0x3b];
          lVar16 = (uVar18 - 0x23) - uVar12;
          if ((uVar18 - 0x23 < uVar12) || (lVar16 == 0)) goto LAB_00ae3d7c;
                    /* try { // try from 00ae3a8c to 00be3acf has its CatchHandler @ 00ae3a8c
                       catch() { ... } // from try @ 00ae3a8c with catch @ 00ae3a8c
                       catch() { ... } // from try @ 00ae3bc8 with catch @ 00ae3a8c */
          bVar4 = data[uVar12 + 0x3c];
          if (lVar16 - 1U < (ulong)bVar4) goto LAB_00ae3d7c;
          if (bVar4 != 0) {
            pcVar15 = *(code **)(param_1->mode + 200);
            if (pcVar15 == (code *)0x0) {
                    /* catch() { ... } // from try @ 00ae3edc with catch @ 00ae3f34 */
              iVar7 = 0x193;
              iVar8 = 0x294;
              goto LAB_00ae3cb4;
            }
            iVar7 = (*pcVar15)(param_1,data + uVar12 + 0x3c + 1);
            if (iVar7 != 0) {
              p_Var13 = param_1->msg_callback;
              uVar17 = 1;
                    /* catch() { ... } // from try @ 00ae3fac with catch @ 00ae3f50 */
              *(undefined2 *)(p_Var13 + 0x10c) = 1;
              *(undefined4 *)(p_Var13 + 0x108) = 0x10001;
              DTLS_RECORD_LAYER_set_write_sequence(&param_1[1].write_hash,&local_168);
              SSL_set_options(param_1,0x2000);
              ossl_statem_set_hello_verify_done(param_1);
              lVar16 = BIO_ctrl(b,0x2e,0,param_2);
              if ((int)lVar16 < 1) {
                BIO_ADDR_clear(param_2);
                    /* try { // try from 00ae3fa0 to 00be3fab has its CatchHandler @ 00ae4030 */
                bVar6 = false;
                uVar17 = 1;
              }
              else {
                bVar6 = false;
              }
              goto LAB_00ae3eec;
            }
          }
          pBVar10 = SSL_get_rbio(param_1);
                    /* try { // try from 00ae3ad0 to 00be3af7 has its CatchHandler @ 00ae3cd0 */
          BIO_ctrl(pBVar10,0x32,0,(void *)0x0);
          BIO_read(b,data,0x4000);
          pBVar10 = SSL_get_rbio(param_1);
          BIO_ctrl(pBVar10,0x32,1,(void *)0x0);
                    /* try { // try from 00ae3b00 to 00be3b13 has its CatchHandler @ 00ae3c8c */
          pcVar15 = *(code **)(param_1->mode + 0xc0);
                    /* try { // try from 00ae3b24 to 00be3b37 has its CatchHandler @ 00ae3c88 */
          if (((pcVar15 == (code *)0x0) ||
              (iVar7 = (*pcVar15)(param_1,auStack_160,&local_16c), iVar7 == 0)) ||
             (0xff < local_16c)) {
                    /* try { // try from 00ae3e08 to 00be3edb has its CatchHandler @ 00ae3e08
                       catch() { ... } // from try @ 00ae3e08 with catch @ 00ae3e08
                       catch() { ... } // from try @ 00ae3eec with catch @ 00ae3e08 */
            iVar7 = 400;
            iVar8 = 0x2b9;
            goto LAB_00ae3cb4;
          }
          iVar7 = dtls_raw_hello_verify_request(data + 0x19,auStack_160);
          data[0xd] = '\x03';
          cVar14 = (char)((uint)iVar7 >> 0x10);
          cVar5 = (char)((uint)iVar7 >> 8);
          data[0x10] = (char)iVar7;
          data[0xe] = cVar14;
          data[0xf] = cVar5;
          data[0x15] = '\0';
          data[0x11] = '\0';
          data[0x12] = '\0';
          data[0x13] = '\0';
          data[0x14] = '\0';
          data[0x16] = cVar14;
          data[0x17] = cVar5;
          data[0x18] = (char)iVar7;
          *data = '\x16';
                    /* try { // try from 00ae3b74 to 00be3b7b has its CatchHandler @ 00ae3cd0 */
          if (param_1->method->version == 0x1ffff) {
            data[1] = -2;
            cVar14 = -1;
          }
          else {
            data[1] = (char)((uint)param_1->version >> 8);
            cVar14 = (char)param_1->version;
          }
          data[2] = cVar14;
          data[0xb] = (char)((uint)(iVar7 + 0xc) >> 8);
          data[0xc] = (char)(iVar7 + 0xc);
                    /* try { // try from 00ae3bc0 to 00be3bc7 has its CatchHandler @ 00ae3c90 */
          *(undefined8 *)(data + 3) = local_168;
                    /* try { // try from 00ae3bc8 to 00be3d03 has its CatchHandler @ 00ae3a8c */
          if (param_1->msg_callback_arg != (code *)0x0) {
            (*param_1->msg_callback_arg)(1,0,0x100,data,0xd,param_1,*(undefined8 *)&param_1->hit);
          }
          parg = (void *)BIO_ADDR_new();
          if (parg == (void *)0x0) {
            iVar7 = 0x41;
                    /* try { // try from 00ae3edc to 00be3eeb has its CatchHandler @ 00ae3f34 */
            iVar8 = 0x2fa;
            goto LAB_00ae3ee0;
          }
          lVar16 = BIO_ctrl(b,0x2e,0,parg);
          if (0 < (int)lVar16) {
            BIO_ctrl(pBVar9,0x2c,0,parg);
          }
          BIO_ADDR_free(parg);
          iVar8 = BIO_write(pBVar9,data,iVar7 + 0x19);
          if (iVar8 < iVar7 + 0x19) break;
          lVar16 = BIO_ctrl(pBVar9,0xb,0,(void *)0x0);
          bVar6 = true;
        } while (0 < (int)lVar16);
        iVar7 = BIO_test_flags(pBVar9,8);
        if (iVar7 == 0) {
          return 0xffffffff;
        }
LAB_00ae3ee4:
        uVar17 = 0;
        bVar6 = true;
LAB_00ae3eec:
                    /* try { // try from 00ae3eec to 00be3f4f has its CatchHandler @ 00ae3e08 */
        BIO_ADDR_free(0);
        pBVar9 = SSL_get_rbio(param_1);
        BIO_ctrl(pBVar9,0x32,0,(void *)0x0);
        if (bVar6) {
          BIO_read(b,data,0x4000);
          return uVar17;
        }
        return uVar17;
      }
      str = (ssl2_state_st *)BUF_MEM_new();
      if (str == (ssl2_state_st *)0x0) {
        iVar7 = 0x41;
        iVar8 = 0x1df;
      }
      else {
        iVar7 = BUF_MEM_grow((BUF_MEM *)str,0x4000);
        if (iVar7 != 0) {
          param_1->s2 = str;
          goto LAB_00ae386c;
        }
        BUF_MEM_free((BUF_MEM *)str);
                    /* catch() { ... } // from try @ 00ae3db0 with catch @ 00ae3d70 */
        iVar7 = 0x41;
        iVar8 = 0x1e5;
      }
    }
    else {
      iVar7 = 0x103;
      iVar8 = 0x1d9;
    }
  }
LAB_00ae3cb4:
  ERR_put_error(0x14,0x15e,iVar7,"ssl/d1_lib.c",iVar8);
                    /* catch() { ... } // from try @ 00ae3ad0 with catch @ 00ae3cd0
                       catch() { ... } // from try @ 00ae3b74 with catch @ 00ae3cd0 */
  return 0xffffffff;
}

