
void FUN_00a174d8(long param_1,char *param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined4 uVar6;
  char local_4c;
  char local_4b;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x44);
  cVar2 = (char)param_3;
  if (param_3 < 0x80) {
    local_4c = cVar2;
    if (cVar2 < '\0') {
      if ((param_3 == 0x5c) || (param_3 == 0x7e)) goto LAB_00a175d8;
LAB_00a17588:
      local_4c = (char)param_3;
LAB_00a175bc:
      uVar5 = 4;
      if (uVar1 == 1) {
        uVar5 = 1;
      }
      uVar4 = (ulong)uVar5;
      if (uVar4 <= param_4) {
        if (uVar1 != 1) {
          param_2[0] = '\x1b';
          param_2[1] = '(';
          param_2[2] = 'J';
          param_2 = param_2 + 3;
        }
        *param_2 = local_4c;
        uVar6 = 1;
        goto LAB_00a1766c;
      }
    }
    else {
      uVar5 = 4;
      if (uVar1 == 0) {
        uVar5 = 1;
      }
      uVar4 = (ulong)uVar5;
      if (uVar4 <= param_4) {
        if (uVar1 != 0) {
          param_2[0] = '\x1b';
          param_2[1] = '(';
          param_2[2] = 'B';
          param_2 = param_2 + 3;
        }
        *param_2 = cVar2;
        *(undefined4 *)(param_1 + 0x44) = 0;
        goto LAB_00a17678;
      }
    }
LAB_00a175d0:
    uVar4 = 0xfffffffe;
  }
  else {
    if (param_3 == 0xa5) {
      local_4c = '\\';
      goto LAB_00a175bc;
    }
    if (param_3 == 0x203e) {
      param_3 = 0x7e;
      goto LAB_00a17588;
    }
    if (param_3 - 0xff61 < 0x3f) {
      local_4c = cVar2 + '@';
      if (-1 < local_4c) goto LAB_00a175bc;
    }
LAB_00a175d8:
    uVar4 = FUN_00a153d0(param_1,&local_4c,param_3,2);
    if ((int)uVar4 == -1) goto LAB_00a17678;
    if ((int)uVar4 != 2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((local_4c < '\0') || (local_4b < '\0')) {
      uVar4 = 0xffffffff;
      goto LAB_00a17678;
    }
    uVar5 = uVar1;
    if (uVar1 != 2) {
      uVar5 = 5;
    }
    uVar4 = (ulong)uVar5;
    if (param_4 < uVar4) goto LAB_00a175d0;
    if (uVar1 != 2) {
      param_2[0] = '\x1b';
      param_2[1] = '$';
      param_2[2] = 'B';
      param_2 = param_2 + 3;
    }
    *param_2 = local_4c;
    uVar6 = 2;
    param_2[1] = local_4b;
LAB_00a1766c:
    *(undefined4 *)(param_1 + 0x44) = uVar6;
  }
LAB_00a17678:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

