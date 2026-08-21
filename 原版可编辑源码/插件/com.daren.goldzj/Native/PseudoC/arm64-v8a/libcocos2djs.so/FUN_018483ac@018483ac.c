
void FUN_018483ac(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0:
    lVar3 = param_2[1];
    uVar1 = lVar3 + 0xe;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
LAB_01848658:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar2 + lVar3),"std::allocator",0xe);
    lVar3 = 0xe;
    break;
  case 1:
    lVar3 = param_2[1];
    uVar1 = lVar3 + 0x11;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_01848658;
      lVar3 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar2 + lVar3),"std::basic_string",0x11);
    lVar3 = 0x11;
    break;
  case 2:
    lVar3 = param_2[1];
    uVar1 = lVar3 + 0xb;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_01848658;
      lVar3 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar2 + lVar3),"std::string",0xb);
    lVar3 = 0xb;
    break;
  case 3:
    lVar3 = param_2[1];
    uVar1 = lVar3 + 0xc;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_01848658;
      lVar3 = param_2[1];
    }
    pcVar6 = "std::istream";
    goto LAB_0184854c;
  case 4:
    lVar3 = param_2[1];
    uVar1 = lVar3 + 0xc;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_01848658;
      lVar3 = param_2[1];
    }
    pcVar6 = "std::ostream";
LAB_0184854c:
    uVar5 = *(undefined8 *)pcVar6;
    *(undefined4 *)((undefined8 *)((long)pvVar2 + lVar3) + 1) = 0x6d616572;
    *(undefined8 *)((long)pvVar2 + lVar3) = uVar5;
    lVar3 = 0xc;
    break;
  case 5:
    lVar3 = param_2[1];
    uVar1 = lVar3 + 0xd;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_01848658;
      lVar3 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar2 + lVar3),"std::iostream",0xd);
    lVar3 = 0xd;
    break;
  default:
    goto switchD_018483dc_default;
  }
  param_2[1] = param_2[1] + lVar3;
switchD_018483dc_default:
  return;
}

