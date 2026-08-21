
void FUN_00a76114(long param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = *(long **)(param_1 + 0x70);
                    /* catch() { ... } // from try @ 00a75ec0 with catch @ 00a76128 */
                    /* catch() { ... } // from try @ 00a75eb4 with catch @ 00a7612c */
                    /* catch() { ... } // from try @ 00a75e94 with catch @ 00a76130 */
  if ((long *)(param_1 + 0x50) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00a76150;
    pcVar2 = *(code **)(*plVar1 + 0x28);
                    /* catch() { ... } // from try @ 00a75ecc with catch @ 00a76140
                       catch() { ... } // from try @ 00a75f4c with catch @ 00a76140
                       catch() { ... } // from try @ 00a7605c with catch @ 00a76140 */
  }
  (*pcVar2)();
LAB_00a76150:
  cocos2d::PcmData::~PcmData((PcmData *)(param_1 + 0x20));
  return;
}

