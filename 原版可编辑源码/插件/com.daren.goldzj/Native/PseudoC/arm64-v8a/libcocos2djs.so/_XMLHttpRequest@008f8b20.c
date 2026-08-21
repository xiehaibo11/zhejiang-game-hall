
/* XMLHttpRequest::~XMLHttpRequest() */

void __thiscall XMLHttpRequest::~XMLHttpRequest(XMLHttpRequest *this)

{
  __shared_weak_count *p_Var1;
  XMLHttpRequest XVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  Scheduler *this_00;
  __shared_weak_count *this_01;
  XMLHttpRequest *pXVar7;
  code *pcVar8;
  long lVar9;
  void *pvVar10;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  *(undefined ***)this = &PTR__XMLHttpRequest_01c68308;
  this_01 = DAT_01d35b10;
  this_00 = cocos2d::Application::_scheduler;
  if (DAT_01d35b10 != (__shared_weak_count *)0x0) {
    p_Var1 = DAT_01d35b10 + 8;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = *(long *)p_Var1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  cocos2d::Scheduler::unscheduleAllForTarget(this_00,this);
  if (this_01 != (__shared_weak_count *)0x0) {
    p_Var1 = this_01 + 8;
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
      (**(code **)(*(long *)this_01 + 0x10))(this_01);
      std::__ndk1::__shared_weak_count::__release_weak(this_01);
    }
  }
  local_50 = (long *)0x0;
  FUN_008fe56c(alStack_70,*(long *)(this + 0x250) + 0x60);
  if (alStack_70 == local_50) {
    pcVar8 = *(code **)(*local_50 + 0x20);
LAB_008f8bf0:
    (*pcVar8)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar8 = *(code **)(*local_50 + 0x28);
    goto LAB_008f8bf0;
  }
  if (*(Ref **)(this + 0x250) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x250));
  }
  cocos2d::Data::~Data((Data *)(this + 0x240));
  if (((byte)this[0x228] & 1) == 0) {
    if (((byte)this[0x210] & 1) != 0) goto LAB_008f8d00;
LAB_008f8c18:
    if (((byte)this[0x1f8] & 1) != 0) goto LAB_008f8d10;
LAB_008f8c20:
    if (((byte)this[0x1e0] & 1) != 0) goto LAB_008f8d20;
LAB_008f8c28:
    if (((byte)this[0x1c8] & 1) != 0) goto LAB_008f8d30;
LAB_008f8c30:
    XVar2 = this[0x1b0];
  }
  else {
    operator_delete(*(void **)(this + 0x238));
    if (((byte)this[0x210] & 1) == 0) goto LAB_008f8c18;
LAB_008f8d00:
    operator_delete(*(void **)(this + 0x220));
    if (((byte)this[0x1f8] & 1) == 0) goto LAB_008f8c20;
LAB_008f8d10:
    operator_delete(*(void **)(this + 0x208));
    if (((byte)this[0x1e0] & 1) == 0) goto LAB_008f8c28;
LAB_008f8d20:
    operator_delete(*(void **)(this + 0x1f0));
    if (((byte)this[0x1c8] & 1) == 0) goto LAB_008f8c30;
LAB_008f8d30:
    operator_delete(*(void **)(this + 0x1d8));
    XVar2 = this[0x1b0];
  }
  if (((byte)XVar2 & 1) == 0) {
    puVar6 = *(void **)(this + 0x198);
  }
  else {
    operator_delete(*(void **)(this + 0x1c0));
    puVar6 = *(void **)(this + 0x198);
  }
  while (puVar6 != (void *)0x0) {
    pvVar10 = (void *)*puVar6;
    if ((*(byte *)(puVar6 + 5) & 1) != 0) {
      operator_delete((void *)puVar6[7]);
    }
    if ((*(byte *)(puVar6 + 2) & 1) != 0) {
      operator_delete((void *)puVar6[4]);
    }
    operator_delete(puVar6);
    puVar6 = pvVar10;
  }
  pvVar10 = *(void **)(this + 0x188);
  *(undefined8 *)(this + 0x188) = 0;
  if (pvVar10 != (void *)0x0) {
    operator_delete(pvVar10);
  }
  puVar6 = *(void **)(this + 0x170);
  while (puVar6 != (void *)0x0) {
    pvVar10 = (void *)*puVar6;
    if ((*(byte *)(puVar6 + 5) & 1) != 0) {
      operator_delete((void *)puVar6[7]);
    }
    if ((*(byte *)(puVar6 + 2) & 1) != 0) {
      operator_delete((void *)puVar6[4]);
    }
    operator_delete(puVar6);
    puVar6 = pvVar10;
  }
  pvVar10 = *(void **)(this + 0x160);
  *(undefined8 *)(this + 0x160) = 0;
  if (pvVar10 != (void *)0x0) {
    operator_delete(pvVar10);
  }
  pXVar7 = *(XMLHttpRequest **)(this + 0x150);
  if (this + 0x130 == pXVar7) {
    pcVar8 = *(code **)(*(long *)pXVar7 + 0x20);
LAB_008f8d5c:
    (*pcVar8)();
  }
  else if (pXVar7 != (XMLHttpRequest *)0x0) {
    pcVar8 = *(code **)(*(long *)pXVar7 + 0x28);
    goto LAB_008f8d5c;
  }
  pXVar7 = *(XMLHttpRequest **)(this + 0x120);
  if (this + 0x100 == pXVar7) {
    pcVar8 = *(code **)(*(long *)pXVar7 + 0x20);
LAB_008f8d88:
    (*pcVar8)();
  }
  else if (pXVar7 != (XMLHttpRequest *)0x0) {
    pcVar8 = *(code **)(*(long *)pXVar7 + 0x28);
    goto LAB_008f8d88;
  }
  pXVar7 = *(XMLHttpRequest **)(this + 0xf0);
  if (this + 0xd0 == pXVar7) {
    pcVar8 = *(code **)(*(long *)pXVar7 + 0x20);
LAB_008f8db4:
    (*pcVar8)();
  }
  else if (pXVar7 != (XMLHttpRequest *)0x0) {
    pcVar8 = *(code **)(*(long *)pXVar7 + 0x28);
    goto LAB_008f8db4;
  }
  pXVar7 = *(XMLHttpRequest **)(this + 0xc0);
  if (this + 0xa0 == pXVar7) {
    pcVar8 = *(code **)(*(long *)pXVar7 + 0x20);
LAB_008f8de0:
    (*pcVar8)();
  }
  else if (pXVar7 != (XMLHttpRequest *)0x0) {
    pcVar8 = *(code **)(*(long *)pXVar7 + 0x28);
    goto LAB_008f8de0;
  }
  pXVar7 = *(XMLHttpRequest **)(this + 0x90);
  if (this + 0x70 == pXVar7) {
    pcVar8 = *(code **)(*(long *)pXVar7 + 0x20);
LAB_008f8e0c:
    (*pcVar8)();
  }
  else if (pXVar7 != (XMLHttpRequest *)0x0) {
    pcVar8 = *(code **)(*(long *)pXVar7 + 0x28);
    goto LAB_008f8e0c;
  }
  pXVar7 = *(XMLHttpRequest **)(this + 0x60);
  if (this + 0x40 == pXVar7) {
    pcVar8 = *(code **)(*(long *)pXVar7 + 0x20);
LAB_008f8e38:
    (*pcVar8)();
  }
  else if (pXVar7 != (XMLHttpRequest *)0x0) {
    pcVar8 = *(code **)(*(long *)pXVar7 + 0x28);
    goto LAB_008f8e38;
  }
  pXVar7 = *(XMLHttpRequest **)(this + 0x30);
  if (this + 0x10 == pXVar7) {
    pcVar8 = *(code **)(*(long *)pXVar7 + 0x20);
  }
  else {
    if (pXVar7 == (XMLHttpRequest *)0x0) goto LAB_008f8e68;
    pcVar8 = *(code **)(*(long *)pXVar7 + 0x28);
  }
  (*pcVar8)();
LAB_008f8e68:
  cocos2d::Ref::~Ref((Ref *)this);
  if (*(long *)(lVar5 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

