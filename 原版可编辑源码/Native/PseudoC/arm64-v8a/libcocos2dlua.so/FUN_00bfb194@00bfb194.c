
void FUN_00bfb194(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar5 = *(long *)(param_1 + 0x20);
  lVar3 = lVar5 + -8;
  uVar1 = *(ulong *)(lVar5 + -8);
  if ((uVar1 & 3) != 0) goto LAB_00bfb1d0;
  lVar2 = lVar3 + ((ulong)*(byte *)(uVar1 - 3) + 2) * -8;
  lVar4 = lVar3;
  do {
    while( true ) {
      do {
        FUN_00bfcf20(param_1,param_2,lVar2);
        auVar6 = FUN_00bfacdc(param_1);
        param_2 = auVar6._8_8_;
        uVar1 = auVar6._0_8_;
        lVar3 = lVar4;
LAB_00bfb1d0:
        lVar2 = 0;
        lVar4 = lVar3;
      } while ((uVar1 & 7) != 2);
      if (*(long *)(lVar5 + -0x20) == 1) break;
      lVar2 = lVar3 - (uVar1 & 0xfffffffffffffff8);
      if ((byte)(*(char *)((*(ulong *)(lVar5 + -0x10) & 0x7fffffffffff) + 10) + 0x66U) < 0x10) {
        *(long *)(param_1 + 0x28) = lVar3;
        *(long *)(param_1 + 0x20) = lVar2 + 8;
        lVar5 = *(long *)(lVar5 + -0x18);
        *(long *)((*(ulong *)(param_1 + 0x50) & 0xfffffffffffffffc) + 0xa8) = lVar5;
      }
    }
    lVar4 = 0;
    lVar2 = lVar3;
  } while( true );
}

