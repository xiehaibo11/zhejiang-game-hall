
/* cocos2d::Console::listenOnFileDescriptor(int) */

void __thiscall cocos2d::Console::listenOnFileDescriptor(Console *this,int param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *local_50;
  undefined8 uStack_48;
  Console *local_40;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[0xd0] == (Console)0x0) {
    *(int *)(this + 0x24) = param_1;
    uStack_48 = 0;
    local_50 = loop;
    local_40 = this;
    FUN_00f9113c(&local_30,&local_50);
    if (*(long *)(this + 0x48) != 0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    *(undefined8 *)(this + 0x48) = local_30;
    local_30 = 0;
    std::__ndk1::thread::~thread((thread *)&local_30);
    uVar2 = 1;
  }
  else {
    cocos2d::log("Console already started. \'stop\' it before calling \'listen\' again");
    uVar2 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

