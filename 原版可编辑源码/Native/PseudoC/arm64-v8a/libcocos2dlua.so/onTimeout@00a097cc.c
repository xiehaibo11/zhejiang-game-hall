
/* universe::network::GuoPengFei::onTimeout() */

void __thiscall universe::network::GuoPengFei::onTimeout(GuoPengFei *this)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined1 local_2c [4];
  long local_28;
  
                    /* try { // try from 00a097d8 to 00b09827 has its CatchHandler @ 00a097d8
                       catch() { ... } // from try @ 00a097d8 with catch @ 00a097d8
                       catch() { ... } // from try @ 00a09864 with catch @ 00a097d8
                       catch() { ... } // from try @ 00a098ac with catch @ 00a097d8 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar2 = (char *)Translated::getInstance();
    Translated::log(pcVar2,"GuoPengFei: delete 8");
  }
  if (this[0x10] == (GuoPengFei)0x1) {
    *(undefined2 *)(this + 0x10) = 0x100;
    pcVar2 = (char *)Translated::getInstance();
                    /* try { // try from 00a09828 to 00b0983f has its CatchHandler @ 00a098f0 */
    Translated::log(pcVar2,"GuoPengFei: timeout %d",(ulong)*(uint *)(this + 0x45c));
    if (*(undefined8 **)(this + 0x2b0) != (undefined8 *)0x0) {
      **(undefined8 **)(this + 0x2b0) = 0;
      *(undefined8 *)(this + 0x2b0) = 0;
    }
    if (*(long *)(this + 0x2b8) != 0) {
      uv_cancel();
                    /* try { // try from 00a0984c to 00b09863 has its CatchHandler @ 00a098ec */
      **(undefined8 **)(this + 0x2b8) = 0;
      *(undefined8 *)(this + 0x2b8) = 0;
    }
    closeServer(this);
    plVar3 = *(long **)(this + 0x40);
    if (plVar3 != (long *)0x0) {
                    /* try { // try from 00a09864 to 00b09897 has its CatchHandler @ 00a097d8 */
      local_2c[0] = 0;
      (**(code **)(*plVar3 + 0x30))(plVar3,local_2c);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a09898 to 00b098ab has its CatchHandler @ 00a098f0 */
  __stack_chk_fail();
}

