
void FUN_00a1691c(undefined8 param_1,byte *param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  char cVar7;
  byte local_3c;
  byte local_3b;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_3 < 0x80) {
    if ((param_3 == 0x5c) || (param_3 == 0x7e)) {
LAB_00a169ac:
      iVar3 = FUN_00a153d0(param_1,&local_3c,param_3,2);
      if (iVar3 == -1) {
LAB_00a16a3c:
        param_3 = param_3 - 0xe000;
        if (0x757 < param_3) {
          uVar4 = 0xffffffff;
          goto LAB_00a16aa0;
        }
        if (param_4 < 2) goto LAB_00a16a50;
        uVar6 = (param_3 & 0xffff) / 0xbc;
        param_3 = param_3 + uVar6 * -0xbc;
        *param_2 = (char)uVar6 - 0x10;
        cVar7 = '@';
        if (0x3e < (param_3 & 0xffff)) {
          cVar7 = 'A';
        }
        bVar5 = cVar7 + (char)param_3;
      }
      else {
        if (iVar3 != 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (param_4 < 2) {
LAB_00a16a50:
          uVar4 = 0xfffffffe;
          goto LAB_00a16aa0;
        }
        uVar6 = local_3c - 0x21;
        if ((0x53 < uVar6) || (0x5d < (local_3b - 0x21 & 0xff))) goto LAB_00a16a3c;
        uVar1 = (local_3b - 0x21) + (-(uVar6 & 1) & 0x5e);
        cVar7 = -0x7f;
        if (0x3d < (uVar6 & 0x1fe)) {
          cVar7 = -0x3f;
        }
        *param_2 = cVar7 + (char)(uVar6 >> 1);
        cVar7 = '@';
        if (0x3e < (uVar1 & 0xff)) {
          cVar7 = 'A';
        }
        bVar5 = cVar7 + (char)uVar1;
      }
      uVar4 = 2;
      param_2[1] = bVar5;
      goto LAB_00a16aa0;
    }
  }
  else if (param_3 == 0xa5) {
    param_3 = 0x5c;
  }
  else if (param_3 == 0x203e) {
    param_3 = 0x7e;
  }
  else {
    if (0x3e < param_3 - 0xff61) goto LAB_00a169ac;
    param_3 = param_3 + 0x40;
  }
  local_3c = (byte)param_3;
  *param_2 = local_3c;
  uVar4 = 1;
LAB_00a16aa0:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

