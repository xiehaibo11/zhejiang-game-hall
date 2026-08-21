
/* universe::HeBaiChuan::HeBaiChuan() */

void __thiscall universe::HeBaiChuan::HeBaiChuan(HeBaiChuan *this)

{
  long lVar1;
  code *pcVar2;
  undefined **local_70;
  code *local_68;
  undefined8 uStack_60;
  HeBaiChuan *local_58;
  long *local_50;
  long local_38;
  
  local_50 = (long *)&local_70;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00a0d0c4 with catch @ 00a0d168 */
  *(undefined ***)this = &PTR__HeBaiChuan_016a22c0;
  *(undefined8 *)(this + 8) = 0;
  local_70 = &PTR_FUN_016a22f8;
  *(undefined8 *)(this + 0x30) = 0;
  uStack_60 = 0;
  local_68 = onNetStateChange;
  local_58 = this;
  Device::setNetStateChangeCallback((function *)&local_70);
                    /* catch() { ... } // from try @ 00a0d0ac with catch @ 00a0d1b0 */
  if (&local_70 == (undefined ***)local_50) {
                    /* catch() { ... } // from try @ 00a0d054 with catch @ 00a0d1c4 */
    pcVar2 = *(code **)(*local_50 + 0x20);
  }
  else {
                    /* catch() { ... } // from try @ 00a0d038 with catch @ 00a0d1b4 */
    if (local_50 == (long *)0x0) goto LAB_00a0d1d0;
    pcVar2 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar2)();
LAB_00a0d1d0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

