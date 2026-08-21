
int FUN_00e6566c(long param_1,int param_2,int param_3,char param_4,undefined8 param_5,
                undefined8 *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  void *__dest;
  int iVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  void *__src;
  undefined8 *puVar9;
  int local_54;
  
  local_54 = 0;
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 < 0xc) {
    if (*(long *)(param_1 + 0x18) == 0) {
      *(long *)(param_1 + 0x18) = param_1 + 0x5c8;
      *(undefined4 *)(param_1 + 0x14) = 0xc;
    }
LAB_00e656c8:
    psVar8 = *(short **)(param_1 + 0x18);
    psVar7 = psVar8 + (long)iVar5 * 0x2c;
    if (0 < iVar5) {
      if (param_4 != '\0') goto LAB_00e656ec;
LAB_00e65768:
      do {
        psVar6 = psVar7 + -0x2c;
        if ((*psVar6 < param_2) || ((*psVar6 == param_2 && (*(int *)(param_1 + 0x20) == param_3))))
        break;
        *(undefined8 *)(psVar7 + 4) = *(undefined8 *)(psVar7 + -0x28);
        *(undefined8 *)psVar7 = *(undefined8 *)(psVar7 + -0x2c);
        *(undefined8 *)(psVar7 + 0xc) = *(undefined8 *)(psVar7 + -0x20);
        *(undefined8 *)(psVar7 + 8) = *(undefined8 *)(psVar7 + -0x24);
        *(undefined8 *)(psVar7 + 0x28) = *(undefined8 *)(psVar7 + -4);
        *(undefined8 *)(psVar7 + 0x1c) = *(undefined8 *)(psVar7 + -0x10);
        *(undefined8 *)(psVar7 + 0x18) = *(undefined8 *)(psVar7 + -0x14);
        *(undefined8 *)(psVar7 + 0x24) = *(undefined8 *)(psVar7 + -8);
        *(undefined8 *)(psVar7 + 0x20) = *(undefined8 *)(psVar7 + -0xc);
        *(undefined8 *)(psVar7 + 0x14) = *(undefined8 *)(psVar7 + -0x18);
        *(undefined8 *)(psVar7 + 0x10) = *(undefined8 *)(psVar7 + -0x1c);
        psVar7 = psVar6;
      } while (psVar8 < psVar6);
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x14);
    if (iVar3 <= iVar5) {
      if (0x1745d16 < iVar3) {
        local_54 = 0x40;
        psVar7 = (short *)0x0;
        goto LAB_00e657d0;
      }
      iVar5 = (iVar3 >> 2) + 4;
      puVar9 = (undefined8 *)(param_1 + 0x18);
      __src = (void *)*puVar9;
      iVar1 = iVar5 + iVar3;
      iVar2 = 0x1745d17;
      if (iVar1 < 0x1745d18 && -1 < iVar5) {
        iVar2 = iVar1;
      }
      if (__src == (void *)(param_1 + 0x5c8)) {
        __dest = (void *)FUN_00e13bcc(param_5,0x58,0,(long)iVar2,0,&local_54);
        *puVar9 = __dest;
        if (local_54 != 0) goto LAB_00e65884;
        memcpy(__dest,__src,0x420);
      }
      else {
        uVar4 = FUN_00e13bcc(param_5,0x58,(long)iVar3,(long)iVar2,__src,&local_54);
        *puVar9 = uVar4;
        if (local_54 != 0) {
LAB_00e65884:
          psVar7 = (short *)0x0;
          goto LAB_00e657d0;
        }
      }
      iVar5 = *(int *)(param_1 + 0x10);
      *(int *)(param_1 + 0x14) = iVar2;
      goto LAB_00e656c8;
    }
    psVar8 = *(short **)(param_1 + 0x18);
    psVar7 = psVar8 + (long)iVar5 * 0x2c;
    if (param_4 == '\0') goto LAB_00e65768;
LAB_00e656ec:
    do {
      psVar6 = psVar7 + -0x2c;
      if ((param_2 < *psVar6) || ((*psVar6 == param_2 && (*(int *)(param_1 + 0x20) == param_3))))
      break;
      *(undefined8 *)(psVar7 + 4) = *(undefined8 *)(psVar7 + -0x28);
      *(undefined8 *)psVar7 = *(undefined8 *)(psVar7 + -0x2c);
      *(undefined8 *)(psVar7 + 0xc) = *(undefined8 *)(psVar7 + -0x20);
      *(undefined8 *)(psVar7 + 8) = *(undefined8 *)(psVar7 + -0x24);
      *(undefined8 *)(psVar7 + 0x28) = *(undefined8 *)(psVar7 + -4);
      *(undefined8 *)(psVar7 + 0x1c) = *(undefined8 *)(psVar7 + -0x10);
      *(undefined8 *)(psVar7 + 0x18) = *(undefined8 *)(psVar7 + -0x14);
      *(undefined8 *)(psVar7 + 0x24) = *(undefined8 *)(psVar7 + -8);
      *(undefined8 *)(psVar7 + 0x20) = *(undefined8 *)(psVar7 + -0xc);
      *(undefined8 *)(psVar7 + 0x14) = *(undefined8 *)(psVar7 + -0x18);
      *(undefined8 *)(psVar7 + 0x10) = *(undefined8 *)(psVar7 + -0x1c);
      psVar7 = psVar6;
    } while (psVar8 < psVar6);
  }
  local_54 = 0;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
LAB_00e657d0:
  *param_6 = psVar7;
  return local_54;
}

