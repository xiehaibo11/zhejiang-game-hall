
undefined8 FUN_00dd7414(long param_1,int param_2,long *param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long local_30;
  long lStack_28;
  long local_20;
  long lStack_18;
  
  lVar5 = *(long *)(param_1 + 0x350);
  switch(param_2) {
  case 0x124:
  case 0x125:
    iVar3 = (int)param_3[3];
    uVar1 = *(undefined4 *)(lVar5 + 0x20);
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
switchD_00dd7434_caseD_126:
    lStack_18 = param_3[3];
    local_20 = param_3[2];
    lStack_28 = param_3[1];
    local_30 = *param_3;
    uVar4 = (**(code **)(lVar5 + 0x28))(param_1,param_2,&local_30);
    return uVar4;
  case 0x146:
    iVar3 = (int)param_3[3];
    uVar1 = *(undefined4 *)(lVar5 + 0x1c);
    break;
  case 0x147:
    iVar3 = (int)param_3[3];
    uVar2 = *(undefined2 *)(lVar5 + 0x14);
    if ((iVar3 < 0) && (*(int *)(param_3 + 3) = iVar3 + 8, iVar3 + 8 < 1)) {
      puVar6 = (undefined8 *)(param_3[1] + (long)iVar3);
    }
    else {
      puVar6 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar6 + 1);
    }
    *(undefined2 *)*puVar6 = uVar2;
    return 1;
  case 0x148:
    iVar3 = (int)param_3[3];
    uVar1 = *(undefined4 *)(lVar5 + 0x18);
    break;
  default:
    if (param_2 == 0x10004) {
      iVar3 = (int)param_3[3];
      uVar4 = *(undefined8 *)(lVar5 + 0x58);
      if ((iVar3 < 0) && (*(int *)(param_3 + 3) = iVar3 + 8, iVar3 + 8 < 1)) {
        puVar6 = (undefined8 *)(param_3[1] + (long)iVar3);
      }
      else {
        puVar6 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar6 + 1);
      }
      *(undefined8 *)*puVar6 = uVar4;
      return 1;
    }
    if (param_2 != 0x10000) goto switchD_00dd7434_caseD_126;
    iVar3 = (int)param_3[3];
    uVar1 = *(undefined4 *)(lVar5 + 4);
  }
  if (iVar3 < 0) {
    *(int *)(param_3 + 3) = iVar3 + 8;
    if (iVar3 + 8 < 1) {
      puVar6 = (undefined8 *)(param_3[1] + (long)iVar3);
      goto LAB_00dd7514;
    }
  }
  puVar6 = (undefined8 *)*param_3;
  *param_3 = (long)(puVar6 + 1);
LAB_00dd7514:
  *(undefined4 *)*puVar6 = uVar1;
  return 1;
}

