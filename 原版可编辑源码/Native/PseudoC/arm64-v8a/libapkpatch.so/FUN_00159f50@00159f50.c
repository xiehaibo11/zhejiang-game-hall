
void FUN_00159f50(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0:
    lVar5 = param_2[1];
    uVar1 = lVar5 + 0xe;
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
LAB_0015a214:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar2 + lVar5),"std::allocator",0xe);
    lVar5 = 0xe;
    break;
  case 1:
    lVar5 = param_2[1];
    uVar1 = lVar5 + 0x11;
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
      if (pvVar2 == (void *)0x0) goto LAB_0015a214;
      lVar5 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar2 + lVar5),"std::basic_string",0x11);
    lVar5 = 0x11;
    break;
  case 2:
    lVar5 = param_2[1];
    uVar1 = lVar5 + 0x46;
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
      if (pvVar2 == (void *)0x0) goto LAB_0015a214;
      lVar5 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar2 + lVar5),
                    "std::basic_string<char, std::char_traits<char>, std::allocator<char> >",0x46);
    lVar5 = 0x46;
    break;
  case 3:
    lVar5 = param_2[1];
    uVar1 = lVar5 + 0x31;
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
      if (pvVar2 == (void *)0x0) goto LAB_0015a214;
      lVar5 = param_2[1];
    }
    puVar3 = (undefined8 *)((long)pvVar2 + lVar5);
    pcVar6 = "std::basic_istream<char, std::char_traits<char> >";
    goto LAB_0015a18c;
  case 4:
    lVar5 = param_2[1];
    uVar1 = lVar5 + 0x31;
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
      if (pvVar2 == (void *)0x0) goto LAB_0015a214;
      lVar5 = param_2[1];
    }
    puVar3 = (undefined8 *)((long)pvVar2 + lVar5);
    pcVar6 = "std::basic_ostream<char, std::char_traits<char> >";
LAB_0015a18c:
    uVar12 = *(undefined8 *)(pcVar6 + 0x18);
    uVar11 = *(undefined8 *)(pcVar6 + 0x10);
    uVar8 = *(undefined8 *)(pcVar6 + 0x28);
    uVar7 = *(undefined8 *)(pcVar6 + 0x20);
    uVar10 = *(undefined8 *)(pcVar6 + 8);
    uVar9 = *(undefined8 *)pcVar6;
    *(undefined1 *)(puVar3 + 6) = 0x3e;
    puVar3[3] = uVar12;
    puVar3[2] = uVar11;
    puVar3[5] = uVar8;
    puVar3[4] = uVar7;
    puVar3[1] = uVar10;
    *puVar3 = uVar9;
    lVar5 = 0x31;
    break;
  case 5:
    lVar5 = param_2[1];
    uVar1 = lVar5 + 0x32;
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
      if (pvVar2 == (void *)0x0) goto LAB_0015a214;
      lVar5 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar2 + lVar5),
                    "std::basic_iostream<char, std::char_traits<char> >",0x32);
    lVar5 = 0x32;
    break;
  default:
    goto switchD_00159f84_default;
  }
  param_2[1] = param_2[1] + lVar5;
switchD_00159f84_default:
  return;
}

