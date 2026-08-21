
int FUN_0109f6b4(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  byte *pbVar10;
  ulong local_48;
  
  plVar1 = (long *)(param_1 + 0x4b0);
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  iVar6 = (**(code **)(param_1 + 0x330))(param_1,0x43424c43,param_2,&local_48);
  if (iVar6 == 0) {
    iVar6 = 2;
LAB_0109f778:
    *(int *)(param_1 + 0x4c0) = iVar6;
    if (local_48 < 8) {
LAB_0109f788:
      iVar6 = 3;
      lVar8 = *plVar1;
      goto joined_r0x0109f8d0;
    }
    if (iVar6 - 1U < 2) {
      iVar6 = FT_Stream_ExtractFrame(param_2,local_48,plVar1);
      if (iVar6 == 0) {
        pbVar10 = *(byte **)(param_1 + 0x4b0);
        *(ulong *)(param_1 + 0x4b8) = local_48;
        if (((ulong)*pbVar10 << 0x18 | (ulong)pbVar10[1] << 0x10) != 0x20000) {
LAB_0109f8c8:
          iVar6 = 2;
          lVar8 = *plVar1;
          goto joined_r0x0109f8d0;
        }
        uVar9 = (*(uint *)(pbVar10 + 4) & 0xff00ff00) >> 8 |
                (*(uint *)(pbVar10 + 4) & 0xff00ff) << 8;
        uVar3 = uVar9 << 0x10;
        uVar9 = uVar9 >> 0x10 | uVar3;
        if (uVar3 == 0) {
          if (local_48 < ((ulong)uVar9 * 0x30 | 8)) {
            uVar9 = (uint)((local_48 - 8) / 0x30);
          }
          *(uint *)(param_1 + 0x4c4) = uVar9;
          return 0;
        }
        goto LAB_0109f788;
      }
    }
    else {
      if (iVar6 != 3) {
        return 0;
      }
      iVar6 = FT_Stream_EnterFrame(param_2,8);
      if (iVar6 == 0) {
        sVar4 = FT_Stream_GetUShort(param_2);
        sVar5 = FT_Stream_GetUShort(param_2);
        uVar7 = FT_Stream_GetULong(param_2);
        FT_Stream_ExitFrame(param_2);
        if (sVar4 == 0) goto LAB_0109f8c8;
        if (sVar5 == 1) {
          if (uVar7 >> 0x10 != 0) goto LAB_0109f788;
        }
        else {
          iVar6 = 3;
          if ((sVar5 != 3) || (uVar7 >> 0x10 != 0)) goto LAB_0109f840;
        }
        uVar2 = local_48 - 8 >> 2;
        if ((uVar7 & 0xffffffff) * 4 + 8 <= local_48) {
          uVar2 = uVar7;
        }
        lVar8 = FT_Stream_Pos(param_2);
        iVar6 = FT_Stream_Seek(param_2,lVar8 + -8);
        if (iVar6 == 0) {
          uVar7 = (ulong)((int)uVar2 * 4 + 8);
          *(ulong *)(param_1 + 0x4b8) = uVar7;
          iVar6 = FT_Stream_ExtractFrame(param_2,uVar7,plVar1);
          if (iVar6 == 0) {
            *(int *)(param_1 + 0x4c4) = (int)uVar2;
            return 0;
          }
        }
      }
    }
  }
  else {
    iVar6 = (**(code **)(param_1 + 0x330))(param_1,0x45424c43,param_2,&local_48);
    if ((iVar6 == 0) ||
       (iVar6 = (**(code **)(param_1 + 0x330))(param_1,0x626c6f63,param_2,&local_48), iVar6 == 0)) {
      iVar6 = 1;
      goto LAB_0109f778;
    }
    iVar6 = (**(code **)(param_1 + 0x330))(param_1,0x73626978,param_2,&local_48);
    if (iVar6 == 0) {
      iVar6 = 3;
      goto LAB_0109f778;
    }
  }
LAB_0109f840:
  lVar8 = *plVar1;
joined_r0x0109f8d0:
  if (lVar8 != 0) {
    FT_Stream_ReleaseFrame(param_2,plVar1);
  }
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  return iVar6;
}

