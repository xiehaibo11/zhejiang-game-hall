
/* cocos2d::renderer::DeviceGraphics::commitBlendStates() */

void __thiscall cocos2d::renderer::DeviceGraphics::commitBlendStates(DeviceGraphics *this)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = *(char **)(this + 0xb8);
  pcVar6 = *(char **)(this + 0xc0);
  cVar2 = *pcVar5;
  if (*pcVar6 == cVar2) {
                    /* try { // try from 009b42b0 to 00ab42f3 has its CatchHandler @ 009b4854 */
    if (cVar2 == '\0') {
      return;
    }
    uVar1 = *(uint *)(pcVar5 + 4);
    if (*(uint *)(pcVar6 + 4) != uVar1) {
                    /* try { // try from 009b42f8 to 00ab433b has its CatchHandler @ 009b4860 */
      glBlendColor((float)(uVar1 >> 0x18) / 255.0,(float)(uVar1 >> 0x10 & 0xff) / 255.0,
                   (float)(uVar1 >> 8 & 0xff) / 255.0,(float)(uVar1 & 0xff) / 255.0);
      pcVar5 = *(char **)(this + 0xb8);
      pcVar6 = *(char **)(this + 0xc0);
    }
    cVar2 = pcVar5[1];
    if (pcVar6[1] != cVar2) {
      sVar4 = *(short *)(pcVar5 + 0xc);
      sVar3 = *(short *)(pcVar5 + 0xe);
      if (cVar2 != '\0') goto LAB_009b43f0;
LAB_009b4420:
      glBlendFunc();
      sVar4 = *(short *)(*(long *)(this + 0xb8) + 8);
LAB_009b442c:
      glBlendEquation(sVar4);
      return;
    }
    if (cVar2 != '\0') {
      if (*(short *)(pcVar6 + 0xc) == *(short *)(pcVar5 + 0xc)) {
        sVar3 = *(short *)(pcVar6 + 0xe);
        sVar4 = *(short *)(pcVar5 + 0xe);
                    /* try { // try from 009b4340 to 00ab4383 has its CatchHandler @ 009b4854 */
        if (((sVar3 == *(short *)(pcVar5 + 0xe)) &&
            (sVar4 = sVar3, *(short *)(pcVar6 + 0x10) == *(short *)(pcVar5 + 0x10))) &&
           (*(short *)(pcVar6 + 0x12) == *(short *)(pcVar5 + 0x12))) goto LAB_009b4454;
      }
      else {
        sVar4 = *(short *)(pcVar5 + 0xe);
      }
      glBlendFuncSeparate(*(short *)(pcVar5 + 0xc),sVar4,*(undefined2 *)(pcVar5 + 0x10),
                          *(undefined2 *)(pcVar5 + 0x12));
      pcVar5 = *(char **)(this + 0xb8);
      pcVar6 = *(char **)(this + 0xc0);
    }
LAB_009b4454:
    sVar4 = *(short *)(pcVar5 + 8);
                    /* try { // try from 009b445c to 00ab4497 has its CatchHandler @ 009b48b4 */
    if (*(short *)(pcVar6 + 8) == sVar4) {
      sVar3 = *(short *)(pcVar5 + 10);
      if (*(short *)(pcVar6 + 10) == sVar3) {
        if (*(short *)(pcVar6 + 0xc) == *(short *)(pcVar5 + 0xc)) {
          sVar4 = *(short *)(pcVar5 + 0xe);
          if (*(short *)(pcVar6 + 0xe) == sVar4) {
            return;
          }
        }
        else {
          sVar4 = *(short *)(pcVar5 + 0xe);
        }
        glBlendFunc(*(short *)(pcVar5 + 0xc),sVar4);
        sVar4 = *(short *)(*(long *)(this + 0xb8) + 8);
        if (*(short *)(*(long *)(this + 0xc0) + 8) == sVar4) {
          return;
        }
        goto LAB_009b442c;
      }
      goto LAB_009b449c;
    }
  }
  else {
    if (cVar2 == '\0') {
      glDisable(0xbe2);
      return;
    }
    glEnable();
    pcVar5 = *(char **)(this + 0xb8);
    sVar4 = *(short *)(pcVar5 + 0xc);
                    /* try { // try from 009b4388 to 00ab43cb has its CatchHandler @ 009b4860 */
    if (((ushort)(sVar4 + 0x7fffU) < 2) ||
       (sVar3 = *(short *)(pcVar5 + 0xe), (ushort)(sVar3 + 0x7fffU) < 2)) {
      uVar1 = *(uint *)(pcVar5 + 4);
                    /* try { // try from 009b43d0 to 00ab4413 has its CatchHandler @ 009b4854 */
      glBlendColor((float)(uVar1 >> 0x18) / 255.0,(float)(uVar1 >> 0x10 & 0xff) / 255.0,
                   (float)(uVar1 >> 8 & 0xff) / 255.0,(float)(uVar1 & 0xff) / 255.0);
      pcVar5 = *(char **)(this + 0xb8);
      sVar4 = *(short *)(pcVar5 + 0xc);
      sVar3 = *(short *)(pcVar5 + 0xe);
    }
    if (pcVar5[1] == '\0') goto LAB_009b4420;
LAB_009b43f0:
    glBlendFuncSeparate(sVar4,sVar3,*(undefined2 *)(pcVar5 + 0x10),*(undefined2 *)(pcVar5 + 0x12));
    pcVar5 = *(char **)(this + 0xb8);
    sVar4 = *(short *)(pcVar5 + 8);
  }
  sVar3 = *(short *)(pcVar5 + 10);
LAB_009b449c:
  glBlendEquationSeparate(sVar4,sVar3);
  return;
}

