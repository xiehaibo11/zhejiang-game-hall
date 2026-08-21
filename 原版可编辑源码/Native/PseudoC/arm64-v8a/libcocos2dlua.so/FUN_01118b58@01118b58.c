
uint FUN_01118b58(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  void *__ptr;
  uint *puVar2;
  long lVar3;
  uint *local_58;
  uint local_44;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118ac4 with catch @ 01118b6c
                        */
  uVar1 = 2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118b04 with catch @ 01118b88
                        */
                    /* try { // try from 01118b8c to 01218b93 has its CatchHandler @ 01118b9c */
                    /* try { // try from 01118b94 to 01218b9f has its CatchHandler @ 01118a78 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118b8c with catch @ 01118b9c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118bf8 with catch @ 01118ba0
                       catch(type#1 @ 00000000) { ... } // from try @ 01118c68 with catch @ 01118ba0
                       catch(type#1 @ 00000000) { ... } // from try @ 01118cdc with catch @ 01118ba0
                        */
  if ((*(ushort *)(param_2 + 2) < 0x12) &&
     ((1 << (ulong)(*(ushort *)(param_2 + 2) & 0x1f) & 0x3035aU) != 0)) {
    uVar1 = FUN_01117fa4(param_1,param_2,&local_44,8,&local_58);
    if ((uVar1 == 0) && (local_58 != (uint *)0x0)) {
      if (*(short *)(param_2 + 2) == 0x11) {
        if (local_44 != 0) {
          uVar1 = 0;
          puVar2 = local_58;
          do {
                    /* try { // try from 01118c30 to 01218c37 has its CatchHandler @ 01118ccc */
            if (*(char *)(param_1 + 0x10) < '\0') {
              TIFFSwabLong8(puVar2);
            }
                    /* try { // try from 01118c40 to 01218c67 has its CatchHandler @ 01118cd0 */
            if (*(long *)puVar2 < 0) {
                    /* try { // try from 01118cdc to 01218ce7 has its CatchHandler @ 01118ba0 */
              _TIFFfree(local_58);
              return 4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118cd4 with catch @ 01118ce4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118d58 with catch @ 01118ce8
                       catch(type#1 @ 00000000) { ... } // from try @ 01118dfc with catch @ 01118ce8
                       catch(type#1 @ 00000000) { ... } // from try @ 01118e8c with catch @ 01118ce8
                        */
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 2;
          } while (uVar1 < local_44);
        }
        uVar1 = 0;
        *param_3 = local_58;
      }
      else if (*(short *)(param_2 + 2) == 0x10) {
        *param_3 = local_58;
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabArrayOfLong8(local_58,local_44);
          uVar1 = 0;
        }
        else {
                    /* try { // try from 01118bf0 to 01218bf7 has its CatchHandler @ 01118cb0 */
          uVar1 = 0;
        }
      }
      else {
                    /* try { // try from 01118c68 to 01218cd3 has its CatchHandler @ 01118ba0 */
        __ptr = _TIFFmalloc((ulong)(local_44 << 3));
        if (__ptr == (void *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118c30 with catch @ 01118ccc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118c40 with catch @ 01118cd0
                        */
          _TIFFfree(local_58);
                    /* try { // try from 01118cd4 to 01218cdb has its CatchHandler @ 01118ce4 */
          uVar1 = 7;
        }
        else {
          switch(*(undefined2 *)(param_2 + 2)) {
          case 1:
            if (local_44 != 0) {
              lVar3 = 0;
              do {
                *(ulong *)((long)__ptr + lVar3 * 8) = (ulong)*(byte *)((long)local_58 + lVar3);
                lVar3 = lVar3 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118bf0 with catch @ 01118cb0
                        */
              } while ((uint)lVar3 < local_44);
            }
            break;
          case 3:
            if (local_44 != 0) {
              lVar3 = 0;
              puVar2 = local_58;
              do {
                if (*(char *)(param_1 + 0x10) < '\0') {
                  TIFFSwabShort(puVar2);
                }
                *(ulong *)((long)__ptr + lVar3 * 8) = (ulong)(ushort)*puVar2;
                lVar3 = lVar3 + 1;
                puVar2 = (uint *)((long)puVar2 + 2);
              } while ((uint)lVar3 < local_44);
            }
            break;
          case 4:
            if (local_44 != 0) {
              lVar3 = 0;
              puVar2 = local_58;
              do {
                if (*(char *)(param_1 + 0x10) < '\0') {
                  TIFFSwabLong(puVar2);
                }
                *(ulong *)((long)__ptr + lVar3 * 8) = (ulong)*puVar2;
                lVar3 = lVar3 + 1;
                puVar2 = puVar2 + 1;
              } while ((uint)lVar3 < local_44);
            }
            break;
          case 6:
            if (local_44 != 0) {
                    /* try { // try from 01118d58 to 01218d93 has its CatchHandler @ 01118ce8 */
              lVar3 = 0;
              do {
                if ((long)*(char *)((long)local_58 + lVar3) < 0) {
LAB_01118e04:
                  uVar1 = 4;
LAB_01118e10:
                  _TIFFfree(local_58);
                  _TIFFfree(__ptr);
                  return uVar1;
                }
                *(long *)((long)__ptr + lVar3 * 8) = (long)*(char *)((long)local_58 + lVar3);
                lVar3 = lVar3 + 1;
              } while ((uint)lVar3 < local_44);
            }
            break;
          case 8:
            if (local_44 != 0) {
              lVar3 = 0;
              puVar2 = local_58;
              do {
                if (*(char *)(param_1 + 0x10) < '\0') {
                  TIFFSwabShort(puVar2);
                }
                    /* try { // try from 01118d94 to 01218d9b has its CatchHandler @ 01118e7c */
                if ((long)(short)*puVar2 < 0) goto LAB_01118e04;
                *(long *)((long)__ptr + lVar3 * 8) = (long)(short)*puVar2;
                lVar3 = lVar3 + 1;
                    /* try { // try from 01118da4 to 01218dab has its CatchHandler @ 01118e78 */
                puVar2 = (uint *)((long)puVar2 + 2);
              } while ((uint)lVar3 < local_44);
            }
            break;
          case 9:
                    /* try { // try from 01118db4 to 01218dbb has its CatchHandler @ 01118e74 */
            if (local_44 != 0) {
              lVar3 = 0;
              puVar2 = local_58;
              do {
                    /* try { // try from 01118dc4 to 01218dfb has its CatchHandler @ 01118e80 */
                if (*(char *)(param_1 + 0x10) < '\0') {
                  TIFFSwabLong(puVar2);
                }
                uVar1 = (uint)((ulong)(long)(int)*puVar2 >> 0x1d);
                if ((uVar1 & 7) >> 2 != 0) {
                  uVar1 = uVar1 & 4;
                  goto LAB_01118e10;
                }
                *(long *)((long)__ptr + lVar3 * 8) = (long)(int)*puVar2;
                lVar3 = lVar3 + 1;
                puVar2 = puVar2 + 1;
              } while ((uint)lVar3 < local_44);
            }
          }
          _TIFFfree(local_58);
          uVar1 = 0;
                    /* try { // try from 01118dfc to 01218e83 has its CatchHandler @ 01118ce8 */
          *param_3 = __ptr;
        }
      }
    }
    else {
                    /* try { // try from 01118bf8 to 01218c2f has its CatchHandler @ 01118ba0 */
      *param_3 = 0;
    }
  }
  return uVar1;
}

