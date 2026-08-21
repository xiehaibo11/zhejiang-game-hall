
undefined8 FUN_00927e14(undefined8 *param_1)

{
  mutex *this;
  char cVar1;
  long lVar2;
  long lVar3;
  pthread_key_t *ppVar4;
  long *plVar5;
  mutex *this_00;
  void *__pointer;
  long lVar6;
  long lVar7;
  __thread_struct *this_01;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  mutex *local_78;
  char local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  ppVar4 = (pthread_key_t *)std::__ndk1::__thread_local_data();
  __pointer = (void *)*param_1;
  *param_1 = 0;
  pthread_setspecific(*ppVar4,__pointer);
  lVar9 = param_1[1];
  lVar11 = (long)*(int *)(param_1 + 2);
  lVar10 = *(long *)(lVar9 + 0x38);
  cVar1 = *(char *)(lVar10 + lVar11);
  if ((cVar1 != '\0') && (*(char *)(lVar9 + 0x40) == '\0')) {
    lVar6 = *(long *)(lVar9 + 8);
    plVar12 = (long *)(lVar6 + lVar11 * 0x18);
    this = (mutex *)(lVar9 + 0x48);
    do {
      if (cVar1 == '\x01') {
        local_70 = '\x01';
        local_78 = this;
        std::__ndk1::mutex::lock(this);
        while ((*(char *)(lVar10 + lVar11) != '\0' && (*(char *)(lVar9 + 0x40) == '\0'))) {
          std::__ndk1::condition_variable::wait
                    ((condition_variable *)(lVar9 + 0x70),(unique_lock *)&local_78);
        }
        this_00 = local_78;
        if (local_70 != '\0') goto LAB_00927f8c;
      }
      else if (cVar1 == '\0') {
        lVar7 = *plVar12;
        lVar2 = *(long *)(lVar6 + lVar11 * 0x18 + 8) - lVar7;
        if (lVar2 != 0) {
          local_78 = (mutex *)CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 2));
          plVar5 = *(long **)(lVar7 + 0x20);
          if (plVar5 == (long *)0x0) {
LAB_00927ff8:
                    /* WARNING: Subroutine does not return */
            FUN_008589d0();
          }
          uVar8 = 0;
          lVar7 = 0x50;
          while( true ) {
            (**(code **)(*plVar5 + 0x30))(plVar5,&local_78);
            uVar8 = uVar8 + 1;
            if ((ulong)((lVar2 >> 4) * -0x5555555555555555) <= uVar8) break;
            local_78 = (mutex *)CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 2));
            plVar5 = *(long **)(*plVar12 + lVar7);
            lVar7 = lVar7 + 0x30;
            if (plVar5 == (long *)0x0) goto LAB_00927ff8;
          }
        }
        *(undefined1 *)(lVar10 + lVar11) = 1;
        std::__ndk1::mutex::lock(this);
        std::__ndk1::condition_variable::notify_all((condition_variable *)(lVar9 + 0x70));
        this_00 = this;
LAB_00927f8c:
        std::__ndk1::mutex::unlock(this_00);
      }
      if (*(char *)(lVar9 + 0x40) != '\0') goto code_r0x00927f98;
      cVar1 = *(char *)(lVar10 + lVar11);
    } while( true );
  }
LAB_00927fa0:
  this_01 = (__thread_struct *)*param_1;
  *param_1 = 0;
  if (this_01 != (__thread_struct *)0x0) {
    std::__ndk1::__thread_struct::~__thread_struct(this_01);
    operator_delete(this_01);
  }
  operator_delete(param_1);
LAB_00927fc4:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
code_r0x00927f98:
  if (param_1 == (undefined8 *)0x0) goto LAB_00927fc4;
  goto LAB_00927fa0;
}

