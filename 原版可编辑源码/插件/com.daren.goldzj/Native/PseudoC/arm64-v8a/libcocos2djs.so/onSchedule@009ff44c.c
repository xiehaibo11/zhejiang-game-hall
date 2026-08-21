
/* universe::core::FlagsTask::onSchedule() */

undefined8 __thiscall universe::core::FlagsTask::onSchedule(FlagsTask *this)

{
  mutex *this_00;
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  Flags *this_01;
  Flags *local_50;
  undefined1 *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_01 = *(Flags **)(this + 0x20);
  if (this_01 != (Flags *)0x0) {
    this_00 = (mutex *)(this_01 + 0x68);
                    /* try { // try from 009ff478 to 00aff47b has its CatchHandler @ 009ff48c */
                    /* try { // try from 009ff47c to 00aff49f has its CatchHandler @ 009ff444 */
    std::__ndk1::mutex::lock(this_00);
    if ((this_01[0x60] == (Flags)0x0) && (*(int *)(this_01 + 100) != 0)) {
      this_01[0x60] = (Flags)0x1;
      *(undefined4 *)(this_01 + 100) = 0;
      std::__ndk1::mutex::unlock(this_00);
      local_50 = this_01;
      puVar3 = (undefined8 *)
               __emutls_get_address(__emutls_v__ZN8universe4core10SurroundedINS0_5FlagsEhE4_topE);
      local_40 = *puVar3;
      *puVar3 = &local_50;
      local_48 = (undefined1 *)&local_50;
      Flags::run(this_01);
      uVar2 = local_40;
      puVar3 = (undefined8 *)
               __emutls_get_address(__emutls_v__ZN8universe4core10SurroundedINS0_5FlagsEhE4_topE);
      *puVar3 = uVar2;
    }
    else {
                    /* catch() { ... } // from try @ 009ff478 with catch @ 009ff48c */
      std::__ndk1::mutex::unlock(this_00);
    }
    *(undefined8 *)(this + 0x20) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

