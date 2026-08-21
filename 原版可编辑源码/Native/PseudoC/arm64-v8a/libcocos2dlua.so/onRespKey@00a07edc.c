
/* universe::network::GuoPengFei::onRespKey(universe::network::ZhouLuJun*) */

void __thiscall universe::network::GuoPengFei::onRespKey(GuoPengFei *this,ZhouLuJun *param_1)

{
  long lVar1;
  char *pcVar2;
  undefined **local_68;
  byte local_60;
  uchar auStack_5f [39];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar2 = (char *)Translated::getInstance();
    Translated::log(pcVar2,"GuoPengFei: delete 30");
  }
                    /* catch() { ... } // from try @ 00a07e84 with catch @ 00a07f1c */
                    /* catch() { ... } // from try @ 00a07e9c with catch @ 00a07f20 */
  if (this[0x459] != (GuoPengFei)0x0) {
    local_68 = &PTR__Background_016a2058;
    receiveMessageFromPack<universe::network::SRS::RespKey>(this,(RespKey *)&local_68,param_1);
                    /* catch() { ... } // from try @ 00a07e50 with catch @ 00a07f50 */
    BaseProxy::setAesKey(*(BaseProxy **)(this + 0x3b0),auStack_5f,(ulong)local_60);
    if (*(long **)(this + 0xd0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xd0) + 0x30))();
    }
  }
                    /* try { // try from 00a07f6c to 00b07fbb has its CatchHandler @ 00a07f6c
                       catch() { ... } // from try @ 00a07f6c with catch @ 00a07f6c
                       catch() { ... } // from try @ 00a07ff0 with catch @ 00a07f6c
                       catch() { ... } // from try @ 00a08038 with catch @ 00a07f6c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

