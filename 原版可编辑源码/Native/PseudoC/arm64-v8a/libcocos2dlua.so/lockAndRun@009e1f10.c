
/* universe::core::Flags::lockAndRun() */

void __thiscall universe::core::Flags::lockAndRun(Flags *this)

{
  mutex *this_00;
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  Flags *local_50;
  undefined1 *local_48;
  undefined8 local_40;
  long local_38;
  
                    /* try { // try from 009e1f18 to 00ae1fa3 has its CatchHandler @ 009e1f18
                       catch() { ... } // from try @ 009e1f18 with catch @ 009e1f18
                       catch() { ... } // from try @ 009e1fec with catch @ 009e1f18
                       catch() { ... } // from try @ 009e2028 with catch @ 009e1f18
                       catch() { ... } // from try @ 009e2050 with catch @ 009e1f18 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = (mutex *)(this + 0x68);
  std::__ndk1::mutex::lock(this_00);
  if ((this[0x60] == (Flags)0x0) && (*(int *)(this + 100) != 0)) {
    this[0x60] = (Flags)0x1;
    *(undefined4 *)(this + 100) = 0;
    std::__ndk1::mutex::unlock(this_00);
    local_50 = this;
    puVar3 = (undefined8 *)
             __emutls_get_address(__emutls_v__ZN8universe4core10SurroundedINS0_5FlagsEhE4_topE);
    local_40 = *puVar3;
    *puVar3 = &local_50;
    local_48 = (undefined1 *)&local_50;
    run(this);
    uVar2 = local_40;
                    /* try { // try from 009e1fa4 to 00ae1fbb has its CatchHandler @ 009e2094 */
    puVar3 = (undefined8 *)
             __emutls_get_address(__emutls_v__ZN8universe4core10SurroundedINS0_5FlagsEhE4_topE);
    *puVar3 = uVar2;
  }
  else {
    std::__ndk1::mutex::unlock(this_00);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 009e1fc0 to 00ae1feb has its CatchHandler @ 009e2090 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

