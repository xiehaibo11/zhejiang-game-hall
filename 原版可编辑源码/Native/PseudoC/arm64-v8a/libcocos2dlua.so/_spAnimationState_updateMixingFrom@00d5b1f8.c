
undefined4 _spAnimationState_updateMixingFrom(float param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *(long *)(param_3 + 0x10);
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = _spAnimationState_updateMixingFrom(param_2,lVar2);
                    /* catch() { ... } // from try @ 00d5b650 with catch @ 00d5b228
                       catch() { ... } // from try @ 00d5c0e0 with catch @ 00d5b228
                       catch() { ... } // from try @ 00d5c164 with catch @ 00d5b228 */
    fVar3 = *(float *)(param_3 + 0x60);
    if (fVar3 <= 0.0) {
      fVar4 = *(float *)(param_3 + 0x58);
    }
    else if ((*(float *)(param_3 + 100) <= fVar3) ||
            (fVar4 = *(float *)(param_3 + 0x58), fVar4 == 0.0)) {
      if ((*(float *)(param_3 + 100) != 0.0) && (*(float *)(lVar2 + 0x6c) != 0.0)) {
        return uVar1;
      }
      *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(lVar2 + 0x10);
      *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(lVar2 + 0x68);
                    /* try { // try from 00d5b278 to 00e5b2af has its CatchHandler @ 00d5c32c */
      _spEventQueue_end(*(undefined8 *)(param_2 + 0x48),lVar2);
      return uVar1;
    }
    uVar1 = 0;
                    /* try { // try from 00d5b2b4 to 00e5b333 has its CatchHandler @ 00d5c330 */
    *(undefined4 *)(lVar2 + 0x3c) = *(undefined4 *)(lVar2 + 0x40);
    *(undefined4 *)(lVar2 + 0x4c) = *(undefined4 *)(lVar2 + 0x50);
    *(float *)(lVar2 + 0x48) = *(float *)(lVar2 + 0x48) + *(float *)(lVar2 + 0x58) * param_1;
    *(float *)(param_3 + 0x60) = fVar3 + fVar4 * param_1;
  }
  return uVar1;
}

