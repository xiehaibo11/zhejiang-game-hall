
uint * FUN_01850d98(long param_1,uint *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_10;
  ulong local_8;
  
  uVar3 = (ulong)(*(ushort *)(param_1 + 0x20) >> 3);
  uVar7 = uVar3 & 0xff;
  uVar1 = FUN_01850a5c(uVar3 & 0xff,param_1);
  lVar2 = 0;
  do {
    if (*param_2 == 0) {
      return (uint *)0x0;
    }
    if (param_2[1] != 0) {
      lVar6 = lVar2;
      if (((*(byte *)(param_1 + 0x20) >> 2 & 1) != 0) &&
         (lVar6 = (long)param_2 + (4 - (long)(int)param_2[1]), lVar6 != lVar2)) {
        uVar3 = FUN_01850c9c(lVar6);
        uVar7 = uVar3 & 0xffffffff;
        uVar1 = FUN_01850a5c(uVar3,param_1);
      }
      if ((uint)uVar7 == 0) {
        local_10 = *(ulong *)(param_2 + 2);
        local_8 = *(ulong *)(param_2 + 4);
        uVar3 = local_10;
      }
      else {
        uVar4 = FUN_01850b1c(uVar7 & 0xff,uVar1,param_2 + 2,&local_10);
        FUN_01850b1c((uint)uVar7 & 0xf,0,uVar4,&local_8);
        uVar3 = FUN_018509fc(uVar7 & 0xff);
        uVar5 = 0xffffffffffffffff;
        if ((uVar3 & 0xffffffff) < 8) {
          uVar5 = (1L << ((uVar3 & 7) << 3)) - 1;
        }
        uVar3 = uVar5 & local_10;
      }
      lVar2 = lVar6;
      if ((uVar3 != 0) && (param_3 - local_10 < local_8)) {
        return param_2;
      }
    }
    param_2 = (uint *)((long)param_2 + (ulong)*param_2 + 4);
  } while( true );
}

