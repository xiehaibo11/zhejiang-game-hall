
undefined8 FUN_00ddc3b4(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  char *pcVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  
  if (*(short *)(param_1 + 0xaa) != 1) {
    uVar4 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar5 = "SGILog compression cannot handle non-contiguous data";
    goto LAB_00ddc53c;
  }
  puVar8 = *(uint **)(param_1 + 0x350);
  uVar6 = *puVar8;
  if (uVar6 == 0xffffffff) {
    uVar6 = (uint)*(ushort *)(param_1 + 0x76) | (uint)*(ushort *)(param_1 + 0x74) << 3;
    if (uVar6 < 0x101) {
      if ((uVar6 - 0x81 < 4) && (uVar6 - 0x81 != 2)) {
        uVar6 = 1;
      }
      else if ((uVar6 == 0x41) || (uVar6 == 0x44)) {
        uVar6 = 3;
      }
      else {
LAB_00ddc4e8:
        uVar6 = 0xffffffff;
      }
    }
    else {
      if (1 < uVar6 - 0x101) {
        if (uVar6 == 0x103) {
          uVar6 = 0;
          goto LAB_00ddc4ec;
        }
        if (uVar6 != 0x104) goto LAB_00ddc4e8;
      }
      uVar6 = 2;
    }
LAB_00ddc4ec:
    if (*(short *)(param_1 + 0x82) == 3) {
      if (uVar6 == 2) {
        uVar6 = 0xffffffff;
      }
    }
    else if (*(short *)(param_1 + 0x82) == 1) {
      if (uVar6 != 2) {
        uVar6 = 0xffffffff;
      }
    }
    else {
      uVar6 = 0xffffffff;
    }
    *puVar8 = uVar6;
  }
  if (uVar6 < 4) {
    puVar8[2] = *(uint *)(&DAT_0196f454 + (long)(int)uVar6 * 4);
    puVar1 = (uint *)(param_1 + 0x58);
    puVar2 = (uint *)(param_1 + 0x84);
    if ((*(uint *)(param_1 + 0x10) & 0x400) != 0) {
      puVar1 = (uint *)(param_1 + 100);
      puVar2 = (uint *)(param_1 + 0x68);
    }
    lVar7 = (ulong)*puVar2 * (ulong)*puVar1;
    *(long *)(puVar8 + 6) = lVar7;
    if (lVar7 != 0) {
      pvVar3 = _TIFFmalloc(lVar7 * 4);
      *(void **)(puVar8 + 4) = pvVar3;
      if (pvVar3 != (void *)0x0) {
        return 1;
      }
    }
    uVar4 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar5 = "No space for SGILog translation buffer";
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x3b8);
    pcVar5 = "No support for converting user data format to LogLuv";
  }
LAB_00ddc53c:
  TIFFErrorExt(uVar4,"LogLuvInitState",pcVar5);
  return 0;
}

