
void FUN_00a4bf90(undefined8 param_1,undefined8 param_2,code *param_3)

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
  
                    /* try { // try from 00a4bf9c to 00b4c083 has its CatchHandler @ 00a4bde4 */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00a4c1d8(0,&local_2078,param_1,0,auStack_2070);
  if ((int)uVar3 != 0) goto LAB_00a4c15c;
  plVar8 = local_2078;
  if (local_2078 != (long *)0x0) {
LAB_00a4bff8:
    if ((int)plVar8[1] - 3U < 2) {
      __stream = (FILE *)0x0;
      plVar6 = plVar8;
      while( true ) {
                    /* catch() { ... } // from try @ 00a4be68 with catch @ 00a4c014 */
                    /* catch() { ... } // from try @ 00a4be5c with catch @ 00a4c018 */
        if ((int)plVar6[1] == 3) {
                    /* catch() { ... } // from try @ 00a4be3c with catch @ 00a4c01c */
          sVar7 = 0;
          goto LAB_00a4c074;
        }
                    /* catch() { ... } // from try @ 00a4be74 with catch @ 00a4c02c */
        if ((__stream == (FILE *)0x0) &&
           (__stream = fopen((char *)plVar6[2],"rb"), __stream == (FILE *)0x0)) break;
        sVar7 = fread(auStack_2068,1,0x2000,__stream);
        if (sVar7 != 0) {
          if (sVar7 < 0x2001) goto LAB_00a4c074;
LAB_00a4c10c:
                    /* try { // try from 00a4c110 to 00b4c23b has its CatchHandler @ 00a4c2c8 */
          fclose(__stream);
          break;
        }
        fclose(__stream);
        plVar6 = (long *)*plVar6;
        __stream = (FILE *)0x0;
LAB_00a4c074:
        sVar4 = (*param_3)(param_2,auStack_2068,sVar7);
                    /* try { // try from 00a4c084 to 00b4c0d7 has its CatchHandler @ 00a4c084
                       catch() { ... } // from try @ 00a4c084 with catch @ 00a4c084
                       catch() { ... } // from try @ 00a4c23c with catch @ 00a4c084 */
        if (sVar7 != sVar4) {
          if (__stream == (FILE *)0x0) break;
          goto LAB_00a4c10c;
        }
        if (sVar7 == 0) goto LAB_00a4c0ac;
      }
      plVar8 = local_2078;
      if (local_2078 == (long *)0x0) goto LAB_00a4c158;
      do {
        plVar6 = (long *)*plVar8;
        if (*(uint *)(plVar8 + 1) < 3) {
          (*(code *)PTR_free_01d1b748)(plVar8[2]);
        }
        (*(code *)PTR_free_01d1b748)(plVar8);
        plVar8 = plVar6;
      } while (plVar6 != (long *)0x0);
      goto LAB_00a4c154;
    }
    lVar1 = plVar8[3];
    lVar5 = (*param_3)(param_2,plVar8[2],lVar1);
    if (lVar1 == lVar5) {
LAB_00a4c0ac:
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) goto code_r0x00a4c0b4;
      goto LAB_00a4bff8;
    }
    plVar8 = local_2078;
    if (local_2078 != (long *)0x0) {
      do {
        plVar6 = (long *)*plVar8;
        if (*(uint *)(plVar8 + 1) < 3) {
          (*(code *)PTR_free_01d1b748)(plVar8[2]);
        }
        (*(code *)PTR_free_01d1b748)(plVar8);
        plVar8 = plVar6;
      } while (plVar6 != (long *)0x0);
LAB_00a4c154:
      local_2078 = (long *)0x0;
    }
LAB_00a4c158:
    uVar3 = 0xffffffff;
    goto LAB_00a4c15c;
  }
  goto LAB_00a4c100;
code_r0x00a4c0b4:
  plVar8 = local_2078;
  if (local_2078 != (long *)0x0) {
    do {
      plVar6 = (long *)*plVar8;
      if (*(uint *)(plVar8 + 1) < 3) {
                    /* try { // try from 00a4c0d8 to 00b4c0ef has its CatchHandler @ 00a4c2b8 */
        (*(code *)PTR_free_01d1b748)(plVar8[2]);
      }
      (*(code *)PTR_free_01d1b748)(plVar8);
      plVar8 = plVar6;
    } while (plVar6 != (long *)0x0);
    uVar3 = 0;
                    /* try { // try from 00a4c0f8 to 00b4c103 has its CatchHandler @ 00a4c2b4 */
    local_2078 = (long *)0x0;
    goto LAB_00a4c15c;
  }
LAB_00a4c100:
  uVar3 = 0;
                    /* try { // try from 00a4c104 to 00b4c10f has its CatchHandler @ 00a4c2b0 */
LAB_00a4c15c:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

