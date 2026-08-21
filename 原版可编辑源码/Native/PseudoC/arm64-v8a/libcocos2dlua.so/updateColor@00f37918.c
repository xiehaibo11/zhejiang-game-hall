
/* cocos2d::ProgressTimer::updateColor() */

void __thiscall cocos2d::ProgressTimer::updateColor(ProgressTimer *this)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  if (((*(long *)(this + 0x310) != 0) && (*(long *)(this + 800) != 0)) &&
     (0 < *(int *)(this + 0x318))) {
    uVar1 = *(undefined4 *)(*(long *)(this + 0x310) + 0x45c);
                    /* try { // try from 00f37938 to 0103793f has its CatchHandler @ 00f37c70 */
    *(undefined4 *)(*(long *)(this + 800) + 8) = uVar1;
                    /* try { // try from 00f37940 to 01037ac7 has its CatchHandler @ 00f375ec */
    if (1 < *(int *)(this + 0x318)) {
      lVar2 = 1;
      lVar3 = 0x1c;
      do {
        lVar2 = lVar2 + 1;
        *(undefined4 *)(*(long *)(this + 800) + lVar3) = uVar1;
        lVar3 = lVar3 + 0x14;
      } while (lVar2 < *(int *)(this + 0x318));
    }
  }
  return;
}

