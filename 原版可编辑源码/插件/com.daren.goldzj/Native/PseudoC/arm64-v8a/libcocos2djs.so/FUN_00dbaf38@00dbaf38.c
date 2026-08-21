
undefined8 FUN_00dbaf38(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *local_58;
  uint local_44;
  
  if (0x11 < *(ushort *)(param_2 + 2)) {
    return 2;
  }
  if ((1 << (ulong)(*(ushort *)(param_2 + 2) & 0x1f) & 0x3035aU) == 0) {
    return 2;
  }
  uVar1 = FUN_00dbbafc(param_1,param_2,&local_44,2,&local_58);
  if (((int)uVar1 != 0) || (local_58 == (ulong *)0x0)) {
    *param_3 = 0;
    return uVar1;
  }
  if (*(short *)(param_2 + 2) == 8) {
    if (local_44 != 0) {
      uVar7 = 0;
      puVar2 = local_58;
      do {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabShort(puVar2);
        }
        if ((short)*puVar2 < 0) goto LAB_00dbb240;
        uVar7 = uVar7 + 1;
        puVar2 = (ulong *)((long)puVar2 + 2);
      } while (uVar7 < local_44);
    }
    *param_3 = local_58;
    return 0;
  }
  if (*(short *)(param_2 + 2) == 3) {
    *param_3 = local_58;
    if (-1 < *(char *)(param_1 + 0x10)) {
      return 0;
    }
    TIFFSwabArrayOfShort(local_58,local_44);
    return 0;
  }
  puVar2 = _TIFFmalloc((ulong)(local_44 << 1));
  if (puVar2 == (ulong *)0x0) {
    _TIFFfree(local_58);
    return 7;
  }
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
    if (local_44 == 0) break;
    uVar4 = (ulong)(local_44 - 1);
    puVar5 = puVar2;
    puVar6 = local_58;
    if (uVar4 + 1 < 0x10) {
LAB_00dbb0b0:
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 1) - (ulong)(local_44 & 0xf);
      if (uVar3 != 0) {
        if ((puVar2 < (ulong *)((long)local_58 + uVar4 + 1)) &&
           (local_58 < (ulong *)((long)puVar2 + uVar4 * 2 + 2))) goto LAB_00dbb0b0;
        puVar5 = local_58 + 1;
        puVar6 = puVar2 + 2;
        uVar4 = uVar3;
        do {
          uVar9 = puVar5[-1];
          uVar10 = *puVar5;
          puVar5 = puVar5 + 2;
          uVar4 = uVar4 - 0x10;
          puVar6[-1] = (ulong)CONCAT16((char)(uVar9 >> 0x38),
                                       (uint6)CONCAT14((char)(uVar9 >> 0x30),
                                                       (uint)CONCAT12((char)(uVar9 >> 0x28),
                                                                      (ushort)(byte)(uVar9 >> 0x20))
                                                      ));
          puVar6[-2] = (ulong)CONCAT16((char)(uVar9 >> 0x18),
                                       (uint6)CONCAT14((char)(uVar9 >> 0x10),
                                                       (uint)(CONCAT12((char)(uVar9 >> 8),
                                                                       (short)uVar9) & 0xff00ff)));
          puVar6[1] = (ulong)CONCAT16((char)(uVar10 >> 0x38),
                                      (uint6)CONCAT14((char)(uVar10 >> 0x30),
                                                      (uint)CONCAT12((char)(uVar10 >> 0x28),
                                                                     (ushort)(byte)(uVar10 >> 0x20))
                                                     ));
          *puVar6 = (ulong)CONCAT16((char)(uVar10 >> 0x18),
                                    (uint6)CONCAT14((char)(uVar10 >> 0x10),
                                                    (uint)(CONCAT12((char)(uVar10 >> 8),
                                                                    (short)uVar10) & 0xff00ff)));
          puVar6 = puVar6 + 4;
        } while (uVar4 != 0);
        puVar5 = (ulong *)((long)puVar2 + uVar3 * 2);
        puVar6 = (ulong *)((long)local_58 + uVar3);
        if ((local_44 & 0xf) == 0) break;
      }
    }
    do {
      uVar7 = (int)uVar3 + 1;
      uVar3 = (ulong)uVar7;
      *(ushort *)puVar5 = (ushort)(byte)*puVar6;
      puVar5 = (ulong *)((long)puVar5 + 2);
      puVar6 = (ulong *)((long)puVar6 + 1);
    } while (uVar7 < local_44);
    break;
  case 4:
    if (local_44 != 0) {
      lVar8 = 0;
      puVar5 = local_58;
      do {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabLong(puVar5);
        }
        if ((uint)*puVar5 >> 0x10 != 0) {
LAB_00dbb234:
          _TIFFfree(local_58);
          local_58 = puVar2;
LAB_00dbb240:
          _TIFFfree(local_58);
          return 4;
        }
        *(short *)((long)puVar2 + lVar8 * 2) = (short)(uint)*puVar5;
        lVar8 = lVar8 + 1;
        puVar5 = (ulong *)((long)puVar5 + 4);
      } while ((uint)lVar8 < local_44);
    }
    break;
  case 6:
    if (local_44 != 0) {
      lVar8 = 0;
      do {
        if (*(char *)((long)local_58 + lVar8) < '\0') goto LAB_00dbb234;
        *(short *)((long)puVar2 + lVar8 * 2) = (short)*(char *)((long)local_58 + lVar8);
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < local_44);
    }
    break;
  case 9:
    if (local_44 != 0) {
      lVar8 = 0;
      puVar5 = local_58;
      do {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabLong(puVar5);
        }
        if ((uint)*puVar5 >> 0x10 != 0) goto LAB_00dbb234;
        *(short *)((long)puVar2 + lVar8 * 2) = (short)(uint)*puVar5;
        lVar8 = lVar8 + 1;
        puVar5 = (ulong *)((long)puVar5 + 4);
      } while ((uint)lVar8 < local_44);
    }
    break;
  case 0x10:
    if (local_44 != 0) {
      lVar8 = 0;
      puVar5 = local_58;
      do {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabLong8(puVar5);
        }
        if (*puVar5 >> 0x10 != 0) goto LAB_00dbb234;
        *(short *)((long)puVar2 + lVar8 * 2) = (short)*puVar5;
        lVar8 = lVar8 + 1;
        puVar5 = puVar5 + 1;
      } while ((uint)lVar8 < local_44);
    }
    break;
  case 0x11:
    if (local_44 != 0) {
      lVar8 = 0;
      puVar5 = local_58;
      do {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabLong8(puVar5);
        }
        if (*puVar5 >> 0x10 != 0) goto LAB_00dbb234;
        *(short *)((long)puVar2 + lVar8 * 2) = (short)*puVar5;
        lVar8 = lVar8 + 1;
        puVar5 = puVar5 + 1;
      } while ((uint)lVar8 < local_44);
    }
  }
  _TIFFfree(local_58);
  *param_3 = puVar2;
  return 0;
}

