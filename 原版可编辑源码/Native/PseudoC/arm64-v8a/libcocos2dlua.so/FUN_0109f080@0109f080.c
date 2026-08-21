
void FUN_0109f080(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ushort uVar4;
  
  if (*(char *)(param_1 + 0x3d0) != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
    if (*(long *)(param_1 + 0x2e0) == 0x28000) {
                    /* try { // try from 0109f120 to 0119f20f has its CatchHandler @ 0109f27c */
      ft_mem_free(uVar3,*(undefined8 *)(param_1 + 0x3e0));
      *(undefined8 *)(param_1 + 0x3e0) = 0;
      *(undefined2 *)(param_1 + 0x3d8) = 0;
    }
    else if (*(long *)(param_1 + 0x2e0) == 0x20000) {
      ft_mem_free(uVar3,*(undefined8 *)(param_1 + 0x3e0));
      lVar1 = *(long *)(param_1 + 1000);
      *(undefined8 *)(param_1 + 0x3e0) = 0;
      *(undefined2 *)(param_1 + 0x3d8) = 0;
      if (*(short *)(param_1 + 0x3da) != 0) {
        uVar4 = 0;
        do {
          uVar2 = (ulong)uVar4;
                    /* try { // try from 0109f0e4 to 0119f11f has its CatchHandler @ 0109f0e4
                       catch() { ... } // from try @ 0109f0e4 with catch @ 0109f0e4
                       catch() { ... } // from try @ 0109f234 with catch @ 0109f0e4 */
          ft_mem_free(uVar3,*(undefined8 *)(lVar1 + uVar2 * 8));
          uVar4 = uVar4 + 1;
          *(undefined8 *)(*(long *)(param_1 + 1000) + uVar2 * 8) = 0;
          lVar1 = *(long *)(param_1 + 1000);
        } while (uVar4 < *(ushort *)(param_1 + 0x3da));
      }
      ft_mem_free(uVar3);
      *(undefined8 *)(param_1 + 1000) = 0;
      *(undefined2 *)(param_1 + 0x3da) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x3d0) = 0;
  return;
}

