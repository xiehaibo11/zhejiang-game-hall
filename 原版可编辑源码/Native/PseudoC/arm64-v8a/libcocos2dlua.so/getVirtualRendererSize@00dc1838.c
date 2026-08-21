
/* cocos2d::ui::Button::getVirtualRendererSize() const */

void cocos2d::ui::Button::getVirtualRendererSize(void)

{
  ulong uVar1;
  long *in_x0;
  Size *pSVar2;
  byte *pbVar3;
  Size *in_x8;
  
  if (*(char *)((long)in_x0 + 0x381) != '\0') {
                    /* try { // try from 00dc1854 to 00ec1863 has its CatchHandler @ 00dc1a34 */
                    /* try { // try from 00dc1864 to 00ec1a4f has its CatchHandler @ 00dc17c0 */
                    /* WARNING: Could not recover jumptable at 0x00dc186c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_x0 + 0x6a8))();
    return;
  }
  if ((long *)in_x0[0xa1] != (long *)0x0) {
    pSVar2 = (Size *)(**(code **)(*(long *)in_x0[0xa1] + 0x168))();
    Size::Size(in_x8,pSVar2);
    if ((char)in_x0[0xac] == '\0') {
      pbVar3 = (byte *)(**(code **)(*(long *)in_x0[0xa1] + 0x590))();
      uVar1 = (ulong)(*pbVar3 >> 1);
      if ((*pbVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar3 + 8);
      }
      if (uVar1 != 0) {
        return;
      }
    }
  }
  Size::Size(in_x8,(Size *)(in_x0 + 0xa9));
  return;
}

