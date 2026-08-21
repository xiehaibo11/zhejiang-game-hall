
void FUN_0015a870(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0:
    lVar4 = param_2[1];
    uVar1 = lVar4 + 0xe;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar3 = param_2[2] << 1;
      if (uVar1 <= uVar3) {
        uVar1 = uVar3;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
LAB_0015ab20:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar4 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar2 + lVar4),"std::allocator",0xe);
    lVar4 = 0xe;
    break;
  case 1:
    lVar4 = param_2[1];
    uVar1 = lVar4 + 0x11;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar3 = param_2[2] << 1;
      if (uVar1 <= uVar3) {
        uVar1 = uVar3;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0015ab20;
      lVar4 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar2 + lVar4),"std::basic_string",0x11);
    lVar4 = 0x11;
    break;
  case 2:
    lVar4 = param_2[1];
    uVar1 = lVar4 + 0xb;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar3 = param_2[2] << 1;
      if (uVar1 <= uVar3) {
        uVar1 = uVar3;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0015ab20;
      lVar4 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar2 + lVar4),"std::string",0xb);
    lVar4 = 0xb;
    break;
  case 3:
    lVar4 = param_2[1];
    uVar1 = lVar4 + 0xc;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar3 = param_2[2] << 1;
      if (uVar1 <= uVar3) {
        uVar1 = uVar3;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0015ab20;
      lVar4 = param_2[1];
    }
    pcVar6 = "std::istream";
    goto LAB_0015aaa0;
  case 4:
    lVar4 = param_2[1];
    uVar1 = lVar4 + 0xc;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar3 = param_2[2] << 1;
      if (uVar1 <= uVar3) {
        uVar1 = uVar3;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0015ab20;
      lVar4 = param_2[1];
    }
    pcVar6 = "std::ostream";
LAB_0015aaa0:
    uVar5 = *(undefined8 *)pcVar6;
    *(undefined4 *)((undefined8 *)((long)pvVar2 + lVar4) + 1) = 0x6d616572;
    *(undefined8 *)((long)pvVar2 + lVar4) = uVar5;
    lVar4 = 0xc;
    break;
  case 5:
    lVar4 = param_2[1];
    uVar1 = lVar4 + 0xd;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar3 = param_2[2] << 1;
      if (uVar1 <= uVar3) {
        uVar1 = uVar3;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0015ab20;
      lVar4 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar2 + lVar4),"std::iostream",0xd);
    lVar4 = 0xd;
    break;
  default:
    goto switchD_0015a8a4_default;
  }
  param_2[1] = param_2[1] + lVar4;
switchD_0015a8a4_default:
  return;
}

