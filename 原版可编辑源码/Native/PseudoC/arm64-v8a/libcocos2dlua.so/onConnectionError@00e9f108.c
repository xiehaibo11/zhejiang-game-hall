
/* cocos2d::network::WebSocket::onConnectionError(void*, long) */

undefined8 __thiscall
cocos2d::network::WebSocket::onConnectionError(WebSocket *this,void *param_1,long param_2)

{
  mutex *this_00;
  __shared_weak_count *p_Var1;
  __shared_weak_count *p_Var2;
  __shared_weak_count *this_01;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  code *pcVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  WebSocket *local_f0;
  undefined8 uStack_e8;
  __shared_weak_count *local_e0;
  undefined8 local_d8;
  ulong uStack_d0;
  undefined1 *local_c8;
  ulong local_b8;
  ulong uStack_b0;
  undefined1 *local_a8;
  WsThreadHelper aWStack_a0 [32];
  WsThreadHelper *local_80;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  this_00 = (mutex *)(this + 8);
  uStack_b0 = 0;
  local_a8 = (undefined1 *)0x0;
  local_b8 = 0;
  std::__ndk1::mutex::lock(this_00);
  uVar15 = uStack_b0;
  if (0 < param_2) {
    if ((ulong)param_2 < 0x17) {
      puVar8 = (undefined1 *)0x0;
      bVar10 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __grow_by((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                &local_b8,0x16,param_2 - 0x16,0,0,0,0);
      puVar8 = local_a8;
      bVar10 = local_b8._0_1_;
    }
    puVar7 = (undefined1 *)((ulong)&local_b8 | 1);
    if (((byte)bVar10 & 1) != 0) {
      puVar7 = puVar8;
    }
    puVar8 = (undefined1 *)((long)param_1 + param_2);
    if (((ulong)param_2 < 0x20) || ((puVar7 < puVar8 && (param_1 < puVar7 + param_2)))) {
LAB_00e9f210:
      do {
        puVar16 = (undefined1 *)((long)param_1 + 1);
        puVar11 = puVar7 + 1;
        *puVar7 = *(undefined1 *)param_1;
        puVar7 = puVar11;
        param_1 = puVar16;
      } while (puVar8 != puVar16);
    }
    else {
      uVar17 = param_2 & 0xffffffffffffffe0;
      puVar13 = (undefined8 *)((long)param_1 + 0x10);
      puVar11 = puVar7 + uVar17;
      param_1 = (void *)((long)param_1 + uVar17);
      puVar14 = (undefined8 *)(puVar7 + 0x10);
      uVar15 = uVar17;
      do {
        puVar6 = puVar13 + -1;
        uVar18 = puVar13[-2];
        uVar20 = puVar13[1];
        uVar19 = *puVar13;
        puVar13 = puVar13 + 4;
        uVar15 = uVar15 - 0x20;
        puVar14[-1] = *puVar6;
        puVar14[-2] = uVar18;
        puVar14[1] = uVar20;
        *puVar14 = uVar19;
        puVar14 = puVar14 + 4;
      } while (uVar15 != 0);
      puVar7 = puVar11;
      if (uVar17 != param_2) goto LAB_00e9f210;
    }
    *puVar11 = 0;
    uVar15 = param_2;
    if ((local_b8 & 1) == 0) {
      local_b8 = CONCAT71(local_b8._1_7_,(char)((int)param_2 << 1));
      uVar15 = uStack_b0;
    }
  }
  uStack_b0 = uVar15;
  if (*(int *)(this + 0x30) == 3) {
    std::__ndk1::mutex::unlock(this_00);
    goto joined_r0x00e9f43c;
  }
  *(undefined4 *)(this + 0x30) = 2;
  std::__ndk1::mutex::unlock(this_00);
  puVar8 = local_a8;
  uVar15 = uStack_b0;
  uStack_e8 = *(undefined8 *)(this + 0xa8);
  this_01 = *(__shared_weak_count **)(this + 0xb0);
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var1 = this_01 + 8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var1 = this_01 + 8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_d0 = 0;
  local_c8 = (undefined1 *)0x0;
  local_d8 = 0;
  local_f0 = this;
  local_e0 = this_01;
  if ((local_b8 & 1) == 0) {
    local_c8 = local_a8;
    uStack_d0 = uStack_b0;
    local_d8 = local_b8;
  }
  else {
    if (0xffffffffffffffef < uStack_b0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_b0 < 0x17) {
      puVar7 = (undefined1 *)((long)&local_d8 + 1);
      local_d8 = (ulong)(byte)((int)uStack_b0 << 1);
      if (uStack_b0 != 0) goto LAB_00e9f320;
    }
    else {
      uVar17 = uStack_b0 + 0x10 & 0xfffffffffffffff0;
      puVar7 = operator_new(uVar17);
      local_d8 = uVar17 | 1;
      uStack_d0 = uVar15;
      local_c8 = puVar7;
LAB_00e9f320:
      memcpy(puVar7,puVar8,uVar15);
    }
    puVar7[uVar15] = 0;
  }
  local_80 = (WsThreadHelper *)0x0;
  local_80 = operator_new(0x38);
  puVar8 = local_c8;
  uVar17 = uStack_d0;
  uVar15 = local_d8;
  *(undefined ***)local_80 = &PTR_FUN_016f49d8;
  *(undefined8 *)((ulong)&local_f0 | 8) = 0;
  ((undefined8 *)((ulong)&local_f0 | 8))[1] = 0;
  *(undefined8 *)(local_80 + 0x10) = uStack_e8;
  *(WebSocket **)(local_80 + 8) = local_f0;
  uStack_d0 = 0;
  local_c8 = (void *)0x0;
  local_d8 = 0;
  *(__shared_weak_count **)(local_80 + 0x18) = local_e0;
  *(undefined1 **)(local_80 + 0x30) = puVar8;
  *(ulong *)(local_80 + 0x28) = uVar17;
  *(ulong *)(local_80 + 0x20) = uVar15;
  WsThreadHelper::sendMessageToCocosThread(local_80,aWStack_a0);
  if (aWStack_a0 == local_80) {
    pcVar9 = *(code **)(*(long *)local_80 + 0x20);
LAB_00e9f3b0:
    (*pcVar9)();
  }
  else if (local_80 != (WsThreadHelper *)0x0) {
    pcVar9 = *(code **)(*(long *)local_80 + 0x28);
    goto LAB_00e9f3b0;
  }
  if ((local_d8 & 1) != 0) {
    operator_delete(local_c8);
  }
  p_Var1 = local_e0;
  if (local_e0 != (__shared_weak_count *)0x0) {
    p_Var2 = local_e0 + 8;
    do {
      lVar12 = *(long *)p_Var2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
      if (bVar4) {
        *(long *)p_Var2 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*(long *)local_e0 + 0x10))(local_e0);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var1);
    }
  }
  onConnectionClosed(this);
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var1 = this_01 + 8;
    do {
      lVar12 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*(long *)this_01 + 0x10))(this_01);
      std::__ndk1::__shared_weak_count::__release_weak(this_01);
    }
  }
joined_r0x00e9f43c:
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

