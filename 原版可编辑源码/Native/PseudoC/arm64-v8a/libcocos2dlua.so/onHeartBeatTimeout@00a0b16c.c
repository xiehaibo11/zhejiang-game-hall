
/* universe::network::GuoPengFei::onHeartBeatTimeout() */

void __thiscall universe::network::GuoPengFei::onHeartBeatTimeout(GuoPengFei *this)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar2 = (char *)Translated::getInstance();
    Translated::log(pcVar2,&DAT_012f8ed4);
  }
  if (((this[0x10] == (GuoPengFei)0x2) && (this[0x458] != (GuoPengFei)0x0)) &&
     (0 < *(long *)(this + 0x448))) {
    uVar3 = Device::getTime();
                    /* catch() { ... } // from try @ 00a0b150 with catch @ 00a0b1c4 */
    uVar4 = __floatditf(*(undefined8 *)(this + 0x448));
    uVar3 = __subtf3(uVar3,uVar4);
    uVar4 = __floatsitf(*(undefined4 *)(this + 0x41c));
    iVar1 = __gttf2(uVar3,uVar4);
    if (0 < iVar1) {
      pcVar2 = (char *)Translated::getInstance();
      Translated::log(pcVar2,0x12f8eea);
      close(this);
      return;
    }
  }
  return;
}

