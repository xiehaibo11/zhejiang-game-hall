
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
  pBVar9 = SSL_get_wbio(param_1);
  if ((b == (BIO *)0x0) || (pBVar9 == (BIO *)0x0)) {
    iVar7 = 0x80;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af2ab0 with catch @ 00af2b48
                       catch(type#1 @ 00000000) { ... } // from try @ 00af2ad8 with catch @ 00af2b48
                       catch(type#1 @ 00000000) { ... } // from try @ 00af2b00 with catch @ 00af2b48
                        */
    iVar8 = 0x1c6;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af2a50 with catch @ 00af2b4c
                       catch(type#1 @ 00000000) { ... } // from try @ 00af2a7c with catch @ 00af2b4c
                        */
  }
  else {
    pBVar10 = SSL_get_rbio(param_1);
    BIO_ctrl(pBVar10,0x32,1,(void *)0x0);
    if ((param_1->version & 0xff00U) == 0xfe00) {
      str = param_1->s2;
      if (str != (ssl2_state_st *)0x0) {
LAB_00af2720:
        data = *(char **)&str->escape;
        bVar6 = false;
        do {
          puVar11 = (undefined4 *)__errno();
          *puVar11 = 0;
          iVar7 = BIO_read(b,data,0x4000);
          if (iVar7 < 1) {
            iVar7 = BIO_test_flags(b,8);
            if (iVar7 == 0) {
              return 0xffffffff;
            }
            uVar17 = 0;
            goto LAB_00af2da0;
          }
          if (iVar7 < 0xd) {
            iVar7 = 0x12a;
            iVar8 = 0x215;
LAB_00af2d94:
            ERR_put_error(0x14,0x15e,iVar7,"ssl/d1_lib.c",iVar8);
            goto LAB_00af2d98;
          }
          if (param_1->msg_callback_arg != (code *)0x0) {
            (*param_1->msg_callback_arg)(0,0,0x100,data,0xd,param_1,*(undefined8 *)&param_1->hit);
          }
          if (*data != '\x16') {
            iVar7 = 0xf4;
            iVar8 = 0x225;
            goto LAB_00af2d94;
          }
          if (data[1] != -2) {
            iVar7 = 0x74;
            iVar8 = 0x22e;
            goto LAB_00af2d94;
          }
          lVar16 = (long)iVar7;
          if ((lVar16 - 3U < 8) || (local_168 = *(undefined8 *)(data + 3), lVar16 - 0xbU < 2)) {
LAB_00af2bf0:
            iVar7 = 0x9f;
            iVar8 = 0x236;
            goto LAB_00af2d94;
          }
          uVar12 = (ulong)CONCAT11(data[0xb],data[0xc]);
          if (lVar16 - 0xdU < uVar12) goto LAB_00af2bf0;
          if ((((uint)local_168 | (uint)((ulong)local_168 >> 8)) & 0xff) != 0) {
            iVar7 = 0xf4;
            iVar8 = 0x240;
            goto LAB_00af2d94;
          }
                    /* try { // try from 00af280c to 00bf283f has its CatchHandler @ 00af280c
                       catch() { ... } // from try @ 00af280c with catch @ 00af280c
                       catch() { ... } // from try @ 00af2844 with catch @ 00af280c */
                    /* try { // try from 00af2840 to 00bf2843 has its CatchHandler @ 00af285c */
                    /* try { // try from 00af2844 to 00bf286f has its CatchHandler @ 00af280c */
          if ((((uVar12 == 0) || (uVar12 - 1 < 3)) ||
              (((ulong)(byte)data[0xc] & 0xfffe | (ulong)(byte)data[0xb] << 8) == 4)) ||
             (((uVar12 - 6 < 3 || (uVar12 - 9 < 3)) ||
              (uVar18 = (ulong)(byte)data[0x16] << 0x10 | (ulong)(byte)data[0x17] << 8 |
                        (ulong)(byte)data[0x18], uVar12 - 0xc != uVar18)))) {
            iVar7 = 0x9f;
            iVar8 = 0x24f;
            goto LAB_00af2d94;
          }
          if (data[0xd] != '\x01') {
            iVar7 = 0xf4;
            iVar8 = 0x254;
            goto LAB_00af2d94;
          }
                    /* catch() { ... } // from try @ 00af2840 with catch @ 00af285c */
          if (2 < CONCAT11(data[0x11],data[0x12])) {
            iVar7 = 0x192;
            iVar8 = 0x25a;
            goto LAB_00af2d94;
          }
          if (((data[0x13] != '\0' || data[0x14] != '\0') || data[0x15] != '\0') ||
             (((ulong)(byte)data[0xe] << 0x10 | (ulong)(byte)data[0xf] << 8 |
              (ulong)(byte)data[0x10]) < uVar18)) {
            iVar7 = 0x191;
            iVar8 = 0x267;
            goto LAB_00af2d94;
          }
          if (param_1->msg_callback_arg != (code *)0x0) {
            (*param_1->msg_callback_arg)
                      (0,param_1->version,0x16,data + 0xd,uVar18 + 0xc,param_1,
                       *(undefined8 *)&param_1->hit);
          }
          if (uVar18 < 2) {
            iVar7 = 0x9f;
            iVar8 = 0x271;
            goto LAB_00af2d94;
          }
          uVar3 = param_1->method->version;
          uVar1 = 0xff00;
          if (CONCAT11(data[0x19],data[0x1a]) != 0x100) {
            uVar1 = (uint)CONCAT11(data[0x19],data[0x1a]);
          }
          uVar2 = 0xff00;
                    /* try { // try from 00af28fc to 00bf2957 has its CatchHandler @ 00af28fc
                       catch() { ... } // from try @ 00af28fc with catch @ 00af28fc
                       catch() { ... } // from try @ 00af296c with catch @ 00af28fc */
          if (uVar3 != 0x100) {
            uVar2 = uVar3;
          }
          if ((uVar3 != 0x1ffff) && (uVar2 < uVar1)) {
            iVar7 = 0x10b;
            iVar8 = 0x27a;
            goto LAB_00af2d94;
          }
          if ((uVar18 == 0x22) || (uVar18 - 2 < 0x20)) {
LAB_00af2c30:
            iVar7 = 0x9f;
            iVar8 = 0x285;
            goto LAB_00af2d94;
          }
          uVar12 = (ulong)(byte)data[0x3b];
          lVar16 = (uVar18 - 0x23) - uVar12;
          if ((uVar18 - 0x23 < uVar12) || (lVar16 == 0)) goto LAB_00af2c30;
          bVar4 = data[uVar12 + 0x3c];
          if (lVar16 - 1U < (ulong)bVar4) goto LAB_00af2c30;
          if (bVar4 != 0) {
                    /* try { // try from 00af2958 to 00bf296b has its CatchHandler @ 00af29a4 */
            pcVar15 = *(code **)(param_1->mode + 200);
            if (pcVar15 == (code *)0x0) {
              iVar7 = 0x193;
              iVar8 = 0x294;
              goto LAB_00af2b68;
            }
            iVar7 = (*pcVar15)(param_1,data + uVar12 + 0x3c + 1);
                    /* try { // try from 00af296c to 00bf29bf has its CatchHandler @ 00af28fc */
            if (iVar7 != 0) {
              p_Var13 = param_1->msg_callback;
              uVar17 = 1;
              *(undefined2 *)(p_Var13 + 0x10c) = 1;
              *(undefined4 *)(p_Var13 + 0x108) = 0x10001;
              DTLS_RECORD_LAYER_set_write_sequence(&param_1[1].write_hash,&local_168);
              SSL_set_options(param_1,0x2000);
              ossl_statem_set_hello_verify_done(param_1);
              lVar16 = BIO_ctrl(b,0x2e,0,param_2);
              if ((int)lVar16 < 1) {
                BIO_ADDR_clear(param_2);
                bVar6 = false;
                uVar17 = 1;
              }
              else {
                bVar6 = false;
              }
              goto LAB_00af2da0;
            }
          }
          pBVar10 = SSL_get_rbio(param_1);
          BIO_ctrl(pBVar10,0x32,0,(void *)0x0);
          BIO_read(b,data,0x4000);
          pBVar10 = SSL_get_rbio(param_1);
                    /* catch() { ... } // from try @ 00af2958 with catch @ 00af29a4 */
          BIO_ctrl(pBVar10,0x32,1,(void *)0x0);
          pcVar15 = *(code **)(param_1->mode + 0xc0);
          if (((pcVar15 == (code *)0x0) ||
              (iVar7 = (*pcVar15)(param_1,auStack_160,&local_16c), iVar7 == 0)) ||
             (0xff < local_16c)) {
            iVar7 = 400;
            iVar8 = 0x2b9;
            goto LAB_00af2b68;
          }
          iVar7 = dtls_raw_hello_verify_request(data + 0x19,auStack_160);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00af2a58 with catch @ 00af29e8
                       catch(type#1 @ 00000000) { ... } // from try @ 00af2a88 with catch @ 00af29e8
                       catch(type#1 @ 00000000) { ... } // from try @ 00af2ab8 with catch @ 00af29e8
                       catch(type#1 @ 00000000) { ... } // from try @ 00af2ae0 with catch @ 00af29e8
                       catch(type#1 @ 00000000) { ... } // from try @ 00af2b0c with catch @ 00af29e8
                        */
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
          if (param_1->method->version == 0x1ffff) {
            data[1] = -2;
            cVar14 = -1;
          }
          else {
                    /* try { // try from 00af2a50 to 00bf2a57 has its CatchHandler @ 00af2b4c */
                    /* try { // try from 00af2a58 to 00bf2a7b has its CatchHandler @ 00af29e8 */
            data[1] = (char)((uint)param_1->version >> 8);
            cVar14 = (char)param_1->version;
          }
          data[2] = cVar14;
          data[0xb] = (char)((uint)(iVar7 + 0xc) >> 8);
          data[0xc] = (char)(iVar7 + 0xc);
          *(undefined8 *)(data + 3) = local_168;
                    /* try { // try from 00af2a7c to 00bf2a87 has its CatchHandler @ 00af2b4c */
          if (param_1->msg_callback_arg != (code *)0x0) {
                    /* try { // try from 00af2a88 to 00bf2aaf has its CatchHandler @ 00af29e8 */
            (*param_1->msg_callback_arg)(1,0,0x100,data,0xd,param_1,*(undefined8 *)&param_1->hit);
          }
          parg = (void *)BIO_ADDR_new();
          if (parg == (void *)0x0) {
            iVar7 = 0x41;
            iVar8 = 0x2fa;
            goto LAB_00af2d94;
          }
                    /* try { // try from 00af2ab0 to 00bf2ab7 has its CatchHandler @ 00af2b48 */
                    /* try { // try from 00af2ab8 to 00bf2ad7 has its CatchHandler @ 00af29e8 */
          lVar16 = BIO_ctrl(b,0x2e,0,parg);
          if (0 < (int)lVar16) {
                    /* try { // try from 00af2ad8 to 00bf2adf has its CatchHandler @ 00af2b48 */
            BIO_ctrl(pBVar9,0x2c,0,parg);
          }
                    /* try { // try from 00af2ae0 to 00bf2aff has its CatchHandler @ 00af29e8 */
          BIO_ADDR_free(parg);
          iVar8 = BIO_write(pBVar9,data,iVar7 + 0x19);
          if (iVar8 < iVar7 + 0x19) break;
                    /* try { // try from 00af2b00 to 00bf2b0b has its CatchHandler @ 00af2b48 */
                    /* try { // try from 00af2b0c to 00bf2b4f has its CatchHandler @ 00af29e8 */
          lVar16 = BIO_ctrl(pBVar9,0xb,0,(void *)0x0);
          bVar6 = true;
        } while (0 < (int)lVar16);
        iVar7 = BIO_test_flags(pBVar9,8);
        if (iVar7 == 0) {
          return 0xffffffff;
        }
LAB_00af2d98:
        uVar17 = 0;
        bVar6 = true;
LAB_00af2da0:
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
          goto LAB_00af2720;
        }
        BUF_MEM_free((BUF_MEM *)str);
        iVar7 = 0x41;
        iVar8 = 0x1e5;
      }
    }
    else {
      iVar7 = 0x103;
      iVar8 = 0x1d9;
    }
  }
LAB_00af2b68:
  ERR_put_error(0x14,0x15e,iVar7,"ssl/d1_lib.c",iVar8);
  return 0xffffffff;
}

