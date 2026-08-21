
/* cocos2d::network::WebSocket::onClientReceivedData(void*, long) */

undefined8 __thiscall
cocos2d::network::WebSocket::onClientReceivedData(WebSocket *this,void *param_1,long param_2)

{
  __shared_weak_count *p_Var1;
  undefined1 *puVar2;
  undefined8 uVar3;
  __shared_weak_count *this_00;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  void *pvVar10;
  code *pcVar11;
  ulong uVar12;
  void *pvVar13;
  size_t __n;
  ulong uVar14;
  long lVar15;
  WsThreadHelper aWStack_a0 [32];
  WsThreadHelper *local_80;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  DAT_0178f57c = DAT_0178f57c + 1;
  if ((param_1 != (void *)0x0) && (0 < param_2)) {
    std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<unsigned_char*>
              ((vector<char,std::__ndk1::allocator<char>> *)(this + 0x50),
               *(undefined8 *)(this + 0x58),param_1,(long)param_1 + param_2);
  }
  lVar8 = lws_remaining_packet_payload(*(undefined8 *)(this + 0x68));
  iVar7 = lws_is_final_fragment(*(undefined8 *)(this + 0x68));
  if ((lVar8 != 0) || (iVar7 == 0)) goto LAB_00e9feb4;
  plVar9 = operator_new(0x18,(nothrow_t *)&std::nothrow);
  if (plVar9 == (long *)0x0) {
    lVar8 = *(long *)(this + 0x60);
    pvVar13 = *(void **)(this + 0x50);
  }
  else {
    lVar15 = *(long *)(this + 0x50);
    pvVar13 = (void *)0x0;
    lVar8 = 0;
    plVar9[1] = *(long *)(this + 0x58);
    *plVar9 = lVar15;
    plVar9[2] = *(long *)(this + 0x60);
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
  }
  if ((ulong)(lVar8 - (long)pvVar13) < 0x1000) {
    lVar8 = *(long *)(this + 0x58) - (long)pvVar13;
    pvVar10 = operator_new(0x1000);
    if (0 < lVar8) {
      __memcpy_chk(pvVar10,pvVar13,lVar8,0x1000);
      pvVar13 = *(void **)(this + 0x50);
    }
    *(void **)(this + 0x50) = pvVar10;
    *(long *)(this + 0x58) = (long)pvVar10 + lVar8;
    *(long *)(this + 0x60) = (long)pvVar10 + 0x1000;
    if (pvVar13 != (void *)0x0) {
      operator_delete(pvVar13);
    }
  }
  lVar8 = *plVar9;
  lVar15 = plVar9[1];
  iVar7 = lws_frame_is_binary(*(undefined8 *)(this + 0x68));
  if (iVar7 == 0) {
    puVar2 = (undefined1 *)plVar9[1];
    if ((undefined1 *)plVar9[2] <= puVar2) {
      pvVar13 = (void *)*plVar9;
      __n = (long)puVar2 - (long)pvVar13;
      uVar14 = __n + 1;
      if ((long)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      uVar12 = plVar9[2] - (long)pvVar13;
      if (uVar12 < 0x3fffffffffffffff) {
        uVar12 = uVar12 * 2;
        if (uVar14 <= uVar12) {
          uVar14 = uVar12;
        }
        if (uVar14 != 0) goto LAB_00e9fd98;
        pvVar10 = (void *)0x0;
      }
      else {
        uVar14 = 0x7fffffffffffffff;
LAB_00e9fd98:
        pvVar10 = operator_new(uVar14);
      }
      *(undefined1 *)((long)pvVar10 + __n) = 0;
      if (0 < (long)__n) {
        memcpy(pvVar10,pvVar13,__n);
      }
      *plVar9 = (long)pvVar10;
      plVar9[1] = (long)((undefined1 *)((long)pvVar10 + __n) + 1);
      plVar9[2] = (long)pvVar10 + uVar14;
      if (pvVar13 != (void *)0x0) {
        operator_delete(pvVar13);
      }
      goto LAB_00e9fdf4;
    }
    *puVar2 = 0;
    plVar9[1] = (long)(puVar2 + 1);
    uVar3 = *(undefined8 *)(this + 0xa8);
    this_00 = *(__shared_weak_count **)(this + 0xb0);
  }
  else {
LAB_00e9fdf4:
    uVar3 = *(undefined8 *)(this + 0xa8);
    this_00 = *(__shared_weak_count **)(this + 0xb0);
  }
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar5) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar5) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_80 = (WsThreadHelper *)0x0;
  local_80 = operator_new(0x38);
  local_80[0x20] = (WsThreadHelper)(iVar7 != 0);
  *(undefined8 *)(local_80 + 0x28) = uVar3;
  *(__shared_weak_count **)(local_80 + 0x30) = this_00;
  *(undefined ***)local_80 = &PTR_FUN_016f48d8;
  *(WebSocket **)(local_80 + 8) = this;
  *(long **)(local_80 + 0x10) = plVar9;
  *(long *)(local_80 + 0x18) = lVar15 - lVar8;
  WsThreadHelper::sendMessageToCocosThread(local_80,aWStack_a0);
  if (aWStack_a0 == local_80) {
    pcVar11 = *(code **)(*(long *)local_80 + 0x20);
LAB_00e9fe7c:
    (*pcVar11)();
  }
  else if (local_80 != (WsThreadHelper *)0x0) {
    pcVar11 = *(code **)(*(long *)local_80 + 0x28);
    goto LAB_00e9fe7c;
  }
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      lVar8 = *(long *)p_Var1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar5) {
        *(long *)p_Var1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
LAB_00e9feb4:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

