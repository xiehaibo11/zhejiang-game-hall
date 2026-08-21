
/* cocos2d::network::HttpClient::networkThread() */

void __thiscall cocos2d::network::HttpClient::networkThread(HttpClient *this)

{
  mutex *this_00;
  mutex *this_01;
  mutex *this_02;
  undefined8 *puVar1;
  int iVar2;
  size_t __n;
  long lVar3;
  HttpResponse *this_03;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  Ref *this_04;
  HttpResponse *local_a8;
  undefined **local_a0;
  code *local_98;
  undefined8 uStack_90;
  HttpClient *local_88;
  undefined ***local_80;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  this_00 = (mutex *)(this + 0x68);
  std::__ndk1::mutex::lock(this_00);
  *(int *)(this + 100) = *(int *)(this + 100) + 1;
  std::__ndk1::mutex::unlock(this_00);
  this_01 = (mutex *)(this + 0xd8);
  this_02 = (mutex *)(this + 0x118);
  do {
    std::__ndk1::mutex::lock(this_01);
    while (puVar6 = *(undefined8 **)(this + 0xc0), puVar6 == *(undefined8 **)(this + 200)) {
      FUN_00e995f0(this + 0x1c8,this_01);
    }
    this_04 = (Ref *)*puVar6;
    Ref::release(this_04);
    __n = *(long *)(this + 200) - (long)(puVar6 + 1);
    if (__n != 0) {
      memmove(puVar6,puVar6 + 1,__n);
    }
    *(undefined8 **)(this + 200) = puVar6 + ((long)__n >> 3);
    std::__ndk1::mutex::unlock(this_01);
    if (this_04 == *(Ref **)(this + 0x308)) {
      std::__ndk1::mutex::lock(this_01);
      puVar6 = *(undefined8 **)(this + 0xc0);
      puVar1 = *(undefined8 **)(this + 200);
      if (puVar6 != puVar1) {
        do {
          puVar5 = puVar6 + 1;
          Ref::release((Ref *)*puVar6);
          puVar6 = puVar5;
        } while (puVar1 != puVar5);
        puVar6 = *(undefined8 **)(this + 0xc0);
      }
      *(undefined8 **)(this + 200) = puVar6;
      std::__ndk1::mutex::unlock(this_01);
      std::__ndk1::mutex::lock(this_02);
      puVar6 = *(undefined8 **)(this + 0x100);
      puVar1 = *(undefined8 **)(this + 0x108);
      if (puVar6 != puVar1) {
        do {
          puVar5 = puVar6 + 1;
          Ref::release((Ref *)*puVar6);
          puVar6 = puVar5;
        } while (puVar1 != puVar5);
        puVar6 = *(undefined8 **)(this + 0x100);
      }
      *(undefined8 **)(this + 0x108) = puVar6;
      std::__ndk1::mutex::unlock(this_02);
      std::__ndk1::mutex::lock(this_00);
      iVar2 = *(int *)(this + 100);
      *(int *)(this + 100) = iVar2 + -1;
      std::__ndk1::mutex::unlock(this_00);
      if (iVar2 + -1 == 0) {
        (**(code **)(*(long *)this + 8))(this);
      }
      if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    this_03 = operator_new(0xa0,(nothrow_t *)&std::nothrow);
    if (this_03 != (HttpResponse *)0x0) {
      HttpResponse::HttpResponse(this_03,(HttpRequest *)this_04);
    }
    processResponse(this,this_03,(char *)(this + 0x208));
    std::__ndk1::mutex::lock(this_02);
    puVar6 = *(undefined8 **)(this + 0x108);
    local_a8 = this_03;
    if (puVar6 == *(undefined8 **)(this + 0x110)) {
      std::__ndk1::
      vector<cocos2d::network::HttpResponse*,std::__ndk1::allocator<cocos2d::network::HttpResponse*>>
      ::__push_back_slow_path<cocos2d::network::HttpResponse*const&>
                ((vector<cocos2d::network::HttpResponse*,std::__ndk1::allocator<cocos2d::network::HttpResponse*>>
                  *)(this + 0x100),&local_a8);
    }
    else {
      *puVar6 = this_03;
      *(undefined8 **)(this + 0x108) = puVar6 + 1;
    }
    Ref::retain((Ref *)local_a8);
    std::__ndk1::mutex::unlock(this_02);
    std::__ndk1::mutex::lock((mutex *)(this + 0x98));
    if (*(Scheduler **)(this + 0x90) != (Scheduler *)0x0) {
      uStack_90 = 0;
      local_98 = dispatchResponseCallbacks;
      local_a0 = &PTR_FUN_016f46b0;
      local_88 = this;
      local_80 = &local_a0;
      Scheduler::performFunctionInCocosThread(*(Scheduler **)(this + 0x90),&local_a0);
      if (&local_a0 == local_80) {
        pcVar4 = (code *)(*local_80)[4];
      }
      else {
        if (local_80 == (undefined ***)0x0) goto LAB_00e99334;
        pcVar4 = (code *)(*local_80)[5];
      }
      (*pcVar4)();
    }
LAB_00e99334:
    std::__ndk1::mutex::unlock((mutex *)(this + 0x98));
  } while( true );
}

