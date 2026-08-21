
undefined8 tls_process_server_hello(int *param_1,long *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  code *pcVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  byte *__s1;
  ulong __n;
  int *piVar17;
  long local_48;
  
  if ((ulong)param_2[1] < 2) {
    iVar7 = 0x9f;
    iVar9 = 0x39d;
LAB_00ad1254:
    ERR_put_error(0x14,0x171,iVar7,"ssl/statem/statem_clnt.c",iVar9);
    uVar8 = 0x32;
  }
  else {
    puVar13 = (undefined1 *)*param_2;
    uVar4 = *puVar13;
    uVar5 = puVar13[1];
    *param_2 = (long)(puVar13 + 2);
    param_2[1] = param_2[1] - 2;
    iVar7 = ssl_choose_client_version(param_1,CONCAT11(uVar4,uVar5));
    if (iVar7 == 0) {
      if ((ulong)param_2[1] < 0x20) {
        iVar7 = 0x9f;
        iVar9 = 0x3ac;
        goto LAB_00ad1254;
      }
      puVar10 = (undefined8 *)*param_2;
      lVar14 = *(long *)(param_1 + 0x24);
      uVar8 = puVar10[2];
      *(undefined8 *)(lVar14 + 0xa8) = puVar10[3];
      *(undefined8 *)(lVar14 + 0xa0) = uVar8;
      uVar8 = *puVar10;
      *(undefined8 *)(lVar14 + 0x98) = puVar10[1];
      *(undefined8 *)(lVar14 + 0x90) = uVar8;
      *param_2 = *param_2 + 0x20;
      param_2[1] = param_2[1] + -0x20;
      param_1[0x2c] = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ad13f4 with catch @ 00ad1334
                       catch(type#1 @ 00000000) { ... } // from try @ 00ad1494 with catch @ 00ad1334
                       catch(type#1 @ 00000000) { ... } // from try @ 00ad1504 with catch @ 00ad1334
                       catch(type#1 @ 00000000) { ... } // from try @ 00ad153c with catch @ 00ad1334
                       catch(type#1 @ 00000000) { ... } // from try @ 00ad15fc with catch @ 00ad1334
                        */
      if (param_2[1] != 0) {
        uVar11 = param_2[1] - 1;
        __s1 = (byte *)*param_2 + 1;
        bVar3 = *(byte *)*param_2;
        __n = (ulong)bVar3;
        uVar6 = uVar11 - __n;
        if (__n <= uVar11) {
          pbVar1 = __s1 + __n;
          *param_2 = (long)pbVar1;
          param_2[1] = uVar6;
          if (0x20 < bVar3) {
            iVar7 = 300;
            iVar9 = 0x3bc;
            goto LAB_00ad1390;
          }
          if (uVar6 < 2) {
            iVar7 = 0x9f;
            iVar9 = 0x3c1;
            goto LAB_00ad1254;
          }
                    /* try { // try from 00ad13c0 to 00bd13c7 has its CatchHandler @ 00ad1590 */
                    /* try { // try from 00ad13c8 to 00bd13f3 has its CatchHandler @ 00ad15a8 */
          *param_2 = (long)(pbVar1 + 2);
          param_2[1] = uVar6 - 2;
          if (((0x300 < *param_1) && (pcVar12 = *(code **)(param_1 + 0xb0), pcVar12 != (code *)0x0))
             && (lVar14 = *(long *)(param_1 + 0x5e), *(long *)(lVar14 + 0x130) != 0)) {
            local_48 = 0;
                    /* try { // try from 00ad13f4 to 00bd1433 has its CatchHandler @ 00ad1334 */
            *(undefined4 *)(lVar14 + 4) = 0x30;
            iVar7 = (*pcVar12)(param_1,lVar14 + 8,(undefined4 *)(lVar14 + 4),0,&local_48,
                               *(undefined8 *)(param_1 + 0xb2));
            if (iVar7 != 0) {
              lVar14 = local_48;
              if (local_48 == 0) {
                lVar14 = ssl_get_cipher_by_char(param_1,pbVar1);
              }
              *(long *)(*(long *)(param_1 + 0x5e) + 0xd8) = lVar14;
              goto LAB_00ad1430;
            }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ad1460 with catch @ 00ad158c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ad13c0 with catch @ 00ad1590
                        */
            ERR_put_error(0x14,0x171,0x44,"ssl/statem/statem_clnt.c",0x3dd);
            uVar8 = 0x50;
            goto LAB_00ad12ac;
          }
LAB_00ad1430:
          piVar17 = *(int **)(param_1 + 0x5e);
                    /* try { // try from 00ad1434 to 00bd1447 has its CatchHandler @ 00ad15a8 */
          uVar2 = piVar17[0xe];
          if (((bVar3 == 0) || (__n != uVar2)) ||
             (iVar7 = memcmp(__s1,piVar17 + 0xf,__n), iVar7 != 0)) {
            if (uVar2 != 0) {
                    /* try { // try from 00ad1460 to 00bd1467 has its CatchHandler @ 00ad158c */
                    /* try { // try from 00ad1468 to 00bd1493 has its CatchHandler @ 00ad15a8 */
              *(int *)(*(long *)(param_1 + 0x6e) + 0x80) =
                   *(int *)(*(long *)(param_1 + 0x6e) + 0x80) + 1;
              iVar7 = ssl_get_new_session(param_1,0);
              if (iVar7 == 0) {
                uVar8 = 0x50;
                goto LAB_00ad12ac;
              }
              piVar17 = *(int **)(param_1 + 0x5e);
            }
            iVar7 = *param_1;
            piVar17[0xe] = (uint)bVar3;
                    /* try { // try from 00ad1494 to 00bd14d3 has its CatchHandler @ 00ad1334 */
            *piVar17 = iVar7;
            memcpy(piVar17 + 0xf,__s1,__n);
            piVar17 = *(int **)(param_1 + 0x5e);
          }
          else {
                    /* try { // try from 00ad1538 to 00bd153b has its CatchHandler @ 00ad15a8 */
                    /* try { // try from 00ad153c to 00bd15bb has its CatchHandler @ 00ad1334 */
            if ((param_1[0x54] != piVar17[0x17]) ||
               (iVar7 = memcmp(piVar17 + 0x18,param_1 + 0x55,(ulong)(uint)param_1[0x54]), iVar7 != 0
               )) {
              iVar7 = 0x110;
              iVar9 = 0x3eb;
              goto LAB_00ad1390;
            }
            param_1[0x2c] = 1;
          }
          if (*param_1 != *piVar17) {
            iVar7 = 0xd2;
            iVar9 = 0x40a;
            goto LAB_00ad12a4;
          }
          lVar14 = ssl_get_cipher_by_char(param_1,pbVar1);
          if (lVar14 == 0) {
            iVar7 = 0xf8;
            iVar9 = 0x412;
          }
          else {
            iVar7 = *param_1;
            lVar15 = *(long *)(param_1 + 0x24);
                    /* try { // try from 00ad14d4 to 00bd1503 has its CatchHandler @ 00ad15a8 */
            *(int *)(lVar15 + 0x334) = iVar7;
            *(int *)(lVar15 + 0x338) = iVar7;
            iVar7 = ssl_cipher_disabled(param_1,lVar14,0x10003);
            if (iVar7 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ad13c8 with catch @ 00ad15a8
                       catch(type#1 @ 00000000) { ... } // from try @ 00ad1434 with catch @ 00ad15a8
                       catch(type#1 @ 00000000) { ... } // from try @ 00ad1468 with catch @ 00ad15a8
                       catch(type#1 @ 00000000) { ... } // from try @ 00ad14d4 with catch @ 00ad15a8
                       catch(type#1 @ 00000000) { ... } // from try @ 00ad1538 with catch @ 00ad15a8
                        */
              uVar8 = ssl_get_ciphers_by_id(param_1);
              iVar7 = OPENSSL_sk_find(uVar8,lVar14);
              if (iVar7 < 0) {
                iVar7 = 0x105;
                iVar9 = 0x42a;
              }
              else {
                    /* try { // try from 00ad15bc to 00bd15bf has its CatchHandler @ 00ad162c */
                lVar15 = *(long *)(param_1 + 0x5e);
                if (*(long *)(lVar15 + 0xd8) != 0) {
                  *(ulong *)(lVar15 + 0xe0) = (ulong)*(uint *)(*(long *)(lVar15 + 0xd8) + 0x10);
                }
                iVar7 = param_1[0x2c];
                if ((iVar7 == 0) || (*(ulong *)(lVar15 + 0xe0) == (ulong)*(uint *)(lVar14 + 0x10)))
                {
                  lVar16 = *(long *)(param_1 + 0x24);
                  *(long *)(lVar16 + 0x228) = lVar14;
                  if (param_2[1] == 0) {
                    iVar7 = 0x9f;
                    iVar9 = 0x43f;
                    goto LAB_00ad1254;
                  }
                    /* try { // try from 00ad15f8 to 00bd15fb has its CatchHandler @ 00ad1640 */
                    /* try { // try from 00ad15fc to 00bd1653 has its CatchHandler @ 00ad1334 */
                  bVar3 = *(byte *)*param_2;
                  *param_2 = (long)((byte *)*param_2 + 1);
                  param_2[1] = param_2[1] + -1;
                  if ((iVar7 == 0) || (*(uint *)(lVar15 + 0xd0) == (uint)bVar3)) {
                    if (bVar3 == 0) {
                      lVar14 = 0;
LAB_00ad16c4:
                      *(long *)(lVar16 + 0x280) = lVar14;
                      iVar7 = ssl_parse_serverhello_tlsext(param_1,param_2);
                      if (iVar7 == 0) {
                    /* try { // try from 00ad171c to 00bd171f has its CatchHandler @ 00ad175c */
                        ERR_put_error(0x14,0x171,0xe3,"ssl/statem/statem_clnt.c",0x46f);
                        goto LAB_00ad12b8;
                      }
                      if (param_2[1] == 0) {
                        return 3;
                      }
                      iVar7 = 0x73;
                      iVar9 = 0x476;
                      goto LAB_00ad1254;
                    }
                    iVar7 = ssl_allow_compression(param_1);
                    if (iVar7 == 0) {
                      iVar7 = 0x157;
                      iVar9 = 0x45d;
                    }
                    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ad15bc with catch @ 00ad162c
                        */
                      lVar14 = ssl3_comp_find(*(undefined8 *)(*(long *)(param_1 + 0x6e) + 0xf0),
                                              bVar3);
                      if (lVar14 != 0) {
                        lVar16 = *(long *)(param_1 + 0x24);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ad15f8 with catch @ 00ad1640
                        */
                        goto LAB_00ad16c4;
                      }
                      iVar7 = 0x101;
                      iVar9 = 0x466;
                    }
                  }
                  else {
                    iVar7 = 0x158;
                    iVar9 = 0x456;
                  }
                }
                else {
                  iVar7 = 0xc5;
                  iVar9 = 0x438;
                }
              }
            }
            else {
              iVar7 = 0x105;
              iVar9 = 0x421;
                    /* try { // try from 00ad1504 to 00bd1537 has its CatchHandler @ 00ad1334 */
            }
          }
LAB_00ad1390:
          ERR_put_error(0x14,0x171,iVar7,"ssl/statem/statem_clnt.c",iVar9);
          uVar8 = 0x2f;
          goto LAB_00ad12ac;
        }
      }
      iVar7 = 0x9f;
      iVar9 = 0x3b5;
      goto LAB_00ad1254;
    }
    iVar9 = 0x3a4;
LAB_00ad12a4:
    ERR_put_error(0x14,0x171,iVar7,"ssl/statem/statem_clnt.c",iVar9);
    uVar8 = 0x46;
  }
LAB_00ad12ac:
  ssl3_send_alert(param_1,2,uVar8);
LAB_00ad12b8:
  ossl_statem_set_error(param_1);
  return 0;
}

