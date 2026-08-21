
void FUN_00e70500(long param_1,int *param_2)

{
  pthread_t __thread1;
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  pthread_t __thread2;
  long *plVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined **local_80;
  long *plStack_78;
  undefined8 local_70;
  long *local_60;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  plVar5 = *(long **)(param_1 + 8);
  __thread1 = *(pthread_t *)(param_1 + 0x10);
  iVar1 = *param_2;
  iVar2 = *(int *)(plVar5[0xb] + 0xa0);
  __thread2 = pthread_self();
  if ((__thread1 == 0) || (__thread2 == 0)) {
    if (__thread2 != 0 || __thread1 != 0) goto LAB_00e70580;
LAB_00e70550:
    if (iVar1 == 4) {
      plVar5 = (long *)plVar5[0x10];
      if (plVar5 == (long *)0x0) goto LAB_00e70618;
      uVar6 = 4;
    }
    else {
      if (iVar1 != 5) {
        if ((iVar1 != 6) || (plVar5 == (long *)0x0)) goto LAB_00e70618;
        pcVar7 = *(code **)(*plVar5 + 8);
        goto LAB_00e70614;
      }
      if ((iVar2 == 4) || (plVar5 = (long *)plVar5[0x10], plVar5 == (long *)0x0)) goto LAB_00e70618;
      uVar6 = 5;
    }
    local_80 = (undefined **)CONCAT44(local_80._4_4_,uVar6);
    (**(code **)(*plVar5 + 0x30))(plVar5,&local_80);
  }
  else {
    iVar4 = pthread_equal(__thread1,__thread2);
    if (iVar4 != 0) goto LAB_00e70550;
LAB_00e70580:
    local_70 = CONCAT44(iVar2,iVar1);
    local_80 = &PTR_FUN_016f3ef0;
    plStack_78 = plVar5;
    local_60 = (long *)&local_80;
    (**(code **)(*(long *)plVar5[0x13] + 0x10))((long *)plVar5[0x13],&local_80);
    plVar5 = local_60;
    if (&local_80 == (undefined ***)local_60) {
      pcVar7 = *(code **)(*local_60 + 0x20);
    }
    else {
      if (local_60 == (long *)0x0) goto LAB_00e70618;
      pcVar7 = *(code **)(*local_60 + 0x28);
    }
LAB_00e70614:
    (*pcVar7)(plVar5);
  }
LAB_00e70618:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

