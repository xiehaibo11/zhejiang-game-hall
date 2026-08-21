
ulong lws_callback_on_writable(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_30 [16];
  
  if (*(char *)(param_1 + 0x2ff) == '\f') {
    return 0;
  }
                    /* catch() { ... } // from try @ 010461ec with catch @ 0104646c */
  if ((*(uint *)(param_1 + 0x2f4) >> 6 & 1) != 0) {
                    /* catch() { ... } // from try @ 01046170 with catch @ 010464a8 */
    return 0;
  }
  if ((*(uint *)(param_1 + 0x2f4) >> 0x14 & 1) != 0) {
                    /* catch() { ... } // from try @ 01046158 with catch @ 010464b4 */
    uVar4 = lws_callback_on_writable(*(undefined8 *)(param_1 + 0x230));
    if (-1 < (int)uVar4) {
                    /* catch() { ... } // from try @ 01046140 with catch @ 010464c0 */
      uVar4 = 1;
                    /* catch() { ... } // from try @ 01046128 with catch @ 010464cc */
      *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x200000;
    }
                    /* catch() { ... } // from try @ 0104610c with catch @ 010464d8 */
    return uVar4;
  }
                    /* catch() { ... } // from try @ 010461d4 with catch @ 01046478 */
                    /* catch() { ... } // from try @ 010461bc with catch @ 01046484 */
  iVar2 = FUN_010566c8(param_1,0x13,0,0);
  if (iVar2 != 0) {
                    /* catch() { ... } // from try @ 010461a0 with catch @ 01046490 */
                    /* catch() { ... } // from try @ 0104618c with catch @ 0104649c */
    return 1;
  }
  if (*(int *)(param_1 + 0x2d4) < 0) {
    return 0xffffffff;
  }
                    /* catch() { ... } // from try @ 010460ec with catch @ 0104650c */
  if (((*(long *)(param_1 + 0x248) != 0) && (lVar5 = lws_get_context(param_1), lVar5 != 0)) &&
     (iVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x188) + 8))
                        (param_1,0x23,*(undefined8 *)(param_1 + 0x270),auStack_30,0), iVar2 == 0)) {
                    /* catch() { ... } // from try @ 01045fb8 with catch @ 01046528
                       catch() { ... } // from try @ 01046354 with catch @ 01046528 */
    iVar2 = FUN_01045e00(param_1,0,4,auStack_30);
                    /* catch() { ... } // from try @ 01045f94 with catch @ 0104653c */
                    /* catch() { ... } // from try @ 01045f60 with catch @ 01046540 */
                    /* catch() { ... } // from try @ 01045f48 with catch @ 01046544
                       catch() { ... } // from try @ 01046348 with catch @ 01046544 */
    iVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x188) + 8))
                      (param_1,0x24,*(undefined8 *)(param_1 + 0x270),auStack_30,0);
    if (iVar3 == 0) {
                    /* catch() { ... } // from try @ 010465cc with catch @ 0104658c */
      uVar1 = 0xffffffff;
      if (iVar2 == 0) {
        uVar1 = 1;
      }
      return (ulong)uVar1;
    }
  }
                    /* catch() { ... } // from try @ 01045f24 with catch @ 01046564 */
                    /* catch() { ... } // from try @ 01045ef0 with catch @ 01046568 */
                    /* catch() { ... } // from try @ 01046028 with catch @ 0104656c
                       catch() { ... } // from try @ 01046074 with catch @ 0104656c */
                    /* catch() { ... } // from try @ 01046040 with catch @ 01046570 */
  return 0xffffffff;
}

