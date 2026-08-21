
ulong FUN_01133a28(long param_1,int param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  long local_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  
  lVar4 = *(long *)(param_1 + 0x350);
  switch(param_2) {
  case 0x124:
    if (*(short *)(param_1 + 0x78) != 3) break;
    goto LAB_01133a6c;
  case 0x125:
    if (*(short *)(param_1 + 0x78) != 4) break;
LAB_01133a6c:
    iVar2 = (int)param_3[3];
    if ((iVar2 < 0) && (*(int *)(param_3 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
      puVar6 = (undefined4 *)(param_3[1] + (long)iVar2);
    }
    else {
      puVar6 = (undefined4 *)*param_3;
      *param_3 = (long)(puVar6 + 2);
    }
    *(undefined4 *)(lVar4 + 0x20) = *puVar6;
    break;
  case 0x126:
  case 0x127:
  case 0x128:
  case 0x129:
  case 0x12a:
  case 299:
  case 300:
  case 0x12d:
  case 0x12e:
  case 0x12f:
  case 0x130:
  case 0x131:
  case 0x132:
  case 0x133:
  case 0x134:
  case 0x135:
  case 0x136:
  case 0x137:
  case 0x138:
  case 0x139:
  case 0x13a:
  case 0x13b:
  case 0x13c:
  case 0x13d:
  case 0x13e:
  case 0x13f:
  case 0x140:
  case 0x141:
  case 0x142:
  case 0x143:
  case 0x144:
  case 0x145:
    goto switchD_01133a5c_caseD_126;
  case 0x146:
    iVar2 = (int)param_3[3];
    if ((iVar2 < 0) && (*(int *)(param_3 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
      puVar6 = (undefined4 *)(param_3[1] + (long)iVar2);
    }
    else {
      puVar6 = (undefined4 *)*param_3;
      *param_3 = (long)(puVar6 + 2);
    }
    *(undefined4 *)(lVar4 + 0x1c) = *puVar6;
    break;
  case 0x147:
    iVar2 = (int)param_3[3];
    if ((iVar2 < 0) && (*(int *)(param_3 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
      puVar6 = (undefined4 *)(param_3[1] + (long)iVar2);
    }
    else {
      puVar6 = (undefined4 *)*param_3;
      *param_3 = (long)(puVar6 + 2);
    }
    *(short *)(lVar4 + 0x14) = (short)*puVar6;
    break;
  case 0x148:
    iVar2 = (int)param_3[3];
    if ((iVar2 < 0) && (*(int *)(param_3 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
      puVar6 = (undefined4 *)(param_3[1] + (long)iVar2);
    }
    else {
      puVar6 = (undefined4 *)*param_3;
      *param_3 = (long)(puVar6 + 2);
    }
    *(undefined4 *)(lVar4 + 0x18) = *puVar6;
    break;
  default:
    if (param_2 == 0x10004) {
      iVar2 = (int)param_3[3];
      if ((iVar2 < 0) && (*(int *)(param_3 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
        puVar5 = (undefined8 *)(param_3[1] + (long)iVar2);
      }
      else {
        puVar5 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar5 + 1);
      }
      *(undefined8 *)(*(long *)(param_1 + 0x350) + 0x58) = *puVar5;
      return 1;
    }
    if (param_2 == 0x10000) {
      iVar2 = (int)param_3[3];
      if ((iVar2 < 0) && (*(int *)(param_3 + 3) = iVar2 + 8, iVar2 + 8 < 1)) {
        puVar6 = (undefined4 *)(param_3[1] + (long)iVar2);
      }
      else {
        puVar6 = (undefined4 *)*param_3;
        *param_3 = (long)(puVar6 + 2);
      }
      *(undefined4 *)(lVar4 + 4) = *puVar6;
      return 1;
    }
    goto switchD_01133a5c_caseD_126;
  }
  lVar4 = TIFFFieldWithTag(param_1);
  if (lVar4 != 0) {
    lVar1 = param_1 + (ulong)(*(ushort *)(lVar4 + 0x18) >> 5) * 8;
    *(ulong *)(lVar1 + 0x38) =
         1L << ((ulong)*(ushort *)(lVar4 + 0x18) & 0x1f) | *(ulong *)(lVar1 + 0x38);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
  }
  return (ulong)(lVar4 != 0);
switchD_01133a5c_caseD_126:
  lStack_28 = param_3[3];
  local_30 = param_3[2];
  lStack_38 = param_3[1];
  local_40 = *param_3;
  uVar3 = (**(code **)(lVar4 + 0x30))(param_1,param_2,&local_40);
  return uVar3;
}

