
/* WebSocketImpl::onClientReceivedData(void*, long) */

undefined8 __thiscall
WebSocketImpl::onClientReceivedData(WebSocketImpl *this,void *param_1,long param_2)

{
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  undefined1 *puVar3;
  long lVar4;
  __shared_weak_count *this_00;
  char cVar5;
  bool bVar6;
  long lVar7;
  Scheduler *this_01;
  int iVar8;
  long lVar9;
  long *plVar10;
  void *pvVar11;
  ulong uVar12;
  code *pcVar13;
  void *pvVar14;
  size_t sVar15;
  ulong uVar16;
  long lVar17;
  long alStack_a0 [4];
  long *local_80;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  DAT_01d3888c = DAT_01d3888c + 1;
  if ((param_1 != (void *)0x0) && (0 < param_2)) {
    std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<unsigned_char*>
              ((vector<char,std::__ndk1::allocator<char>> *)(this + 0x50),
               *(undefined8 *)(this + 0x58),param_1,(long)param_1 + param_2);
  }
  lVar9 = lws_remaining_packet_payload(*(undefined8 *)(this + 0x68));
  iVar8 = lws_is_final_fragment(*(undefined8 *)(this + 0x68));
  if ((lVar9 != 0) || (iVar8 == 0)) goto LAB_009ec1d4;
  plVar10 = operator_new(0x18,(nothrow_t *)&std::nothrow);
  if (plVar10 == (long *)0x0) {
    lVar9 = *(long *)(this + 0x60);
    pvVar14 = *(void **)(this + 0x50);
  }
  else {
    lVar17 = *(long *)(this + 0x50);
    pvVar14 = (void *)0x0;
    lVar9 = 0;
    plVar10[1] = *(long *)(this + 0x58);
    *plVar10 = lVar17;
    plVar10[2] = *(long *)(this + 0x60);
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
  }
  if ((ulong)(lVar9 - (long)pvVar14) < 0x1000) {
    sVar15 = *(long *)(this + 0x58) - (long)pvVar14;
    pvVar11 = operator_new(0x1000);
    if (0 < (long)sVar15) {
      memcpy(pvVar11,pvVar14,sVar15);
    }
    *(void **)(this + 0x50) = pvVar11;
    *(size_t *)(this + 0x58) = (long)pvVar11 + sVar15;
    *(long *)(this + 0x60) = (long)pvVar11 + 0x1000;
    if (pvVar14 != (void *)0x0) {
      operator_delete(pvVar14);
    }
  }
  lVar9 = *plVar10;
  lVar17 = plVar10[1];
                    /* try { // try from 009ebfe8 to 00aebfef has its CatchHandler @ 009ec4e8 */
  iVar8 = lws_frame_is_binary(*(undefined8 *)(this + 0x68));
                    /* try { // try from 009ebff0 to 00aec043 has its CatchHandler @ 009eba24 */
  if (iVar8 == 0) {
    puVar3 = (undefined1 *)plVar10[1];
    if ((undefined1 *)plVar10[2] <= puVar3) {
      pvVar14 = (void *)*plVar10;
      sVar15 = (long)puVar3 - (long)pvVar14;
      uVar16 = sVar15 + 1;
      if ((long)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar12 = plVar10[2] - (long)pvVar14;
      if (uVar12 < 0x3fffffffffffffff) {
        uVar12 = uVar12 * 2;
                    /* try { // try from 009ec044 to 00aec0df has its CatchHandler @ 009ec658 */
        if (uVar16 <= uVar12) {
          uVar16 = uVar12;
        }
        if (uVar16 != 0) goto LAB_009ec05c;
        pvVar11 = (void *)0x0;
      }
      else {
        uVar16 = 0x7fffffffffffffff;
LAB_009ec05c:
        pvVar11 = operator_new(uVar16);
      }
      *(undefined1 *)((long)pvVar11 + sVar15) = 0;
      if (0 < (long)sVar15) {
        memcpy(pvVar11,pvVar14,sVar15);
      }
      *plVar10 = (long)pvVar11;
      plVar10[1] = (long)((undefined1 *)((long)pvVar11 + sVar15) + 1);
      plVar10[2] = (long)pvVar11 + uVar16;
      if (pvVar14 != (void *)0x0) {
        operator_delete(pvVar14);
      }
      goto LAB_009ec0b8;
    }
    *puVar3 = 0;
    plVar10[1] = plVar10[1] + 1;
    lVar4 = *(long *)(this + 0xa8);
    this_00 = *(__shared_weak_count **)(this + 0xb0);
  }
  else {
LAB_009ec0b8:
    lVar4 = *(long *)(this + 0xa8);
    this_00 = *(__shared_weak_count **)(this + 0xb0);
  }
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var2 = this_00 + 8;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar6) {
        *(long *)p_Var2 = *(long *)p_Var2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar6) {
        *(long *)p_Var2 = *(long *)p_Var2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_80 = (long *)0x0;
  local_80 = operator_new(0x38);
  local_80[2] = (long)plVar10;
  local_80[3] = lVar17 - lVar9;
  p_Var2 = DAT_01d35b10;
  this_01 = cocos2d::Application::_scheduler;
  *local_80 = (long)&PTR_FUN_01c6c148;
  local_80[1] = (long)this;
  *(bool *)(local_80 + 4) = iVar8 != 0;
  local_80[5] = lVar4;
  local_80[6] = (long)this_00;
  if (p_Var2 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var2 + 8;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar6) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  cocos2d::Scheduler::performFunctionInCocosThread(this_01,(function *)alStack_a0);
  if (p_Var2 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var2 + 8;
    do {
      lVar9 = *(long *)p_Var1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar6) {
        *(long *)p_Var1 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var2);
    }
  }
                    /* try { // try from 009ec178 to 00aec17f has its CatchHandler @ 009ec4e4 */
                    /* try { // try from 009ec180 to 00aec1a3 has its CatchHandler @ 009eba24 */
  if (alStack_a0 == local_80) {
    pcVar13 = *(code **)(*local_80 + 0x20);
LAB_009ec19c:
    (*pcVar13)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar13 = *(code **)(*local_80 + 0x28);
    goto LAB_009ec19c;
  }
  if (this_00 != (__shared_weak_count *)0x0) {
                    /* try { // try from 009ec1a4 to 00aec1a7 has its CatchHandler @ 009ec50c */
    p_Var2 = this_00 + 8;
    do {
      lVar9 = *(long *)p_Var2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar6) {
        *(long *)p_Var2 = lVar9 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
LAB_009ec1d4:
                    /* try { // try from 009ec1dc to 00aec1e3 has its CatchHandler @ 009ec500 */
  if (*(long *)(lVar7 + 0x28) == local_68) {
                    /* try { // try from 009ec1e8 to 00aec1ef has its CatchHandler @ 009ec4fc */
                    /* try { // try from 009ec1f4 to 00aec20b has its CatchHandler @ 009ec5e0 */
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

