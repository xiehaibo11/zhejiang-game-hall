
/* cocos2d::PhysicsContact::PhysicsContact() */

void __thiscall cocos2d::PhysicsContact::PhysicsContact(PhysicsContact *this)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
                    /* try { // try from 010019f8 to 011019fb has its CatchHandler @ 01001a38 */
                    /* try { // try from 010019fc to 01101a4b has its CatchHandler @ 010019c8 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_40,PHYSICSCONTACT_EVENT_NAME);
  EventCustom::EventCustom((EventCustom *)this,(basic_string *)local_40);
  if (((byte)local_40[0] & 1) != 0) {
                    /* catch() { ... } // from try @ 010019f8 with catch @ 01001a38 */
    operator_delete(local_30);
  }
  *(undefined2 *)(this + 0x74) = 0x101;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined ***)this = &PTR__PhysicsContact_01724ea8;
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 01001ad4 with catch @ 01001a7c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

