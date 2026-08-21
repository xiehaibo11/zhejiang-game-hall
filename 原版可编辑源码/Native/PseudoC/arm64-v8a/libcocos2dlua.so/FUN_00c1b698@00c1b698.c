
long FUN_00c1b698(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_2 - 1 < 0x10) {
    lVar2 = FUN_00c1a314(param_1,((ulong)param_2 + 8) * 8);
    *(undefined1 *)(lVar2 + 9) = 0xb;
    *(char *)(lVar2 + 0xb) = (char)param_2;
    *(undefined1 *)(lVar2 + 10) = 0xff;
    *(long *)(lVar2 + 0x10) = lVar2 + 0x40;
    lVar3 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(lVar2 + 0x20) = 0;
    lVar3 = lVar3 + 0xe8;
    *(uint *)(lVar2 + 0x30) = param_2;
    *(undefined4 *)(lVar2 + 0x34) = 0;
    *(long *)(lVar2 + 0x28) = lVar3;
    *(long *)(lVar2 + 0x38) = lVar3;
  }
  else {
    lVar2 = FUN_00c1a314(param_1,0x40);
    *(undefined1 *)(lVar2 + 0xb) = 0;
    *(undefined1 *)(lVar2 + 9) = 0xb;
    *(undefined1 *)(lVar2 + 10) = 0xff;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    lVar3 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(lVar2 + 0x20) = 0;
    lVar3 = lVar3 + 0xe8;
    *(undefined4 *)(lVar2 + 0x30) = 0;
    *(undefined4 *)(lVar2 + 0x34) = 0;
    *(long *)(lVar2 + 0x28) = lVar3;
    *(long *)(lVar2 + 0x38) = lVar3;
    if (param_2 != 0) {
      if (0x8000001 < param_2) goto LAB_00c1b7e0;
      uVar5 = FUN_00c1a2b4(param_1,0,0,(ulong)param_2 << 3);
      *(uint *)(lVar2 + 0x30) = param_2;
      *(undefined8 *)(lVar2 + 0x10) = uVar5;
    }
  }
  if (param_3 != 0) {
    if (0x1a < param_3) {
LAB_00c1b7e0:
                    /* WARNING: Subroutine does not return */
      FUN_00bfaf54(param_1,0x8b);
    }
    uVar1 = 1 << (ulong)(param_3 & 0x1f);
    lVar3 = (ulong)uVar1 * 0x18;
    lVar4 = FUN_00c1a2b4(param_1,0,0,lVar3);
    *(uint *)(lVar2 + 0x34) = uVar1 - 1;
    *(long *)(lVar2 + 0x28) = lVar4;
    *(long *)(lVar2 + 0x38) = lVar4 + lVar3;
  }
  return lVar2;
}

