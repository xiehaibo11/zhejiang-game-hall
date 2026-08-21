
undefined8 FUN_01095234(long param_1,long *param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  short sVar5;
  short sVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *param_2;
  if (lVar9 == 0) {
    uVar7 = 0x23;
  }
  else if (param_3 < *(uint *)(lVar9 + 0x20)) {
    uVar4 = *(undefined2 *)(*(long *)(lVar9 + 0x108) + 0x880f2);
    if (param_3 == 0) {
      param_3 = *(uint *)(lVar9 + 0x130);
    }
    else {
      param_3 = param_3 - 1;
    }
    lVar8 = *(long *)(*(long *)(lVar9 + 0x108) + 0x60) + (ulong)param_3 * 0x38;
    uVar1 = *(ushort *)(lVar8 + 0x12);
    sVar5 = *(short *)(lVar8 + 0x18);
    sVar6 = *(short *)(lVar8 + 0x1c);
    uVar7 = *(undefined8 *)(lVar8 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x16);
    uVar3 = *(ushort *)(lVar8 + 0x14);
    *(int *)(param_1 + 0xa0) = (int)*(undefined8 *)(lVar8 + 0x28);
    *(uint *)(param_1 + 0x98) = (uint)uVar2;
    *(uint *)(param_1 + 0x9c) = (uint)uVar3;
    ft_glyphslot_set_bitmap(param_1,uVar7);
    switch(uVar4) {
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
    *(long *)(param_1 + 0x48) = (long)(int)sVar6 << 6;
    *(ulong *)(param_1 + 0x50) = (ulong)uVar1 << 6;
    *(int *)(param_1 + 0xc0) = (int)sVar5;
    *(int *)(param_1 + 0xc4) = (int)sVar6;
    *(ulong *)(param_1 + 0x30) = (ulong)(uint)(*(int *)(param_1 + 0x9c) << 6);
    *(ulong *)(param_1 + 0x38) = (ulong)(uint)(*(int *)(param_1 + 0x98) << 6);
    *(long *)(param_1 + 0x40) = (long)(int)sVar5 << 6;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010953b4 with catch @ 01095360
                        */
    ft_synthesize_vertical_metrics
              (param_1 + 0x30,(ulong)*(ushort *)(*(long *)(lVar9 + 0x108) + 10) << 6);
    uVar7 = 0;
  }
  else {
    uVar7 = 6;
  }
  return uVar7;
}

