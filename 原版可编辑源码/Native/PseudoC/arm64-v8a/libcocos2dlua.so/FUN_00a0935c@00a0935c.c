
void FUN_00a0935c(undefined8 *param_1,ulong param_2,long *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  GuoPengFei *this;
  long lVar3;
  
  this = (GuoPengFei *)*param_1;
                    /* try { // try from 00a09370 to 00b093bf has its CatchHandler @ 00a09370
                       catch() { ... } // from try @ 00a09370 with catch @ 00a09370
                       catch() { ... } // from try @ 00a093c4 with catch @ 00a09370 */
  if ((long)param_2 < 0) {
                    /* try { // try from 00a093c0 to 00b093c3 has its CatchHandler @ 00a093f8 */
                    /* try { // try from 00a093c4 to 00b0940b has its CatchHandler @ 00a09370 */
    if (param_2 != 0xfffffffffffff001) {
      pcVar1 = (char *)universe::Translated::getInstance();
      uVar2 = uv_err_name(param_2 & 0xffffffff);
      universe::Translated::log(pcVar1,"Read error %s",uVar2);
    }
    if (this[0x4a0] != (GuoPengFei)0x0) {
      pcVar1 = (char *)universe::Translated::getInstance();
                    /* catch() { ... } // from try @ 00a093c0 with catch @ 00a093f8 */
      universe::Translated::log(pcVar1,"GuoPengFei: delete 6");
    }
  }
  else {
    lVar3 = *param_3;
    if (this[0x4a0] != (GuoPengFei)0x0) {
      pcVar1 = (char *)universe::Translated::getInstance();
      universe::Translated::log(pcVar1,"GuoPengFei: delete 6");
    }
    if (lVar3 != 0) {
      *(ulong *)(this + 0x380) = *(long *)(this + 0x380) + param_2;
      universe::network::GuoPengFei::translateMessage(this);
      universe::network::GuoPengFei::dispatchMessage(this);
      return;
    }
  }
                    /* try { // try from 00a0940c to 00b096bb has its CatchHandler @ 00a0940c
                       catch() { ... } // from try @ 00a0940c with catch @ 00a0940c
                       catch() { ... } // from try @ 00a0973c with catch @ 00a0940c */
  universe::network::GuoPengFei::close(this);
  return;
}

