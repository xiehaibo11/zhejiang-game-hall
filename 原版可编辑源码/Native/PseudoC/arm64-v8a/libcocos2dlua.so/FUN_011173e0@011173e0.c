
undefined8 FUN_011173e0(long param_1,long param_2,undefined8 *param_3)

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
  
                    /* try { // try from 011173fc to 01217497 has its CatchHandler @ 011173fc
                       catch(type#1 @ 00000000) { ... } // from try @ 011173fc with catch @ 011173fc
                        */
  if (0x11 < *(ushort *)(param_2 + 2)) {
    return 2;
  }
  if ((1 << (ulong)(*(ushort *)(param_2 + 2) & 0x1f) & 0x3035aU) == 0) {
    return 2;
  }
  uVar1 = FUN_01117fa4(param_1,param_2,&local_44,2,&local_58);
  if (((int)uVar1 != 0) || (local_58 == (ulong *)0x0)) {
    *param_3 = 0;
    return uVar1;
  }
  if (*(short *)(param_2 + 2) == 8) {
    if (local_44 != 0) {
      uVar7 = 0;
      puVar2 = local_58;
      do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117498 with catch @ 011174b0
                        */
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabShort(puVar2);
        }
        if ((short)*puVar2 < 0) goto LAB_011176e8;
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
                    /* catch() { ... } // from try @ 01117530 with catch @ 0111757c */
    TIFFSwabArrayOfShort(local_58,local_44);
    return 0;
  }
  puVar2 = _TIFFmalloc((ulong)(local_44 << 1));
  if (puVar2 == (ulong *)0x0) {
    _TIFFfree(local_58);
    return 7;
                    /* try { // try from 01117598 to 012175f7 has its CatchHandler @ 01117598
                       catch(type#1 @ 00000000) { ... } // from try @ 01117598 with catch @ 01117598
                       catch(type#1 @ 00000000) { ... } // from try @ 01117614 with catch @ 01117598
                       catch(type#1 @ 00000000) { ... } // from try @ 01117650 with catch @ 01117598
                        */
  }
                    /* catch() { ... } // from try @ 01117538 with catch @ 01117508 */
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
    if (local_44 == 0) break;
    uVar4 = (ulong)(local_44 - 1);
    puVar5 = puVar2;
    puVar6 = local_58;
    if (uVar4 + 1 < 0x10) {
LAB_01117558:
      uVar3 = 0;
    }
    else {
                    /* try { // try from 01117530 to 01217537 has its CatchHandler @ 0111757c */
      uVar3 = (uVar4 + 1) - (ulong)(local_44 & 0xf);
      if (uVar3 != 0) {
                    /* try { // try from 01117538 to 01217597 has its CatchHandler @ 01117508 */
        if ((puVar2 < (ulong *)((long)local_58 + uVar4 + 1)) &&
           (local_58 < (ulong *)((long)puVar2 + uVar4 * 2 + 2))) goto LAB_01117558;
        puVar5 = local_58 + 1;
        puVar6 = puVar2 + 2;
        uVar4 = uVar3;
        do {
          uVar9 = puVar5[-1];
          uVar10 = *puVar5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117688 with catch @ 0111770c
                        */
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 011176c8 with catch @ 01117728
                        */
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
LAB_011176dc:
          _TIFFfree(local_58);
          local_58 = puVar2;
LAB_011176e8:
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
        if (*(char *)((long)local_58 + lVar8) < '\0') goto LAB_011176dc;
                    /* try { // try from 011175f8 to 01217613 has its CatchHandler @ 01117644 */
        *(short *)((long)puVar2 + lVar8 * 2) = (short)*(char *)((long)local_58 + lVar8);
        lVar8 = lVar8 + 1;
      } while ((uint)lVar8 < local_44);
    }
    break;
  case 9:
    if (local_44 != 0) {
      lVar8 = 0;
                    /* try { // try from 01117614 to 01217647 has its CatchHandler @ 01117598 */
      puVar5 = local_58;
      do {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabLong(puVar5);
        }
        if ((uint)*puVar5 >> 0x10 != 0) goto LAB_011176dc;
        *(short *)((long)puVar2 + lVar8 * 2) = (short)(uint)*puVar5;
        lVar8 = lVar8 + 1;
        puVar5 = (ulong *)((long)puVar5 + 4);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 011175f8 with catch @ 01117644
                        */
      } while ((uint)lVar8 < local_44);
    }
    break;
  case 0x10:
    if (local_44 != 0) {
                    /* try { // try from 01117650 to 0121765b has its CatchHandler @ 01117598 */
      lVar8 = 0;
      puVar5 = local_58;
      do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117648 with catch @ 01117658
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117690 with catch @ 0111765c
                       catch(type#1 @ 00000000) { ... } // from try @ 011176cc with catch @ 0111765c
                       catch(type#1 @ 00000000) { ... } // from try @ 01117738 with catch @ 0111765c
                        */
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabLong8(puVar5);
        }
        if (*puVar5 >> 0x10 != 0) goto LAB_011176dc;
        *(short *)((long)puVar2 + lVar8 * 2) = (short)*puVar5;
        lVar8 = lVar8 + 1;
        puVar5 = puVar5 + 1;
      } while ((uint)lVar8 < local_44);
    }
    break;
  case 0x11:
    if (local_44 != 0) {
                    /* try { // try from 01117690 to 012176c7 has its CatchHandler @ 0111765c */
      lVar8 = 0;
      puVar5 = local_58;
      do {
        if (*(char *)(param_1 + 0x10) < '\0') {
          TIFFSwabLong8(puVar5);
        }
        if (*puVar5 >> 0x10 != 0) goto LAB_011176dc;
        *(short *)((long)puVar2 + lVar8 * 2) = (short)*puVar5;
        lVar8 = lVar8 + 1;
        puVar5 = puVar5 + 1;
      } while ((uint)lVar8 < local_44);
    }
  }
                    /* try { // try from 011176c8 to 012176cb has its CatchHandler @ 01117728 */
                    /* try { // try from 011176cc to 0121772f has its CatchHandler @ 0111765c */
  _TIFFfree(local_58);
  *param_3 = puVar2;
                    /* try { // try from 01117498 to 0121749b has its CatchHandler @ 011174b0 */
  return 0;
}

