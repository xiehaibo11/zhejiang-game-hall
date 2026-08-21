
undefined8 FUN_00e31a00(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x10);
  lVar3 = *plVar2;
  if (*(char *)(lVar3 + 0x4b8) == '\0') {
    *(undefined1 *)(plVar2 + 0x1c) = 0;
    plVar2[0xd] = plVar2[4];
    plVar2[0xc] = plVar2[3];
    plVar2[0xf] = plVar2[6];
    plVar2[0xe] = plVar2[5];
    plVar2[0x12] = plVar2[9];
    plVar2[0x11] = plVar2[8];
    plVar2[0x10] = plVar2[7];
    if (((short)plVar2[0xc] != 0) && (*(short *)((long)plVar2 + 0x62) != 0)) {
      if ((*(byte *)(lVar3 + 0x150) >> 3 & 1) != 0) {
        lVar1 = FT_MulFix((long)*(short *)(lVar3 + 0x8a),plVar2[0xe]);
        plVar2[0xf] = lVar1 + 0x20U & 0xffffffffffffffc0;
        lVar1 = FT_MulFix((long)*(short *)(lVar3 + 0x8c),plVar2[0xe]);
        plVar2[0x10] = lVar1 + 0x20U & 0xffffffffffffffc0;
        lVar3 = FT_MulFix((long)*(short *)(lVar3 + 0x8e),plVar2[0xe]);
        plVar2[0x11] = lVar3 + 0x20U & 0xffffffffffffffc0;
      }
      *(undefined1 *)(plVar2 + 0x1c) = 1;
      return 0;
    }
  }
  return 0;
}

