
/* universe::network::GuoPengFei::onHeartBeat() */

void __thiscall universe::network::GuoPengFei::onHeartBeat(GuoPengFei *this)

{
  long lVar1;
  bool bVar2;
  char *pcVar3;
  GuoPengFei *pGVar4;
  ulong uVar5;
  undefined **local_38;
  undefined2 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a0addc to 00b0adef has its CatchHandler @ 00a0ae74 */
  pGVar4 = this;
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar3 = (char *)Translated::getInstance();
                    /* try { // try from 00a0adf4 to 00b0ae27 has its CatchHandler @ 00a0ae78 */
    pGVar4 = (GuoPengFei *)Translated::log(pcVar3,"GuoPengFei: delete 26");
  }
  if (*(int *)(this + 0x418) == 0) {
                    /* try { // try from 00a0ae28 to 00b0aec3 has its CatchHandler @ 00a0ac34 */
    if (this[0x458] == (GuoPengFei)0x0) {
      Device::getTime();
      uVar5 = __fixtfdi();
      *(ulong *)(this + 0x448) = uVar5;
      this[0x458] = (GuoPengFei)0x1;
      local_38 = &PTR__Background_016a20a8;
      if (*(long *)(this + 0x450) != 0) {
        uVar5 = (ulong)(uint)((int)*(long *)(this + 0x450) - (int)uVar5);
      }
      local_30 = (undefined2)uVar5;
                    /* catch() { ... } // from try @ 00a0addc with catch @ 00a0ae74 */
                    /* catch() { ... } // from try @ 00a0adf4 with catch @ 00a0ae78 */
      bVar2 = sendMessage<universe::network::SRS::CheckAct32>(this,(CheckAct32 *)&local_38,0,0);
      pGVar4 = (GuoPengFei *)(ulong)bVar2;
    }
  }
  else {
    local_38 = &PTR__Background_016a20f8;
    bVar2 = sendMessage<universe::network::SRS::CheckAct>
                      (this,(CheckAct *)&local_38,0,*(int *)(this + 0x410));
    pGVar4 = (GuoPengFei *)(ulong)bVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pGVar4);
}

