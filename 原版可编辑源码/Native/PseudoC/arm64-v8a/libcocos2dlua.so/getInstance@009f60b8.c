
/* universe::network::Network::getInstance() */

void universe::network::Network::getInstance(void)

{
  long lVar1;
  Service *this;
  code *pcVar2;
  undefined **local_70;
  code *local_68;
  undefined8 uStack_60;
  void *local_58;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (DAT_01782318 == (void *)0x0) {
    DAT_01782318 = operator_new(1,(nothrow_t *)&std::nothrow);
    this = (Service *)core::Service::getInstance();
    local_70 = &PTR_FUN_016a1370;
    uStack_60 = 0;
    local_68 = tick;
    local_58 = DAT_01782318;
    local_50 = (long *)&local_70;
    core::Service::addTickFunction(this,(function *)&local_70);
    if (&local_70 == (undefined ***)local_50) {
      pcVar2 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_009f6160;
      pcVar2 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar2)();
  }
LAB_009f6160:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(DAT_01782318);
  }
  return;
}

