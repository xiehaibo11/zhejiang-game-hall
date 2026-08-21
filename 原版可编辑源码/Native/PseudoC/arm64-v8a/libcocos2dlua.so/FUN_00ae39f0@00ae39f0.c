
/* WARNING: Type propagation algorithm not settling */

int FUN_00ae39f0(long param_1,void *param_2,undefined4 *param_3)

{
  int iVar1;
  pitem *ppVar2;
  void *ptr;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  void *__dest;
  undefined4 uVar8;
  undefined1 auStack_158 [256];
  long local_58;
  
  uVar5 = *(ulong *)((long)param_2 + 0x20);
  if (*(long *)((long)param_2 + 0x18) + uVar5 <= *(ulong *)((long)param_2 + 8)) {
    uVar6 = *(ulong *)(param_1 + 0x1f8);
    if (uVar6 < 0x454d) {
      uVar6 = 0x454c;
    }
    if (*(ulong *)((long)param_2 + 8) <= uVar6) {
      if (uVar5 == 0) {
        return -3;
      }
      local_58 = (ulong)CONCAT11((char)*(undefined2 *)((long)param_2 + 0x10),
                                 (char)((ushort)*(undefined2 *)((long)param_2 + 0x10) >> 8)) << 0x30
      ;
      ppVar2 = pqueue_find(*(pqueue *)(*(long *)(param_1 + 0x98) + 0x110),(uchar *)&local_58);
      if (ppVar2 == (pitem *)0x0) {
        __dest = (void *)FUN_00ae383c(*(undefined8 *)((long)param_2 + 8),1);
        if (__dest != (void *)0x0) {
          memcpy(__dest,param_2,0x58);
          *(undefined8 *)((long)__dest + 0x18) = 0;
          *(undefined8 *)((long)__dest + 0x20) = *(undefined8 *)((long)__dest + 8);
          lVar4 = *(long *)((long)__dest + 0x60);
          goto joined_r0x00ae3b74;
        }
      }
      else {
        __dest = ppVar2->data;
        if (*(long *)((long)__dest + 8) == *(long *)((long)param_2 + 8)) {
          lVar4 = *(long *)((long)__dest + 0x60);
joined_r0x00ae3b74:
          if (lVar4 == 0) {
            while( true ) {
              uVar8 = (undefined4)uVar5;
              if (0xff < uVar5) {
                uVar8 = 0x100;
              }
              iVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x68))
                                (param_1,0x16,0,auStack_158,uVar8,0);
              if (iVar1 < 1) break;
              uVar5 = uVar5 - (long)iVar1;
              if (uVar5 == 0) {
                return -3;
              }
            }
LAB_00ae3bbc:
            if (ppVar2 != (pitem *)0x0) goto LAB_00ae3a48;
          }
          else {
            iVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x68))
                              (param_1,0x16,0,
                               *(long *)((long)__dest + 0x58) + *(long *)((long)param_2 + 0x18),
                               uVar5 & 0xffffffff,0);
            if (uVar5 != (long)iVar1) {
              iVar1 = -1;
            }
            if (iVar1 < 1) goto LAB_00ae3bbc;
            uVar6 = *(ulong *)((long)param_2 + 0x18);
            if ((long)uVar5 < 9) {
              if ((long)uVar6 < (long)(uVar6 + uVar5)) {
                do {
                  lVar4 = (long)uVar6 >> 3;
                  uVar3 = (uint)uVar6;
                  uVar6 = uVar6 + 1;
                  *(byte *)(*(long *)((long)__dest + 0x60) + lVar4) =
                       (byte)(1 << (ulong)(uVar3 & 7)) |
                       *(byte *)(*(long *)((long)__dest + 0x60) + lVar4);
                } while ((long)uVar6 < (long)(*(long *)((long)param_2 + 0x18) + uVar5));
              }
            }
            else {
              *(byte *)(*(long *)((long)__dest + 0x60) + ((long)uVar6 >> 3)) =
                   *(byte *)(*(long *)((long)__dest + 0x60) + ((long)uVar6 >> 3)) |
                   (&DAT_013d2f03)[uVar6 & 7];
              uVar6 = *(long *)((long)param_2 + 0x18) + uVar5;
              lVar4 = (*(long *)((long)param_2 + 0x18) >> 3) + 1;
                    /* try { // try from 00ae3bfc to 00be3c77 has its CatchHandler @ 00ae3bfc
                       catch() { ... } // from try @ 00ae3bfc with catch @ 00ae3bfc
                       catch() { ... } // from try @ 00ae3d60 with catch @ 00ae3bfc
                       catch() { ... } // from try @ 00ae3e5c with catch @ 00ae3bfc */
              lVar7 = (long)(uVar6 - 1) >> 3;
              if (lVar4 < lVar7) {
                do {
                  *(undefined1 *)(*(long *)((long)__dest + 0x60) + lVar4) = 0xff;
                  lVar4 = lVar4 + 1;
                  uVar6 = *(long *)((long)param_2 + 0x18) + uVar5;
                  lVar7 = (long)(uVar6 - 1) >> 3;
                } while (lVar4 < lVar7);
              }
              *(byte *)(*(long *)((long)__dest + 0x60) + lVar7) =
                   *(byte *)(*(long *)((long)__dest + 0x60) + lVar7) | (&DAT_013d2f0b)[uVar6 & 7];
            }
            uVar5 = *(ulong *)((long)param_2 + 8);
            if ((long)uVar5 < 1) {
                    /* try { // try from 00ae3d58 to 00be3d5f has its CatchHandler @ 00ae3e68 */
                    /* WARNING: Subroutine does not return */
              OPENSSL_die("assertion failed: ((long)msg_hdr->msg_len) > 0",
                          "ssl/statem/statem_dtls.c",0x247);
            }
            ptr = *(void **)((long)__dest + 0x60);
            lVar4 = (long)(uVar5 - 1) >> 3;
                    /* try { // try from 00ae3c78 to 00be3cdb has its CatchHandler @ 00ae3e80 */
            if (*(char *)((long)ptr + lVar4) == (&DAT_013d2f0b)[uVar5 & 7]) {
              do {
                if (lVar4 < 1) {
                  CRYPTO_free(ptr);
                  *(undefined8 *)((long)__dest + 0x60) = 0;
                  break;
                }
                lVar7 = lVar4 + -1;
                lVar4 = lVar4 + -1;
              } while (*(char *)((long)ptr + lVar7) == -1);
            }
            if (ppVar2 != (pitem *)0x0) {
              return -3;
            }
            ppVar2 = pitem_new((uchar *)&local_58,__dest);
            if (ppVar2 != (pitem *)0x0) {
              ppVar2 = pqueue_insert(*(pqueue *)(*(long *)(param_1 + 0x98) + 0x110),ppVar2);
              if (ppVar2 != (pitem *)0x0) {
                return -3;
              }
                    /* try { // try from 00ae3d60 to 00be3dcf has its CatchHandler @ 00ae3bfc */
                    /* WARNING: Subroutine does not return */
              OPENSSL_die("assertion failed: item != NULL","ssl/statem/statem_dtls.c",0x25c);
            }
            iVar1 = -1;
          }
          if (__dest != (void *)0x0) {
            if (*(int *)((long)__dest + 0x28) != 0) {
              EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)((long)__dest + 0x30));
              EVP_MD_CTX_free(*(undefined8 *)((long)__dest + 0x38));
            }
            CRYPTO_free(*(void **)((long)__dest + 0x58));
            CRYPTO_free(*(void **)((long)__dest + 0x60));
            CRYPTO_free(__dest);
          }
          goto LAB_00ae3a48;
        }
      }
    }
  }
  iVar1 = -1;
LAB_00ae3a48:
  *param_3 = 0;
  return iVar1;
}

