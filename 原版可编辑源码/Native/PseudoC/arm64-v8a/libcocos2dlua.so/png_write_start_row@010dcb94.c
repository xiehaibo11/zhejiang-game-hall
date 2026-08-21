
void png_write_start_row(long param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  
  uVar5 = (ulong)*(byte *)(param_1 + 0x2b1) * (ulong)*(byte *)(param_1 + 0x2b4);
  if ((uint)uVar5 < 8) {
    uVar7 = uVar5 * *(uint *)(param_1 + 0x230) + 7 >> 3;
  }
  else {
    uVar7 = (uVar5 >> 3) * (ulong)*(uint *)(param_1 + 0x230);
  }
  *(undefined1 *)(param_1 + 0x2b7) = *(undefined1 *)(param_1 + 0x2b2);
  *(char *)(param_1 + 0x2b6) = (char)uVar5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010dcb88 with catch @ 010dcbec
                        */
  puVar2 = (undefined1 *)png_malloc(param_1,uVar7 + 1);
  bVar1 = *(byte *)(param_1 + 0x2ae);
  *(undefined1 **)(param_1 + 0x260) = puVar2;
  *puVar2 = 0;
  if ((bVar1 >> 4 & 1) != 0) {
    puVar2 = (undefined1 *)png_malloc(param_1,*(long *)(param_1 + 0x240) + 1);
    bVar1 = *(byte *)(param_1 + 0x2ae);
    *(undefined1 **)(param_1 + 0x268) = puVar2;
                    /* try { // try from 010dcc1c to 011dcc1f has its CatchHandler @ 010dccac */
    *puVar2 = 1;
  }
  if (bVar1 < 0x20) {
LAB_010dcc4c:
    if (*(char *)(param_1 + 0x2ac) != '\0') goto LAB_010dcc54;
LAB_010dccec:
    iVar6 = *(int *)(param_1 + 0x234);
  }
  else {
    uVar3 = png_calloc(param_1,uVar7 + 1);
    bVar1 = *(byte *)(param_1 + 0x2ae);
    *(undefined8 *)(param_1 + 600) = uVar3;
    if ((bVar1 >> 5 & 1) != 0) {
      puVar2 = (undefined1 *)png_malloc(param_1,*(long *)(param_1 + 0x240) + 1);
      bVar1 = *(byte *)(param_1 + 0x2ae);
      *(undefined1 **)(param_1 + 0x270) = puVar2;
      *puVar2 = 2;
    }
    if ((bVar1 >> 6 & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010dcc1c with catch @ 010dccac
                        */
      puVar2 = (undefined1 *)png_malloc(param_1,*(long *)(param_1 + 0x240) + 1);
      bVar1 = *(byte *)(param_1 + 0x2ae);
      *(undefined1 **)(param_1 + 0x278) = puVar2;
      *puVar2 = 3;
    }
    if (-1 < (char)bVar1) goto LAB_010dcc4c;
    puVar2 = (undefined1 *)png_malloc(param_1,*(long *)(param_1 + 0x240) + 1);
    *(undefined1 **)(param_1 + 0x280) = puVar2;
    *puVar2 = 4;
    if (*(char *)(param_1 + 0x2ac) == '\0') goto LAB_010dccec;
LAB_010dcc54:
    iVar6 = *(int *)(param_1 + 0x234);
    if ((*(byte *)(param_1 + 0x16c) >> 1 & 1) == 0) {
      *(uint *)(param_1 + 0x238) = iVar6 + 7U >> 3;
      uVar4 = *(int *)(param_1 + 0x230) + 7U >> 3;
      goto LAB_010dccf8;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x230);
  *(int *)(param_1 + 0x238) = iVar6;
LAB_010dccf8:
  *(uint *)(param_1 + 0x23c) = uVar4;
  return;
}

