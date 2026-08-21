
void FUN_00a1a0c8(undefined8 param_1,char *param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  char cVar7;
  char local_3c;
  char local_3b;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_3 < 0x80) {
    *param_2 = (char)param_3;
LAB_00a1a0fc:
    uVar5 = 1;
  }
  else {
    iVar4 = FUN_00a203fc(param_1,&local_3c,param_3,2);
    if (iVar4 == -1) {
      uVar1 = param_3 - 0xe000;
      if (0x585 < uVar1) {
        if (param_3 != 0x20ac) {
          uVar5 = 0xffffffff;
          goto LAB_00a1a1c8;
        }
        *param_2 = -0x80;
        goto LAB_00a1a0fc;
      }
      if (param_4 < 2) goto LAB_00a1a15c;
      if (param_3 < 0xe4c6) {
        cVar7 = -0x56;
        if (0x233 < uVar1) {
          cVar7 = -0xe;
        }
        cVar3 = (char)((uVar1 & 0xffff) / 0x5e);
        local_3b = (char)uVar1 + cVar3 * -0x5e + -0x5f;
        *param_2 = cVar7 + cVar3;
      }
      else {
        uVar6 = (param_3 + 0x3a & 0xff) / 0x60;
        uVar1 = param_3 + 0x3a + uVar6 * -0x60;
        *param_2 = (char)uVar6 + -0x5f;
        local_3b = '@';
        if (0x3e < (uVar1 & 0xff)) {
          local_3b = 'A';
        }
        local_3b = local_3b + (char)uVar1;
      }
    }
    else {
      if (iVar4 != 2) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (param_4 < 2) {
LAB_00a1a15c:
        uVar5 = 0xfffffffe;
        goto LAB_00a1a1c8;
      }
      *param_2 = local_3c;
    }
    param_2[1] = local_3b;
    uVar5 = 2;
  }
LAB_00a1a1c8:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

