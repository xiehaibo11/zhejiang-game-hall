
undefined8 FUN_00a502e8(long *param_1,char *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  char *pcVar3;
  
                    /* catch() { ... } // from try @ 00a500ac with catch @ 00a502e8 */
                    /* catch() { ... } // from try @ 00a50088 with catch @ 00a50308 */
  if (((*(byte *)(param_1[0x80] + 0x7c) & 1) != 0) &&
     (pcVar3 = (char *)((long)param_1 + 0x68c), *pcVar3 == '\0')) {
    uVar2 = FUN_00a2d674(param_1,0,pcVar3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*pcVar3 == '\0') {
      if (*param_2 == '\0') {
        return 0;
      }
      goto LAB_00a50340;
    }
  }
  uVar2 = FUN_00a54a20(param_1 + 0xc3,0);
  bVar1 = (int)param_1[0xd1] == 0;
  *param_2 = bVar1;
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (!bVar1) {
    return 0;
  }
LAB_00a50340:
  if (**(int **)(*param_1 + 0x218) != 0) {
    FUN_00a49fc0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
  }
  return 0;
}

