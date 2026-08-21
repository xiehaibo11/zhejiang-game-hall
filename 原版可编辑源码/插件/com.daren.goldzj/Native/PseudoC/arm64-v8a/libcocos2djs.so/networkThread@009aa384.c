
/* cocos2d::network::HttpClient::networkThread() */

void __thiscall cocos2d::network::HttpClient::networkThread(HttpClient *this)

{
  mutex *this_00;
  mutex *this_01;
  mutex *this_02;
  __shared_weak_count *p_Var1;
  int iVar2;
  char cVar3;
  bool bVar4;
  size_t __n;
  long lVar5;
  HttpResponse *this_03;
  __shared_weak_count *this_04;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  Ref *this_05;
  HttpResponse *local_a0;
  code *local_98;
  undefined8 uStack_90;
  HttpClient *local_88;
  HttpResponse **local_80;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  this_00 = (mutex *)(this + 0x68);
  std::__ndk1::mutex::lock(this_00);
  *(int *)(this + 100) = *(int *)(this + 100) + 1;
  std::__ndk1::mutex::unlock(this_00);
                    /* catch() { ... } // from try @ 009aa234 with catch @ 009aa3e8 */
                    /* catch() { ... } // from try @ 009aa228 with catch @ 009aa3ec */
                    /* catch() { ... } // from try @ 009aa208 with catch @ 009aa3f0 */
                    /* catch() { ... } // from try @ 009aa240 with catch @ 009aa400 */
  this_01 = (mutex *)(this + 0xe0);
  this_02 = (mutex *)(this + 0x120);
  do {
    std::__ndk1::mutex::lock(this_01);
    while (puVar9 = *(undefined8 **)(this + 200), puVar9 == *(undefined8 **)(this + 0xd0)) {
      FUN_009aa778(this + 0x1d0,this_01);
    }
    this_05 = (Ref *)*puVar9;
                    /* try { // try from 009aa458 to 00aaa4ab has its CatchHandler @ 009aa458
                       catch() { ... } // from try @ 009aa458 with catch @ 009aa458
                       catch() { ... } // from try @ 009aa610 with catch @ 009aa458 */
    Ref::release(this_05);
    __n = *(long *)(this + 0xd0) - (long)(puVar9 + 1);
    if (__n != 0) {
      memmove(puVar9,puVar9 + 1,__n);
    }
    *(undefined8 **)(this + 0xd0) = puVar9 + ((long)__n >> 3);
    std::__ndk1::mutex::unlock(this_01);
    if (this_05 == *(Ref **)(this + 0x310)) {
      std::__ndk1::mutex::lock(this_01);
      puVar9 = *(undefined8 **)(this + 200);
      if (puVar9 != *(undefined8 **)(this + 0xd0)) {
        do {
          puVar8 = puVar9 + 1;
          Ref::release((Ref *)*puVar9);
          puVar9 = puVar8;
        } while (puVar8 != *(undefined8 **)(this + 0xd0));
        puVar9 = *(undefined8 **)(this + 200);
      }
      *(undefined8 **)(this + 0xd0) = puVar9;
      std::__ndk1::mutex::unlock(this_01);
      std::__ndk1::mutex::lock(this_02);
      puVar9 = *(undefined8 **)(this + 0x108);
      if (puVar9 != *(undefined8 **)(this + 0x110)) {
        do {
          puVar8 = puVar9 + 1;
                    /* try { // try from 009aa610 to 00aaa6f3 has its CatchHandler @ 009aa458 */
          Ref::release((Ref *)*puVar9);
          puVar9 = puVar8;
        } while (puVar8 != *(undefined8 **)(this + 0x110));
        puVar9 = *(undefined8 **)(this + 0x108);
      }
      *(undefined8 **)(this + 0x110) = puVar9;
      std::__ndk1::mutex::unlock(this_02);
      std::__ndk1::mutex::lock(this_00);
      iVar2 = *(int *)(this + 100);
      *(int *)(this + 100) = iVar2 + -1;
      std::__ndk1::mutex::unlock(this_00);
      if (iVar2 + -1 == 0) {
        (**(code **)(*(long *)this + 8))(this);
      }
      if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 009aa4e4 with catch @ 009aa69c */
        __stack_chk_fail();
      }
                    /* catch() { ... } // from try @ 009aa4d8 with catch @ 009aa684 */
                    /* catch() { ... } // from try @ 009aa4cc with catch @ 009aa688 */
                    /* catch() { ... } // from try @ 009aa4ac with catch @ 009aa68c */
      return;
    }
    this_03 = operator_new(0x88,(nothrow_t *)&std::nothrow);
    if (this_03 != (HttpResponse *)0x0) {
                    /* try { // try from 009aa4ac to 00aaa4c3 has its CatchHandler @ 009aa68c */
      HttpResponse::HttpResponse(this_03,(HttpRequest *)this_05);
    }
    processResponse(this,this_03,(char *)(this + 0x210));
                    /* try { // try from 009aa4cc to 00aaa4d7 has its CatchHandler @ 009aa688 */
    std::__ndk1::mutex::lock(this_02);
                    /* try { // try from 009aa4d8 to 00aaa4e3 has its CatchHandler @ 009aa684 */
    local_a0 = this_03;
    if (*(undefined8 **)(this + 0x110) == *(undefined8 **)(this + 0x118)) {
      std::__ndk1::
      vector<cocos2d::network::HttpResponse*,std::__ndk1::allocator<cocos2d::network::HttpResponse*>>
      ::__push_back_slow_path<cocos2d::network::HttpResponse*const&>
                ((vector<cocos2d::network::HttpResponse*,std::__ndk1::allocator<cocos2d::network::HttpResponse*>>
                  *)(this + 0x108),&local_a0);
    }
    else {
      **(undefined8 **)(this + 0x110) = this_03;
                    /* try { // try from 009aa4e4 to 00aaa60f has its CatchHandler @ 009aa69c */
      *(long *)(this + 0x110) = *(long *)(this + 0x110) + 8;
    }
    Ref::retain((Ref *)local_a0);
    std::__ndk1::mutex::unlock(this_02);
    std::__ndk1::mutex::lock((mutex *)(this + 0xa0));
    if ((*(__shared_weak_count **)(this + 0x98) != (__shared_weak_count *)0x0) &&
       (this_04 = (__shared_weak_count *)
                  std::__ndk1::__shared_weak_count::lock(*(__shared_weak_count **)(this + 0x98)),
       this_04 != (__shared_weak_count *)0x0)) {
      if (*(Scheduler **)(this + 0x90) != (Scheduler *)0x0) {
        local_a0 = (HttpResponse *)&PTR_FUN_01c6aa68;
        uStack_90 = 0;
        local_98 = dispatchResponseCallbacks;
        local_88 = this;
        local_80 = &local_a0;
        Scheduler::performFunctionInCocosThread(*(Scheduler **)(this + 0x90),(function *)&local_a0);
        if (&local_a0 == local_80) {
          pcVar6 = *(code **)(*local_80 + 0x20);
        }
        else {
          if (local_80 == (HttpResponse **)0x0) goto LAB_009aa580;
          pcVar6 = *(code **)(*local_80 + 0x28);
        }
        (*pcVar6)();
      }
LAB_009aa580:
      p_Var1 = this_04 + 8;
      do {
        lVar7 = *(long *)p_Var1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar4) {
          *(long *)p_Var1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*(long *)this_04 + 0x10))(this_04);
        std::__ndk1::__shared_weak_count::__release_weak(this_04);
      }
    }
    std::__ndk1::mutex::unlock((mutex *)(this + 0xa0));
  } while( true );
}

