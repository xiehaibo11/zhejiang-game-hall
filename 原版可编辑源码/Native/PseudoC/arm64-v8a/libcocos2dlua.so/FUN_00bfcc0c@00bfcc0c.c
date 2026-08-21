
char * FUN_00bfcc0c(long param_1,ulong *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  
  if (param_2 <= (ulong *)(*(long *)(param_1 + 0x38) + 8U)) {
    return (char *)0x0;
  }
  uVar7 = *param_2;
  if ((uVar7 & 7) == 3) {
    param_2 = (ulong *)((long)param_2 - (uVar7 & 0xfffffffffffffff8));
    uVar7 = *param_2;
  }
  if ((uVar7 & 3) == 0) {
    uVar7 = param_2[-1 - ((ulong)*(byte *)(uVar7 - 3) + 2)] & 0x7fffffffffff;
    cVar3 = *(char *)(uVar7 + 10);
  }
  else {
    uVar7 = *(ulong *)((long)param_2 + (-8 - (uVar7 & 0xfffffffffffffff8))) & 0x7fffffffffff;
    cVar3 = *(char *)(uVar7 + 10);
  }
  if ((cVar3 == '\0') && (uVar6 = FUN_00bfc240(param_1,uVar7 + 0x20,param_2), uVar6 != 0xffffffff))
  {
    lVar8 = *(long *)(uVar7 + 0x20) + -0x68;
    uVar2 = *(uint *)(lVar8 + ((ulong)uVar6 + 0x1a) * 4);
    uVar1 = uVar2 & 0xff;
    uVar4 = *(ushort *)(&DAT_01411070 + (ulong)uVar1 * 2) >> 0xb;
    if (uVar4 == 9) {
      uVar5 = uVar2 >> 8 & 0xff;
      uVar2 = uVar5 - 3;
      if (uVar1 != 0x45) {
        uVar2 = uVar5;
      }
      pcVar9 = (char *)FUN_00bfca0c(lVar8,lVar8 + ((ulong)uVar6 + 0x1a) * 4,uVar2);
      return pcVar9;
    }
    if (uVar4 != 0x16) {
      *param_3 = *(long *)(*(long *)(param_1 + 0x10) + ((ulong)uVar4 + 0x2e) * 8) + 0x18;
      return "metamethod";
    }
  }
  return (char *)0x0;
}

