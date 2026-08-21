
/* v8::internal::DisassemblingDecoder::SubstituteRegisterField(v8::internal::Instruction*, char
   const*) */

int __thiscall
v8::internal::DisassemblingDecoder::SubstituteRegisterField
          (DisassemblingDecoder *this,Instruction *param_1,char *param_2)

{
  ushort uVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  char cVar11;
  char *local_50;
  undefined4 local_48;
  
  if (0x13 < (byte)param_2[1] - 0x61) goto switchD_01288918_caseD_62;
  cVar11 = *param_2;
  switch((uint)(byte)param_2[1]) {
  case 0x61:
    uVar10 = (ulong)(*(uint *)param_1 >> 10 & 0x1f);
    break;
  default:
    goto switchD_01288918_caseD_62;
  case 100:
    uVar10 = (ulong)(*(uint *)param_1 & 0x1f);
    if (param_2[2] != 'q') break;
    iVar9 = 3;
    cVar11 = 'W';
    if ((*(uint *)param_1 & 0x40000000) != 0) {
      cVar11 = 'X';
    }
    uVar4 = 0x71;
LAB_01288a9c:
    bVar2 = uVar4 == 0x73;
    iVar6 = 3;
    if (!bVar2) {
      iVar6 = iVar9;
    }
    goto LAB_01288aac;
  case 0x65:
    uVar10 = (ulong)(*(ushort *)(param_1 + 2) & 0xf);
    break;
  case 0x6d:
    uVar1 = *(ushort *)(param_1 + 2);
    iVar9 = 2;
    uVar10 = (ulong)(uVar1 & 0x1f);
    if (((byte)param_2[2] - 0x62 < 0x19) &&
       ((1 << (ulong)((byte)param_2[2] - 0x62 & 0x1f) & 0x1010001U) != 0)) {
      uVar3 = strtol(param_2 + 3,&local_50,10);
      iVar9 = ((int)local_50 - (int)(param_2 + 3)) + 3;
      if ((uVar1 & 0x1f) == 0x1f) {
        if (param_2[2] == 'r') {
          iVar6 = 8;
          if (((byte)param_1[3] & 0x40) != 0) {
            iVar6 = 0x10;
          }
          uVar3 = (ulong)(uint)(iVar6 * (int)uVar3);
        }
        else if (param_2[2] == 'z') {
          uVar3 = (ulong)(uint)((int)uVar3 << (ulong)(*(uint *)param_1 >> 10 & 3));
        }
        AppendToOutput((char *)this,&DAT_019f62a9,uVar3);
        return iVar9;
      }
    }
    goto LAB_01288a4c;
  case 0x6e:
    uVar10 = (ulong)(*(uint *)param_1 >> 5 & 0x1f);
    break;
  case 0x73:
    uVar10 = (ulong)(*(ushort *)(param_1 + 2) & 0x1f);
    break;
  case 0x74:
    uVar5 = *(uint *)param_1;
    uVar10 = (ulong)(uVar5 & 0x1f);
    uVar4 = (uint)(byte)param_2[2];
    if (cVar11 == 'V') {
      if (uVar4 - 0x32 < 3) {
        cVar11 = 'V';
        uVar10 = (ulong)(uVar5 + uVar4 + 0xf & 0x1f);
        iVar9 = 3;
      }
      else {
        cVar11 = 'V';
        iVar9 = 2;
      }
      goto LAB_01288a9c;
    }
    if (uVar4 != 0x32) break;
    uVar10 = (ulong)(uVar5 >> 10 & 0x1f);
    iVar9 = 3;
    goto LAB_01288a4c;
  }
  iVar9 = 2;
LAB_01288a4c:
  bVar2 = param_2[2] == 's';
  iVar6 = 3;
  if (!bVar2) {
    iVar6 = iVar9;
  }
  if (cVar11 == 'F') {
    if (((byte)param_1[2] >> 6 & 1) == 0) {
switchD_01288adc_caseD_53:
      local_48 = 1;
      lVar7 = 0x20;
      goto switchD_01288adc_caseD_42;
    }
switchD_01288adc_caseD_44:
    local_48 = 1;
    lVar7 = 0x40;
    goto switchD_01288adc_caseD_42;
  }
  if (cVar11 != 'R') {
LAB_01288aac:
    local_48 = 1;
    lVar7 = 8;
    lVar8 = 0x20;
    switch(cVar11) {
    case 'B':
      break;
    default:
switchD_01288918_caseD_62:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case 'D':
      goto switchD_01288adc_caseD_44;
    case 'H':
      local_48 = 1;
      lVar7 = 0x10;
      break;
    case 'Q':
      local_48 = 1;
      lVar7 = 0x80;
      break;
    case 'S':
      goto switchD_01288adc_caseD_53;
    case 'V':
      AppendToOutput((char *)this,&DAT_019f628c,uVar10);
      return iVar6;
    case 'W':
      goto switchD_01288adc_caseD_57;
    case 'X':
      goto switchD_01288adc_caseD_58;
    }
    goto switchD_01288adc_caseD_42;
  }
  if (*(int *)param_1 < 0) {
switchD_01288adc_caseD_58:
    lVar8 = 0x40;
    goto switchD_01288adc_caseD_57;
  }
  lVar7 = 0x20;
  iVar9 = (int)uVar10;
joined_r0x01288b00:
  if (iVar9 == 0x1f) {
    uVar5 = 0x3f;
    if (!bVar2) {
      uVar5 = 0x1f;
    }
    uVar10 = (ulong)uVar5;
  }
  local_48 = 0;
switchD_01288adc_caseD_42:
  local_50 = (char *)(uVar10 | lVar7 << 0x20);
  (**(code **)(*(long *)this + 0x228))(this,&local_50);
  return iVar6;
switchD_01288adc_caseD_57:
  iVar9 = (int)uVar10;
  lVar7 = lVar8;
  goto joined_r0x01288b00;
}

