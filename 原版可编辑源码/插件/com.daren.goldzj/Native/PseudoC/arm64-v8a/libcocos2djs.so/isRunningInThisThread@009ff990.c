
/* universe::core::Flags::isRunningInThisThread() */

bool __thiscall universe::core::Flags::isRunningInThisThread(Flags *this)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (long *)__emutls_get_address
                             (__emutls_v__ZN8universe4core10SurroundedINS0_5FlagsEhE4_topE);
  puVar2 = (undefined8 *)*plVar1;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return false;
    }
    if ((Flags *)*puVar2 == this) break;
    puVar2 = (undefined8 *)puVar2[2];
  }
  return puVar2[1] != 0;
}

