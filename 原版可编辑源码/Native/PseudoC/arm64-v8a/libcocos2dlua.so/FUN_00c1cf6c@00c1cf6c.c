
long * FUN_00c1cf6c(long param_1,double *param_2,double *param_3)

{
  long *plVar1;
  double dVar2;
  double *pdVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int iVar8;
  double local_8;
  
  iVar8 = 100;
  do {
    if ((int)((long)*param_2 >> 0x2f) == -0xc) {
      uVar7 = (ulong)*param_2 & 0x7fffffffffff;
      plVar1 = (long *)FUN_00c1bc70(param_1,uVar7,param_3);
      if (*plVar1 != -1) {
        *(undefined1 *)(uVar7 + 10) = 0;
        if ((*(byte *)(uVar7 + 8) >> 2 & 1) == 0) {
          return plVar1;
        }
        lVar5 = *(long *)(param_1 + 0x10);
        *(byte *)(uVar7 + 8) = *(byte *)(uVar7 + 8) & 0xfb;
        *(undefined8 *)(uVar7 + 0x18) = *(undefined8 *)(lVar5 + 0x50);
        *(ulong *)(lVar5 + 0x50) = uVar7;
        return plVar1;
      }
      lVar5 = *(long *)(uVar7 + 0x20);
      if (((lVar5 == 0) || ((*(byte *)(lVar5 + 10) >> 1 & 1) != 0)) ||
         (pdVar3 = (double *)
                   FUN_00c1ccbc(lVar5,1,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x178)),
         pdVar3 == (double *)0x0)) {
        *(undefined1 *)(uVar7 + 10) = 0;
        if ((*(byte *)(uVar7 + 8) >> 2 & 1) != 0) {
          lVar5 = *(long *)(param_1 + 0x10);
          *(byte *)(uVar7 + 8) = *(byte *)(uVar7 + 8) & 0xfb;
          *(undefined8 *)(uVar7 + 0x18) = *(undefined8 *)(lVar5 + 0x50);
          *(ulong *)(lVar5 + 0x50) = uVar7;
        }
        if (plVar1 != (long *)(*(long *)(param_1 + 0x10) + 0xe8)) {
          return plVar1;
        }
        dVar2 = *param_3;
        if (dVar2 == -NAN) {
                    /* WARNING: Subroutine does not return */
          FUN_00bfaf54(param_1,0xad);
        }
        uVar4 = (uint)((long)dVar2 >> 0x2f);
        if (uVar4 == 0xfffffff2) {
          local_8 = (double)*(int *)param_3;
          param_3 = &local_8;
        }
        else if ((uVar4 < 0xfffffff2) && (NAN(dVar2))) {
                    /* WARNING: Subroutine does not return */
          FUN_00bfaf54(param_1,0x9a);
        }
        plVar1 = (long *)FUN_00c1c458(param_1,uVar7,param_3);
        return plVar1;
      }
      dVar2 = *pdVar3;
    }
    else {
      pdVar3 = (double *)FUN_00c1cd14(param_1,param_2,1);
      dVar2 = *pdVar3;
      if (dVar2 == -NAN) {
                    /* WARNING: Subroutine does not return */
        FUN_00bfb020(param_1,param_2,0x193);
      }
    }
    if ((int)((long)dVar2 >> 0x2f) == -9) {
      puVar6 = *(undefined8 **)(param_1 + 0x28);
      uVar7 = *(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
      if (*(char *)(uVar7 + 10) == '\0') {
        puVar6 = (undefined8 *)
                 (*(long *)(param_1 + 0x20) + (ulong)*(byte *)(*(long *)(uVar7 + 0x20) + -0x5d) * 8)
        ;
      }
      puVar6[1] = 0xffffffffffffffff;
      *puVar6 = &LAB_00c17910;
      puVar6[2] = *pdVar3;
      puVar6[3] = 0xffffffffffffffff;
      puVar6[4] = *param_2;
      puVar6[5] = *param_3;
      *(undefined8 **)(param_1 + 0x28) = puVar6 + 4;
      return (long *)0x0;
    }
    iVar8 = iVar8 + -1;
    param_2 = &local_8;
    local_8 = *pdVar3;
  } while (iVar8 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_00bfaf54(param_1,0x17d);
}

