
/* v8::internal::MemMove(void*, void const*, unsigned long) */

void v8::internal::MemMove(void *param_1,void *param_2,ulong param_3)

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
    goto LAB_00f8f020;
  case 6:
    uVar2 = *(undefined4 *)param_2;
    *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_2 + 4);
LAB_00f8f020:
    *(undefined4 *)param_1 = uVar2;
    return;
  case 7:
    uVar1 = *(undefined2 *)((long)param_2 + 4);
    uVar2 = *(undefined4 *)param_2;
    *(undefined1 *)((long)param_1 + 6) = *(undefined1 *)((long)param_2 + 6);
    *(undefined2 *)((long)param_1 + 4) = uVar1;
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
    uVar1 = *(undefined2 *)((long)param_2 + 8);
    uVar3 = *(undefined8 *)param_2;
    *(undefined1 *)((long)param_1 + 10) = *(undefined1 *)((long)param_2 + 10);
    *(undefined2 *)((long)param_1 + 8) = uVar1;
    goto LAB_00f8f0d4;
  case 0xc:
    uVar3 = *(undefined8 *)param_2;
    *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)((long)param_2 + 8);
    break;
  case 0xd:
    uVar2 = *(undefined4 *)((long)param_2 + 8);
    uVar3 = *(undefined8 *)param_2;
    *(undefined1 *)((long)param_1 + 0xc) = *(undefined1 *)((long)param_2 + 0xc);
    goto LAB_00f8f0d0;
  case 0xe:
    uVar2 = *(undefined4 *)((long)param_2 + 8);
    uVar3 = *(undefined8 *)param_2;
    *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_2 + 0xc);
LAB_00f8f0d0:
    *(undefined4 *)((long)param_1 + 8) = uVar2;
LAB_00f8f0d4:
    *(undefined8 *)param_1 = uVar3;
    return;
  case 0xf:
    uVar1 = *(undefined2 *)((long)param_2 + 0xc);
    uVar2 = *(undefined4 *)((long)param_2 + 8);
    uVar3 = *(undefined8 *)param_2;
    *(undefined1 *)((long)param_1 + 0xe) = *(undefined1 *)((long)param_2 + 0xe);
    *(undefined2 *)((long)param_1 + 0xc) = uVar1;
    *(undefined4 *)((long)param_1 + 8) = uVar2;
    *(undefined8 *)param_1 = uVar3;
    return;
  case 0x10:
    uVar3 = *(undefined8 *)param_2;
    *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)((long)param_2 + 8);
    *(undefined8 *)param_1 = uVar3;
    return;
  default:
    memmove(param_1,param_2,param_3);
    return;
  }
  *(undefined8 *)param_1 = uVar3;
  return;
}

