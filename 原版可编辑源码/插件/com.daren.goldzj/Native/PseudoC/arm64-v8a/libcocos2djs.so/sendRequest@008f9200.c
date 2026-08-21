
/* XMLHttpRequest::sendRequest() */

void __thiscall XMLHttpRequest::sendRequest(XMLHttpRequest *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  Scheduler *this_00;
  __shared_weak_count *this_01;
  HttpClient *this_02;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  basic_string local_a0;
  undefined6 uStack_9f;
  undefined1 uStack_99;
  undefined1 uStack_98;
  undefined6 uStack_97;
  undefined1 uStack_91;
  void *pvStack_90;
  XMLHttpRequest *local_88;
  long *local_80;
  undefined **local_70;
  XMLHttpRequest *local_68;
  undefined8 uStack_60;
  XMLHttpRequest *local_58;
  undefined ***local_50;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (this[0x26b] != (XMLHttpRequest)0x0) goto LAB_008f9414;
  uVar5 = *(ulong *)(this + 600);
  *(undefined2 *)(this + 0x26a) = 0x100;
  this_01 = DAT_01d35b10;
  this_00 = cocos2d::Application::_scheduler;
  if (uVar5 != 0) {
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
      uVar5 = *(ulong *)(this + 600);
    }
    local_50 = &local_70;
    local_70 = &PTR_FUN_01c687b0;
    local_a0 = (basic_string)0x1c;
    pvStack_90 = (void *)0x0;
    uStack_97 = 0x747365757165;
    uStack_9f = 0x7474484c4d58;
    uStack_99 = 0x70;
    uStack_98 = 0x52;
    uStack_91 = 0;
    local_68 = this;
    cocos2d::Scheduler::schedule
              (this_00,(function *)&local_70,this,(float)uVar5 / 1000.0,0,0.0,false,&local_a0);
    if (((byte)local_a0 & 1) != 0) {
      operator_delete(pvStack_90);
    }
    if (&local_70 == local_50) {
      pcVar6 = (code *)(*local_50)[4];
LAB_008f9304:
      (*pcVar6)();
    }
    else if (local_50 != (undefined ***)0x0) {
      pcVar6 = (code *)(*local_50)[5];
      goto LAB_008f9304;
    }
    if (this_01 != (__shared_weak_count *)0x0) {
      p_Var1 = this_01 + 8;
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
        (**(code **)(*(long *)this_01 + 0x10))(this_01);
        std::__ndk1::__shared_weak_count::__release_weak(this_01);
      }
    }
  }
  setHttpRequestHeader(this);
  pvStack_90 = (void *)0x0;
  uStack_98 = 0xa4;
  uStack_97 = 0x8f9c;
  uStack_91 = 0;
  local_68 = (XMLHttpRequest *)onResponse;
  local_70 = &PTR_FUN_01c68830;
  local_a0 = (basic_string)0x30;
  uStack_9f = 0x1c688;
  uStack_99 = 0;
  uStack_60 = 0;
  local_88 = this;
  local_80 = (long *)&local_a0;
  local_58 = this;
  local_50 = &local_70;
  FUN_008fe56c(&local_70,*(long *)(this + 0x250) + 0x60);
  if (&local_70 == local_50) {
    pcVar6 = (code *)(*local_50)[4];
LAB_008f93bc:
    (*pcVar6)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_50)[5];
    goto LAB_008f93bc;
  }
  if (&local_a0 == (basic_string *)local_80) {
    pcVar6 = *(code **)(*local_80 + 0x20);
LAB_008f93e8:
    (*pcVar6)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar6 = *(code **)(*local_80 + 0x28);
    goto LAB_008f93e8;
  }
  this_02 = (HttpClient *)cocos2d::network::HttpClient::getInstance();
  cocos2d::network::HttpClient::sendImmediate(this_02,*(HttpRequest **)(this + 0x250));
  if (*(long **)(this + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x30) + 0x30))();
  }
  this[0x267] = (XMLHttpRequest)0x1;
LAB_008f9414:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

