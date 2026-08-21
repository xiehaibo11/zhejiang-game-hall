
/* WARNING: Removing unreachable block (ram,0x00127f80) */

void FUN_00127f18(long param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong __size;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  
  lVar3 = __strlen_chk("(",2);
  FUN_0011bcc0(param_2,"(","sizeof... (" + lVar3 + 10);
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar10 = param_2[1];
    lVar3 = 0;
    bVar2 = true;
    lVar4 = lVar10;
    while( true ) {
      plVar9 = *(long **)(*(long *)(param_1 + 0x18) + lVar3 * 8);
      (**(code **)(*plVar9 + 0x20))(plVar9,param_2);
      if (*(char *)((long)plVar9 + 9) != '\x01') {
        (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
      }
      if (lVar4 == param_2[1]) {
        param_2[1] = lVar10;
      }
      else {
        bVar2 = false;
        lVar10 = param_2[1];
      }
      lVar3 = lVar3 + 1;
      if (lVar3 == *(long *)(param_1 + 0x20)) break;
      lVar4 = lVar10;
      if (!bVar2) {
        lVar4 = __strlen_chk(&DAT_0012f031,3);
        FUN_0011bcc0(param_2,&DAT_0012f031,&DAT_0012f031 + lVar4);
        lVar4 = param_2[1];
      }
    }
  }
  lVar3 = __strlen_chk(")",2);
  FUN_0011bcc0(param_2,")","operator()" + lVar3 + 9);
  (**(code **)(**(long **)(param_1 + 0x10) + 0x28))(*(long **)(param_1 + 0x10),param_2);
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 1) != 0) {
    lVar3 = __strlen_chk(" const",7);
    FUN_0011bcc0(param_2," const"," const" + lVar3);
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    lVar3 = __strlen_chk(" volatile",10);
    FUN_0011bcc0(param_2," volatile"," volatile" + lVar3);
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    lVar3 = __strlen_chk(" restrict",10);
    FUN_0011bcc0(param_2," restrict"," restrict" + lVar3);
  }
  if (*(char *)(param_1 + 0x2c) == '\x02') {
    puVar8 = &DAT_0012f48b;
    uVar6 = 4;
  }
  else {
    if (*(char *)(param_1 + 0x2c) != '\x01') goto LAB_00128124;
    puVar8 = &DAT_0012f488;
    uVar6 = 3;
  }
  lVar3 = __strlen_chk(puVar8,uVar6);
  FUN_0011bcc0(param_2,puVar8,puVar8 + lVar3);
LAB_00128124:
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar3 = param_2[1];
    __size = lVar3 + 1;
    if (__size < (ulong)param_2[2]) {
      pvVar5 = (void *)*param_2;
    }
    else {
      uVar7 = param_2[2] << 1;
      if (__size <= uVar7) {
        __size = uVar7;
      }
      param_2[2] = __size;
      pvVar5 = realloc((void *)*param_2,__size);
      *param_2 = pvVar5;
      if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_2[1];
      __size = lVar3 + 1;
    }
    param_2[1] = __size;
    *(undefined1 *)((long)pvVar5 + lVar3) = 0x20;
    plVar9 = *(long **)(param_1 + 0x30);
    (**(code **)(*plVar9 + 0x20))(plVar9,param_2);
    if (*(char *)((long)plVar9 + 9) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x001281d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
      return;
    }
  }
  return;
}

