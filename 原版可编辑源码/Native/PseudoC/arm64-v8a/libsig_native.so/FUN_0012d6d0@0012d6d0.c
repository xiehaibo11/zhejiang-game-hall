
void FUN_0012d6d0(long param_1,long *param_2,uint *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong local_8;
  
  uVar3 = (ulong)(*(ushort *)(param_1 + 0x20) >> 3);
  uVar7 = uVar3 & 0xff;
  uVar1 = FUN_0012cc0c(uVar3 & 0xff,param_1);
  lVar2 = 0;
  for (; *param_3 != 0; param_3 = (uint *)((long)param_3 + (ulong)*param_3 + 4)) {
    if (param_3[1] != 0) {
      lVar6 = lVar2;
      if (((*(byte *)(param_1 + 0x20) >> 2 & 1) != 0) &&
         (lVar6 = (long)param_3 + (4 - (long)(int)param_3[1]), lVar6 != lVar2)) {
        uVar3 = FUN_0012ce4c(lVar6);
        uVar7 = uVar3 & 0xffffffff;
        uVar1 = FUN_0012cc0c(uVar3,param_1);
      }
      if ((int)uVar7 == 0) {
        uVar3 = *(ulong *)(param_3 + 2);
      }
      else {
        FUN_0012cccc(uVar7 & 0xff,uVar1,param_3 + 2,&local_8);
        uVar4 = FUN_0012cbac(uVar7 & 0xff);
        uVar3 = 0xffffffffffffffff;
        if ((uVar4 & 0xffffffff) < 8) {
          uVar3 = (1L << ((uVar4 & 7) << 3)) - 1;
        }
        uVar3 = uVar3 & local_8;
      }
      lVar2 = lVar6;
      if ((uVar3 != 0) && (lVar6 = *param_2, lVar6 != 0)) {
        lVar5 = *(long *)(lVar6 + 8);
        *(long *)(lVar6 + 8) = lVar5 + 1;
        *(uint **)(lVar6 + (lVar5 + 2) * 8) = param_3;
      }
    }
  }
  return;
}

