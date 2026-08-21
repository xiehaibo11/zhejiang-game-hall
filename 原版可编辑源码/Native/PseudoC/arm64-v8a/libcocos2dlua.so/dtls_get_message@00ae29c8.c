
/* WARNING: Removing unreachable block (ram,0x00ae2e8c) */

undefined8 dtls_get_message(int *param_1,int *param_2,ulong *param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  pitem *ppVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  int line;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  uint uVar17;
  ulong uVar18;
  void *pvVar19;
  ulong uVar20;
  ulong uVar21;
  int local_1d4;
  char local_1d0 [8];
  ulong local_1c8;
  ulong local_1b8;
  ulong uStack_1b0;
  int local_178;
  char local_174;
  byte local_173;
  byte local_172;
  byte local_171;
  undefined1 local_170;
  undefined1 local_16f;
  byte local_16e;
  byte local_16d;
  byte local_16c;
  byte local_16b;
  byte local_16a;
  byte local_169;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar14 = *(long *)(param_1 + 0x26);
  memset((void *)(lVar14 + 0x180),0,0x58);
LAB_00ae2bd8:
  do {
                    /* try { // try from 00ae2bd8 to 00be2bdf has its CatchHandler @ 00ae2c34 */
    ppVar10 = pqueue_peek(*(pqueue *)(*(long *)(param_1 + 0x26) + 0x110));
    if (ppVar10 == (pitem *)0x0) {
LAB_00ae2c64:
      iVar8 = 0;
LAB_00ae2c6c:
      iVar7 = (**(code **)(*(long *)(param_1 + 2) + 0x68))(param_1,0x16,&local_178,&local_174,0xc,0)
      ;
      if (iVar7 < 1) {
        param_1[10] = 3;
        uVar18 = (ulong)iVar7;
        iVar7 = 0;
        local_1d4 = iVar8;
      }
      else if (local_178 == 0x14) {
        if (local_174 != '\x01') {
          iVar7 = 0x67;
          line = 0x2e5;
          goto LAB_00ae3098;
        }
        local_1d4 = iVar8;
        memcpy(*(void **)(*(long *)(param_1 + 0x1e) + 8),&local_174,(long)iVar7);
        param_1[0x22] = iVar7 + -1;
        lVar15 = *(long *)(param_1 + 0x24);
        uVar18 = (ulong)(iVar7 + -1);
        iVar7 = 1;
        *(long *)(param_1 + 0x20) = *(long *)(*(long *)(param_1 + 0x1e) + 8) + 1;
        *(undefined4 *)(lVar15 + 0x220) = 0x101;
        *(ulong *)(lVar15 + 0x218) = uVar18;
      }
      else {
        if (iVar7 == 0xc) {
          memset(local_1d0,0,0x58);
          uVar3 = local_16f;
          uVar1 = local_170;
          cVar6 = local_174;
          uVar17 = (uint)CONCAT11(local_170,local_16f);
          uVar20 = (ulong)local_173 << 0x10 | (ulong)local_172 << 8 | (ulong)local_171;
          uVar21 = (ulong)local_16e << 0x10 | (ulong)local_16d << 8 | (ulong)local_16c;
          uVar18 = (ulong)local_16b << 0x10 | (ulong)local_16a << 8 | (ulong)local_169;
          local_1d0[0] = local_174;
          local_1c8 = uVar20;
          local_1b8 = uVar21;
          uStack_1b0 = uVar18;
          uVar11 = RECORD_LAYER_get_rrec_length(param_1 + 0xe8);
          if ((uVar11 & 0xffffffff) < uVar18) {
            local_1d4 = iVar8;
            ERR_put_error(0x14,0x172,0x10f,"ssl/statem/statem_dtls.c",0x306);
            iVar8 = 0x2f;
            goto LAB_00ae30a4;
          }
          lVar15 = *(long *)(param_1 + 0x26);
          if (*(ushort *)(lVar15 + 0x10c) != uVar17) {
            if (uVar20 < uVar18 + uVar21) goto LAB_00ae3048;
            local_68 = (ulong)CONCAT11(uVar3,uVar1) << 0x30;
            local_1d4 = iVar8;
            ppVar10 = pqueue_find(*(pqueue *)(lVar15 + 0x110),(uchar *)&local_68);
            uVar2 = *(ushort *)(*(long *)(param_1 + 0x26) + 0x10c);
            if ((((uVar17 <= uVar2) || (uVar18 == uVar20 && ppVar10 != (pitem *)0x0)) ||
                (uVar2 + 10 < uVar17)) || ((cVar6 == '\x14' && (uVar2 == 0)))) {
              for (; uVar18 != 0; uVar18 = uVar18 - (long)iVar7) {
                uVar16 = (undefined4)uVar18;
                if (0xff < uVar18) {
                  uVar16 = 0x100;
                }
                iVar7 = (**(code **)(*(long *)(param_1 + 2) + 0x68))
                                  (param_1,0x16,0,auStack_168,uVar16,0);
                if (iVar7 < 1) goto LAB_00ae2bac;
              }
LAB_00ae2a18:
              uVar18 = 0xfffffffffffffffd;
              iVar7 = iVar8;
              goto LAB_00ae30c0;
            }
            if (uVar18 != uVar20) {
              iVar8 = FUN_00ae39f0(param_1,local_1d0,&local_1d4);
                    /* try { // try from 00ae2b0c to 00be2b13 has its CatchHandler @ 00ae2b1c */
              uVar18 = (ulong)iVar8;
              iVar7 = local_1d4;
              goto LAB_00ae30c0;
            }
            uVar18 = *(ulong *)(param_1 + 0x7e);
            if (uVar18 < 0x454d) {
              uVar18 = 0x454c;
            }
            if ((uVar18 < uVar20) ||
               (pvVar19 = CRYPTO_malloc(0x68,"ssl/statem/statem_dtls.c",0x3f),
               pvVar19 == (void *)0x0)) {
LAB_00ae3048:
              iVar7 = -1;
            }
            else {
              if (uVar20 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae2b0c with catch @ 00ae2b1c
                        */
                *(undefined8 *)((long)pvVar19 + 0x58) = 0;
                *(undefined8 *)((long)pvVar19 + 0x60) = 0;
                memcpy(pvVar19,local_1d0,0x58);
                iVar7 = -1;
LAB_00ae2b38:
                ppVar10 = pitem_new((uchar *)&local_68,pvVar19);
                if (ppVar10 != (pitem *)0x0) {
                    /* try { // try from 00ae2b4c to 00be2b53 has its CatchHandler @ 00ae2b64 */
                  ppVar10 = pqueue_insert(*(pqueue *)(*(long *)(param_1 + 0x26) + 0x110),ppVar10);
                  if (ppVar10 == (pitem *)0x0) {
                    /* WARNING: Subroutine does not return */
                    OPENSSL_die("assertion failed: item != NULL","ssl/statem/statem_dtls.c",700);
                  }
                  goto LAB_00ae2a18;
                }
              }
              else {
                pvVar9 = CRYPTO_malloc((int)uVar20,"ssl/statem/statem_dtls.c",0x44);
                if (pvVar9 == (void *)0x0) {
                  CRYPTO_free(pvVar19);
                  goto LAB_00ae3048;
                }
                *(void **)((long)pvVar19 + 0x58) = pvVar9;
                *(undefined8 *)((long)pvVar19 + 0x60) = 0;
                memcpy(pvVar19,local_1d0,0x58);
                iVar7 = (**(code **)(*(long *)(param_1 + 2) + 0x68))(param_1,0x16,0,pvVar9,uVar20,0)
                ;
                if (uVar20 != (long)iVar7) {
                  iVar7 = -1;
                }
                if (0 < iVar7) goto LAB_00ae2b38;
              }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae2b4c with catch @ 00ae2b64
                        */
              if (*(int *)((long)pvVar19 + 0x28) != 0) {
                EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)((long)pvVar19 + 0x30));
                EVP_MD_CTX_free(*(undefined8 *)((long)pvVar19 + 0x38));
              }
              CRYPTO_free(*(void **)((long)pvVar19 + 0x58));
              CRYPTO_free(*(void **)((long)pvVar19 + 0x60));
              CRYPTO_free(pvVar19);
            }
LAB_00ae2bac:
            local_1d4 = 0;
            uVar18 = (ulong)iVar7;
            iVar7 = 0;
            goto LAB_00ae30c0;
          }
          if ((uVar18 != 0) && (uVar18 < uVar20)) {
            local_1d4 = iVar8;
            iVar8 = FUN_00ae39f0(param_1,local_1d0,&local_1d4);
            uVar18 = (ulong)iVar8;
            iVar7 = local_1d4;
            goto LAB_00ae30c0;
          }
          if (((param_1[0xe] == 0) && (*(long *)(lVar15 + 0x198) == 0)) && (local_174 == '\0')) {
            if ((local_172 != 0 || local_173 != 0) || local_171 != 0) {
              iVar7 = 0xf4;
              line = 0x32d;
              goto LAB_00ae3098;
            }
            if (*(code **)(param_1 + 0x28) != (code *)0x0) {
              (**(code **)(param_1 + 0x28))
                        (0,*param_1,0x16,&local_174,0xc,param_1,*(undefined8 *)(param_1 + 0x2a));
            }
            param_1[0x22] = 0;
            goto LAB_00ae2bd8;
          }
          local_1d4 = iVar8;
          iVar8 = FUN_00ae3d78(param_1,local_1d0);
          if (iVar8 == 0) {
            if (uVar18 == 0) {
              iVar8 = 0;
            }
            else {
              iVar7 = (**(code **)(*(long *)(param_1 + 2) + 0x68))
                                (param_1,0x16,0,
                                 *(long *)(*(long *)(param_1 + 0x1e) + 8) + uVar21 + 0xc,uVar18,0);
              if (iVar7 < 1) {
                param_1[10] = 3;
                uVar18 = (ulong)iVar7;
                iVar7 = 0;
                goto LAB_00ae30c0;
              }
              iVar8 = (int)uVar18;
              if (iVar7 != iVar8) {
                iVar8 = 0x2f;
                ERR_put_error(0x14,0x172,0x2f,"ssl/statem/statem_dtls.c",0x34e);
                goto LAB_00ae30a4;
              }
            }
            param_1[0x22] = iVar8;
            iVar7 = 1;
            goto LAB_00ae30c0;
          }
        }
        else {
          iVar7 = 0xf4;
          line = 0x2f5;
LAB_00ae3098:
          local_1d4 = iVar8;
          ERR_put_error(0x14,0x172,iVar7,"ssl/statem/statem_dtls.c",line);
          iVar8 = 10;
        }
LAB_00ae30a4:
        ssl3_send_alert(param_1,2,iVar8);
        uVar18 = 0xffffffffffffffff;
        param_1[0x22] = 0;
        iVar7 = 0;
      }
    }
    else {
      pvVar19 = ppVar10->data;
      lVar15 = *(long *)(param_1 + 0x26);
      if (*(ushort *)((long)pvVar19 + 0x10) < *(ushort *)(lVar15 + 0x10c)) {
        pqueue_pop(*(pqueue *)(lVar15 + 0x110));
        if (pvVar19 != (void *)0x0) {
          if (*(int *)((long)pvVar19 + 0x28) != 0) {
            EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)((long)pvVar19 + 0x30));
            EVP_MD_CTX_free(*(undefined8 *)((long)pvVar19 + 0x38));
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ae2bd8 with catch @ 00ae2c34
                        */
          CRYPTO_free(*(void **)((long)pvVar19 + 0x58));
          CRYPTO_free(*(void **)((long)pvVar19 + 0x60));
          CRYPTO_free(pvVar19);
        }
        pitem_free(ppVar10);
        goto LAB_00ae2bd8;
      }
      iVar8 = 0;
      if (*(ushort *)(lVar15 + 0x10c) != *(ushort *)((long)pvVar19 + 0x10)) goto LAB_00ae2c6c;
      if (*(long *)((long)pvVar19 + 0x60) != 0) goto LAB_00ae2c64;
      uVar17 = (uint)*(undefined8 *)((long)pvVar19 + 0x20);
      pqueue_pop(*(pqueue *)(lVar15 + 0x110));
      iVar8 = FUN_00ae3d78(param_1,pvVar19);
      if (iVar8 == 0) {
        memcpy((void *)(*(long *)(*(long *)(param_1 + 0x1e) + 8) + *(long *)((long)pvVar19 + 0x18) +
                       0xc),*(void **)((long)pvVar19 + 0x58),*(size_t *)((long)pvVar19 + 0x20));
        if (*(int *)((long)pvVar19 + 0x28) != 0) {
          EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)((long)pvVar19 + 0x30));
          EVP_MD_CTX_free(*(undefined8 *)((long)pvVar19 + 0x38));
        }
        CRYPTO_free(*(void **)((long)pvVar19 + 0x58));
        CRYPTO_free(*(void **)((long)pvVar19 + 0x60));
        CRYPTO_free(pvVar19);
        pitem_free(ppVar10);
        iVar8 = 1;
        if ((uVar17 | 1) == 0) goto LAB_00ae2c6c;
      }
      else {
        if (*(int *)((long)pvVar19 + 0x28) != 0) {
          EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)((long)pvVar19 + 0x30));
          EVP_MD_CTX_free(*(undefined8 *)((long)pvVar19 + 0x38));
        }
        CRYPTO_free(*(void **)((long)pvVar19 + 0x58));
        CRYPTO_free(*(void **)((long)pvVar19 + 0x60));
        CRYPTO_free(pvVar19);
        pitem_free(ppVar10);
        ssl3_send_alert(param_1,2,iVar8);
        iVar8 = 0;
        uVar17 = 0xffffffff;
        param_1[0x22] = 0;
      }
      uVar18 = (ulong)(int)uVar17;
      iVar7 = 0;
      local_1d4 = iVar8;
      if (iVar8 != 0) {
        param_1[0x22] = uVar17;
        iVar7 = 1;
      }
    }
