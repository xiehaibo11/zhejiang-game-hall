
/* cocos2d::extension::EventListenerAssetsManagerEx::init(cocos2d::extension::AssetsManagerEx
   const*, std::__ndk1::function<void (cocos2d::extension::EventAssetsManagerEx*)> const&) */

uint __thiscall
cocos2d::extension::EventListenerAssetsManagerEx::init
          (EventListenerAssetsManagerEx *this,AssetsManagerEx *param_1,function *param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  code *pcVar4;
  basic_string local_a0 [16];
  void *local_90;
  basic_string local_88 [16];
  void *local_78;
  undefined **local_70;
  EventListenerAssetsManagerEx *pEStack_68;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(AssetsManagerEx **)(this + 0x100) = param_1;
  plVar3 = *(long **)(param_2 + 0x20);
  if (plVar3 == (long *)0x0) {
    local_50 = (undefined ***)0x0;
  }
  else if ((long *)param_2 == plVar3) {
    local_50 = &local_70;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_70);
  }
  else {
    local_50 = (undefined ***)(**(code **)(*plVar3 + 0x10))();
  }
  FUN_00e087b0(&local_70,this + 0xd0);
  if (&local_70 == local_50) {
    pcVar4 = (code *)(*local_50)[4];
LAB_00e08448:
    (*pcVar4)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar4 = (code *)(*local_50)[5];
    goto LAB_00e08448;
  }
  StringUtils::format("%p",local_88,param_1);
  std::__ndk1::operator+((__ndk1 *)LISTENER_ID,local_88,(basic_string *)param_2);
  local_70 = &PTR_FUN_016e8300;
  pEStack_68 = this;
  local_50 = &local_70;
  uVar2 = EventListenerCustom::init((EventListenerCustom *)this,local_a0,(function *)&local_70);
  if (&local_70 == local_50) {
    pcVar4 = (code *)(*local_50)[4];
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_00e084c4;
    pcVar4 = (code *)(*local_50)[5];
  }
  (*pcVar4)();
LAB_00e084c4:
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

