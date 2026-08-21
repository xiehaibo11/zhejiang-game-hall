
uint FUN_00dbbfa0(long param_1,long param_2,undefined8 *param_3)

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
    uVar2 = FUN_00dbbafc(param_1,param_2,&local_44,4,&local_58);
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
LAB_00dbc25c:
                  _TIFFfree(local_58);
                  _TIFFfree(__ptr);
                  return 4;
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
                if ((short)*puVar3 < 0) goto LAB_00dbc25c;
                *(int *)((long)__ptr + lVar4 * 4) = (int)(short)*puVar3;
                lVar4 = lVar4 + 1;
                puVar3 = (ulong *)((long)puVar3 + 2);
              } while ((uint)lVar4 < local_44);
            }
            break;
          case 0x10:
            if (local_44 != 0) {
              lVar4 = 0;
              puVar3 = local_58;
              do {
                if (*(char *)(param_1 + 0x10) < '\0') {
                  TIFFSwabLong8(puVar3);
                }
                if (*puVar3 >> 0x20 != 0) goto LAB_00dbc25c;
                *(int *)((long)__ptr + lVar4 * 4) = (int)*puVar3;
                lVar4 = lVar4 + 1;
                puVar3 = puVar3 + 1;
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
                if (*puVar3 >> 0x20 != 0) goto LAB_00dbc25c;
                *(int *)((long)__ptr + lVar4 * 4) = (int)*puVar3;
                lVar4 = lVar4 + 1;
                puVar3 = puVar3 + 1;
              } while ((uint)lVar4 < local_44);
            }
          }
          _TIFFfree(local_58);
          uVar2 = 0;
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

