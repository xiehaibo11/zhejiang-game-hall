
/* universe::network::GuoPengFei::startHeartBeat(int, int) */

void __thiscall
universe::network::GuoPengFei::startHeartBeat(GuoPengFei *this,int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar2 = (char *)Translated::getInstance();
    Translated::log(pcVar2,"GuoPengFei: delete 24");
  }
  stopHeartBeat(this);
  if (0 < param_1) {
    uVar3 = uv_default_loop();
    uv_timer_init(uVar3,this + 0x180);
    *(GuoPengFei **)(this + 0x180) = this;
    iVar1 = uv_timer_start(this + 0x180,FUN_00a0adb0,(long)param_1,(long)param_1);
    if (iVar1 != 0) {
      pcVar4 = (char *)Translated::getInstance();
      uVar3 = uv_err_name(iVar1);
      pcVar2 = "heart beat uv_timer_start call error %s";
LAB_00a0ad1c:
      Translated::log(pcVar4,pcVar2,uVar3);
      return;
    }
    if (*(int *)(this + 0x418) == 0) {
      uVar3 = uv_default_loop();
      uv_timer_init(uVar3,this + 0x218);
      *(GuoPengFei **)(this + 0x218) = this;
      iVar1 = uv_timer_start(this + 0x218,FUN_00a0adb8,(long)(param_1 + 1000),1000);
      if (iVar1 != 0) {
        stopHeartBeat(this);
        pcVar4 = (char *)Translated::getInstance();
        uVar3 = uv_err_name(iVar1);
        pcVar2 = "heart beat timeout uv_timer_start call error %s";
        goto LAB_00a0ad1c;
      }
                    /* try { // try from 00a0ada8 to 00b0addb has its CatchHandler @ 00a0aea8 */
      *(int *)(this + 0x41c) = param_2;
    }
  }
  return;
}

