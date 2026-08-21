
/* v8::internal::DisassemblingDecoder::SubstituteImmediateField(v8::internal::Instruction*, char
   const*) */

undefined8 __thiscall
v8::internal::DisassemblingDecoder::SubstituteImmediateField
          (DisassemblingDecoder *this,Instruction *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  double dVar15;
  
  switch(param_2[1]) {
  case 'A':
    lVar8 = (long)(int)((*(uint *)param_1 >> 10 & 0xfff) <<
                       (ulong)((*(uint *)param_1 >> 0x16 & 3) * 0xc & 0x1f));
    AppendToOutput((char *)this,"#0x%lx (%ld)",lVar8,lVar8);
LAB_01288c40:
    uVar5 = 7;
    break;
  case 'B':
    uVar5 = SubstituteBitfieldImmediateField(this,param_1,param_2);
    return uVar5;
  case 'C':
switchD_01288c0c_caseD_43:
    uVar2 = 0x2b;
    if (*(int *)param_1 * 0x100 < 0) {
      uVar2 = 0x2d;
    }
    AppendToOutput((char *)this,"#%c0x%lx",(ulong)uVar2,(long)(((*(int *)param_1 << 8) >> 0xd) << 2)
                  );
    uVar5 = 6;
    break;
  case 'D':
    AppendToOutput((char *)this,"#0x%x",(ulong)(*(uint *)param_1 >> 5 & 0xffff));
    uVar5 = 6;
    break;
  case 'E':
    uVar2 = *(uint *)param_1 >> 10 & 0x3f;
    goto LAB_01288db8;
  case 'F':
    uVar2 = *(uint *)param_1;
    if (param_2[3] != 'F') {
      if (param_2[3] == 'S') {
        fVar14 = (float)Instruction::ImmFP32(param_1);
        dVar15 = (double)fVar14;
      }
      else {
        dVar15 = (double)Instruction::ImmFP64(param_1);
      }
      AppendToOutput((char *)this,dVar15,"#0x%x (%.4f)",(ulong)(uVar2 >> 0xd & 0xff));
      return 9;
    }
    uVar2 = 0x40 - (uVar2 >> 10 & 0x3f);
LAB_01288db8:
    pcVar6 = "#%d";
LAB_01288dc0:
    AppendToOutput((char *)this,pcVar6,(ulong)uVar2);
    uVar5 = 8;
    break;
  default:
    printf("%s",param_2);
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 'L':
    switch(param_2[2]) {
    case 'L':
      pcVar6 = "pc%+d";
      uVar9 = (ulong)(uint)(((*(int *)param_1 << 8) >> 0xd) << 2);
      goto LAB_01288fc4;
    default:
      goto switchD_01288c0c_caseD_43;
    case 'P':
      iVar4 = (*(int *)param_1 << 10) >> 0x19;
      if (iVar4 != 0) {
        AppendToOutput((char *)this,&DAT_019f62a7,
                       (ulong)(uint)(iVar4 << (ulong)((byte)param_2[3] - 0x30 & 0x1f)));
      }
      return 4;
    case 'S':
      uVar2 = (*(int *)param_1 << 0xb) >> 0x17;
      if (uVar2 != 0) {
LAB_01289144:
        uVar9 = (ulong)uVar2;
        puVar7 = &DAT_019f62a7;
        goto LAB_0128914c;
      }
      break;
    case 'U':
      if ((*(uint *)param_1 & 0x3ffc00) != 0) {
        uVar2 = CalcLSDataSize(*(uint *)param_1 & 0xc4c00000);
        uVar2 = (*(uint *)param_1 >> 10 & 0xfff) << (ulong)(uVar2 & 0x1f);
        goto LAB_01289144;
      }
    }
    goto LAB_01289154;
  case 'M':
    cVar1 = param_2[5];
    if ((cVar1 == 'N') || (cVar1 == 'I')) {
      uVar2 = *(uint *)param_1;
      uVar11 = ((ulong)(uVar2 >> 5) & 0xffff) << ((ulong)(uVar2 >> 0x11) & 0x30);
      if (cVar1 == 'N') {
        uVar11 = ~uVar11;
      }
      uVar9 = uVar11 & 0xffffffff;
      if ((int)uVar2 < 0) {
        uVar9 = uVar11;
      }
LAB_01288d18:
      AppendToOutput((char *)this,"#0x%lx",uVar9);
      return 8;
    }
    AppendToOutput((char *)this,"#0x%lx",(ulong)(*(uint *)param_1 >> 5 & 0xffff));
    uVar2 = *(uint *)param_1 >> 0x15 & 3;
    if (uVar2 == 0) {
      return 8;
    }
    uVar2 = uVar2 << 4;
    pcVar6 = ", lsl #%d";
    goto LAB_01288dc0;
  case 'N':
    uVar3 = *(uint *)param_1;
    uVar2 = 0x6e;
    if ((uVar3 & 8) != 0) {
      uVar2 = 0x4e;
    }
    uVar13 = 0x7a;
    if ((uVar3 & 4) != 0) {
      uVar13 = 0x5a;
    }
    uVar12 = 99;
    if ((uVar3 & 2) != 0) {
      uVar12 = 0x43;
    }
    uVar10 = 0x76;
    if ((uVar3 & 1) != 0) {
      uVar10 = 0x56;
    }
    AppendToOutput((char *)this,"#%c%c%c%c",(ulong)uVar2,(ulong)uVar13,(ulong)uVar12,(ulong)uVar10);
    uVar5 = 5;
    break;
  case 'P':
    uVar2 = *(ushort *)(param_1 + 2) & 0x1f;
    goto LAB_01288eb8;
  case 'S':
    uVar2 = *(uint *)param_1 >> 0x1a & 0x20 | *(uint *)param_1 >> 0x13 & 0x1f;
LAB_01288eb8:
    AppendToOutput((char *)this,&DAT_019f62a9,(ulong)uVar2);
    uVar5 = 2;
    break;
  case 'T':
    uVar5 = Instruction::ImmLogical(param_1);
    AppendToOutput((char *)this,"#0x%lx",uVar5);
    uVar5 = 4;
    break;
  case 'V':
    switch(param_2[2]) {
    case 'B':
      uVar13 = *(uint *)param_1;
      pcVar6 = "%d";
      uVar3 = uVar13 >> 10 & 2;
      uVar2 = uVar13 >> 0x14 & 1 | (uVar3 | uVar13 >> 0x15 & 1) << 1;
      if ((uVar13 & 0xc00000) != 0x400000) {
        uVar2 = uVar3 | uVar13 >> 0x15 & 1;
      }
LAB_01288cc0:
      AppendToOutput((char *)this,pcVar6,(ulong)uVar2);
      return 0xd;
    case 'E':
      pcVar6 = "#%ld";
      uVar9 = (ulong)(*(uint *)param_1 >> 0xb & 0xf);
      break;
    case 'I':
      iVar4 = strncmp(param_2,"IVInsIndex",10);
      if (iVar4 == 0) {
        uVar2 = *(uint *)param_1;
        uVar13 = uVar2 >> 0x10;
        uVar3 = (uVar13 & 10) >> 1 | (uVar13 & 0x15) << 1;
        uVar3 = (uint)LZCOUNT(((uVar3 & 0x33333333) >> 2 |
                              ((uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x3030303) << 2) << 4) << 0x18);
        if (3 < uVar3) {
          return 0;
        }
        iVar4 = strncmp(param_2,"IVInsIndex1",0xb);
        if (iVar4 == 0) {
          uVar2 = (uVar13 & 0x1f) >> (ulong)(uVar3 + 1 & 0x1f);
        }
        else {
          iVar4 = strncmp(param_2,"IVInsIndex2",0xb);
          if (iVar4 != 0) {
            return 0;
          }
          uVar2 = (uVar2 >> 0xb & 0xf) >> (ulong)(uVar3 & 0x1f);
        }
        AppendToOutput((char *)this,"%d",(ulong)uVar2);
        return 0xb;
      }
    default:
switchD_01288c90_caseD_43:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unimplemented code");
    case 'L':
      uVar2 = *(uint *)param_1;
      pcVar6 = "%d";
      uVar9 = (ulong)((uVar2 >> 0x1b & 8 | uVar2 >> 10 & 4 | uVar2 >> 10 & 3) >>
                     (ulong)((byte)param_2[8] - 0x30 & 0x1f));
      break;
    case 'M':
      iVar4 = strncmp(param_2,"IVMIImmFPSingle",0xf);
      if (iVar4 == 0) {
        uVar9 = Instruction::ImmNEONabcdefgh(param_1);
        fVar14 = (float)Instruction::ImmNEONFP32(param_1);
        dVar15 = (double)fVar14;
LAB_012891a4:
        AppendToOutput((char *)this,dVar15,"#0x%x (%.4f)",uVar9 & 0xffffffff);
        return 0xf;
      }
      iVar4 = strncmp(param_2,"IVMIImmFPDouble",0xf);
      if (iVar4 == 0) {
        uVar9 = Instruction::ImmNEONabcdefgh(param_1);
        dVar15 = (double)Instruction::ImmNEONFP64(param_1);
        goto LAB_012891a4;
      }
      iVar4 = strncmp(param_2,"IVMIImm8",8);
      if (iVar4 == 0) {
        uVar9 = Instruction::ImmNEONabcdefgh(param_1);
        uVar9 = uVar9 & 0xffffffff;
        goto LAB_01288d18;
      }
      iVar4 = strncmp(param_2,"IVMIImm",7);
      if (iVar4 != 0) {
        iVar4 = strncmp(param_2,"IVMIShiftAmt1",0xd);
        if (iVar4 == 0) {
          uVar2 = *(uint *)param_1 >> 10 & 0x18;
        }
        else {
          iVar4 = strncmp(param_2,"IVMIShiftAmt2",0xd);
          if (iVar4 != 0) goto switchD_01288c90_caseD_43;
          uVar2 = 8 << (ulong)(*(uint *)param_1 >> 0xc & 1);
        }
        pcVar6 = "#%d";
        goto LAB_01288cc0;
      }
      uVar9 = Instruction::ImmNEONabcdefgh(param_1);
      uVar11 = uVar9 & 0xffffffff;
      AppendToOutput((char *)this,"#0x%lx",
                     -(uVar11 >> 7 & 1) & 0xff00000000000000 |
                     -(uVar11 >> 6 & 1) & 0xff000000000000 |
                     -(uVar11 >> 5 & 1) & 0xff0000000000 |
                     -(uVar11 >> 4 & 1) & 0xff00000000 |
                     -(uVar11 >> 3 & 1) & 0xff000000 |
                     -(uVar11 >> 2 & 1) & 0xff0000 |
                     -(uVar11 >> 1 & 1) & 0xff00 | -(uVar9 & 1) & 0xff);
      goto LAB_01288c40;
    }
LAB_01288fc4:
    AppendToOutput((char *)this,pcVar6,uVar9);
    uVar5 = 9;
    break;
  case 's':
    if (param_2[2] == '2') {
      uVar2 = *(uint *)param_1;
      uVar3 = HighestSetBitPosition((ulong)(uVar2 >> 0x13) & 0xf);
      uVar9 = (ulong)((uVar2 >> 0x10 & 0x7f) - (8 << (ulong)(uVar3 & 0x1f)));
      puVar7 = &DAT_019f62a9;
    }
    else {
      if (param_2[2] != '1') goto switchD_01288c90_caseD_43;
      uVar2 = HighestSetBitPosition((ulong)(*(uint *)param_1 >> 0x13) & 0xf);
      uVar9 = (ulong)((0x10 << (ulong)(uVar2 & 0x1f)) - (*(ushort *)(param_1 + 2) & 0x7f));
      puVar7 = &DAT_019f62a9;
    }
LAB_0128914c:
    AppendToOutput((char *)this,puVar7,uVar9);
LAB_01289154:
    uVar5 = 3;
  }
  return uVar5;
}

