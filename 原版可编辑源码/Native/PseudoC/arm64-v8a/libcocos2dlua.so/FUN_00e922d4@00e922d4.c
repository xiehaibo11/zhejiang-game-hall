
undefined8 FUN_00e922d4(undefined8 *param_1)

{
  mutex *this;
  mutex *this_00;
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  pthread_key_t *ppVar5;
  long *plVar6;
  void *__pointer;
  code *pcVar7;
  ulong uVar8;
  __shared_weak_count *this_01;
  __thread_struct *this_02;
  long *unaff_x25;
  long *plVar9;
  long lVar10;
  byte *pbVar11;
  mutex *local_78;
  char local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  ppVar5 = (pthread_key_t *)std::__ndk1::__thread_local_data();
  __pointer = (void *)*param_1;
  *param_1 = 0;
  pthread_setspecific(*ppVar5,__pointer);
  lVar10 = param_1[1];
  pbVar11 = (byte *)param_1[3];
  this = (mutex *)(lVar10 + 0x90);
  std::__ndk1::mutex::lock(this);
  if (*(long *)(lVar10 + 0x88) == 0) {
    bVar3 = false;
  }
  else {
    uVar8 = *(ulong *)(lVar10 + 0x80);
    unaff_x25 = *(long **)(*(long *)((long)*(undefined8 **)(lVar10 + 0x68) +
                                    (uVar8 >> 5 & 0x7fffffffffffff8)) + (uVar8 & 0xff) * 0x10 + 8);
    *(ulong *)(lVar10 + 0x80) = uVar8 + 1;
    *(long *)(lVar10 + 0x88) = *(long *)(lVar10 + 0x88) + -1;
    if (0x1ff < uVar8 + 1) {
      operator_delete((void *)**(undefined8 **)(lVar10 + 0x68));
      *(long *)(lVar10 + 0x68) = *(long *)(lVar10 + 0x68) + 8;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -0x100;
    }
    bVar3 = true;
  }
  std::__ndk1::mutex::unlock(this);
  this_00 = (mutex *)(lVar10 + 0xc0);
  do {
    plVar9 = unaff_x25;
    if (bVar3) {
      do {
        local_78 = (mutex *)CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 2));
        plVar6 = (long *)plVar9[4];
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        (**(code **)(*plVar6 + 0x30))(plVar6,&local_78);
        if ((*pbVar11 & 1) != 0) {
          plVar6 = (long *)plVar9[4];
          if (plVar9 == plVar6) {
            pcVar7 = *(code **)(*plVar6 + 0x20);
LAB_00e925dc:
            (*pcVar7)();
          }
          else if (plVar6 != (long *)0x0) {
            pcVar7 = *(code **)(*plVar6 + 0x28);
            goto LAB_00e925dc;
          }
          operator_delete(plVar9);
          goto LAB_00e925e8;
        }
        std::__ndk1::mutex::lock(this);
        if (*(long *)(lVar10 + 0x88) == 0) {
          bVar3 = false;
          unaff_x25 = plVar9;
        }
        else {
          uVar8 = *(ulong *)(lVar10 + 0x80);
          unaff_x25 = *(long **)(*(long *)((long)*(undefined8 **)(lVar10 + 0x68) +
                                          (uVar8 >> 5 & 0x7fffffffffffff8)) + (uVar8 & 0xff) * 0x10
                                + 8);
          *(ulong *)(lVar10 + 0x80) = uVar8 + 1;
          *(long *)(lVar10 + 0x88) = *(long *)(lVar10 + 0x88) + -1;
          if (0x1ff < uVar8 + 1) {
            operator_delete((void *)**(undefined8 **)(lVar10 + 0x68));
            *(long *)(lVar10 + 0x68) = *(long *)(lVar10 + 0x68) + 8;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -0x100;
          }
          bVar3 = true;
        }
        std::__ndk1::mutex::unlock(this);
        plVar6 = (long *)plVar9[4];
        if (plVar9 == plVar6) {
          pcVar7 = *(code **)(*plVar6 + 0x20);
LAB_00e923bc:
          (*pcVar7)();
        }
        else if (plVar6 != (long *)0x0) {
          pcVar7 = *(code **)(*plVar6 + 0x28);
          goto LAB_00e923bc;
        }
        operator_delete(plVar9);
        plVar9 = unaff_x25;
      } while (bVar3);
    }
    local_70 = '\x01';
    local_78 = (mutex *)(lVar10 + 0xe8);
    std::__ndk1::mutex::lock((mutex *)(lVar10 + 0xe8));
    std::__ndk1::mutex::lock(this_00);
    *(int *)(lVar10 + 0xbc) = *(int *)(lVar10 + 0xbc) + 1;
    std::__ndk1::mutex::unlock(this_00);
    **(undefined4 **)(*(long *)(lVar10 + 0x30) + (long)*(int *)(param_1 + 2) * 0x10) = 1;
    while( true ) {
      std::__ndk1::mutex::lock(this);
      if (*(long *)(lVar10 + 0x88) != 0) break;
      std::__ndk1::mutex::unlock(this);
      if (((*(byte *)(lVar10 + 0xb8) & 1) != 0) || ((*pbVar11 & 1) != 0)) {
        bVar3 = false;
        goto LAB_00e92570;
      }
      std::__ndk1::condition_variable::wait
                ((condition_variable *)(lVar10 + 0x110),(unique_lock *)&local_78);
    }
    uVar8 = *(ulong *)(lVar10 + 0x80);
    unaff_x25 = *(long **)(*(long *)((long)*(undefined8 **)(lVar10 + 0x68) +
                                    (uVar8 >> 5 & 0x7fffffffffffff8)) + (uVar8 & 0xff) * 0x10 + 8);
    *(ulong *)(lVar10 + 0x80) = uVar8 + 1;
    *(long *)(lVar10 + 0x88) = *(long *)(lVar10 + 0x88) + -1;
    if (0x1ff < uVar8 + 1) {
      operator_delete((void *)**(undefined8 **)(lVar10 + 0x68));
      *(long *)(lVar10 + 0x68) = *(long *)(lVar10 + 0x68) + 8;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -0x100;
    }
    std::__ndk1::mutex::unlock(this);
    bVar3 = true;
LAB_00e92570:
    **(undefined4 **)(*(long *)(lVar10 + 0x30) + (long)*(int *)(param_1 + 2) * 0x10) = 0;
    std::__ndk1::mutex::lock(this_00);
    *(int *)(lVar10 + 0xbc) = *(int *)(lVar10 + 0xbc) + -1;
    std::__ndk1::mutex::unlock(this_00);
    if (local_70 != '\0') {
      std::__ndk1::mutex::unlock(local_78);
    }
    if (!bVar3) {
LAB_00e925e8:
      this_01 = (__shared_weak_count *)param_1[4];
      if (this_01 != (__shared_weak_count *)0x0) {
        p_Var1 = this_01 + 8;
        do {
          lVar10 = *(long *)p_Var1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
          if (bVar3) {
            *(long *)p_Var1 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*(long *)this_01 + 0x10))(this_01);
          std::__ndk1::__shared_weak_count::__release_weak(this_01);
        }
      }
      this_02 = (__thread_struct *)*param_1;
      *param_1 = 0;
      if (this_02 != (__thread_struct *)0x0) {
        std::__ndk1::__thread_struct::~__thread_struct(this_02);
        operator_delete(this_02);
      }
      operator_delete(param_1);
      if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return 0;
    }
  } while( true );
}

