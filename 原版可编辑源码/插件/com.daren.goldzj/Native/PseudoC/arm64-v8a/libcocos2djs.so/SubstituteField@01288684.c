
/* v8::internal::DisassemblingDecoder::SubstituteField(v8::internal::Instruction*, char const*) */

undefined8 __thiscall
v8::internal::DisassemblingDecoder::SubstituteField
          (DisassemblingDecoder *this,Instruction *param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  
  switch(*param_2) {
  case 'A':
    uVar1 = *(uint *)param_1 >> 0x12 & 0x1800 | (*(uint *)param_1 >> 5) << 0xd;
    uVar5 = (int)uVar1 >> 0xb;
    uVar8 = 0x2d;
    if (-1 < (int)uVar1) {
      uVar8 = 0x2b;
    }
    uVar2 = -uVar5;
    if (-1 < (int)uVar1) {
      uVar2 = uVar5;
    }
    AppendToOutput((char *)this,"#%c0x%x (addr %p)",(ulong)uVar8,(ulong)uVar2,param_1 + (int)uVar5);
    return 0xd;
  case 'B':
  case 'D':
  case 'F':
  case 'H':
  case 'Q':
  case 'R':
  case 'S':
  case 'V':
  case 'W':
  case 'X':
    uVar6 = SubstituteRegisterField(this,param_1,param_2);
    return uVar6;
  case 'C':
    if (param_2[1] == 'I') {
      uVar7 = (ulong)(*(uint *)param_1 >> 0xc & 0xf ^ 1);
    }
    else if (param_2[1] == 'B') {
      uVar7 = (ulong)(*(uint *)param_1 & 0xf);
    }
    else {
      uVar7 = (ulong)(*(uint *)param_1 >> 0xc & 0xf);
    }
    AppendToOutput((char *)this,"%s",*(undefined8 *)(&DAT_01cbdbd8 + uVar7 * 8));
    return 4;
  case 'E':
    SubstituteExtendField((Instruction *)this,(char *)param_1);
    break;
  case 'I':
    uVar6 = SubstituteImmediateField(this,param_1,param_2);
    return uVar6;
  case 'L':
    uVar5 = *(uint *)param_1 & 0xff000000;
    if ((int)uVar5 < 0x58000000) {
      if ((uVar5 == 0x18000000) || (uVar5 == 0x1c000000)) {
LAB_01288860:
        AppendToOutput((char *)this,"(addr 0x%016lx)",
                       param_1 + (((int)(*(uint *)param_1 << 8) >> 0xd) << 2));
        return 6;
      }
    }
    else if ((uVar5 == 0x58000000) || (uVar5 == 0x5c000000)) goto LAB_01288860;
  default:
switchD_012886b0_caseD_47:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 'M':
    AppendToOutput((char *)this,"%s",
                   (&PTR_s_sy__0b0000__01cbdcd8)
                   [((ulong)(*(uint *)param_1 >> 10) & 3) * 4 + ((ulong)(*(uint *)param_1 >> 8) & 3)
                   ]);
    return 1;
  case 'N':
    if ((byte)(param_2[1] | 8U) != 0x4c) goto switchD_012886b0_caseD_47;
    if ((*(uint *)param_1 >> 10 & 0x3f) != 0) {
      AppendToOutput((char *)this,", %s #%d",
                     (&PTR_DAT_01cbdbb8)[(ulong)(*(uint *)param_1 >> 0x16) & 3]);
    }
    break;
  case 'O':
    SubstituteLSRegOffsetField((Instruction *)this,(char *)param_1);
    return 9;
  case 'P':
    uVar5 = *(uint *)param_1;
    pcVar3 = "ld";
    if ((uVar5 & 0x10) != 0) {
      pcVar3 = "st";
    }
    pcVar4 = "keep";
    if ((uVar5 & 1) != 0) {
      pcVar4 = "strm";
    }
    AppendToOutput((char *)this,"p%sl%d%s",pcVar3,(ulong)((uVar5 >> 1 & 0xf) + 1),pcVar4);
    return 6;
  case 'T':
    SubstituteBranchTargetField(this,param_1,param_2);
    return 8;
  }
  return 3;
}

