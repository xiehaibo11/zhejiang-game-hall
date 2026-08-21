
uint FUN_00dbc6b0(long param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  void *__ptr;
  uint *puVar2;
  long lVar3;
  uint *local_58;
  uint local_44;
  
  uVar1 = 2;
  if ((*(ushort *)(param_2 + 2) < 0x12) &&
     ((1 << (ulong)(*(ushort *)(param_2 + 2) & 0x1f) & 0x3035aU) != 0)) {
    uVar1 = FUN_00dbbafc(param_1,param_2,&local_44,8,&local_58);
    if ((uVar1 == 0) && (local_58 != (uint *)0x0)) {
      if (*(short *)(param_2 + 2) == 0x11) {
        if (local_44 != 0) {
          uVar1 = 0;
          puVar2 = local_58;
          do {
            if (*(char *)(param_1 + 0x10) < '\0') {
              TIFFSwabLong8(puVar2);
            }
            if (*(long *)puVar2 < 0) {
              _TIFFfree(local_58);
              return 4;
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
          uVar1 = 0;
        }
      }
      else {
        __ptr = _TIFFmalloc((ulong)(local_44 << 3));
        if (__ptr == (void *)0x0) {
          _TIFFfree(local_58);
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
              lVar3 = 0;
              do {
                if ((long)*(char *)((long)local_58 + lVar3) < 0) {
LAB_00dbc95c:
                  uVar1 = 4;
LAB_00dbc968:
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
                if ((long)(short)*puVar2 < 0) goto LAB_00dbc95c;
                *(long *)((long)__ptr + lVar3 * 8) = (long)(short)*puVar2;
                lVar3 = lVar3 + 1;
                puVar2 = (uint *)((long)puVar2 + 2);
              } while ((uint)lVar3 < local_44);
            }
            break;
          case 9:
            if (local_44 != 0) {
              lVar3 = 0;
              puVar2 = local_58;
              do {
                if (*(char *)(param_1 + 0x10) < '\0') {
                  TIFFSwabLong(puVar2);
                }
                uVar1 = (uint)((ulong)(long)(int)*puVar2 >> 0x1d);
                if ((uVar1 & 7) >> 2 != 0) {
                  uVar1 = uVar1 & 4;
                  goto LAB_00dbc968;
                }
                *(long *)((long)__ptr + lVar3 * 8) = (long)(int)*puVar2;
                lVar3 = lVar3 + 1;
                puVar2 = puVar2 + 1;
              } while ((uint)lVar3 < local_44);
            }
          }
          _TIFFfree(local_58);
          uVar1 = 0;
          *param_3 = __ptr;
        }
      }
    }
    else {
      *param_3 = 0;
    }
  }
  return uVar1;
}

