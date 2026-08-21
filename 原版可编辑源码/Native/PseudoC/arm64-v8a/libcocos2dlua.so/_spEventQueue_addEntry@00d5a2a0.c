
void _spEventQueue_addEntry(long param_1,undefined8 param_2)

{
  int iVar1;
  void *__dest;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < *(int *)(param_1 + 0x14)) {
    __dest = *(void **)(param_1 + 8);
                    /* try { // try from 00d5a2c8 to 00e5a2d3 has its CatchHandler @ 00d5a578 */
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14) << 1;
                    /* try { // try from 00d5a2dc to 00e5a2e7 has its CatchHandler @ 00d5a558 */
    *(int *)(param_1 + 0x14) = iVar1;
    __dest = (void *)_spCalloc((long)iVar1,8,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AnimationState.c"
                               ,0x57);
    memcpy(__dest,*(void **)(param_1 + 8),(long)*(int *)(param_1 + 0x10) << 3);
                    /* try { // try from 00d5a304 to 00e5a307 has its CatchHandler @ 00d5a554 */
    _spFree(*(void **)(param_1 + 8));
    iVar1 = *(int *)(param_1 + 0x10);
                    /* try { // try from 00d5a30c to 00e5a317 has its CatchHandler @ 00d5a550 */
    *(void **)(param_1 + 8) = __dest;
  }
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  *(undefined8 *)((long)__dest + (long)iVar1 * 8) = param_2;
                    /* try { // try from 00d5a320 to 00e5a32f has its CatchHandler @ 00d5a53c */
  return;
}

