
/* universe::network::GuoPengFei::onCheckAct(universe::network::ZhouLuJun*) */

void __thiscall universe::network::GuoPengFei::onCheckAct(GuoPengFei *this,ZhouLuJun *param_1)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined **local_48 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a07fbc to 00b07fd3 has its CatchHandler @ 00a0807c */
  pcVar2 = (char *)Translated::getInstance();
  Translated::log(pcVar2,"GuoPengFei: delete 31");
  if (this[0x459] != (GuoPengFei)0x0) {
                    /* try { // try from 00a07fd8 to 00b07fef has its CatchHandler @ 00a08078 */
    pcVar2 = (char *)Translated::getInstance();
    Translated::log(pcVar2,"receive act from server");
    if (*(int *)(this + 0x418) == 0) {
      local_48[0] = &PTR__Background_016a20a8;
                    /* try { // try from 00a08024 to 00b08037 has its CatchHandler @ 00a0807c */
      receiveMessageFromPack<universe::network::SRS::CheckAct32>
                (this,(CheckAct32 *)local_48,param_1);
    }
    else {
                    /* try { // try from 00a07ff0 to 00b08023 has its CatchHandler @ 00a07f6c */
      local_48[0] = &PTR__Background_016a20f8;
      receiveMessageFromPack<universe::network::SRS::CheckAct>(this,(CheckAct *)local_48,param_1);
    }
    Device::getTime();
                    /* try { // try from 00a08038 to 00b08097 has its CatchHandler @ 00a07f6c */
    uVar3 = __fixtfdi();
    *(undefined8 *)(this + 0x450) = uVar3;
    this[0x458] = (GuoPengFei)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

