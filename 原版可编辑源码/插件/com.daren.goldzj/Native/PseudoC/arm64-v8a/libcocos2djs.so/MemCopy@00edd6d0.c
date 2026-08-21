
/* v8::internal::MemCopy(void*, void const*, unsigned long) */

void v8::internal::MemCopy(void *param_1,void *param_2,ulong param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  switch(param_3) {
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar1 = *(undefined2 *)param_2;
    *(undefined1 *)((long)param_1 + 2) = *(undefined1 *)((long)param_2 + 2);
    *(undefined2 *)param_1 = uVar1;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar2 = *(undefined4 *)param_2;
    *(undefined1 *)((long)param_1 + 4) = *(undefined1 *)((long)param_2 + 4);
    goto LAB_00edd77c;
  case 6:
    uVar2 = *(undefined4 *)param_2;
    *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_2 + 4);
    goto LAB_00edd77c;
  case 7:
    uVar2 = *(undefined4 *)param_2;
    *(undefined4 *)((long)param_1 + 3) = *(undefined4 *)((long)param_2 + 3);
LAB_00edd77c:
    *(undefined4 *)param_1 = uVar2;
    return;
  case 8:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    return;
  case 9:
    uVar3 = *(undefined8 *)param_2;
    *(undefined1 *)((long)param_1 + 8) = *(undefined1 *)((long)param_2 + 8);
    break;
  case 10:
    uVar3 = *(undefined8 *)param_2;
    *(undefined2 *)((long)param_1 + 8) = *(undefined2 *)((long)param_2 + 8);
    break;
  case 0xb:
    uVar3 = *(undefined8 *)param_2;
    *(undefined4 *)((long)param_1 + 7) = *(undefined4 *)((long)param_2 + 7);
    break;
  case 0xc:
    uVar3 = *(undefined8 *)param_2;
    *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)((long)param_2 + 8);
    break;
  case 0xd:
    uVar3 = *(undefined8 *)param_2;
    *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_2 + 5);
    break;
  case 0xe:
    uVar3 = *(undefined8 *)param_2;
    *(undefined8 *)((long)param_1 + 6) = *(undefined8 *)((long)param_2 + 6);
    break;
  case 0xf:
    uVar3 = *(undefined8 *)param_2;
    *(undefined8 *)((long)param_1 + 7) = *(undefined8 *)((long)param_2 + 7);
    break;
  case 0x10:
    uVar3 = *(undefined8 *)param_2;
    *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_2 + 8);
    *(undefined8 *)param_1 = uVar3;
    return;
  default:
    memcpy(param_1,param_2,param_3);
    return;
  }
  *(undefined8 *)param_1 = uVar3;
  return;
}

