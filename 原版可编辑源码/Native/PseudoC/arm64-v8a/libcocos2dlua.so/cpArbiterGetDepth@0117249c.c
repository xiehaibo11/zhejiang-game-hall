
float cpArbiterGetDepth(long param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (-1 < param_2) {
    if (*(uint *)(param_1 + 0x90) < 3) {
      if (param_2 < *(int *)(param_1 + 0x58)) {
LAB_011724c8:
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x60) + (long)param_2 * 0x38);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x28);
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
        return (float)*(undefined8 *)(param_1 + 0x68) *
               ((((float)uVar3 - (float)uVar2) + (float)uVar4) - (float)uVar5) +
               (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20) *
               ((((float)((ulong)uVar3 >> 0x20) - (float)((ulong)uVar2 >> 0x20)) +
                (float)((ulong)uVar4 >> 0x20)) - (float)((ulong)uVar5 >> 0x20));
      }
    }
    else if (param_2 < 0) goto LAB_011724c8;
  }
  cpMessage("0 <= i && i < cpArbiterGetCount(arb)",
            "/Users/minggo/SourceCode/cocos2d-x-3rd-party-libs-src/contrib/android-arm64/chipmunk/src/cpArbiter.c"
            ,0x5d,1,1,"Index error: The specified contact index is invalid for this arbiter");
                    /* WARNING: Subroutine does not return */
  abort();
}

