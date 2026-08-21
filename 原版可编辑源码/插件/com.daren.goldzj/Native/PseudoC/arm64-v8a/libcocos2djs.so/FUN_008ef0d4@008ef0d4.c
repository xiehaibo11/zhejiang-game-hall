
void FUN_008ef0d4(ulong *param_1,ulong *param_2,long param_3,undefined4 param_4,ulong *param_5)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ThreadPool *pTVar6;
  __shared_weak_count *this;
  __shared_weak_count *this_00;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  __shared_weak_count *p_Var10;
  ulong uVar11;
  ulong uVar12;
  void *pvVar13;
  ulong local_110;
  ulong uStack_108;
  void *local_100;
  undefined8 local_f8;
  ulong uStack_f0;
  void *local_e8;
  long local_e0;
  __shared_weak_count *p_Stack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  ulong uStack_c0;
  void *local_b8;
  ulong local_b0;
  __shared_weak_count *p_Stack_a8;
  long alStack_a0 [4];
  long *local_80;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  this_00 = operator_new(0x28);
  *(undefined8 *)(this_00 + 0x10) = 0;
  p_Var10 = this_00 + 8;
  *(long *)p_Var10 = 0;
  *(undefined ***)this_00 = &PTR____shared_weak_count_01c67ca8;
  this = DAT_01d36fa8;
  pTVar6 = DAT_01d36fa0;
  *(long *)(this_00 + 0x18) = param_3;
  *(code **)(this_00 + 0x20) = free;
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (pTVar6 == (ThreadPool *)0x0) goto LAB_008ef614;
  uStack_108 = 0;
  local_100 = (void *)0x0;
  local_110 = 0;
  if ((*param_5 & 1) == 0) {
    local_100 = (void *)param_5[2];
    uStack_108 = param_5[1];
    local_110 = *param_5;
  }
  else {
    uVar12 = param_5[1];
    if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar13 = (void *)param_5[2];
    if (uVar12 < 0x17) {
      pvVar8 = (void *)((ulong)&local_110 | 1);
      local_110 = (ulong)(byte)((int)uVar12 << 1);
      if (uVar12 != 0) goto LAB_008ef1e8;
    }
    else {
      uVar11 = uVar12 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = operator_new(uVar11);
      local_110 = uVar11 | 1;
      uStack_108 = uVar12;
      local_100 = pvVar8;
LAB_008ef1e8:
      memcpy(pvVar8,pvVar13,uVar12);
    }
    *(undefined1 *)((long)pvVar8 + uVar12) = 0;
  }
  uStack_f0 = 0;
  local_e8 = (void *)0x0;
  local_f8 = 0;
  if ((*param_2 & 1) == 0) {
    local_e8 = (void *)param_2[2];
    uStack_f0 = param_2[1];
    local_f8 = *param_2;
  }
  else {
    uVar12 = param_2[1];
    if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar13 = (void *)param_2[2];
    if (uVar12 < 0x17) {
      pvVar8 = (void *)((long)&local_f8 + 1);
      local_f8 = (ulong)(byte)((int)uVar12 << 1);
      if (uVar12 != 0) goto LAB_008ef27c;
    }
    else {
      uVar11 = uVar12 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = operator_new(uVar11);
      local_f8 = uVar11 | 1;
      uStack_f0 = uVar12;
      local_e8 = pvVar8;
LAB_008ef27c:
      memcpy(pvVar8,pvVar13,uVar12);
    }
    *(undefined1 *)((long)pvVar8 + uVar12) = 0;
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(p_Var10,0x10);
    if (bVar4) {
      *(long *)p_Var10 = *(long *)p_Var10 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uStack_c0 = 0;
  local_b8 = (void *)0x0;
  local_c8 = 0;
  local_e0 = param_3;
  p_Stack_d8 = this_00;
  local_d0 = param_4;
  if ((*param_1 & 1) == 0) {
    local_b8 = (void *)param_1[2];
    uStack_c0 = param_1[1];
    local_c8 = *param_1;
  }
  else {
    uVar12 = param_1[1];
    if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar13 = (void *)param_1[2];
    if (uVar12 < 0x17) {
      pvVar8 = (void *)((long)&local_c8 + 1);
      local_c8 = (ulong)(byte)((int)uVar12 << 1);
      if (uVar12 != 0) goto LAB_008ef32c;
    }
    else {
      uVar11 = uVar12 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = operator_new(uVar11);
      local_c8 = uVar11 | 1;
      uStack_c0 = uVar12;
      local_b8 = pvVar8;
LAB_008ef32c:
      memcpy(pvVar8,pvVar13,uVar12);
    }
    *(undefined1 *)((long)pvVar8 + uVar12) = 0;
  }
  local_b0 = param_1[3];
  p_Stack_a8 = (__shared_weak_count *)param_1[4];
  if (p_Stack_a8 != (__shared_weak_count *)0x0) {
    plVar7 = (long *)((long)p_Stack_a8 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_80 = (long *)0x0;
  plVar7 = operator_new(0x78);
  pvVar13 = local_100;
  uVar12 = uStack_108;
  *plVar7 = (long)&PTR_FUN_01c67cf8;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  if ((local_110 & 1) == 0) {
    plVar7[3] = (long)local_100;
    plVar7[2] = uStack_108;
    plVar7[1] = local_110;
  }
  else {
    if (0xffffffffffffffef < uStack_108) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_108 < 0x17) {
      pvVar8 = (void *)((long)plVar7 + 9);
      *(char *)(plVar7 + 1) = (char)((int)uStack_108 << 1);
      if (uStack_108 != 0) goto LAB_008ef3f8;
    }
    else {
      uVar11 = uStack_108 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = operator_new(uVar11);
      plVar7[2] = uVar12;
      plVar7[3] = (long)pvVar8;
      plVar7[1] = uVar11 | 1;
LAB_008ef3f8:
      memcpy(pvVar8,pvVar13,uVar12);
    }
    *(undefined1 *)((long)pvVar8 + uVar12) = 0;
  }
  pvVar13 = local_e8;
  uVar12 = uStack_f0;
  plVar7[4] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  if ((local_f8 & 1) == 0) {
    plVar7[6] = (long)local_e8;
    plVar7[5] = uStack_f0;
    plVar7[4] = local_f8;
  }
  else {
    if (0xffffffffffffffef < uStack_f0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_f0 < 0x17) {
      pvVar8 = (void *)((long)plVar7 + 0x21);
      *(char *)(plVar7 + 4) = (char)((int)uStack_f0 << 1);
      if (uStack_f0 != 0) goto LAB_008ef484;
    }
    else {
      uVar11 = uStack_f0 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = operator_new(uVar11);
      plVar7[5] = uVar12;
      plVar7[6] = (long)pvVar8;
      plVar7[4] = uVar11 | 1;
LAB_008ef484:
      memcpy(pvVar8,pvVar13,uVar12);
    }
    *(undefined1 *)((long)pvVar8 + uVar12) = 0;
  }
  pvVar13 = local_b8;
  uVar12 = uStack_c0;
  p_Var1 = p_Stack_d8;
  lVar9 = local_e0;
  local_e0 = 0;
  p_Stack_d8 = (__shared_weak_count *)0x0;
  plVar7[8] = (long)p_Var1;
  plVar7[7] = lVar9;
  plVar7[10] = 0;
  *(undefined4 *)(plVar7 + 9) = local_d0;
  plVar7[0xb] = 0;
  plVar7[0xc] = 0;
  if ((local_c8 & 1) == 0) {
    plVar7[0xc] = (long)local_b8;
    plVar7[0xb] = uStack_c0;
    plVar7[10] = local_c8;
  }
  else {
    if (0xffffffffffffffef < uStack_c0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_c0 < 0x17) {
      pvVar8 = (void *)((long)plVar7 + 0x51);
      *(char *)(plVar7 + 10) = (char)((int)uStack_c0 << 1);
      if (uStack_c0 != 0) goto LAB_008ef524;
    }
    else {
      uVar11 = uStack_c0 + 0x10 & 0xfffffffffffffff0;
      pvVar8 = operator_new(uVar11);
      plVar7[0xb] = uVar12;
      plVar7[0xc] = (long)pvVar8;
      plVar7[10] = uVar11 | 1;
LAB_008ef524:
      memcpy(pvVar8,pvVar13,uVar12);
    }
    *(undefined1 *)((long)pvVar8 + uVar12) = 0;
  }
  p_Var1 = p_Stack_a8;
  uVar12 = local_b0;
  local_b0 = 0;
  p_Stack_a8 = (__shared_weak_count *)0x0;
  plVar7[0xe] = (long)p_Var1;
  plVar7[0xd] = uVar12;
  local_80 = plVar7;
  cocos2d::ThreadPool::pushTask(pTVar6,alStack_a0,0);
  if (alStack_a0 == local_80) {
    (**(code **)(*local_80 + 0x20))();
    p_Var1 = p_Stack_a8;
  }
  else {
    p_Var1 = p_Stack_a8;
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x28))();
      p_Var1 = p_Stack_a8;
    }
  }
  p_Stack_a8 = p_Var1;
  if (p_Var1 != (__shared_weak_count *)0x0) {
    p_Var2 = p_Var1 + 8;
    do {
      lVar9 = *(long *)p_Var2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar4) {
        *(long *)p_Var2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*(long *)p_Var1 + 0x10))(p_Var1);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
    }
  }
  if ((local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  p_Var1 = p_Stack_d8;
  if (p_Stack_d8 != (__shared_weak_count *)0x0) {
    p_Var2 = p_Stack_d8 + 8;
    do {
      lVar9 = *(long *)p_Var2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar4) {
        *(long *)p_Var2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*(long *)p_Stack_d8 + 0x10))(p_Stack_d8);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
    }
  }
  if ((local_f8 & 1) != 0) {
    operator_delete(local_e8);
  }
  if ((local_110 & 1) != 0) {
    operator_delete(local_100);
  }
LAB_008ef614:
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar9 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
    }
  }
  do {
    lVar9 = *(long *)p_Var10;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(p_Var10,0x10);
    if (bVar4) {
      *(long *)p_Var10 = lVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar9 == 0) {
    (**(code **)(*(long *)this_00 + 0x10))(this_00);
    std::__ndk1::__shared_weak_count::__release_weak(this_00);
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

