
undefined8 FUN_00e4fc8c(long param_1,long *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined2 uVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  lVar8 = *param_2;
  if (lVar8 == 0) {
    uVar6 = 0x23;
  }
  else if (param_3 < *(uint *)(lVar8 + 0x20)) {
    uVar2 = *(undefined2 *)(*(long *)(lVar8 + 0x108) + 0xb0);
    if (param_3 == 0) {
      param_3 = *(uint *)(lVar8 + 0x118);
    }
    else {
      param_3 = param_3 - 1;
    }
    lVar7 = *(long *)(*(long *)(lVar8 + 0x108) + 0x60) + (ulong)param_3 * 0x38;
    uVar3 = *(ushort *)(lVar7 + 0x12);
    sVar4 = *(short *)(lVar7 + 0x18);
    sVar5 = *(short *)(lVar7 + 0x1c);
    uVar6 = *(undefined8 *)(lVar7 + 0x20);
    uVar1 = *(undefined8 *)(lVar7 + 0x28);
    uVar9 = NEON_rev64((ulong)CONCAT24(*(undefined2 *)(lVar7 + 0x16),(uint)*(ushort *)(lVar7 + 0x14)
                                      ),4);
    *(ulong *)(param_1 + 0x98) = uVar9 & 0xffff0000ffff;
    *(int *)(param_1 + 0xa0) = (int)uVar1;
    FUN_00e152c8(param_1,uVar6);
    switch(uVar2) {
    case 1:
      *(undefined1 *)(param_1 + 0xb2) = 1;
      break;
    case 2:
      *(undefined1 *)(param_1 + 0xb2) = 3;
      break;
    case 4:
      *(undefined1 *)(param_1 + 0xb2) = 4;
      break;
    case 8:
      *(undefined1 *)(param_1 + 0xb2) = 2;
      *(undefined2 *)(param_1 + 0xb0) = 0x100;
    }
    *(undefined4 *)(param_1 + 0x90) = 0x62697473;
    *(long *)(param_1 + 0x48) = (long)(int)sVar5 << 6;
    *(ulong *)(param_1 + 0x50) = (ulong)uVar3 << 6;
    *(int *)(param_1 + 0xc0) = (int)sVar4;
    *(int *)(param_1 + 0xc4) = (int)sVar5;
    *(ulong *)(param_1 + 0x30) = (ulong)(uint)(*(int *)(param_1 + 0x9c) << 6);
    *(ulong *)(param_1 + 0x38) = (ulong)(uint)(*(int *)(param_1 + 0x98) << 6);
    *(long *)(param_1 + 0x40) = (long)(int)sVar4 << 6;
    FUN_00e16d8c(param_1 + 0x30,(ulong)*(ushort *)(*(long *)(lVar8 + 0x108) + 10) << 6);
    uVar6 = 0;
  }
  else {
    uVar6 = 6;
  }
  return uVar6;
}

