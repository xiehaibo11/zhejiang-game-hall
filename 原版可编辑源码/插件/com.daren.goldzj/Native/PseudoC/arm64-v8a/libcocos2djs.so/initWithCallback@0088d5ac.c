
/* cocos2d::TimerTargetCallback::initWithCallback(cocos2d::Scheduler*, std::__ndk1::function<void
   (float)> const&, void*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, float, unsigned int, float) */

undefined8 __thiscall
cocos2d::TimerTargetCallback::initWithCallback
          (TimerTargetCallback *this,Scheduler *param_1,function *param_2,void *param_3,
          basic_string *param_4,float param_5,uint param_6,float param_7)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  local_70 = alStack_90;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *(Scheduler **)(this + 0x10) = param_1;
  *(void **)(this + 0x30) = param_3;
  plVar4 = *(long **)(param_2 + 0x20);
  if (plVar4 == (long *)0x0) {
    local_70 = (long *)0x0;
  }
  else if ((long *)param_2 == plVar4) {
    (**(code **)(*plVar4 + 0x18))(plVar4,alStack_90);
  }
  else {
    local_70 = (long *)(**(code **)(*plVar4 + 0x10))();
  }
  FUN_0088f6a0(alStack_90,this + 0x40);
  if (alStack_90 == local_70) {
    pcVar5 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_0088d66c;
    pcVar5 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar5)();
LAB_0088d66c:
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x70) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_4) {
    uVar1 = *(ulong *)(param_4 + 8);
    pbVar2 = *(basic_string **)(param_4 + 0x10);
    if (((byte)*param_4 & 1) == 0) {
      pbVar2 = param_4 + 1;
      uVar1 = (ulong)((byte)*param_4 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x70),(char *)pbVar2,uVar1);
  }
  *(undefined4 *)(this + 0x18) = 0xbf800000;
  this[0x1d] = (TimerTargetCallback)(0.0 < param_7);
  *(float *)(this + 0x28) = param_7;
  *(float *)(this + 0x2c) = param_5;
  *(uint *)(this + 0x24) = param_6;
  this[0x1c] = (TimerTargetCallback)(param_6 == 0xfffffffe);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

