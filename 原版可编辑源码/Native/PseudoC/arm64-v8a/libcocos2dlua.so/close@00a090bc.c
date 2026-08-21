
/* universe::network::GuoPengFei::close() */

void __thiscall universe::network::GuoPengFei::close(GuoPengFei *this)

{
  char *pcVar1;
  
                    /* try { // try from 00a090c0 to 00b090f7 has its CatchHandler @ 00a0917c */
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,"GuoPengFei: delete 18");
  }
  if ((this[0x10] != (GuoPengFei)0x0) && (this[0x10] != (GuoPengFei)0x3)) {
    this[0x10] = (GuoPengFei)0x0;
                    /* try { // try from 00a090f8 to 00b09127 has its CatchHandler @ 00a09070 */
    pcVar1 = (char *)Translated::getInstance();
    Translated::log(pcVar1,"GuoPengFei close %d",(ulong)*(uint *)(this + 0x45c));
    closeServer(this);
    cancelConnectTimer(this);
    stopHeartBeat(this);
                    /* try { // try from 00a09128 to 00b0913b has its CatchHandler @ 00a0917c */
                    /* try { // try from 00a0913c to 00b09197 has its CatchHandler @ 00a09070 */
    if ((this[0x11] == (GuoPengFei)0x0) && (*(long **)(this + 0x70) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00a09150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x70) + 0x30))();
      return;
    }
  }
  return;
}