LAB_00ae30c0:
    if (1 < uVar18 + 3) {
      if (((long)uVar18 < 1) && (iVar7 == 0)) {
        uVar12 = 0;
      }
      else {
        iVar8 = *(int *)(*(long *)(param_1 + 0x24) + 0x220);
        *param_2 = iVar8;
        puVar13 = *(undefined1 **)(*(long *)(param_1 + 0x1e) + 8);
        if (iVar8 == 0x101) {
          if (*(code **)(param_1 + 0x28) != (code *)0x0) {
            (**(code **)(param_1 + 0x28))
                      (0,*param_1,0x14,puVar13,1,param_1,*(undefined8 *)(param_1 + 0x2a));
          }
          *param_3 = uVar18;
        }
        else {
          uVar18 = *(ulong *)(lVar14 + 0x188);
          *puVar13 = *(undefined1 *)(lVar14 + 0x180);
          puVar13[3] = (char)uVar18;
          uVar3 = (undefined1)(uVar18 >> 0x10);
          puVar13[1] = uVar3;
          uVar4 = (undefined1)(uVar18 >> 8);
          puVar13[2] = uVar4;
          puVar13[4] = *(undefined1 *)(lVar14 + 0x191);
          uVar1 = *(undefined1 *)(lVar14 + 400);
          *(undefined2 *)(puVar13 + 6) = 0;
          puVar13[8] = 0;
          puVar13[9] = uVar3;
          puVar13[10] = uVar4;
          puVar13[0xb] = (char)uVar18;
          puVar13[5] = uVar1;
          puVar5 = puVar13 + 0xc;
          if (*param_1 != 0x100) {
            uVar18 = uVar18 + 0xc;
            puVar5 = puVar13;
          }
          uVar12 = ssl3_finish_mac(param_1,puVar5,uVar18 & 0xffffffff);
          if ((int)uVar12 == 0) {
            return uVar12;
          }
          if (*(code **)(param_1 + 0x28) != (code *)0x0) {
            (**(code **)(param_1 + 0x28))
                      (0,*param_1,0x16,puVar5,uVar18,param_1,*(undefined8 *)(param_1 + 0x2a));
          }
          memset((void *)(lVar14 + 0x180),0,0x58);
          *(short *)(*(long *)(param_1 + 0x26) + 0x10c) =
               *(short *)(*(long *)(param_1 + 0x26) + 0x10c) + 1;
          *(long *)(param_1 + 0x20) = *(long *)(*(long *)(param_1 + 0x1e) + 8) + 0xc;
          *param_3 = (long)param_1[0x22];
        }
        uVar12 = 1;
      }
      return uVar12;
    }
  } while( true );
}

