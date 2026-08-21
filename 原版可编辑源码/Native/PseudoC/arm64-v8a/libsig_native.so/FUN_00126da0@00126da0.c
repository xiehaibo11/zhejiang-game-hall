
/* WARNING: Removing unreachable block (ram,0x00126e08) */

void FUN_00126da0(long param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  
  lVar3 = __strlen_chk("(",2);
  FUN_0011bcc0(param_2,"(","sizeof... (" + lVar3 + 10);
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar8 = *(long *)(param_2 + 8);
    lVar3 = 0;
    bVar2 = true;
    lVar4 = lVar8;
    while( true ) {
      plVar7 = *(long **)(*(long *)(param_1 + 0x20) + lVar3 * 8);
      (**(code **)(*plVar7 + 0x20))(plVar7,param_2);
      if (*(char *)((long)plVar7 + 9) != '\x01') {
        (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
      }
      if (lVar4 == *(long *)(param_2 + 8)) {
        *(long *)(param_2 + 8) = lVar8;
      }
      else {
        bVar2 = false;
        lVar8 = *(long *)(param_2 + 8);
      }
      lVar3 = lVar3 + 1;
      if (lVar3 == *(long *)(param_1 + 0x28)) break;
      lVar4 = lVar8;
      if (!bVar2) {
        lVar4 = __strlen_chk(&DAT_0012f031,3);
        FUN_0011bcc0(param_2,&DAT_0012f031,&DAT_0012f031 + lVar4);
        lVar4 = *(long *)(param_2 + 8);
      }
    }
  }
  lVar3 = __strlen_chk(")",2);
  FUN_0011bcc0(param_2,")","operator()" + lVar3 + 9);
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  if ((uVar1 & 1) != 0) {
    lVar3 = __strlen_chk(" const",7);
    FUN_0011bcc0(param_2," const"," const" + lVar3);
    uVar1 = *(uint *)(param_1 + 0x38);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    lVar3 = __strlen_chk(" volatile",10);
    FUN_0011bcc0(param_2," volatile"," volatile" + lVar3);
    uVar1 = *(uint *)(param_1 + 0x38);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    lVar3 = __strlen_chk(" restrict",10);
    FUN_0011bcc0(param_2," restrict"," restrict" + lVar3);
  }
  if (*(char *)(param_1 + 0x3c) == '\x02') {
    puVar6 = &DAT_0012f48b;
    uVar5 = 4;
  }
  else {
    if (*(char *)(param_1 + 0x3c) != '\x01') goto LAB_00126fb0;
    puVar6 = &DAT_0012f488;
    uVar5 = 3;
  }
  lVar3 = __strlen_chk(puVar6,uVar5);
  FUN_0011bcc0(param_2,puVar6,puVar6 + lVar3);
LAB_00126fb0:
  plVar7 = *(long **)(param_1 + 0x30);
  if ((plVar7 != (long *)0x0) &&
     ((**(code **)(*plVar7 + 0x20))(plVar7,param_2), *(char *)((long)plVar7 + 9) != '\x01')) {
                    /* WARNING: Could not recover jumptable at 0x00127014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
    return;
  }
  return;
}

