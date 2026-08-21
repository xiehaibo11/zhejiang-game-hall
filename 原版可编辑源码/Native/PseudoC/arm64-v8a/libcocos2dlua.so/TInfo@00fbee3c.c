
/* cocos2d::ObjectFactory::TInfo::TInfo(cocos2d::ObjectFactory::TInfo const&) */

void __thiscall cocos2d::ObjectFactory::TInfo::TInfo(TInfo *this,TInfo *param_1)

{
  ulong uVar1;
  long lVar2;
  TInfo *pTVar3;
  code *pcVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  if (this != param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pTVar3 = *(TInfo **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pTVar3 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)this,
           (char *)pTVar3,uVar1);
  }
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  pTVar3 = *(TInfo **)(param_1 + 0x40);
  if (pTVar3 == (TInfo *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (param_1 + 0x20 == pTVar3) {
    local_50 = alStack_70;
    (**(code **)(*(long *)pTVar3 + 0x18))(pTVar3,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*(long *)pTVar3 + 0x10))();
  }
  FUN_00923624(alStack_70,this + 0x20);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00fbef24;
    pcVar4 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar4)();
LAB_00fbef24:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

