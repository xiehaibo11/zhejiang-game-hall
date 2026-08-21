
int FUN_0109eb28(ulong param_1,long param_2,uint param_3,uint param_4,undefined8 param_5,
                long param_6,undefined4 *param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  ulong local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  ulong local_80;
  long local_78;
  long lStack_70;
  undefined8 local_68;
  
  if (*(int *)(param_1 + 0x4c0) - 1U < 2) {
    uVar8 = *(undefined8 *)(param_1 + 0xc0);
    iVar2 = (**(code **)(param_1 + 0x330))(param_1,0x43424454,uVar8,&local_68);
    if (((iVar2 != 0) &&
        (iVar2 = (**(code **)(param_1 + 0x330))(param_1,0x45424454,uVar8,&local_68), iVar2 != 0)) &&
       (iVar2 = (**(code **)(param_1 + 0x330))(param_1,0x62646174,uVar8,&local_68), iVar2 != 0)) {
      return iVar2;
    }
    local_a0 = 0;
    local_b0 = *(long *)(param_1 + 0x98) + 0x98;
    local_c0 = param_1;
    local_b8 = uVar8;
    local_a8 = param_7;
    local_98 = FT_Stream_Pos(uVar8);
    uStack_90 = local_68;
    local_78 = *(long *)(param_1 + 0x4b0);
    uVar6 = *(ulong *)(param_1 + 0x4b8);
    lStack_70 = local_78 + uVar6;
    if ((param_2 * 0x30 | 8U) + 0x2f <= uVar6) {
      lVar7 = local_78 + param_2 * 0x30;
      local_88 = (ulong)*(byte *)(lVar7 + 8) << 0x18 | (ulong)*(byte *)(lVar7 + 9) << 0x10 |
                 (ulong)*(byte *)(lVar7 + 10) << 8 | (ulong)*(byte *)(lVar7 + 0xb);
      local_80 = (ulong)*(byte *)(lVar7 + 0x10) << 0x18 | (ulong)*(byte *)(lVar7 + 0x11) << 0x10 |
                 (ulong)*(byte *)(lVar7 + 0x12) << 8 | (ulong)*(byte *)(lVar7 + 0x13);
      local_9e = *(undefined1 *)(lVar7 + 0x36);
      if ((local_88 <= uVar6) && (local_80 <= uVar6 - local_88 >> 3)) {
        iVar2 = FUN_010a02c8(&local_c0,param_3,0,0);
        if (iVar2 != 0 || (param_4 & 0x100000) != 0) {
          return iVar2;
        }
        if (*(char *)(param_6 + 0x1a) == '\a') {
          uVar8 = **(undefined8 **)(param_1 + 0x98);
          FT_Bitmap_New(&local_c0);
          iVar2 = FT_Bitmap_Convert(uVar8,param_6,&local_c0,1);
          if (iVar2 != 0) {
            FT_Bitmap_Done(uVar8,&local_c0);
            return iVar2;
          }
          *(undefined1 *)(param_6 + 0x1a) = local_a8._2_1_;
          *(undefined4 *)(param_6 + 8) = (undefined4)local_b8;
          *(undefined2 *)(param_6 + 0x18) = (undefined2)local_a8;
          ft_glyphslot_set_bitmap(*(undefined8 *)(param_1 + 0x98),local_b0);
          lVar7 = *(long *)(*(long *)(param_1 + 0x98) + 0x128);
          *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | 1;
          return 0;
        }
        return 0;
      }
    }
LAB_0109ec90:
    iVar2 = 3;
  }
  else if (*(int *)(param_1 + 0x4c0) == 3) {
    *param_7 = 0;
    uVar1 = *(uint *)(*(long *)(param_1 + 0x4b0) + param_2 * 4 + 8);
    iVar2 = (**(code **)(param_1 + 0x330))(param_1,0x73626978,param_5,&local_c0);
    if (iVar2 == 0) {
      iVar3 = FT_Stream_Pos(param_5);
      if (*(uint *)(param_1 + 0x20) < param_3) {
LAB_0109ece8:
        iVar2 = 6;
      }
      else {
        uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
        uVar6 = (ulong)uVar1;
        iVar3 = uVar1 + iVar3;
        iVar10 = -1;
        do {
          if ((local_c0 <= uVar6) || (local_c0 - uVar6 < (ulong)(param_3 * 4 + 0xc)))
          goto LAB_0109ec90;
          iVar2 = FT_Stream_Seek(param_5,iVar3 + 4 + param_3 * 4);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FT_Stream_EnterFrame(param_5,8);
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar4 = FT_Stream_GetULong(param_5);
          uVar5 = FT_Stream_GetULong(param_5);
          FT_Stream_ExitFrame(param_5);
          uVar1 = uVar5 - uVar4;
          if (uVar1 == 0) goto LAB_0109ece8;
          if (((uVar5 < uVar4) || (uVar1 < 8)) || (local_c0 - uVar6 < (ulong)uVar5))
          goto LAB_0109ec90;
          iVar2 = FT_Stream_Seek(param_5,iVar3 + uVar4);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = FT_Stream_EnterFrame(param_5,uVar1);
          if (iVar2 != 0) {
            return iVar2;
          }
          FT_Stream_GetUShort(param_5);
          FT_Stream_GetUShort(param_5);
          iVar2 = FT_Stream_GetULong(param_5);
          iVar9 = 7;
          if (0x6a70671f < iVar2) {
            if (((iVar2 == 0x6a706720) || (iVar2 == 0x7267626c)) || (iVar2 == 0x74696666)) {
              iVar9 = 2;
            }
LAB_0109ef34:
            FT_Stream_ExitFrame(param_5);
            return iVar9;
          }
          if (iVar2 != 0x64757065) goto LAB_0109ef34;
          iVar10 = iVar10 + 1;
          if (3 < iVar10) {
            iVar9 = 3;
            goto LAB_0109ef34;
          }
          param_3 = FT_Stream_GetUShort(param_5);
          param_3 = param_3 & 0xffff;
          FT_Stream_ExitFrame(param_5);
          iVar2 = 6;
        } while (param_3 <= *(uint *)(param_1 + 0x20));
      }
    }
  }
  else {
    iVar2 = 2;
  }
  return iVar2;
}

