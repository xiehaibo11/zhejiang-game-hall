
/* cocos2d::NavMeshAgent::create(cocos2d::NavMeshAgentParam const&) */

NavMeshAgent * cocos2d::NavMeshAgent::create(NavMeshAgentParam *param_1)

{
  int iVar1;
  NavMeshAgent *this;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  this = operator_new(0xf0,(nothrow_t *)&std::nothrow);
  if (this != (NavMeshAgent *)0x0) {
    NavMeshAgent(this);
    uVar2 = *(undefined8 *)(param_1 + 0xf);
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x97) = *(undefined8 *)(param_1 + 0x17);
    *(undefined8 *)(this + 0x8f) = uVar2;
    *(undefined8 *)(this + 0x88) = uVar4;
    *(undefined8 *)(this + 0x80) = uVar3;
    if (((DAT_01792db0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01792db0), iVar1 != 0)) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &DAT_01792d98,"___NavMeshAgentComponent___");
      __cxa_atexit(std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   ~basic_string,&DAT_01792d98,&PTR_LOOP_016979c0);
      __cxa_guard_release(&DAT_01792db0);
    }
    (**(code **)(*(long *)this + 0x20))(this,&DAT_01792d98);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

