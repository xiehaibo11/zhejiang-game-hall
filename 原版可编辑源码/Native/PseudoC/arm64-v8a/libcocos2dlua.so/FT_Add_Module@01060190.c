
int FT_Add_Module(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  char *__s2;
  long *plVar7;
  size_t __n;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (param_1 == (long *)0x0) {
    return 0x21;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 6;
  }
  if (0x20005 < (long)param_2[4]) {
    return 4;
  }
  uVar4 = *(uint *)((long)param_1 + 0x14);
  if (uVar4 != 0) {
    __s2 = (char *)param_2[2];
    lVar8 = 3;
    do {
      plVar7 = (long *)param_1[lVar8];
      lVar9 = *plVar7;
      iVar2 = strcmp(*(char **)(lVar9 + 0x10),__s2);
      if (iVar2 == 0) {
        if ((long)param_2[3] <= *(long *)(lVar9 + 0x18)) {
          return 5;
        }
        FT_Remove_Module(param_1,plVar7);
        uVar4 = *(uint *)((long)param_1 + 0x14);
        break;
      }
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 - 3U < uVar4);
    if (0x1f < uVar4) {
      return 0x30;
    }
  }
  __n = param_2[1];
  lVar8 = *param_1;
  if ((long)__n < 1) {
                    /* try { // try from 0106028c to 011602c3 has its CatchHandler @ 0106031c */
    if (__n != 0) {
      return 6;
    }
                    /* try { // try from 010602c4 to 01160363 has its CatchHandler @ 0106010c */
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = (long *)(**(code **)(lVar8 + 8))(lVar8,__n);
    if (plVar7 == (long *)0x0) {
      return 0x40;
    }
    memset(plVar7,0,__n);
  }
  *plVar7 = (long)param_2;
  plVar7[1] = (long)param_1;
  plVar7[2] = lVar8;
  uVar4 = (uint)*param_2;
  puVar6 = param_2;
  if ((uVar4 >> 1 & 1) == 0) {
LAB_010603bc:
    if ((uVar4 >> 2 & 1) != 0) {
      param_1[0x26] = (long)plVar7;
    }
    if (((uVar4 & 1) != 0) && (plVar7[3] = (long)puVar6, (uVar4 >> 9 & 1) == 0)) {
      plVar3 = (long *)(**(code **)(lVar8 + 8))(lVar8,0xb0);
      if (plVar3 == (long *)0x0) goto LAB_01060434;
      memset(plVar3 + 1,0,0xa8);
      *plVar3 = lVar8;
      plVar7[6] = (long)plVar3;
    }
    if (((code *)param_2[6] == (code *)0x0) || (iVar2 = (*(code *)param_2[6])(plVar7), iVar2 == 0))
    {
      uVar4 = *(uint *)((long)param_1 + 0x14);
      *(uint *)((long)param_1 + 0x14) = uVar4 + 1;
      param_1[(ulong)uVar4 + 3] = (long)plVar7;
      return 0;
    }
  }
  else {
    lVar9 = *param_1;
    plVar3 = (long *)(**(code **)(lVar9 + 8))(lVar9,0x18);
    if (plVar3 != (long *)0x0) {
      plVar3[1] = 0;
      plVar3[2] = 0;
      *plVar3 = 0;
      lVar10 = *plVar7;
      plVar7[3] = lVar10;
      iVar2 = *(int *)(lVar10 + 0x48);
      *(int *)(plVar7 + 4) = iVar2;
                    /* catch() { ... } // from try @ 0106028c with catch @ 0106031c */
      if ((iVar2 == 0x6f75746c) &&
         (pcVar5 = *(code **)(*(long *)(lVar10 + 0x70) + 8), pcVar5 != (code *)0x0)) {
        iVar2 = (*pcVar5)(lVar9,plVar7 + 0xd);
                    /* catch() { ... } // from try @ 0106021c with catch @ 0106033c */
        if (iVar2 != 0) {
          (**(code **)(lVar9 + 0x10))(lVar9,plVar3);
          goto LAB_01060438;
        }
        plVar7[0xe] = *(long *)(*(long *)(lVar10 + 0x70) + 0x20);
        plVar7[0xf] = *(long *)(lVar10 + 0x50);
      }
      plVar3[2] = (long)plVar7;
      lVar9 = param_1[0x24];
      *plVar3 = lVar9;
      plVar3[1] = 0;
      plVar1 = (long *)(lVar9 + 8);
      if (lVar9 == 0) {
        plVar1 = param_1 + 0x23;
      }
      *plVar1 = (long)plVar3;
      lVar9 = param_1[0x23];
      param_1[0x24] = (long)plVar3;
      for (; lVar9 != 0; lVar9 = *(long *)(lVar9 + 8)) {
        lVar10 = *(long *)(lVar9 + 0x10);
        if (*(int *)(lVar10 + 0x20) == 0x6f75746c) goto LAB_010603b0;
      }
      lVar10 = 0;
LAB_010603b0:
      param_1[0x25] = lVar10;
      puVar6 = (undefined8 *)*plVar7;
      uVar4 = (uint)*puVar6;
      goto LAB_010603bc;
    }
LAB_01060434:
    iVar2 = 0x40;
  }
LAB_01060438:
  uVar4 = (uint)*(ulong *)*plVar7;
  if (((*(ulong *)*plVar7 & 0x201) == 1) && (plVar3 = (long *)plVar7[6], plVar3 != (long *)0x0)) {
    lVar9 = *plVar3;
    if (plVar3[4] != 0) {
      (**(code **)(lVar9 + 0x10))(lVar9);
    }
    plVar3[4] = 0;
    if (plVar3[5] != 0) {
      (**(code **)(lVar9 + 0x10))(lVar9);
    }
    plVar3[5] = 0;
    if (plVar3[6] != 0) {
      (**(code **)(lVar9 + 0x10))(lVar9);
    }
    plVar3[6] = 0;
    if (plVar3[8] != 0) {
      (**(code **)(lVar9 + 0x10))(lVar9);
    }
    plVar3[8] = 0;
    if (plVar3[0xb] != 0) {
      (**(code **)(lVar9 + 0x10))(lVar9);
    }
    plVar3[0xb] = 0;
    plVar3[9] = 0;
    plVar3[1] = 0;
    *(undefined4 *)(plVar3 + 2) = 0;
                    /* catch() { ... } // from try @ 01060520 with catch @ 010604e8 */
    *(undefined4 *)(plVar3 + 3) = 0;
    *(undefined4 *)(plVar3 + 10) = 0;
    memcpy(plVar3 + 0xc,plVar3 + 3,0x48);
    (**(code **)(lVar9 + 0x10))(lVar9,plVar3);
    uVar4 = (uint)*(undefined8 *)*plVar7;
  }
                    /* try { // try from 01060518 to 0116051f has its CatchHandler @ 01060584 */
                    /* try { // try from 01060520 to 0116059f has its CatchHandler @ 010604e8 */
  if (((((uVar4 >> 1 & 1) != 0) && (lVar9 = plVar7[3], lVar9 != 0)) &&
      (*(int *)(lVar9 + 0x48) == 0x6f75746c)) && (plVar7[0xd] != 0)) {
    (**(code **)(*(long *)(lVar9 + 0x70) + 0x28))();
  }
  (**(code **)(lVar8 + 0x10))(lVar8,plVar7);
  return iVar2;
}

