
/* universe::network::GuoPengFei::cancelConnectTimer() */

void __thiscall universe::network::GuoPengFei::cancelConnectTimer(GuoPengFei *this)

{
  int iVar1;
  char *pcVar2;
  
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar2 = (char *)Translated::getInstance();
    Translated::log(pcVar2,"GuoPengFei: delete 7");
  }
  iVar1 = uv_is_active(this + 0xe8);
  if (iVar1 != 0) {
    uv_timer_stop(this + 0xe8);
  }
  pcVar2 = (char *)Translated::getInstance();
  Translated::log(pcVar2,&DAT_012f8b5e,(ulong)*(uint *)(this + 0x45c));
  if (*(undefined8 **)(this + 0x2b8) != (undefined8 *)0x0) {
    **(undefined8 **)(this + 0x2b8) = 0;
    *(undefined8 *)(this + 0x2b8) = 0;
  }
  return;
}

