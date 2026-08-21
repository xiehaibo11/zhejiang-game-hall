
/* cocos2d::PhysicsContact::construct(cocos2d::PhysicsShape*, cocos2d::PhysicsShape*) */

EventCustom * cocos2d::PhysicsContact::construct(PhysicsShape *param_1,PhysicsShape *param_2)

{
  long lVar1;
  EventCustom *this;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x98,(nothrow_t *)&std::nothrow);
  if (this != (EventCustom *)0x0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,PHYSICSCONTACT_EVENT_NAME);
    EventCustom::EventCustom(this,(basic_string *)local_50);
    if (((byte)local_50[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 01001ac8 with catch @ 01001bfc */
      operator_delete(local_40);
    }
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined2 *)(this + 0x74) = 0x101;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined ***)this = &PTR__PhysicsContact_01724ea8;
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    if ((param_1 == (PhysicsShape *)0x0) || (param_2 == (PhysicsShape *)0x0)) {
      (**(code **)(*(long *)this + 8))(this);
      this = (EventCustom *)0x0;
    }
    else {
      *(PhysicsShape **)(this + 0x60) = param_1;
      *(PhysicsShape **)(this + 0x68) = param_2;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

