
undefined8
spAnimationState_setAnimation(long param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  void *__dest;
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  
                    /* try { // try from 00d5c0b8 to 00e5c0c3 has its CatchHandler @ 00d5c174 */
                    /* try { // try from 00d5c0cc to 00e5c0df has its CatchHandler @ 00d5c170 */
                    /* try { // try from 00d5c0e0 to 00e5c15b has its CatchHandler @ 00d5b228 */
  if (param_2 < *(int *)(param_1 + 8)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x10) + (long)param_2 * 8);
    if (lVar2 != 0) {
      if (*(float *)(lVar2 + 0x50) == -1.0) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)param_2 * 8) =
             *(undefined8 *)(lVar2 + 0x10);
        _spEventQueue_interrupt(*(undefined8 *)(param_1 + 0x48),lVar2);
        _spEventQueue_end(*(undefined8 *)(param_1 + 0x48),lVar2);
        for (lVar4 = *(long *)(lVar2 + 8); lVar4 != 0; lVar4 = *(long *)(lVar4 + 8)) {
          _spEventQueue_dispose(*(undefined8 *)(param_1 + 0x48),lVar4);
        }
        *(undefined8 *)(lVar2 + 8) = 0;
        lVar2 = *(long *)(lVar2 + 0x10);
        uVar3 = 0;
        goto LAB_00d5c1bc;
      }
      for (lVar4 = *(long *)(lVar2 + 8); lVar4 != 0; lVar4 = *(long *)(lVar4 + 8)) {
                    /* catch() { ... } // from try @ 00d5bbac with catch @ 00d5c1a8 */
        _spEventQueue_dispose(*(undefined8 *)(param_1 + 0x48),lVar4);
                    /* catch() { ... } // from try @ 00d5c020 with catch @ 00d5c1ac */
                    /* catch() { ... } // from try @ 00d5c00c with catch @ 00d5c1b0 */
      }
                    /* catch() { ... } // from try @ 00d5be9c with catch @ 00d5c1b4 */
      *(undefined8 *)(lVar2 + 8) = 0;
    }
  }
  else {
                    /* try { // try from 00d5c15c to 00e5c163 has its CatchHandler @ 00d5c1e8 */
                    /* catch() { ... } // from try @ 00d5bdcc with catch @ 00d5c164
                       try { // try from 00d5c164 to 00e5c34b has its CatchHandler @ 00d5b228 */
                    /* catch() { ... } // from try @ 00d5bdc0 with catch @ 00d5c168 */
    __dest = (void *)_spCalloc((long)(param_2 + 1),8,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                               ,0x2f3);
                    /* catch() { ... } // from try @ 00d5bdac with catch @ 00d5c16c */
                    /* catch() { ... } // from try @ 00d5c0cc with catch @ 00d5c170 */
                    /* catch() { ... } // from try @ 00d5c0b8 with catch @ 00d5c174 */
                    /* catch() { ... } // from try @ 00d5bebc with catch @ 00d5c178 */
                    /* catch() { ... } // from try @ 00d5bd98 with catch @ 00d5c17c */
    memcpy(__dest,*(void **)(param_1 + 0x10),(long)*(int *)(param_1 + 8) << 3);
                    /* catch() { ... } // from try @ 00d5bd90 with catch @ 00d5c180 */
    _spFree(*(void **)(param_1 + 0x10));
                    /* catch() { ... } // from try @ 00d5be90 with catch @ 00d5c188 */
    lVar2 = 0;
                    /* catch() { ... } // from try @ 00d5bbd8 with catch @ 00d5c18c */
    *(void **)(param_1 + 0x10) = __dest;
                    /* catch() { ... } // from try @ 00d5bbb8 with catch @ 00d5c190 */
    *(int *)(param_1 + 8) = param_2 + 1;
  }
                    /* catch() { ... } // from try @ 00d5bd44 with catch @ 00d5c1b8 */
  uVar3 = 1;
LAB_00d5c1bc:
                    /* catch() { ... } // from try @ 00d5bcf0 with catch @ 00d5c1bc */
                    /* catch() { ... } // from try @ 00d5bcd8 with catch @ 00d5c1c4 */
  uVar1 = _spAnimationState_trackEntry(param_1,param_2,param_3,param_4,lVar2);
                    /* catch() { ... } // from try @ 00d5bcc0 with catch @ 00d5c1d4 */
                    /* catch() { ... } // from try @ 00d5bb68 with catch @ 00d5c1d8 */
                    /* catch() { ... } // from try @ 00d5bb38 with catch @ 00d5c1dc */
                    /* catch() { ... } // from try @ 00d5bbe8 with catch @ 00d5c1e4
                       catch() { ... } // from try @ 00d5c070 with catch @ 00d5c1e4 */
                    /* catch() { ... } // from try @ 00d5b648 with catch @ 00d5c1e8
                       catch() { ... } // from try @ 00d5c15c with catch @ 00d5c1e8 */
  _spAnimationState_setCurrent(param_1,param_2,uVar1,uVar3);
                    /* catch() { ... } // from try @ 00d5bfa8 with catch @ 00d5c1ec */
                    /* catch() { ... } // from try @ 00d5bf84 with catch @ 00d5c1f0 */
  _spEventQueue_drain(*(undefined8 *)(param_1 + 0x48));
  return uVar1;
}

