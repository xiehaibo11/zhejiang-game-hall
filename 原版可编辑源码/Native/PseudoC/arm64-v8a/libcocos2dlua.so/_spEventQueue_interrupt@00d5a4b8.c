
void _spEventQueue_interrupt(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
                    /* try { // try from 00d5a4d8 to 00e5a4df has its CatchHandler @ 00d5a57c */
  if ((int)uVar1 < *(int *)(param_1 + 0x14)) {
    pvVar3 = *(void **)(param_1 + 8);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x14) << 1;
                    /* try { // try from 00d5a4f4 to 00e5a4ff has its CatchHandler @ 00d5a538 */
    *(int *)(param_1 + 0x14) = iVar2;
    pvVar3 = (void *)_spCalloc((long)iVar2,8,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                               ,0x57);
                    /* try { // try from 00d5a508 to 00e5a513 has its CatchHandler @ 00d5a534 */
                    /* try { // try from 00d5a514 to 00e5a59f has its CatchHandler @ 00d5a138 */
    memcpy(pvVar3,*(void **)(param_1 + 8),(long)*(int *)(param_1 + 0x10) << 3);
    _spFree(*(void **)(param_1 + 8));
    uVar1 = *(uint *)(param_1 + 0x10);
    *(void **)(param_1 + 8) = pvVar3;
  }
                    /* catch() { ... } // from try @ 00d5a508 with catch @ 00d5a534 */
  *(uint *)(param_1 + 0x10) = uVar1 + 1;
                    /* catch() { ... } // from try @ 00d5a4f4 with catch @ 00d5a538 */
  *(undefined4 *)((long)pvVar3 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3))
       = 1;
                    /* catch() { ... } // from try @ 00d5a320 with catch @ 00d5a53c */
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 < *(int *)(param_1 + 0x14)) {
    pvVar3 = *(void **)(param_1 + 8);
  }
  else {
                    /* catch() { ... } // from try @ 00d5a30c with catch @ 00d5a550 */
    iVar2 = *(int *)(param_1 + 0x14) << 1;
                    /* catch() { ... } // from try @ 00d5a304 with catch @ 00d5a554 */
                    /* catch() { ... } // from try @ 00d5a2dc with catch @ 00d5a558 */
    *(int *)(param_1 + 0x14) = iVar2;
    pvVar3 = (void *)_spCalloc((long)iVar2,8,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                               ,0x57);
                    /* catch() { ... } // from try @ 00d5a2c8 with catch @ 00d5a578 */
                    /* catch() { ... } // from try @ 00d5a270 with catch @ 00d5a57c
                       catch() { ... } // from try @ 00d5a4d8 with catch @ 00d5a57c */
                    /* catch() { ... } // from try @ 00d5a1b8 with catch @ 00d5a580 */
    memcpy(pvVar3,*(void **)(param_1 + 8),(long)*(int *)(param_1 + 0x10) << 3);
                    /* catch() { ... } // from try @ 00d5a17c with catch @ 00d5a584
                       catch() { ... } // from try @ 00d5a24c with catch @ 00d5a584
                       catch() { ... } // from try @ 00d5a3d8 with catch @ 00d5a584 */
    _spFree(*(void **)(param_1 + 8));
    iVar2 = *(int *)(param_1 + 0x10);
    *(void **)(param_1 + 8) = pvVar3;
  }
  *(int *)(param_1 + 0x10) = iVar2 + 1;
  *(undefined8 *)((long)pvVar3 + (long)iVar2 * 8) = param_2;
  return;
}

