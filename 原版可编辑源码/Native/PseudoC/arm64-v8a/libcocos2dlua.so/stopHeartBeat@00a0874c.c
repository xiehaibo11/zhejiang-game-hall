
/* universe::network::GuoPengFei::stopHeartBeat() */

void __thiscall universe::network::GuoPengFei::stopHeartBeat(GuoPengFei *this)

{
  int iVar1;
  char *pcVar2;
  
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar2 = (char *)Translated::getInstance();
    Translated::log(pcVar2,"GuoPengFei: delete 25");
  }
  iVar1 = uv_is_active(this + 0x180);
  if (iVar1 != 0) {
    uv_timer_stop(this + 0x180);
  }
  if (*(int *)(this + 0x418) == 0) {
    iVar1 = uv_is_active(this + 0x218);
    if (iVar1 != 0) {
      uv_timer_stop(this + 0x218);
    }
  }
  this[0x458] = (GuoPengFei)0x0;
  *(undefined8 *)(this + 0x450) = 0;
  *(undefined8 *)(this + 0x448) = 0;
  return;
}

