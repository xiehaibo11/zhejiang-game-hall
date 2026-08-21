
/* xh::XhSdk::callBack(int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >) */

void xh::XhSdk::callBack(undefined4 param_1,ulong *param_2)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  Scheduler *this;
  __shared_weak_count *this_00;
  void *__dest;
  byte *pbVar5;
  code *pcVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 local_a8;
  ulong uStack_a0;
  void *local_98;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  __android_log_print(3,"XhNative","----------------------");
  if ((*param_2 & 1) == 0) {
    pbVar5 = (byte *)((long)param_2 + 1);
  }
  else {
    pbVar5 = (byte *)param_2[2];
  }
  __android_log_print(3,"XhNative","native callback %d %s",param_1,pbVar5);
  __android_log_print(3,"XhNative","----------------------");
  this_00 = DAT_01d35b10;
  this = cocos2d::Application::_scheduler;
  if (DAT_01d35a20 == 0) goto LAB_008582e4;
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
  uStack_a0 = 0;
  local_98 = (void *)0x0;
  local_a8 = 0;
  if ((*param_2 & 1) == 0) {
    local_98 = (void *)param_2[2];
    uStack_a0 = param_2[1];
    local_a8 = *param_2;
  }
  else {
    uVar9 = param_2[1];
    if (0xffffffffffffffef < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar8 = (void *)param_2[2];
    if (uVar9 < 0x17) {
      __dest = (void *)((long)&local_a8 + 1);
      local_a8 = (ulong)(byte)((int)uVar9 << 1);
      if (uVar9 != 0) goto LAB_00858218;
    }
    else {
      uVar10 = uVar9 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar10);
      local_a8 = uVar10 | 1;
      uStack_a0 = uVar9;
      local_98 = __dest;
LAB_00858218:
      memcpy(__dest,pvVar8,uVar9);
    }
    *(undefined1 *)((long)__dest + uVar9) = 0;
  }
  local_70 = (long *)0x0;
  local_70 = operator_new(0x28);
  pvVar8 = local_98;
  uVar10 = uStack_a0;
  uVar9 = local_a8;
  uStack_a0 = 0;
  local_98 = (void *)0x0;
  local_a8 = 0;
  *local_70 = (long)&PTR_FUN_01c660c8;
  *(undefined4 *)(local_70 + 1) = param_1;
  local_70[4] = (long)pvVar8;
  local_70[3] = uVar10;
  local_70[2] = uVar9;
  cocos2d::Scheduler::performFunctionInCocosThread(this,(function *)alStack_90);
  if (alStack_90 == local_70) {
    pcVar6 = *(code **)(*local_70 + 0x20);
LAB_0085829c:
    (*pcVar6)();
  }
  else if (local_70 != (long *)0x0) {
    pcVar6 = *(code **)(*local_70 + 0x28);
    goto LAB_0085829c;
  }
  if ((local_a8 & 1) != 0) {
    operator_delete(local_98);
  }
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      lVar7 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
LAB_008582e4:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

