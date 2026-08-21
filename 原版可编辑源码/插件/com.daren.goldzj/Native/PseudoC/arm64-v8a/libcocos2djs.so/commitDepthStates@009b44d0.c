
/* cocos2d::renderer::DeviceGraphics::commitDepthStates() */

void __thiscall cocos2d::renderer::DeviceGraphics::commitDepthStates(DeviceGraphics *this)

{
  char cVar1;
  short sVar2;
  long lVar3;
  char *pcVar4;
  
  lVar3 = *(long *)(this + 0xb8);
  cVar1 = *(char *)(*(long *)(this + 0xc0) + 0x14);
  pcVar4 = (char *)(lVar3 + 0x14);
  if (cVar1 != *pcVar4) {
    if (*pcVar4 == '\0') {
      glDisable(0xb71);
      return;
    }
    glEnable();
    glDepthFunc(*(undefined2 *)(*(long *)(this + 0xb8) + 0x16));
                    /* try { // try from 009b454c to 00ab4567 has its CatchHandler @ 009b47dc */
    glDepthMask(*(undefined1 *)(*(long *)(this + 0xb8) + 0x15));
    return;
  }
  if (*(char *)(*(long *)(this + 0xc0) + 0x15) != *(char *)(lVar3 + 0x15)) {
    glDepthMask();
    lVar3 = *(long *)(this + 0xb8);
                    /* try { // try from 009b4514 to 00ab452b has its CatchHandler @ 009b481c */
    pcVar4 = (char *)(lVar3 + 0x14);
    cVar1 = *pcVar4;
  }
  if (cVar1 == '\0') {
    if (*(char *)(lVar3 + 0x15) != '\0') {
      *pcVar4 = '\x01';
      *(undefined2 *)(lVar3 + 0x16) = 0x207;
      glEnable(0xb71);
                    /* try { // try from 009b4580 to 00ab458b has its CatchHandler @ 009b47fc */
      sVar2 = *(short *)(*(long *)(this + 0xb8) + 0x16);
      goto LAB_009b4588;
    }
  }
  else {
    sVar2 = *(short *)(lVar3 + 0x16);
    if (*(short *)(*(long *)(this + 0xc0) + 0x16) != sVar2) {
LAB_009b4588:
      glDepthFunc(sVar2);
      return;
    }
  }
  return;
}

