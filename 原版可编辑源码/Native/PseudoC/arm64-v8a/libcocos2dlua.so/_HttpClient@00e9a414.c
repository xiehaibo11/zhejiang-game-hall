
/* cocos2d::network::HttpClient::~HttpClient() */

void __thiscall cocos2d::network::HttpClient::~HttpClient(HttpClient *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  HttpClient *pHVar4;
  code *pcVar5;
  long lVar6;
  __shared_weak_count *this_00;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  *(undefined ***)this = &PTR__HttpClient_016f45f8;
  if (*(Ref **)(this + 0x308) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x308));
  }
  pHVar4 = *(HttpClient **)(this + 0x360);
  if (this + 0x340 == pHVar4) {
    pcVar5 = *(code **)(*(long *)pHVar4 + 0x20);
LAB_00e9a46c:
    (*pcVar5)();
  }
  else if (pHVar4 != (HttpClient *)0x0) {
    pcVar5 = *(code **)(*(long *)pHVar4 + 0x28);
    goto LAB_00e9a46c;
  }
  pHVar4 = *(HttpClient **)(this + 0x330);
  if (this + 0x310 == pHVar4) {
    pcVar5 = *(code **)(*(long *)pHVar4 + 0x20);
  }
  else {
    if (pHVar4 == (HttpClient *)0x0) goto LAB_00e9a49c;
    pcVar5 = *(code **)(*(long *)pHVar4 + 0x28);
  }
  (*pcVar5)();
LAB_00e9a49c:
  this_00 = *(__shared_weak_count **)(this + 0x200);
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      lVar6 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(this + 0x1c8));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x198));
  if (((byte)this[0x180] & 1) != 0) {
    operator_delete(*(void **)(this + 400));
  }
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x158));
  if (((byte)this[0x140] & 1) != 0) {
    operator_delete(*(void **)(this + 0x150));
  }
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x118));
  puVar7 = *(undefined8 **)(this + 0x100);
  puVar8 = *(undefined8 **)(this + 0x108);
  if (puVar7 != puVar8) {
    do {
      Ref::release((Ref *)*puVar7);
      puVar7 = puVar7 + 1;
    } while (puVar8 != puVar7);
    puVar7 = *(undefined8 **)(this + 0x100);
  }
  *(undefined8 **)(this + 0x108) = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x108) = puVar7;
    operator_delete(puVar7);
  }
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xd8));
  puVar7 = *(undefined8 **)(this + 0xc0);
  puVar8 = *(undefined8 **)(this + 200);
  if (puVar7 != puVar8) {
    do {
      Ref::release((Ref *)*puVar7);
      puVar7 = puVar7 + 1;
    } while (puVar8 != puVar7);
    puVar7 = *(undefined8 **)(this + 0xc0);
  }
  *(undefined8 **)(this + 200) = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 200) = puVar7;
    operator_delete(puVar7);
  }
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x98));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x68));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x3c));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x10));
  return;
}

