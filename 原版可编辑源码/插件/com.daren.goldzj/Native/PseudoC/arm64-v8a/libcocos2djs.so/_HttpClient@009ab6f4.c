
/* cocos2d::network::HttpClient::~HttpClient() */

void __thiscall cocos2d::network::HttpClient::~HttpClient(HttpClient *this)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this_00;
  undefined8 *puVar5;
  
  *(undefined ***)this = &PTR__HttpClient_01c6a9b0;
  if (*(Ref **)(this + 0x310) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x310));
  }
  this_00 = *(__shared_weak_count **)(this + 0x208);
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      lVar4 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
                    /* try { // try from 009ab73c to 00aab753 has its CatchHandler @ 009ab924 */
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      std::__ndk1::__shared_weak_count::__release_weak(this_00);
    }
  }
                    /* try { // try from 009ab75c to 00aab767 has its CatchHandler @ 009ab920 */
  std::__ndk1::condition_variable::~condition_variable((condition_variable *)(this + 0x1d0));
                    /* try { // try from 009ab768 to 00aab773 has its CatchHandler @ 009ab91c */
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x1a0));
  if (((byte)this[0x188] & 1) != 0) {
                    /* try { // try from 009ab774 to 00aab8a7 has its CatchHandler @ 009ab934 */
    operator_delete(*(void **)(this + 0x198));
  }
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x160));
  if (((byte)this[0x148] & 1) != 0) {
    operator_delete(*(void **)(this + 0x158));
  }
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x120));
  puVar5 = *(undefined8 **)(this + 0x108);
  if (puVar5 != *(undefined8 **)(this + 0x110)) {
    do {
      Ref::release((Ref *)*puVar5);
      puVar5 = puVar5 + 1;
    } while (puVar5 != *(undefined8 **)(this + 0x110));
    puVar5 = *(undefined8 **)(this + 0x108);
  }
  *(undefined8 **)(this + 0x110) = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x110) = puVar5;
    operator_delete(puVar5);
  }
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xe0));
  puVar5 = *(undefined8 **)(this + 200);
  if (puVar5 != *(undefined8 **)(this + 0xd0)) {
    do {
      Ref::release((Ref *)*puVar5);
      puVar5 = puVar5 + 1;
    } while (puVar5 != *(undefined8 **)(this + 0xd0));
    puVar5 = *(undefined8 **)(this + 200);
  }
  *(undefined8 **)(this + 0xd0) = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0xd0) = puVar5;
    operator_delete(puVar5);
  }
  std::__ndk1::mutex::~mutex((mutex *)(this + 0xa0));
  if (*(__shared_weak_count **)(this + 0x98) != (__shared_weak_count *)0x0) {
    std::__ndk1::__shared_weak_count::__release_weak(*(__shared_weak_count **)(this + 0x98));
  }
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x68));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x3c));
  std::__ndk1::mutex::~mutex((mutex *)(this + 0x10));
  return;
}

