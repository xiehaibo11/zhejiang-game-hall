
undefined8 FUN_01117730(long param_1,long param_2,ushort param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  
                    /* try { // try from 01117730 to 01217737 has its CatchHandler @ 01117740 */
                    /* try { // try from 01117738 to 01217743 has its CatchHandler @ 0111765c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117730 with catch @ 01117740
                        */
                    /* try { // try from 01117744 to 01217773 has its CatchHandler @ 01117744
                       catch(type#1 @ 00000000) { ... } // from try @ 01117744 with catch @ 01117744
                       catch(type#1 @ 00000000) { ... } // from try @ 011177bc with catch @ 01117744
                        */
  if (*(void **)(param_1 + 0xf0) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0xf0));
  }
  lVar3 = _TIFFCheckMalloc(param_1,*(undefined4 *)(param_1 + 0xe4),8,"for \"StripByteCounts\" array"
                          );
                    /* try { // try from 01117774 to 01217777 has its CatchHandler @ 011177b0 */
  *(long *)(param_1 + 0xf0) = lVar3;
  if (lVar3 == 0) {
    return 0xffffffff;
  }
  if (*(short *)(param_1 + 0x78) == 1) {
    if ((*(byte *)(param_1 + 0x11) >> 2 & 1) == 0) {
      lVar3 = TIFFScanlineSize64(param_1);
      uVar2 = *(uint *)(param_1 + 0xe4);
      if (uVar2 != 0) {
        lVar5 = *(long *)(param_1 + 0xf0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117774 with catch @ 011177b0
                        */
        uVar1 = 0;
        if (*(uint *)(param_1 + 0xe0) != 0) {
          uVar1 = *(uint *)(param_1 + 0x5c) / *(uint *)(param_1 + 0xe0);
        }
                    /* try { // try from 011177b4 to 012177bb has its CatchHandler @ 011177c4 */
        lVar3 = lVar3 * (ulong)uVar1;
        if (uVar2 < 4) {
                    /* try { // try from 011177bc to 012177c7 has its CatchHandler @ 01117744 */
          uVar8 = 0;
        }
        else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117938 with catch @ 01117948
                        */
          uVar8 = (ulong)uVar2 - (ulong)(uVar2 & 3);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117984 with catch @ 0111794c
                       catch(type#1 @ 00000000) { ... } // from try @ 011179c8 with catch @ 0111794c
                       catch(type#1 @ 00000000) { ... } // from try @ 01117a14 with catch @ 0111794c
                        */
          if (uVar8 != 0) {
            plVar11 = (long *)(lVar5 + 0x10);
            uVar13 = uVar8;
            do {
              plVar11[-1] = lVar3;
              plVar11[-2] = lVar3;
              plVar11[1] = lVar3;
              *plVar11 = lVar3;
              uVar13 = uVar13 - 4;
              plVar11 = plVar11 + 4;
            } while (uVar13 != 0);
            if ((uVar2 & 3) == 0) goto LAB_011179c0;
          }
        }
        do {
          *(long *)(lVar5 + uVar8 * 8) = lVar3;
          uVar8 = uVar8 + 1;
                    /* try { // try from 0111797c to 01217983 has its CatchHandler @ 011179e8 */
        } while (uVar8 < uVar2);
      }
    }
    else {
      uVar4 = TIFFTileSize64(param_1);
      uVar2 = *(uint *)(param_1 + 0xe4);
      if (uVar2 != 0) {
        lVar3 = *(long *)(param_1 + 0xf0);
        if (uVar2 < 4) {
          uVar8 = 0;
        }
        else {
                    /* try { // try from 01117984 to 012179bb has its CatchHandler @ 0111794c */
          uVar8 = (ulong)uVar2 - (ulong)(uVar2 & 3);
          if (uVar8 != 0) {
            puVar9 = (undefined8 *)(lVar3 + 0x10);
            uVar13 = uVar8;
            do {
              puVar9[-1] = uVar4;
              puVar9[-2] = uVar4;
              puVar9[1] = uVar4;
              *puVar9 = uVar4;
              uVar13 = uVar13 - 4;
              puVar9 = puVar9 + 4;
            } while (uVar13 != 0);
            if ((uVar2 & 3) == 0) goto LAB_011179c0;
          }
        }
        do {
          *(undefined8 *)(lVar3 + uVar8 * 8) = uVar4;
          uVar8 = uVar8 + 1;
                    /* try { // try from 011179bc to 012179c7 has its CatchHandler @ 01117a04 */
        } while (uVar8 < uVar2);
      }
    }
    goto LAB_011179c0;
  }
  uVar8 = (**(code **)(param_1 + 0x3e0))(*(undefined8 *)(param_1 + 0x3b8));
  iVar7 = 0xe;
                    /* try { // try from 011177f8 to 012177ff has its CatchHandler @ 0111784c */
  if ((*(uint *)(param_1 + 0x10) & 0x80000) != 0) {
    iVar7 = 0x20;
  }
                    /* try { // try from 01117800 to 01217867 has its CatchHandler @ 011177c8 */
  uVar13 = (ulong)(iVar7 + (((*(uint *)(param_1 + 0x10) & 0x80000) >> 0x10) + 0xc) * (uint)param_3);
  if (param_3 != 0) {
    plVar11 = (long *)(param_2 + 8);
    do {
      TIFFDataWidth(*(undefined2 *)((long)plVar11 + -6));
      uVar2 = TIFFDataWidth(*(undefined2 *)((long)plVar11 + -6));
      if (uVar2 == 0) {
                    /* try { // try from 011178b0 to 012178ff has its CatchHandler @ 01117934 */
        TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"EstimateStripByteCounts",
                     "Cannot determine size of unknown tag type %d",
                     *(undefined2 *)((long)plVar11 + -6));
        return 0xffffffff;
      }
      param_3 = param_3 - 1;
      uVar6 = 0;
      if ((((ulong)*(uint *)(param_1 + 0x10) & 0x80000) >> 0x11) + 5 <= *plVar11 * (ulong)uVar2) {
        uVar6 = *plVar11 * (ulong)uVar2;
      }
                    /* catch() { ... } // from try @ 011177f8 with catch @ 0111784c */
      uVar13 = uVar6 + uVar13;
      plVar11 = plVar11 + 3;
    } while (param_3 != 0);
  }
  uVar6 = uVar8 - uVar13;
  if (*(short *)(param_1 + 0xaa) == 2) {
                    /* try { // try from 01117868 to 012178af has its CatchHandler @ 01117868
                       catch(type#1 @ 00000000) { ... } // from try @ 01117868 with catch @ 01117868
                       catch(type#1 @ 00000000) { ... } // from try @ 01117900 with catch @ 01117868
                       catch(type#1 @ 00000000) { ... } // from try @ 01117940 with catch @ 01117868
                        */
    uVar6 = 0;
    if ((ulong)*(ushort *)(param_1 + 0x82) != 0) {
      uVar6 = (uVar8 - uVar13) / (ulong)*(ushort *)(param_1 + 0x82);
    }
  }
  uVar2 = *(uint *)(param_1 + 0xe4);
  lVar3 = *(long *)(param_1 + 0xf0);
  if (uVar2 == 0) {
    uVar13 = 0xffffffff;
  }
  else {
    if (uVar2 < 4) {
      uVar13 = 0;
LAB_01117904:
      do {
        *(ulong *)(lVar3 + uVar13 * 8) = uVar6;
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar2);
    }
    else {
      uVar13 = (ulong)uVar2 - (ulong)(uVar2 & 3);
      if (uVar13 == 0) goto LAB_01117904;
      puVar10 = (ulong *)(lVar3 + 0x10);
      uVar12 = uVar13;
      do {
        puVar10[-1] = uVar6;
        puVar10[-2] = uVar6;
        puVar10[1] = uVar6;
        *puVar10 = uVar6;
        uVar12 = uVar12 - 4;
        puVar10 = puVar10 + 4;
      } while (uVar12 != 0);
                    /* try { // try from 01117900 to 01217937 has its CatchHandler @ 01117868 */
      if ((uVar2 & 3) != 0) goto LAB_01117904;
    }
    uVar13 = uVar13 - 1 & 0xffffffff;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0xe8) + uVar13 * 8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 011178b0 with catch @ 01117934
                        */
  if (uVar8 < (ulong)(*(long *)(lVar3 + uVar13 * 8) + lVar5)) {
                    /* try { // try from 01117938 to 0121793f has its CatchHandler @ 01117948 */
    *(ulong *)(lVar3 + uVar13 * 8) = uVar8 - lVar5;
                    /* try { // try from 01117940 to 0121794b has its CatchHandler @ 01117868 */
  }
LAB_011179c0:
  uVar8 = *(ulong *)(param_1 + 0x38);
                    /* try { // try from 011179c8 to 01217a0b has its CatchHandler @ 0111794c */
  *(ulong *)(param_1 + 0x38) = uVar8 | 0x1000000;
  if (((uint)uVar8 >> 0x11 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x5c);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0111797c with catch @ 011179e8
                        */
  return 1;
}

