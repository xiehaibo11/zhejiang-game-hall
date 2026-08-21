
ulong FUN_01328b9c(int *param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  
  lVar7 = 0;
  lVar4 = 0x60b;
  lVar3 = 0x202;
  switch(param_2) {
  case '\0':
    break;
  case '\x01':
    lVar7 = 0x101;
    break;
  case '\x02':
    goto switchD_01328bd4_caseD_2;
  case '\x03':
    lVar7 = 0x203;
    break;
  case '\x04':
    lVar7 = 0x204;
    break;
  case '\x05':
    lVar7 = 0x405;
    break;
  case '\x06':
    lVar7 = 0x206;
    break;
  case '\a':
    lVar7 = 0x707;
    break;
  case '\b':
    lVar7 = 0x708;
    break;
  case '\t':
    lVar7 = 0x709;
    break;
  case '\n':
    lVar7 = 0x70a;
    break;
  case '\v':
    goto switchD_01328bd4_caseD_b;
  case '\f':
    lVar4 = 0x60c;
    goto switchD_01328bd4_caseD_b;
  case '\r':
    lVar4 = 0xd;
switchD_01328bd4_caseD_b:
    iVar1 = param_1[5];
    if (iVar1 < param_1[4]) {
      param_1[5] = iVar1 + 1;
      uVar5 = lVar4 << 0x20;
      uVar6 = *(int *)(*(long *)(param_1 + 6) + (long)iVar1 * 0x10) << 1;
      goto LAB_01328ce4;
    }
    goto LAB_01328c98;
  default:
    goto switchD_01328bd4_default;
  }
  lVar3 = lVar7;
switchD_01328bd4_caseD_2:
  lVar4 = lVar3;
  iVar1 = param_1[1];
  if (iVar1 < *param_1) {
    param_1[1] = iVar1 + 1;
    uVar6 = *(int *)(*(long *)(param_1 + 2) + (long)iVar1 * 0xc) << 1;
    uVar5 = lVar4 << 0x20;
  }
  else {
LAB_01328c98:
    if (0xc < (byte)(param_2 - 1U)) {
switchD_01328bd4_default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar2 = (uint)(1 << (ulong)(*(uint *)(&DAT_01a06384 + (long)(char)(param_2 - 1U) * 4) & 0x1f))
            >> 3;
    if (uVar2 < 2) {
      uVar2 = 1;
    }
    uVar6 = param_1[8] << 1 ^ 0xffffffff;
    param_1[8] = uVar2 + param_1[8];
    uVar5 = lVar4 << 0x20;
  }
LAB_01328ce4:
  return uVar5 | uVar6;
}

