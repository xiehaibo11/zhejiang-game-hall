
int FUN_00e58c88(long param_1,long param_2,uint param_3,uint param_4,undefined8 param_5,long param_6
                ,undefined4 *param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  long local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  ulong local_78;
  long local_70;
  long lStack_68;
  
  if (*(int *)(param_1 + 0x538) - 1U < 2) {
    if (*(long *)(param_1 + 0x5a8) == 0) {
      iVar2 = 0x8e;
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0xc0);
      uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0x540) + param_2 * 4);
      iVar2 = FUN_00e1bb5c(uVar7,*(undefined8 *)(param_1 + 0x5a0));
      if (iVar2 == 0) {
        local_98 = 0;
        local_a8 = *(long *)(param_1 + 0x98) + 0x98;
        uStack_88 = *(undefined8 *)(param_1 + 0x5a8);
        local_90 = *(undefined8 *)(param_1 + 0x5a0);
        local_70 = *(long *)(param_1 + 0x528);
        uVar5 = *(ulong *)(param_1 + 0x530);
        lStack_68 = local_70 + uVar5;
        if ((uVar9 * 0x30 | 8) + 0x2f <= uVar5) {
          lVar6 = local_70 + uVar9 * 0x30;
          local_80 = (ulong)*(byte *)(lVar6 + 8) << 0x18 | (ulong)*(byte *)(lVar6 + 9) << 0x10 |
                     (ulong)*(byte *)(lVar6 + 10) << 8 | (ulong)*(byte *)(lVar6 + 0xb);
          local_78 = (ulong)*(byte *)(lVar6 + 0x10) << 0x18 | (ulong)*(byte *)(lVar6 + 0x11) << 0x10
                     | (ulong)*(byte *)(lVar6 + 0x12) << 8 | (ulong)*(byte *)(lVar6 + 0x13);
          local_96 = *(undefined1 *)(lVar6 + 0x36);
          if ((local_80 <= uVar5) && (local_78 <= uVar5 - local_80 >> 3)) {
            local_b8 = param_1;
            local_b0 = uVar7;
            local_a0 = param_7;
            iVar2 = FUN_00e5b788(&local_b8,param_3,0,0,0,param_4 >> 0x16 & 1);
            if (iVar2 != 0) {
              return iVar2;
            }
            if (((param_4 & 0x500000) == 0) && (*(char *)(param_6 + 0x1a) == '\a')) {
              uVar7 = **(undefined8 **)(param_1 + 0x98);
              FT_Bitmap_Init(&local_b8);
              iVar2 = FT_Bitmap_Convert(uVar7,param_6,&local_b8,1);
              if (iVar2 != 0) {
                FT_Bitmap_Done(uVar7,&local_b8);
                return iVar2;
              }
              *(undefined1 *)(param_6 + 0x1a) = local_a0._2_1_;
              *(undefined4 *)(param_6 + 8) = (undefined4)local_b0;
              *(undefined2 *)(param_6 + 0x18) = (undefined2)local_a0;
              FUN_00e152c8(*(undefined8 *)(param_1 + 0x98),local_a8);
              lVar6 = *(long *)(*(long *)(param_1 + 0x98) + 0x128);
              *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 1;
              return 0;
            }
            return 0;
          }
        }
LAB_00e58f90:
        iVar2 = 3;
      }
    }
  }
  else if (*(int *)(param_1 + 0x538) == 3) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x540) + param_2 * 4);
    *param_7 = 0;
    if (*(uint *)(param_1 + 0x20) < param_3) {
      iVar2 = 6;
    }
    else {
      uVar8 = 0xffffffff;
      lVar6 = *(long *)(param_1 + 0x528) + (ulong)uVar1 * 4;
      uVar9 = (ulong)*(byte *)(lVar6 + 8) << 0x18 | (ulong)*(byte *)(lVar6 + 9) << 0x10 |
              (ulong)*(byte *)(lVar6 + 10) << 8 | (ulong)*(byte *)(lVar6 + 0xb);
      do {
        if ((*(ulong *)(param_1 + 0x5a8) <= uVar9) ||
           (*(ulong *)(param_1 + 0x5a8) - uVar9 < (ulong)(param_3 * 4 + 0xc))) goto LAB_00e58f90;
        iVar2 = FUN_00e1bb5c(param_5,uVar9 + 4 + (ulong)(param_3 * 4) + *(long *)(param_1 + 0x5a0));
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_00e1d718(param_5,8);
        if (iVar2 != 0) {
          return iVar2;
        }
        uVar3 = FUN_00e1da20(param_5);
        uVar4 = FUN_00e1da20(param_5);
        FUN_00e1d90c(param_5);
        uVar1 = uVar4 - uVar3;
        if (uVar1 == 0) {
          return 0x9d;
        }
        if (((uVar4 < uVar3) || (uVar1 < 8)) || (*(long *)(param_1 + 0x5a8) - uVar9 < (ulong)uVar4))
        goto LAB_00e58f90;
        iVar2 = FUN_00e1bb5c(param_5,uVar9 + uVar3 + *(long *)(param_1 + 0x5a0));
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = FUN_00e1d718(param_5,uVar1);
        if (iVar2 != 0) {
          return iVar2;
        }
        FUN_00e1d970(param_5);
        FUN_00e1d970(param_5);
        iVar2 = FUN_00e1da20(param_5);
        if (iVar2 != 0x64757065) {
          if (((iVar2 == 0x6a706720) || (iVar2 == 0x7267626c)) || (iVar2 == 0x74696666)) {
            iVar2 = 2;
          }
          else {
            iVar2 = 7;
          }
LAB_00e58ff4:
          FUN_00e1d90c(param_5);
          return iVar2;
        }
        uVar8 = uVar8 + 1;
        if (3 < uVar8) {
          iVar2 = 3;
          goto LAB_00e58ff4;
        }
        param_3 = FUN_00e1d970(param_5);
        param_3 = param_3 & 0xffff;
        FUN_00e1d90c(param_5);
        iVar2 = 6;
      } while (param_3 <= *(uint *)(param_1 + 0x20));
    }
  }
  else {
    iVar2 = 2;
  }
  return iVar2;
}

