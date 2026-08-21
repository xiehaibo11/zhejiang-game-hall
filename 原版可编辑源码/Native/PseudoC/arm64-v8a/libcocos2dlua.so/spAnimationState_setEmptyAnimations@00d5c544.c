
void spAnimationState_setEmptyAnimations(undefined4 param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
                    /* try { // try from 00d5c550 to 00e5c583 has its CatchHandler @ 00d5c590 */
  lVar3 = *(long *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(lVar3 + 0x18);
  *(undefined4 *)(lVar3 + 0x18) = 1;
  uVar2 = *(uint *)(param_2 + 8);
  if (0 < (int)uVar2) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_2 + 0x10) + uVar4 * 8);
      if (lVar3 != 0) {
                    /* try { // try from 00d5c5b4 to 00e5c5e7 has its CatchHandler @ 00d5c5f8 */
        lVar3 = spAnimationState_setAnimation(param_2,*(undefined4 *)(lVar3 + 0x20),DAT_017875f0,0);
        *(undefined4 *)(lVar3 + 100) = param_1;
        *(undefined4 *)(lVar3 + 0x54) = param_1;
      }
      uVar4 = uVar4 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d5c550 with catch @ 00d5c590
                        */
    } while (uVar2 != uVar4);
    lVar3 = *(long *)(param_2 + 0x48);
  }
  *(undefined4 *)(lVar3 + 0x18) = uVar1;
  _spEventQueue_drain();
  return;
}

