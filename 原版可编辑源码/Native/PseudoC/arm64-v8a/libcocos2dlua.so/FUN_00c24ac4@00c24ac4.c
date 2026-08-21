
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_00c24ac4(long param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  double *pdVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  FILE *__stream;
  undefined4 uVar9;
  ulong uVar10;
  ulong *puVar11;
  int iVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  char acStack_158 [256];
  double *pdStack_58;
  uint *local_8;
  
  pdVar3 = (double *)FUN_00c1c6dc(param_1,param_2[1]);
  if (*pdVar3 != -NAN) {
    return pdVar3;
  }
  iVar12 = 0x1840;
  plVar13 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
  plVar13[2] = param_1;
  iVar1 = FUN_00c0e944(plVar13,&local_8,param_3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb308(param_1,0xdeb,param_3 + 0x18);
  }
  uVar2 = *local_8 >> 0x1c;
  uVar10 = (ulong)uVar2;
  if (uVar2 == 0xb) {
    if ((*(uint *)(*plVar13 + (ulong)(ushort)*local_8 * 0x18) >> 0x17 & 1) == 0) {
      uVar2 = local_8[1];
    }
    else {
      uVar2 = local_8[1];
      if ((int)uVar2 < 0) {
        *pdVar3 = (double)uVar2;
        return pdVar3;
      }
    }
    *(uint *)pdVar3 = uVar2;
    *(uint *)((long)pdVar3 + 4) = 0xfff90000;
    return pdVar3;
  }
  if (((ushort)local_8[2] != 0) &&
     (lVar4 = (ulong)(ushort)local_8[2] * 0x18, uVar10 = *plVar13 + lVar4,
     (*(uint *)(*plVar13 + lVar4) & 0xf0ff0000) == 0x80040000)) {
    param_3 = *(long *)(uVar10 + 0x10);
  }
  lVar4 = dlsym(*param_2,param_3 + 0x18);
  if (lVar4 != 0) {
    uVar10 = FUN_00c1a314(plVar13[2],0x18);
    *(short *)(uVar10 + 10) = (short)iVar1;
    *(undefined1 *)(uVar10 + 9) = 10;
    *(long *)(uVar10 + 0x10) = lVar4;
    *pdVar3 = (double)(uVar10 | 0xfffa800000000000);
    return pdVar3;
  }
  auVar14 = FUN_007b6084(param_1);
  lVar4 = auVar14._0_8_;
  pcVar8 = (char *)(uVar10 + 0x18);
  pdStack_58 = ___stack_chk_guard;
  pcVar5 = strchr(pcVar8,0x2f);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = strchr(pcVar8,0x2e);
    if (pcVar5 == (char *)0x0) {
      pcVar8 = (char *)FUN_00c00c18(lVar4,"%s.so",pcVar8);
      *(long *)(lVar4 + 0x28) = *(long *)(lVar4 + 0x28) + -8;
    }
    if (((*pcVar8 == 'l') && (pcVar8[1] == 'i')) && (pcVar8[2] == 'b')) goto LAB_00c24c7c;
    uVar7 = FUN_00c00c18(lVar4,"lib%s",pcVar8);
    uVar9 = 0x101;
    if (iVar12 == 0) {
      uVar9 = 1;
    }
    *(long *)(lVar4 + 0x28) = *(long *)(lVar4 + 0x28) + -8;
    lVar6 = dlopen(uVar7,uVar9);
  }
  else {
LAB_00c24c7c:
    uVar9 = 0x101;
    if (iVar12 == 0) {
      uVar9 = 1;
    }
    lVar6 = dlopen(pcVar8,uVar9);
  }
  if (lVar6 == 0) {
    pcVar8 = (char *)dlerror();
    if ((*pcVar8 == '/') && (pcVar5 = strchr(pcVar8,0x3a), pcVar5 != (char *)0x0)) {
      lVar6 = FUN_00bfba1c(lVar4,pcVar8,(long)pcVar5 - (long)pcVar8);
      __stream = fopen((char *)(lVar6 + 0x18),"r");
      if (__stream != (FILE *)0x0) {
        pcVar5 = fgets(acStack_158,0x100,__stream);
        if (pcVar5 == (char *)0x0) {
LAB_00c24e1c:
          fclose(__stream);
        }
        else {
          iVar1 = strncmp(acStack_158,"/* GNU ld script",0x10);
          if (iVar1 == 0) {
            do {
              pcVar5 = fgets(acStack_158,0x100,__stream);
              if (pcVar5 == (char *)0x0) goto LAB_00c24e1c;
              lVar6 = FUN_00c24a04(lVar4,acStack_158);
            } while (lVar6 == 0);
            fclose(__stream);
          }
          else {
            lVar6 = FUN_00c24a04(lVar4,acStack_158);
            fclose(__stream);
            if (lVar6 == 0) goto LAB_00c24e24;
          }
          uVar9 = 0x101;
          if (iVar12 == 0) {
            uVar9 = 1;
          }
          lVar6 = dlopen(lVar6,uVar9);
          if (lVar6 != 0) goto LAB_00c24c98;
          pcVar8 = (char *)dlerror();
        }
      }
    }
LAB_00c24e24:
                    /* WARNING: Subroutine does not return */
    FUN_00bfb194(lVar4,pcVar8);
  }
LAB_00c24c98:
  uVar7 = FUN_00c1b840(lVar4,0,0);
  uVar10 = FUN_00c1cb88(lVar4,0x10,uVar7);
  *(undefined8 *)(uVar10 + 0x38) = uVar7;
  *(undefined1 *)(uVar10 + 10) = 2;
  puVar11 = *(ulong **)(lVar4 + 0x28);
  *(long *)(uVar10 + 0x20) = auVar14._8_8_;
  *(ulong **)(lVar4 + 0x28) = puVar11 + 1;
  *puVar11 = uVar10 | 0xfff9800000000000;
  *(long *)(uVar10 + 0x30) = lVar6;
  if (pdStack_58 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ___stack_chk_guard;
}

