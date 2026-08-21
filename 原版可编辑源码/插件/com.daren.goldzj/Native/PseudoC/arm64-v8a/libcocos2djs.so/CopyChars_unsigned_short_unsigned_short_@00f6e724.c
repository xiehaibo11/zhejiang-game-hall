
/* void v8::internal::CopyChars<unsigned short, unsigned short>(unsigned short*, unsigned short
   const*, unsigned long) */

void v8::internal::CopyChars<unsigned_short,unsigned_short>
               (ushort *param_1,ushort *param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *param_1 = *param_2;
    return;
  case 2:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 3:
    uVar1 = *(undefined4 *)param_2;
    param_1[2] = param_2[2];
    *(undefined4 *)param_1 = uVar1;
    return;
  case 4:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    return;
  case 5:
    uVar2 = *(undefined8 *)param_2;
    param_1[4] = param_2[4];
    goto LAB_00f6e7c0;
  case 6:
    uVar2 = *(undefined8 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
LAB_00f6e7c0:
    *(undefined8 *)param_1 = uVar2;
    return;
  case 7:
    uVar1 = *(undefined4 *)(param_2 + 4);
    uVar2 = *(undefined8 *)param_2;
    param_1[6] = param_2[6];
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined8 *)param_1 = uVar2;
    return;
  case 8:
    uVar4 = *(undefined8 *)(param_2 + 4);
    uVar3 = *(undefined8 *)param_2;
    break;
  case 9:
    uVar4 = *(undefined8 *)(param_2 + 4);
    uVar3 = *(undefined8 *)param_2;
    param_1[8] = param_2[8];
    break;
  case 10:
    uVar4 = *(undefined8 *)(param_2 + 4);
    uVar3 = *(undefined8 *)param_2;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    break;
  case 0xb:
    uVar1 = *(undefined4 *)(param_2 + 8);
    uVar4 = *(undefined8 *)(param_2 + 4);
    uVar3 = *(undefined8 *)param_2;
    param_1[10] = param_2[10];
    *(undefined4 *)(param_1 + 8) = uVar1;
    break;
  case 0xc:
    uVar4 = *(undefined8 *)(param_2 + 4);
    uVar3 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    break;
  case 0xd:
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar4 = *(undefined8 *)(param_2 + 4);
    uVar3 = *(undefined8 *)param_2;
    param_1[0xc] = param_2[0xc];
    goto LAB_00f6e860;
  case 0xe:
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar4 = *(undefined8 *)(param_2 + 4);
    uVar3 = *(undefined8 *)param_2;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
LAB_00f6e860:
    *(undefined8 *)(param_1 + 8) = uVar2;
    break;
  case 0xf:
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar4 = *(undefined8 *)(param_2 + 4);
    uVar3 = *(undefined8 *)param_2;
    param_1[0xe] = param_2[0xe];
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    *(undefined8 *)(param_1 + 8) = uVar2;
    break;
  case 0x10:
    uVar2 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 0xc);
    uVar3 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)param_1 = uVar2;
    *(undefined8 *)(param_1 + 0xc) = uVar4;
    *(undefined8 *)(param_1 + 8) = uVar3;
    return;
  default:
    memmove(param_1,param_2,param_3 << 1);
    return;
  }
  *(undefined8 *)(param_1 + 4) = uVar4;
  *(undefined8 *)param_1 = uVar3;
  return;
}

