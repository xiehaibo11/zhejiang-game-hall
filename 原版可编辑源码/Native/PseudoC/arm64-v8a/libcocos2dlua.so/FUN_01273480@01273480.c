
long FUN_01273480(ulong *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong local_8;
  
  uVar8 = 0;
  uVar2 = 0;
  lVar7 = 0;
  lVar4 = 0;
  do {
    if (*param_2 == 0) {
      return lVar7;
    }
    if (param_2[1] != 0) {
      lVar6 = (long)param_2 + (4 - (long)(int)param_2[1]);
      if (lVar6 != lVar4) {
        uVar2 = FUN_01272d5c(lVar6);
        if (uVar2 == 0xff) {
          return -1;
        }
        uVar8 = FUN_01272b1c((char)uVar2,param_1);
        uVar1 = (ushort)param_1[4];
        lVar4 = lVar6;
        if ((uVar1 & 0x7f8) == 0x7f8) {
          *(ushort *)(param_1 + 4) = uVar1 & 0xf800 | uVar1 & 7 | (ushort)((uVar2 & 0xff) << 3);
        }
        else if ((uVar1 >> 3 & 0xff) != uVar2) {
          *(byte *)(param_1 + 4) = (byte)param_1[4] | 4;
        }
      }
      FUN_01272bdc(uVar2 & 0xff,uVar8,param_2 + 2,&local_8);
      uVar3 = FUN_01272abc(uVar2 & 0xff);
      uVar5 = 0xffffffffffffffff;
      if ((uVar3 & 0xffffffff) < 8) {
        uVar5 = (1L << ((uVar3 & 7) << 3)) - 1;
      }
      if (((uVar5 & local_8) != 0) && (lVar7 = lVar7 + 1, local_8 < *param_1)) {
        *param_1 = local_8;
      }
    }
    param_2 = (uint *)((long)param_2 + (ulong)*param_2 + 4);
  } while( true );
}

