
void png_read_transform_info(long param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar1 = *(uint *)(param_1 + 0x16c);
  if ((uVar1 >> 0xc & 1) != 0) {
    if (*(byte *)((long)param_2 + 0x25) == 3) {
      lVar8 = *(long *)(param_1 + 0x298);
      uVar5 = 6;
      if (*(short *)(param_1 + 0x2a8) == 0) {
        uVar5 = 2;
      }
      *(undefined1 *)((long)param_2 + 0x25) = uVar5;
      *(undefined1 *)(param_2 + 9) = 8;
      *(undefined2 *)((long)param_2 + 0x22) = 0;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"Palette is NULL in indexed image");
      }
    }
    else {
      if (((uVar1 >> 0x19 & 1) != 0) && (*(short *)(param_1 + 0x2a8) != 0)) {
        *(byte *)((long)param_2 + 0x25) = *(byte *)((long)param_2 + 0x25) | 4;
      }
      if ((byte)param_2[9] < 8) {
        *(undefined1 *)(param_2 + 9) = 8;
      }
      *(undefined2 *)((long)param_2 + 0x22) = 0;
    }
  }
  if ((uVar1 >> 7 & 1) != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x2c0);
    *(undefined2 *)((long)param_2 + 0xd2) = *(undefined2 *)(param_1 + 0x2c8);
    *(undefined8 *)((long)param_2 + 0xca) = uVar7;
  }
  bVar4 = (byte)param_2[9];
  param_2[0xd] = *(uint *)(param_1 + 0x510);
  if (bVar4 == 0x10) {
    if ((uVar1 >> 0x1a & 1) == 0) {
      bVar4 = 0x10;
    }
    else {
      bVar4 = 8;
      *(undefined1 *)(param_2 + 9) = 8;
    }
    if ((uVar1 >> 10 & 1) != 0) {
      bVar4 = 8;
      *(undefined1 *)(param_2 + 9) = 8;
    }
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    *(byte *)((long)param_2 + 0x25) = *(byte *)((long)param_2 + 0x25) | 2;
  }
  if ((uVar1 & 0x600000) != 0) {
    *(byte *)((long)param_2 + 0x25) = *(byte *)((long)param_2 + 0x25) & 0xfd;
  }
  if (((((uVar1 >> 6 & 1) != 0) && ((*(byte *)((long)param_2 + 0x25) | 4) == 6)) &&
      (*(long *)(param_1 + 0x3c0) != 0)) && (bVar4 == 8)) {
    *(undefined1 *)((long)param_2 + 0x25) = 3;
  }
  if (((uVar1 >> 9 & 1) != 0) && (bVar4 == 8)) {
    if (*(char *)((long)param_2 + 0x25) == '\x03') {
      bVar4 = 8;
    }
    else {
      bVar4 = 0x10;
      *(undefined1 *)(param_2 + 9) = 0x10;
    }
  }
  if (((uVar1 >> 2 & 1) != 0) && (bVar4 < 8)) {
    bVar4 = 8;
    *(undefined1 *)(param_2 + 9) = 8;
  }
  bVar2 = *(byte *)((long)param_2 + 0x25);
  bVar6 = bVar2 & 2 | 1;
  if (bVar2 == 3) {
    bVar6 = 1;
  }
  *(byte *)((long)param_2 + 0x29) = bVar6;
  if ((uVar1 >> 0x12 & 1) == 0) {
    if ((bVar2 >> 2 & 1) != 0) {
      bVar6 = bVar6 + 1;
      *(byte *)((long)param_2 + 0x29) = bVar6;
    }
  }
  else {
    bVar2 = bVar2 & 0xfb;
    *(byte *)((long)param_2 + 0x25) = bVar2;
    *(undefined2 *)((long)param_2 + 0x22) = 0;
  }
  if (((uVar1 >> 0xf & 1) != 0) && ((bVar2 | 2) == 2)) {
    bVar6 = bVar6 + 1;
    *(byte *)((long)param_2 + 0x29) = bVar6;
    if ((uVar1 >> 0x18 & 1) != 0) {
      *(byte *)((long)param_2 + 0x25) = bVar2 | 4;
    }
  }
  if ((uVar1 >> 0x14 & 1) != 0) {
    bVar2 = *(byte *)(param_1 + 0x160);
    if (bVar4 < bVar2) {
      *(byte *)(param_2 + 9) = bVar2;
      bVar4 = bVar2;
    }
    bVar2 = *(byte *)(param_1 + 0x161);
    if (bVar6 < bVar2) {
      *(byte *)((long)param_2 + 0x29) = bVar2;
      bVar6 = bVar2;
    }
  }
  bVar4 = bVar4 * bVar6;
  *(byte *)((long)param_2 + 0x2a) = bVar4;
  if ((bVar4 & 0xf8) < 8) {
    uVar3 = (ulong)bVar4 * (ulong)*param_2 + 7 >> 3;
  }
  else {
    uVar3 = (ulong)(bVar4 >> 3) * (ulong)*param_2;
  }
  *(ulong *)(param_2 + 4) = uVar3;
  *(ulong *)(param_1 + 0x288) = uVar3;
  return;
}

