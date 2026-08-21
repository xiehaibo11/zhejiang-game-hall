
/* cocos2d::NavMeshAgent::initWith(cocos2d::NavMeshAgentParam const&) */

undefined8 __thiscall cocos2d::NavMeshAgent::initWith(NavMeshAgent *this,NavMeshAgentParam *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
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
                    /* catch() { ... } // from try @ 0101c618 with catch @ 0101c680 */
  (**(code **)(*(long *)this + 0x20))(this,&DAT_01792d98);
  return 1;
}

