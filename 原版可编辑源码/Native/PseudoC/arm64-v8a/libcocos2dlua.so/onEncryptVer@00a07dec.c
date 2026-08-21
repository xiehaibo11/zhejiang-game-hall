
/* universe::network::GuoPengFei::onEncryptVer(universe::network::ZhouLuJun*) */

void __thiscall universe::network::GuoPengFei::onEncryptVer(GuoPengFei *this,ZhouLuJun *param_1)

{
  long lVar1;
  bool bVar2;
  char *pcVar3;
  GuoPengFei *pGVar4;
  undefined **local_50;
  undefined **local_48 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pGVar4 = this;
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar3 = (char *)Translated::getInstance();
    pGVar4 = (GuoPengFei *)Translated::log(pcVar3,"GuoPengFei: delete a2");
  }
  if (this[0x459] != (GuoPengFei)0x0) {
    local_48[0] = &PTR__Background_016a1f58;
                    /* try { // try from 00a07e50 to 00b07e83 has its CatchHandler @ 00a07f50 */
    receiveMessageFromPack<universe::network::SRS::EncryptVer>(this,(EncryptVer *)local_48,param_1);
    if (*(int *)(this + 0x418) == 0) {
                    /* try { // try from 00a07e84 to 00b07e97 has its CatchHandler @ 00a07f1c */
      local_50 = &PTR__Background_016a1fb8;
                    /* try { // try from 00a07e9c to 00b07ecf has its CatchHandler @ 00a07f20 */
      bVar2 = sendMessage<universe::network::SRS::ReqKey32>
                        (this,(ReqKey32 *)&local_50,0,*(int *)(this + 0x410));
      pGVar4 = (GuoPengFei *)(ulong)bVar2;
    }
    else {
      local_50 = &PTR__Background_016a2008;
      bVar2 = sendMessage<universe::network::SRS::ReqKey>
                        (this,(ReqKey *)&local_50,0,*(int *)(this + 0x410));
      pGVar4 = (GuoPengFei *)(ulong)bVar2;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pGVar4);
}

