
undefined8 FUN_00dbbcd0(long param_1,long param_2,undefined8 *param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  long lVar5;
  ulong *__ptr;
  ulong *local_50;
  uint local_44;
  
  if (0x11 < *(ushort *)(param_2 + 2)) {
    return 2;
  }
  if ((1 << (ulong)(*(ushort *)(param_2 + 2) & 0x1f) & 0x303deU) == 0) {
    return 2;
  }
  uVar3 = FUN_00dbbafc(param_1,param_2,&local_44,1,&local_50);
  uVar2 = local_44;
  __ptr = local_50;
  if (((int)uVar3 != 0) || (local_50 == (ulong *)0x0)) {
    *param_3 = 0;
    return uVar3;
  }
  uVar1 = *(ushort *)(param_2 + 2);
  if ((1 < uVar1 - 1) && (uVar1 != 7)) {
    if (uVar1 != 6) {
      puVar4 = _TIFFmalloc((ulong)local_44);
      if (puVar4 == (ulong *)0x0) {
        _TIFFfree(__ptr);
        return 7;
      }
      switch(*(undefined2 *)(param_2 + 2)) {
      case 3:
        if (uVar2 != 0) {
          lVar5 = 0;
          do {
            if (*(char *)(param_1 + 0x10) < '\0') {
              TIFFSwabShort(__ptr);
            }
            if (0xff < (ushort)*__ptr) goto LAB_00dbbf88;
            *(char *)((long)puVar4 + lVar5) = (char)(ushort)*__ptr;
            lVar5 = lVar5 + 1;
            __ptr = (ulong *)((long)__ptr + 2);
          } while ((uint)lVar5 < local_44);
        }
        break;
      case 4:
        if (uVar2 != 0) {
          lVar5 = 0;
          do {
            if (*(char *)(param_1 + 0x10) < '\0') {
              TIFFSwabLong(__ptr);
            }
            if (0xff < (uint)*__ptr) goto LAB_00dbbf88;
            *(char *)((long)puVar4 + lVar5) = (char)(uint)*__ptr;
            lVar5 = lVar5 + 1;
            __ptr = (ulong *)((long)__ptr + 4);
          } while ((uint)lVar5 < local_44);
        }
        break;
      case 8:
        if (uVar2 != 0) {
          lVar5 = 0;
          do {
            if (*(char *)(param_1 + 0x10) < '\0') {
              TIFFSwabShort(__ptr);
            }
            if (0xff < (ushort)*__ptr) goto LAB_00dbbf88;
            *(char *)((long)puVar4 + lVar5) = (char)(ushort)*__ptr;
            lVar5 = lVar5 + 1;
            __ptr = (ulong *)((long)__ptr + 2);
          } while ((uint)lVar5 < local_44);
        }
        break;
      case 9:
        if (uVar2 != 0) {
          lVar5 = 0;
          do {
            if (*(char *)(param_1 + 0x10) < '\0') {
              TIFFSwabLong(__ptr);
            }
            if (0xff < (uint)*__ptr) goto LAB_00dbbf88;
            *(char *)((long)puVar4 + lVar5) = (char)(uint)*__ptr;
            lVar5 = lVar5 + 1;
            __ptr = (ulong *)((long)__ptr + 4);
          } while ((uint)lVar5 < local_44);
        }
        break;
      case 0x10:
        if (uVar2 != 0) {
          lVar5 = 0;
          do {
            if (*(char *)(param_1 + 0x10) < '\0') {
              TIFFSwabLong8(__ptr);
            }
            if (0xff < *__ptr) goto LAB_00dbbf88;
            *(char *)((long)puVar4 + lVar5) = (char)*__ptr;
            lVar5 = lVar5 + 1;
            __ptr = __ptr + 1;
          } while ((uint)lVar5 < local_44);
        }
        break;
      case 0x11:
        if (uVar2 != 0) {
          lVar5 = 0;
          do {
            if (*(char *)(param_1 + 0x10) < '\0') {
              TIFFSwabLong8(__ptr);
            }
            if (0xff < *__ptr) goto LAB_00dbbf88;
            *(char *)((long)puVar4 + lVar5) = (char)*__ptr;
            lVar5 = lVar5 + 1;
            __ptr = __ptr + 1;
          } while ((uint)lVar5 < local_44);
        }
      }
      _TIFFfree(local_50);
      *param_3 = puVar4;
      return 0;
    }
    if (local_44 != 0) {
      lVar5 = 0;
      do {
        if (*(char *)((long)local_50 + lVar5) < '\0') goto LAB_00dbbf94;
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < local_44);
    }
  }
  *param_3 = local_50;
  return 0;
LAB_00dbbf88:
  _TIFFfree(local_50);
  local_50 = puVar4;
LAB_00dbbf94:
  _TIFFfree(local_50);
  return 4;
}

