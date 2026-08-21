
void FUN_0097df1c(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  Scheduler *this;
  __shared_weak_count *this_00;
  size_t __n;
  void *__src;
  ulong uVar5;
  size_t __n_00;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  char *__s;
  void *pvVar9;
  ulong uVar10;
  undefined4 uVar11;
  ulong local_118;
  size_t sStack_110;
  void *local_108;
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  long alStack_e0 [4];
  long *local_c0;
  undefined4 local_b0;
  long alStack_a0 [4];
  long *local_80;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 0097df44 to 00a7df4b has its CatchHandler @ 0097df94 */
                    /* try { // try from 0097df4c to 00a7e02b has its CatchHandler @ 0097dea4 */
  __s = (char *)*param_3;
  uVar11 = *param_2;
  local_118 = 0;
  sStack_110 = 0;
  local_108 = (void *)0x0;
  __n_00 = strlen(__s);
  if (0xffffffffffffffef < __n_00) {
                    /* catch() { ... } // from try @ 0097e184 with catch @ 0097e238 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0097e1a8 with catch @ 0097e23c */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n_00 < 0x17) {
    pvVar9 = (void *)((ulong)&local_118 | 1);
    local_118 = CONCAT71(local_118._1_7_,(char)((int)__n_00 << 1));
    if (__n_00 != 0) goto LAB_0097dfb0;
  }
  else {
                    /* catch() { ... } // from try @ 0097df44 with catch @ 0097df94 */
    uVar10 = __n_00 + 0x10 & 0xfffffffffffffff0;
    pvVar9 = operator_new(uVar10);
    local_118 = uVar10 | 1;
    sStack_110 = __n_00;
    local_108 = pvVar9;
LAB_0097dfb0:
    memcpy(pvVar9,__s,__n_00);
  }
  __src = local_108;
  __n = sStack_110;
  *(undefined1 *)((long)pvVar9 + __n_00) = 0;
  this_00 = DAT_01d35b10;
  this = cocos2d::Application::_scheduler;
  if (DAT_01d35b10 != (__shared_weak_count *)0x0) {
    p_Var1 = DAT_01d35b10 + 8;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = (void *)0x0;
                    /* catch() { ... } // from try @ 0097df04 with catch @ 0097dff4 */
  if ((local_118 & 1) == 0) {
    local_f0 = local_108;
    uStack_f8 = sStack_110;
    local_100 = local_118;
  }
  else {
    if (0xffffffffffffffef < sStack_110) {
                    /* catch() { ... } // from try @ 0097e160 with catch @ 0097e244 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0097e14c with catch @ 0097e248 */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sStack_110 < 0x17) {
                    /* catch() { ... } // from try @ 0097e1b0 with catch @ 0097e02c */
      pvVar9 = (void *)((ulong)&local_100 | 1);
      local_100 = (ulong)(byte)((int)sStack_110 << 1);
      if (sStack_110 != 0) goto LAB_0097e05c;
    }
    else {
      uVar10 = sStack_110 + 0x10 & 0xfffffffffffffff0;
      pvVar9 = operator_new(uVar10);
      local_100 = uVar10 | 1;
      uStack_f8 = __n;
      local_f0 = pvVar9;
LAB_0097e05c:
      memcpy(pvVar9,__src,__n);
    }
    *(undefined1 *)((long)pvVar9 + __n) = 0;
  }
  plVar6 = *(long **)(param_1 + 0x30);
  local_c0 = alStack_e0;
  if (plVar6 == (long *)0x0) {
    local_c0 = (long *)0x0;
  }
  else if ((long *)(param_1 + 0x10) == plVar6) {
                    /* try { // try from 0097e0b8 to 00a7e0e7 has its CatchHandler @ 0097e204 */
    (**(code **)(*plVar6 + 0x18))(plVar6,local_c0);
  }
  else {
    local_c0 = (long *)(**(code **)(*plVar6 + 0x10))();
  }
  local_80 = (long *)0x0;
  local_b0 = uVar11;
  plVar6 = operator_new(0x70);
  pvVar9 = local_f0;
  uVar5 = uStack_f8;
  uVar10 = local_100;
  uStack_f8 = 0;
  local_f0 = (void *)0x0;
  local_100 = 0;
  *plVar6 = (long)&PTR_FUN_01c6a058;
  plVar6[4] = (long)pvVar9;
  plVar6[3] = uVar5;
  plVar6[2] = uVar10;
  if (local_c0 == (long *)0x0) {
    plVar6[10] = 0;
  }
  else if (alStack_e0 == local_c0) {
    plVar6[10] = (long)(plVar6 + 6);
    (**(code **)(*local_c0 + 0x18))();
    uVar11 = local_b0;
  }
  else {
    plVar6[10] = (long)local_c0;
    local_c0 = (long *)0x0;
                    /* try { // try from 0097e114 to 00a7e11b has its CatchHandler @ 0097e240 */
  }
  *(undefined4 *)(plVar6 + 0xc) = uVar11;
  local_80 = plVar6;
                    /* try { // try from 0097e14c to 00a7e153 has its CatchHandler @ 0097e248 */
  cocos2d::Scheduler::performFunctionInCocosThread(this,(function *)alStack_a0);
  if (alStack_a0 == local_80) {
    pcVar7 = *(code **)(*local_80 + 0x20);
LAB_0097e174:
    (*pcVar7)();
  }
  else if (local_80 != (long *)0x0) {
                    /* try { // try from 0097e160 to 00a7e177 has its CatchHandler @ 0097e244 */
    pcVar7 = *(code **)(*local_80 + 0x28);
    goto LAB_0097e174;
  }
                    /* try { // try from 0097e184 to 00a7e18b has its CatchHandler @ 0097e238 */
  if (alStack_e0 == local_c0) {
    pcVar7 = *(code **)(*local_c0 + 0x20);
  }
  else {
    if (local_c0 == (long *)0x0) goto LAB_0097e1a8;
    pcVar7 = *(code **)(*local_c0 + 0x28);
  }
  (*pcVar7)();
LAB_0097e1a8:
                    /* try { // try from 0097e1a8 to 00a7e1af has its CatchHandler @ 0097e23c */
  if ((local_100 & 1) != 0) {
                    /* try { // try from 0097e1b0 to 00a7e263 has its CatchHandler @ 0097e02c */
    operator_delete(local_f0);
  }
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      lVar8 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
  if ((local_118 & 1) != 0) {
    operator_delete(local_108);
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0097e114 with catch @ 0097e240 */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 0097e0b8 with catch @ 0097e204 */
  return;
}

