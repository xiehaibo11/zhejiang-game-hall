
undefined8 FUN_00c147b0(long param_1,ulong param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  long *plVar7;
  
  lVar4 = FUN_00c1450c();
  uVar1 = *(ushort *)(lVar4 + 10);
  plVar7 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
  plVar7[2] = param_1;
  while( true ) {
    uVar3 = *(uint *)(*plVar7 + (ulong)uVar1 * 0x18);
    uVar2 = uVar3 >> 0x1c;
    if (uVar2 != 8) break;
    uVar1 = (ushort)uVar3;
  }
  if ((uVar2 == 2) && (*(int *)(*plVar7 + (ulong)uVar1 * 0x18 + 4) == 8)) {
    uVar3 = FUN_00c0ffa8(plVar7,*(undefined8 *)(lVar4 + 0x10));
    if ((uVar3 < *(uint *)(plVar7 + 0x19)) && (*(short *)(plVar7[0x18] + (ulong)uVar3 * 2) != 0)) {
      lVar4 = plVar7[5];
      if (uVar3 < *(uint *)(lVar4 + 0x30)) {
        puVar5 = (ulong *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar3 * 8);
      }
      else {
        puVar5 = (ulong *)FUN_00c1c648(param_1,lVar4,uVar3);
      }
      if (param_2 != 0) {
        *puVar5 = param_2 | 0xfffb800000000000;
        if ((*(byte *)(lVar4 + 8) >> 2 & 1) != 0) {
          lVar6 = *(long *)(param_1 + 0x10);
          *(byte *)(lVar4 + 8) = *(byte *)(lVar4 + 8) & 0xfb;
          *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar6 + 0x50);
          *(long *)(lVar6 + 0x50) = lVar4;
        }
        return 0;
      }
      *puVar5 = 0xffffffffffffffff;
      uVar2 = *(uint *)((long)plVar7 + 0xcc);
      *(undefined2 *)(plVar7[0x18] + (ulong)uVar3 * 2) = 0;
      if (uVar2 < uVar3) {
        uVar3 = uVar2;
      }
      *(uint *)((long)plVar7 + 0xcc) = uVar3;
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb3a0(param_1,0xe0f);
}

