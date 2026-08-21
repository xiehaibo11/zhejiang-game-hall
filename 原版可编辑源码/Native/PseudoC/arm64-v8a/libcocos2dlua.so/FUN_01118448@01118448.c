
uint FUN_01118448(long param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  uint uVar2;
  void *__ptr;
  ulong *puVar3;
  long lVar4;
  ulong *local_58;
  uint local_44;
  
  uVar2 = 2;
  if ((*(ushort *)(param_2 + 2) < 0x12) &&
     ((1 << (ulong)(*(ushort *)(param_2 + 2) & 0x1f) & 0x3035aU) != 0)) {
    uVar2 = FUN_01117fa4(param_1,param_2,&local_44,4,&local_58);
    if ((uVar2 == 0) && (local_58 != (ulong *)0x0)) {
      if (*(short *)(param_2 + 2) == 9) {
        if (local_44 != 0) {
          uVar2 = 0;
          puVar3 = local_58;
          do {
            if (*(char *)(param_1 + 0x10) < '\0') {
              TIFFSwabLong(puVar3);
            }
            uVar1 = *puVar3;
            if ((int)(uint)uVar1 < 0) {
              _TIFFfree(local_58);
              return (uint)uVar1 >> 0x1d & 4;
            }
            uVar2 = uVar2 + 1;
            puVar3 = (ulong *)((long)puVar3 + 4);
          } while (uVar2 < local_44);
        }
        uVar2 = 0;
        *param_3 = local_58;
      }
      else if (*(short *)(param_2 + 2) == 4) {
        *param_3 = local_58;
                    /* catch() { ... } // from try @ 01118404 with catch @ 011184d8 */
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabArrayOfLong(local_58,local_44);
          uVar2 = 0;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        __ptr = _TIFFmalloc((ulong)(local_44 << 2));
        if (__ptr == (void *)0x0) {
          _TIFFfree(local_58);
          uVar2 = 7;
        }
        else {
          switch(*(undefined2 *)(param_2 + 2)) {
          case 1:
            if (local_44 != 0) {
              lVar4 = 0;
              do {
                *(uint *)((long)__ptr + lVar4 * 4) = (uint)*(byte *)((long)local_58 + lVar4);
                lVar4 = lVar4 + 1;
              } while ((uint)lVar4 < local_44);
            }
            break;
          case 3:
            if (local_44 != 0) {
              lVar4 = 0;
              puVar3 = local_58;
              do {
                if (*(char *)(param_1 + 0x10) < '\0') {
                  TIFFSwabShort(puVar3);
                }
                *(uint *)((long)__ptr + lVar4 * 4) = (uint)(ushort)*puVar3;
                lVar4 = lVar4 + 1;
                puVar3 = (ulong *)((long)puVar3 + 2);
              } while ((uint)lVar4 < local_44);
            }
            break;
          case 6:
            if (local_44 != 0) {
              lVar4 = 0;
              do {
                if (*(char *)((long)local_58 + lVar4) < 0) {
LAB_01118704:
                  _TIFFfree(local_58);
                  _TIFFfree(__ptr);
                  return 4;
                    /* try { // try from 01118718 to 0121875b has its CatchHandler @ 01118718
                       catch(type#1 @ 00000000) { ... } // from try @ 01118718 with catch @ 01118718
                       catch(type#1 @ 00000000) { ... } // from try @ 0111877c with catch @ 01118718
                       catch(type#1 @ 00000000) { ... } // from try @ 011187c4 with catch @ 01118718
                        */
                }
                *(int *)((long)__ptr + lVar4 * 4) = (int)*(char *)((long)local_58 + lVar4);
                lVar4 = lVar4 + 1;
              } while ((uint)lVar4 < local_44);
            }
            break;
          case 8:
            if (local_44 != 0) {
              lVar4 = 0;
              puVar3 = local_58;
              do {
                if (*(char *)(param_1 + 0x10) < '\0') {
                  TIFFSwabShort(puVar3);
                }
                if ((short)*puVar3 < 0) goto LAB_01118704;
                *(int *)((long)__ptr + lVar4 * 4) = (int)(short)*puVar3;
                lVar4 = lVar4 + 1;
                puVar3 = (ulong *)((long)puVar3 + 2);
              } while ((uint)lVar4 < local_44);
            }
            break;
          case 0x10:
                    /* catch() { ... } // from try @ 011186ac with catch @ 01118674 */
            if (local_44 != 0) {
              lVar4 = 0;
              puVar3 = local_58;
              do {
                if (*(char *)(param_1 + 0x10) < '\0') {
                  TIFFSwabLong8(puVar3);
                }
                if (*puVar3 >> 0x20 != 0) goto LAB_01118704;
                *(int *)((long)__ptr + lVar4 * 4) = (int)*puVar3;
                lVar4 = lVar4 + 1;
                    /* try { // try from 011186a4 to 012186ab has its CatchHandler @ 011186fc */
                puVar3 = puVar3 + 1;
                    /* try { // try from 011186ac to 01218717 has its CatchHandler @ 01118674 */
              } while ((uint)lVar4 < local_44);
            }
            break;
          case 0x11:
            if (local_44 != 0) {
              lVar4 = 0;
              puVar3 = local_58;
              do {
                if (*(char *)(param_1 + 0x10) < '\0') {
                  TIFFSwabLong8(puVar3);
                }
                if (*puVar3 >> 0x20 != 0) goto LAB_01118704;
                *(int *)((long)__ptr + lVar4 * 4) = (int)*puVar3;
                lVar4 = lVar4 + 1;
                puVar3 = puVar3 + 1;
              } while ((uint)lVar4 < local_44);
            }
          }
          _TIFFfree(local_58);
          uVar2 = 0;
                    /* catch() { ... } // from try @ 011186a4 with catch @ 011186fc */
          *param_3 = __ptr;
        }
      }
    }
    else {
      *param_3 = 0;
    }
  }
  return uVar2;
}

