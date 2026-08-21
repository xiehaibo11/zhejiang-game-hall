
void FUN_00a62978(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  long lVar5;
  long *plVar6;
  FILE *__stream;
  size_t sVar7;
  long *plVar8;
  long *local_2078;
  undefined1 auStack_2070 [8];
  undefined1 auStack_2068 [8192];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00a6292c with catch @ 00a629b4 */
  uVar3 = FUN_00a62bc0(0,&local_2078,param_1,0,auStack_2070);
  if ((int)uVar3 != 0) goto LAB_00a62b44;
  plVar8 = local_2078;
  if (local_2078 != (long *)0x0) {
LAB_00a629e0:
    if ((int)plVar8[1] - 3U < 2) {
      __stream = (FILE *)0x0;
      plVar6 = plVar8;
      while( true ) {
        if ((int)plVar6[1] == 3) {
          sVar7 = 0;
          goto LAB_00a62a5c;
        }
        if ((__stream == (FILE *)0x0) &&
           (__stream = fopen((char *)plVar6[2],"rb"), __stream == (FILE *)0x0)) break;
        sVar7 = fread(auStack_2068,1,0x2000,__stream);
        if (sVar7 != 0) {
          if (sVar7 < 0x2001) goto LAB_00a62a5c;
LAB_00a62af4:
          fclose(__stream);
          break;
        }
        fclose(__stream);
        plVar6 = (long *)*plVar6;
        __stream = (FILE *)0x0;
LAB_00a62a5c:
        sVar4 = (*param_3)(param_2,auStack_2068,sVar7);
        if (sVar7 != sVar4) {
          if (__stream == (FILE *)0x0) break;
          goto LAB_00a62af4;
        }
        if (sVar7 == 0) goto LAB_00a62a94;
      }
                    /* try { // try from 00a62afc to 00b62b7b has its CatchHandler @ 00a62afc
                       catch() { ... } // from try @ 00a62afc with catch @ 00a62afc
                       catch() { ... } // from try @ 00a62b88 with catch @ 00a62afc */
      plVar8 = local_2078;
      if (local_2078 == (long *)0x0) goto LAB_00a62b40;
      do {
        plVar6 = (long *)*plVar8;
        if (*(uint *)(plVar8 + 1) < 3) {
          (*(code *)PTR_free_01769a00)(plVar8[2]);
        }
        (*(code *)PTR_free_01769a00)(plVar8);
        plVar8 = plVar6;
      } while (plVar6 != (long *)0x0);
      goto LAB_00a62b3c;
    }
    lVar1 = plVar8[3];
    lVar5 = (*param_3)(param_2,plVar8[2],lVar1);
    if (lVar1 == lVar5) {
LAB_00a62a94:
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) goto code_r0x00a62a9c;
      goto LAB_00a629e0;
    }
                    /* try { // try from 00a62b7c to 00b62b87 has its CatchHandler @ 00a62c04 */
    plVar8 = local_2078;
    if (local_2078 != (long *)0x0) {
      do {
                    /* try { // try from 00a62b88 to 00b62c3b has its CatchHandler @ 00a62afc */
        plVar6 = (long *)*plVar8;
        if (*(uint *)(plVar8 + 1) < 3) {
          (*(code *)PTR_free_01769a00)(plVar8[2]);
        }
        (*(code *)PTR_free_01769a00)(plVar8);
        plVar8 = plVar6;
      } while (plVar6 != (long *)0x0);
LAB_00a62b3c:
      local_2078 = (long *)0x0;
    }
LAB_00a62b40:
    uVar3 = 0xffffffff;
    goto LAB_00a62b44;
  }
  goto LAB_00a62ae8;
code_r0x00a62a9c:
  plVar8 = local_2078;
  if (local_2078 != (long *)0x0) {
    do {
      plVar6 = (long *)*plVar8;
      if (*(uint *)(plVar8 + 1) < 3) {
        (*(code *)PTR_free_01769a00)(plVar8[2]);
      }
      (*(code *)PTR_free_01769a00)(plVar8);
      plVar8 = plVar6;
    } while (plVar6 != (long *)0x0);
    uVar3 = 0;
    local_2078 = (long *)0x0;
    goto LAB_00a62b44;
  }
LAB_00a62ae8:
  uVar3 = 0;
LAB_00a62b44:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

