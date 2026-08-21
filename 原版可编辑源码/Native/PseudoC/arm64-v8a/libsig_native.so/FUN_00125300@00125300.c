
/* WARNING: Removing unreachable block (ram,0x001253cc) */

void FUN_00125300(long param_1,undefined8 *param_2)

{
  bool bVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  plVar6 = *(long **)(param_1 + 0x10);
  if ((plVar6 != (long *)0x0) &&
     ((**(code **)(*plVar6 + 0x20))(plVar6,param_2), *(char *)((long)plVar6 + 9) != '\x01')) {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  lVar8 = param_2[1];
  uVar4 = lVar8 + 1;
  if (uVar4 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    param_2[2] = uVar4;
    pvVar2 = realloc((void *)*param_2,uVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) goto LAB_001254c8;
    lVar8 = param_2[1];
    uVar4 = lVar8 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar2 + lVar8) = 0x7b;
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar7 = param_2[1];
  }
  else {
    lVar7 = param_2[1];
    lVar8 = 0;
    bVar1 = true;
    lVar3 = lVar7;
    while( true ) {
      plVar6 = *(long **)(*(long *)(param_1 + 0x18) + lVar8 * 8);
      (**(code **)(*plVar6 + 0x20))(plVar6,param_2);
      if (*(char *)((long)plVar6 + 9) != '\x01') {
        (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
      }
      if (lVar3 == param_2[1]) {
        param_2[1] = lVar7;
      }
      else {
        bVar1 = false;
        lVar7 = param_2[1];
      }
      lVar8 = lVar8 + 1;
      if (lVar8 == *(long *)(param_1 + 0x20)) break;
      lVar3 = lVar7;
      if (!bVar1) {
        lVar3 = __strlen_chk(&DAT_0012f031,3);
        FUN_0011bcc0(param_2,&DAT_0012f031,&DAT_0012f031 + lVar3);
        lVar3 = param_2[1];
      }
    }
  }
  uVar4 = lVar7 + 1;
  if (uVar4 < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar5 = param_2[2] << 1;
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    param_2[2] = uVar4;
    pvVar2 = realloc((void *)*param_2,uVar4);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
LAB_001254c8:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar7 = param_2[1];
    uVar4 = lVar7 + 1;
  }
  param_2[1] = uVar4;
  *(undefined1 *)((long)pvVar2 + lVar7) = 0x7d;
  return;
}

