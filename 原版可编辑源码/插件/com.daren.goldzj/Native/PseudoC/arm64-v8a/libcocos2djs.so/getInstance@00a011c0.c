
/* universe::Downloader2::getInstance() */

void universe::Downloader2::getInstance(void)

{
  long lVar1;
  Downloader2 *this;
  Service *this_00;
  code *pcVar2;
  undefined **local_70;
  code *local_68;
  undefined8 uStack_60;
  Downloader2 *local_58;
  long *local_50;
  long local_38;
  
                    /* try { // try from 00a011c4 to 00b01267 has its CatchHandler @ 00a014f0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (DAT_01d38a58 == (Downloader2 *)0x0) {
    this = operator_new(0x1d8,(nothrow_t *)&std::nothrow);
    if (this != (Downloader2 *)0x0) {
      Downloader2(this);
    }
    DAT_01d38a58 = this;
    this_00 = (Service *)core::Service::getInstance();
    local_70 = &PTR_FUN_01c6c908;
    uStack_60 = 0;
    local_68 = tick;
    local_58 = DAT_01d38a58;
    local_50 = (long *)&local_70;
    core::Service::addTickFunction(this_00,(function *)&local_70);
    if (&local_70 == (undefined ***)local_50) {
                    /* try { // try from 00a01268 to 00b013e7 has its CatchHandler @ 00a00ff8 */
      pcVar2 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_00a01278;
      pcVar2 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar2)();
  }
LAB_00a01278:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(DAT_01d38a58);
  }
  return;
}

