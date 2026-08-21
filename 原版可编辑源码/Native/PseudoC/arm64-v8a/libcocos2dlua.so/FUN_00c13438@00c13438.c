
undefined8 FUN_00c13438(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
  plVar6[2] = param_1;
  uVar2 = FUN_00c132c0(param_1,plVar6,0);
  uVar3 = FUN_00c29e20(param_1,2);
  lVar7 = plVar6[5];
  uVar1 = *(uint *)(*plVar6 + (ulong)uVar2 * 0x18);
  if (((uVar1 >> 0x1c != 1) && ((uVar1 & 0xf4000000) != 0x34000000)) &&
     ((uVar1 & 0xf8000000) != 0x38000000)) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb458(param_1,1,0xb83);
  }
  puVar4 = (ulong *)FUN_00c1c648(param_1,lVar7,-uVar2);
  if (*puVar4 == 0xffffffffffffffff) {
    *puVar4 = uVar3 | 0xfffa000000000000;
    if ((*(byte *)(lVar7 + 8) >> 2 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x10);
      *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) & 0xfb;
      *(undefined8 *)(lVar7 + 0x18) = *(undefined8 *)(lVar5 + 0x50);
      *(long *)(lVar5 + 0x50) = lVar7;
    }
    uVar3 = FUN_00c1a314(plVar6[2],0x14);
    *(undefined1 *)(uVar3 + 9) = 10;
    *(undefined2 *)(uVar3 + 10) = 0x15;
    lVar7 = *(long *)(param_1 + 0x28);
    *(uint *)(uVar3 + 0x10) = uVar2;
    *(ulong *)(lVar7 + -8) = uVar3 | 0xfffa800000000000;
    if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x20)
       ) {
      FUN_00c19f80(param_1);
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb3a0(param_1,0x3b7);
}

