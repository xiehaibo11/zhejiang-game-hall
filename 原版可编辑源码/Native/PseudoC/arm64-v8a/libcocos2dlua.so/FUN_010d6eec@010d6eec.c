
undefined8 FUN_010d6eec(long param_1,uint param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  ulong uVar4;
  undefined2 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  if (param_1 == 0) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x3d0) = 1;
  if (*(long *)(param_1 + 0x3d8) != 0) {
    *(undefined8 *)(param_1 + 0x3d8) = 0;
    png_free(param_1);
  }
  if (*(long *)(param_1 + 0x3e0) != 0) {
    *(undefined8 *)(param_1 + 0x3e0) = 0;
    png_free(param_1);
  }
  if (*(long *)(param_1 + 1000) != 0) {
    *(undefined8 *)(param_1 + 1000) = 0;
    png_free(param_1);
  }
  if (param_2 != 2) {
    if (param_2 < 2) {
      return 1;
    }
                    /* try { // try from 010d7038 to 011d704f has its CatchHandler @ 010d6eb8 */
    png_warning(param_1,"Unknown filter heuristic method");
    return 0;
  }
  if ((int)param_3 < 1) goto LAB_010d7020;
  uVar11 = (ulong)param_3;
  puVar1 = (undefined1 *)png_malloc(param_1,uVar11);
  *(undefined1 **)(param_1 + 0x3d8) = puVar1;
  *puVar1 = 0xff;
  if (param_3 != 1) {
    uVar6 = 1;
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x3d8) + uVar6) = 0xff;
      uVar6 = uVar6 + 1;
    } while (uVar11 != uVar6);
  }
  uVar2 = png_malloc(param_1,param_3 << 1);
  *(undefined8 *)(param_1 + 0x3e0) = uVar2;
  uVar6 = png_malloc(param_1,param_3 << 1);
  uVar4 = *(ulong *)(param_1 + 0x3e0);
  *(ulong *)(param_1 + 1000) = uVar6;
  if (param_3 < 0x10) {
LAB_010d6ff4:
    lVar7 = 0;
LAB_010d6ff8:
    lVar8 = uVar11 - lVar7;
    puVar5 = (undefined2 *)(uVar4 + lVar7 * 2);
    puVar3 = (undefined2 *)(uVar6 + lVar7 * 2);
    do {
      *puVar5 = 0x100;
      lVar8 = lVar8 + -1;
      *puVar3 = 0x100;
                    /* try { // try from 010d7018 to 011d7037 has its CatchHandler @ 010d7118 */
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (lVar8 != 0);
  }
  else {
    lVar7 = uVar11 - (param_3 & 0xf);
    if (lVar7 == 0) goto LAB_010d6ff8;
    if ((uVar4 < uVar6 + uVar11 * 2) && (uVar6 < uVar4 + uVar11 * 2)) goto LAB_010d6ff4;
    puVar9 = (undefined8 *)(uVar4 + 0x10);
    puVar10 = (undefined8 *)(uVar6 + 0x10);
    lVar8 = lVar7;
    do {
      puVar9[-1] = 0x100010001000100;
      puVar9[-2] = 0x100010001000100;
      puVar9[1] = 0x100010001000100;
      *puVar9 = 0x100010001000100;
      puVar10[-1] = 0x100010001000100;
      puVar10[-2] = 0x100010001000100;
      puVar10[1] = 0x100010001000100;
      *puVar10 = 0x100010001000100;
      puVar9 = puVar9 + 4;
      lVar8 = lVar8 + -0x10;
      puVar10 = puVar10 + 4;
    } while (lVar8 != 0);
    if ((param_3 & 0xf) != 0) goto LAB_010d6ff8;
  }
  *(char *)(param_1 + 0x3d1) = (char)param_3;
LAB_010d7020:
  puVar5 = *(undefined2 **)(param_1 + 0x3f0);
  if (puVar5 == (undefined2 *)0x0) {
                    /* try { // try from 010d7050 to 011d706f has its CatchHandler @ 010d7114 */
    uVar2 = png_malloc(param_1,10);
    *(undefined8 *)(param_1 + 0x3f0) = uVar2;
    puVar3 = (undefined2 *)png_malloc(param_1,10);
    puVar5 = *(undefined2 **)(param_1 + 0x3f0);
    *(undefined2 **)(param_1 + 0x3f8) = puVar3;
  }
  else {
    puVar3 = *(undefined2 **)(param_1 + 0x3f8);
  }
                    /* try { // try from 010d7070 to 011d7087 has its CatchHandler @ 010d6eb8 */
  *puVar5 = 8;
  *puVar3 = 8;
  puVar5[1] = 8;
  puVar3[1] = 8;
                    /* try { // try from 010d7088 to 011d70a7 has its CatchHandler @ 010d7110 */
  puVar5[2] = 8;
  puVar3[2] = 8;
  puVar5[3] = 8;
  puVar3[3] = 8;
  puVar5[4] = 8;
  puVar3[4] = 8;
  *(undefined1 *)(param_1 + 0x3d0) = 2;
                    /* try { // try from 010d70a8 to 011d70eb has its CatchHandler @ 010d6eb8 */
  return 1;
}

