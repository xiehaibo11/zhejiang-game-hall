
undefined8 FUN_00dbc97c(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  uint *puVar3;
  long lVar4;
  uint *local_58;
  uint local_44;
  
  uVar1 = 2;
  if ((*(ushort *)(param_2 + 2) < 0x13) &&
     ((1 << (ulong)(*(ushort *)(param_2 + 2) & 0x1f) & 0x52010U) != 0)) {
    uVar1 = FUN_00dbbafc(param_1,param_2,&local_44,8,&local_58);
    if (((int)uVar1 == 0) && (local_58 != (uint *)0x0)) {
      if ((*(ushort *)(param_2 + 2) | 2) == 0x12) {
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
        pvVar2 = _TIFFmalloc((ulong)(local_44 << 3));
        if (pvVar2 == (void *)0x0) {
          _TIFFfree(local_58);
          uVar1 = 7;
        }
        else {
          if (((*(short *)(param_2 + 2) == 0xd) || (*(short *)(param_2 + 2) == 4)) &&
             (local_44 != 0)) {
            lVar4 = 0;
            puVar3 = local_58;
            do {
              if (*(char *)(param_1 + 0x10) < '\0') {
                TIFFSwabLong(puVar3);
              }
              *(ulong *)((long)pvVar2 + lVar4 * 8) = (ulong)*puVar3;
              lVar4 = lVar4 + 1;
              puVar3 = puVar3 + 1;
            } while ((uint)lVar4 < local_44);
          }
          _TIFFfree(local_58);
          uVar1 = 0;
          *param_3 = pvVar2;
        }
      }
    }
    else {
      *param_3 = 0;
    }
  }
  return uVar1;
}

