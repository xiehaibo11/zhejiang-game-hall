
/* cocos2d::Director::init() */

undefined8 __thiscall cocos2d::Director::init(Director *this)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  Console *this_00;
  Scheduler *this_01;
  ActionManager *this_02;
  EventDispatcher *this_03;
  EventCustom *pEVar4;
  TextureCache *this_04;
  Renderer *this_05;
  code *pcVar5;
  void *pvVar6;
  long lVar7;
  undefined **local_90;
  ActionManager *pAStack_88;
  void *local_80;
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  setDefaultValues(this);
  pvVar6 = *(void **)(this + 0x170);
  if ((ulong)(*(long *)(this + 0x180) - (long)pvVar6 >> 3) < 0xf) {
    lVar7 = *(long *)(this + 0x178) - (long)pvVar6;
    pvVar2 = operator_new(0x78);
    if (0 < lVar7) {
      __memcpy_chk(pvVar2,pvVar6,lVar7,0x78);
      pvVar6 = *(void **)(this + 0x170);
    }
    *(void **)(this + 0x170) = pvVar2;
    *(long *)(this + 0x178) = (long)pvVar2 + lVar7;
    *(long *)(this + 0x180) = (long)pvVar2 + 0x78;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
  }
  uVar3 = std::__ndk1::chrono::steady_clock::now();
  *(undefined8 *)(this + 0x188) = uVar3;
  this_00 = operator_new(0x168,(nothrow_t *)&std::nothrow);
  if (this_00 != (Console *)0x0) {
    Console::Console(this_00);
  }
  *(Console **)(this + 0x1b8) = this_00;
  this_01 = operator_new(0xd0,(nothrow_t *)&std::nothrow);
  if (this_01 != (Scheduler *)0x0) {
    Scheduler::Scheduler(this_01);
  }
  *(Scheduler **)(this + 0xa0) = this_01;
  this_02 = operator_new(0x40,(nothrow_t *)&std::nothrow);
  if (this_02 == (ActionManager *)0x0) {
    pAStack_88 = (ActionManager *)0x0;
  }
  else {
    ActionManager::ActionManager(this_02);
    this_01 = *(Scheduler **)(this + 0xa0);
    pAStack_88 = this_02;
  }
  *(ActionManager **)(this + 0xa8) = this_02;
  local_90 = &PTR_FUN_01722d30;
  local_70 = (long *)&local_90;
  Scheduler::schedulePerFrame(this_01,(function *)&local_90,this_02,-0x80000000,false);
  if (&local_90 == (undefined ***)local_70) {
    pcVar5 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_00f96d78;
    pcVar5 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar5)();
LAB_00f96d78:
  this_03 = operator_new(0x160,(nothrow_t *)&std::nothrow);
  if (this_03 != (EventDispatcher *)0x0) {
    EventDispatcher::EventDispatcher(this_03);
  }
  *(EventDispatcher **)(this + 0xb0) = this_03;
  pEVar4 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_90,EVENT_BEFORE_SET_NEXT_SCENE);
  EventCustom::EventCustom(pEVar4,(basic_string *)&local_90);
  *(EventCustom **)(this + 0xf0) = pEVar4;
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
    pEVar4 = *(EventCustom **)(this + 0xf0);
  }
  *(Director **)(pEVar4 + 0x38) = this;
  pEVar4 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_90,EVENT_AFTER_SET_NEXT_SCENE);
  EventCustom::EventCustom(pEVar4,(basic_string *)&local_90);
  *(EventCustom **)(this + 0xf8) = pEVar4;
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
    pEVar4 = *(EventCustom **)(this + 0xf8);
  }
  *(Director **)(pEVar4 + 0x38) = this;
  pEVar4 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_90,EVENT_AFTER_DRAW);
  EventCustom::EventCustom(pEVar4,(basic_string *)&local_90);
  *(EventCustom **)(this + 200) = pEVar4;
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
    pEVar4 = *(EventCustom **)(this + 200);
  }
  *(Director **)(pEVar4 + 0x38) = this;
  pEVar4 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_90,EVENT_BEFORE_DRAW);
  EventCustom::EventCustom(pEVar4,(basic_string *)&local_90);
  *(EventCustom **)(this + 0xc0) = pEVar4;
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
    pEVar4 = *(EventCustom **)(this + 0xc0);
  }
  *(Director **)(pEVar4 + 0x38) = this;
  pEVar4 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_90,EVENT_AFTER_VISIT);
  EventCustom::EventCustom(pEVar4,(basic_string *)&local_90);
  *(EventCustom **)(this + 0xd0) = pEVar4;
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
    pEVar4 = *(EventCustom **)(this + 0xd0);
  }
  *(Director **)(pEVar4 + 0x38) = this;
  pEVar4 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_90,EVENT_BEFORE_UPDATE);
  EventCustom::EventCustom(pEVar4,(basic_string *)&local_90);
  *(EventCustom **)(this + 0xd8) = pEVar4;
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
    pEVar4 = *(EventCustom **)(this + 0xd8);
  }
  *(Director **)(pEVar4 + 0x38) = this;
  pEVar4 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_90,EVENT_AFTER_UPDATE);
  EventCustom::EventCustom(pEVar4,(basic_string *)&local_90);
  *(EventCustom **)(this + 0xe0) = pEVar4;
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
    pEVar4 = *(EventCustom **)(this + 0xe0);
  }
  *(Director **)(pEVar4 + 0x38) = this;
  pEVar4 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_90,EVENT_PROJECTION_CHANGED);
  EventCustom::EventCustom(pEVar4,(basic_string *)&local_90);
  *(EventCustom **)(this + 0xb8) = pEVar4;
  if (((ulong)local_90 & 1) != 0) {
    operator_delete(local_80);
    pEVar4 = *(EventCustom **)(this + 0xb8);
  }
  *(Director **)(pEVar4 + 0x38) = this;
  pEVar4 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (pEVar4 == (EventCustom *)0x0) {
    *(undefined8 *)(this + 0xe8) = 0;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_90,EVENT_RESET);
    EventCustom::EventCustom(pEVar4,(basic_string *)&local_90);
    *(EventCustom **)(this + 0xe8) = pEVar4;
    if (((ulong)local_90 & 1) != 0) {
      operator_delete(local_80);
    }
  }
  this_04 = operator_new(0x170,(nothrow_t *)&std::nothrow);
  if (this_04 != (TextureCache *)0x0) {
    TextureCache::TextureCache(this_04);
  }
  *(TextureCache **)(this + 0x110) = this_04;
  initMatrixStack(this);
  this_05 = operator_new(0x1b00c8,(nothrow_t *)&std::nothrow);
  if (this_05 != (Renderer *)0x0) {
    Renderer::Renderer(this_05);
  }
  *(Renderer **)(this + 0x1b0) = this_05;
  RenderState::initialize();
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

