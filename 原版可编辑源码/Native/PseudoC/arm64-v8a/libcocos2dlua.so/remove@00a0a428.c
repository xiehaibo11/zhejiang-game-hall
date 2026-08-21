
/* universe::network::GuoPengFei::remove() */

void __thiscall universe::network::GuoPengFei::remove(GuoPengFei *this)

{
  long lVar1;
  char *pcVar2;
  Service *this_00;
  code *pcVar3;
  undefined **local_70;
  GuoPengFei *pGStack_68;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar2 = (char *)Translated::getInstance();
    Translated::log(pcVar2,"GuoPengFei: delete 19");
    if (this[0x4a0] != (GuoPengFei)0x0) {
      pcVar2 = (char *)Translated::getInstance();
      Translated::log(pcVar2,"GuoPengFei: delete 1");
    }
  }
  if (this[0x10] == (GuoPengFei)0x3) goto LAB_00a0a504;
  pcVar2 = (char *)Translated::getInstance();
  Translated::log(pcVar2,"GuoPengFei: start remove %d",(ulong)*(uint *)(this + 0x45c));
  close(this);
  this[0x10] = (GuoPengFei)0x3;
  local_70 = &PTR_FUN_016a2240;
  pGStack_68 = this;
  local_50 = (long *)&local_70;
  FUN_008820fc(&local_70,this + 0x470);
  if (&local_70 == (undefined ***)local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
LAB_00a0a4f4:
    (*pcVar3)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar3 = *(code **)(*local_50 + 0x28);
    goto LAB_00a0a4f4;
  }
  this_00 = (Service *)core::Service::getInstance();
  core::Service::performInNextLoop(this_00,this + 0x470);
LAB_00a0a504:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

