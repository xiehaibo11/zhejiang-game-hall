
/* v8::internal::wasm::ModuleDecoderImpl::DecodeSection(v8::internal::wasm::SectionCode,
   v8::internal::Vector<unsigned char const>, unsigned int, bool) */

void v8::internal::wasm::ModuleDecoderImpl::DecodeSection
               (ModuleDecoderImpl *param_1,uint param_2,long param_3,long param_4,undefined4 param_5
               ,byte param_6)

{
  ModuleDecoderImpl MVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  
  lVar3 = tpidr_el0;
  lVar9 = *(long *)(lVar3 + 0x28);
  MVar1 = param_1[0x30];
  if (((byte)MVar1 & 1) == 0) {
    if ((byte)MVar1 >> 1 != 0) goto LAB_015ed930;
  }
  else if (*(long *)(param_1 + 0x38) != 0) goto LAB_015ed930;
  pcVar6 = (char *)(param_3 + param_4);
  *(long *)(param_1 + 8) = param_3;
  *(long *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x20) = param_5;
  *(char **)(param_1 + 0x18) = pcVar6;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((byte)MVar1 & 1) == 0) {
    *(undefined2 *)(param_1 + 0x30) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (((byte)param_1[0x30] & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x40));
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
  }
  param_1[0x30] = (ModuleDecoderImpl)0x0;
  MVar1 = param_1[0x68];
  cVar2 = (char)param_2;
  uVar4 = (uint)cVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x31) = 0;
  if ((0xb < (int)uVar4) || ((int)(uint)(byte)MVar1 <= (int)uVar4)) {
    switch(uVar4) {
    case 0:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
      break;
    default:
      param_1[0x68] = (ModuleDecoderImpl)(cVar2 + '\x01');
      break;
    case 0xc:
      uVar4 = 1 << (ulong)(param_2 & 0x1f);
      if ((*(uint *)(param_1 + 0x6c) & uVar4) == 0) {
        *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | uVar4;
        if (10 < (byte)MVar1) {
          pcVar5 = *(char **)(param_1 + 0x10);
          pcVar6 = "DataCount";
          pcVar7 = "Code";
LAB_015ed730:
          Decoder::errorf((uchar *)param_1,pcVar5,"The %s section must appear before the %s section"
                          ,pcVar6,pcVar7);
          goto LAB_015ed930;
        }
        if (MVar1 != (ModuleDecoderImpl)0xa) {
          param_1[0x68] = (ModuleDecoderImpl)0xa;
        }
        goto switchD_015ed63c_caseD_c;
      }
      pcVar5 = *(char **)(param_1 + 0x10);
      pcVar6 = "Multiple %s sections not allowed";
      pcVar7 = "DataCount";
      goto LAB_015ed65c;
    case 0xd:
      uVar4 = 1 << (ulong)(param_2 & 0x1f);
      if ((*(uint *)(param_1 + 0x6c) & uVar4) != 0) {
        pcVar5 = *(char **)(param_1 + 0x10);
        pcVar6 = "Multiple %s sections not allowed";
        pcVar7 = "Exception";
        goto LAB_015ed65c;
      }
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | uVar4;
      if (7 < (byte)MVar1) {
        pcVar5 = *(char **)(param_1 + 0x10);
        pcVar6 = "Exception";
        pcVar7 = "Export";
        goto LAB_015ed730;
      }
      if (MVar1 != (ModuleDecoderImpl)0x7) {
        param_1[0x68] = (ModuleDecoderImpl)0x7;
      }
      goto switchD_015ed63c_caseD_d;
    }
    if (uVar4 < 0x12) {
      switch(uVar4) {
      case 1:
        DecodeTypeSection(param_1);
        break;
      case 2:
        DecodeImportSection(param_1);
        break;
      case 3:
        DecodeFunctionSection(param_1);
        break;
      case 4:
        DecodeTableSection(param_1);
        break;
      case 5:
        DecodeMemorySection(param_1);
        break;
      case 6:
        DecodeGlobalSection(param_1);
        break;
      case 7:
        DecodeExportSection(param_1);
        break;
      case 8:
        DecodeStartSection(param_1);
        break;
      case 9:
        DecodeElementSection(param_1);
        break;
      case 10:
        DecodeCodeSection(param_1,(bool)(param_6 & 1));
        break;
      case 0xb:
        DecodeDataSection(param_1);
        break;
      case 0xc:
switchD_015ed63c_caseD_c:
        pcVar7 = *(char **)(param_1 + 0x10);
        if (((byte)param_1[0x49] >> 1 & 1) == 0) {
          Decoder::errorf((uchar *)param_1,pcVar7,"unexpected section <%s>","DataCount");
        }
        else {
          uVar4 = Decoder::consume_u32v((Decoder *)param_1,"data segments count");
          if (100000 < uVar4) {
            Decoder::errorf((uchar *)param_1,pcVar7,"%s of %u exceeds internal limit of %zu",
                            "data segments count",(ulong)uVar4,100000);
            uVar4 = 100000;
          }
          *(uint *)(*(long *)(param_1 + 0x50) + 0x4c) = uVar4;
        }
        break;
      case 0xd:
switchD_015ed63c_caseD_d:
        if (((byte)param_1[0x48] & 1) == 0) {
          Decoder::errorf((uchar *)param_1,*(char **)(param_1 + 0x10),"unexpected section <%s>",
                          "Exception");
        }
        else {
          DecodeExceptionSection(param_1);
        }
        break;
      case 0xe:
        DecodeNameSection(param_1);
        break;
      case 0xf:
        DecodeSourceMappingURLSection(param_1);
        break;
      case 0x10:
        if (-1 < (char)param_1[0x6d]) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(*(long *)(param_1 + 0x50) + 0x188),"wasm://dwarf");
        }
LAB_015ed7f8:
        pcVar7 = *(char **)(param_1 + 0x10);
        uVar8 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 8);
        if ((uint)((int)*(long *)(param_1 + 0x18) - (int)pcVar7) < (uint)uVar8) {
          Decoder::errorf((uchar *)param_1,pcVar7,"expected %u bytes, fell off end");
          *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
        }
        else {
          *(char **)(param_1 + 0x10) = pcVar7 + (uVar8 & 0xffffffff);
        }
        break;
      case 0x11:
        if (((byte)param_1[0x48] >> 4 & 1) == 0) goto LAB_015ed7f8;
        DecodeCompilationHintsSection(param_1);
      }
      pcVar7 = *(char **)(param_1 + 0x10);
      if (pcVar7 != pcVar6) {
        pcVar5 = "shorter";
        if (pcVar6 <= pcVar7) {
          pcVar5 = "longer";
        }
        Decoder::errorf((uchar *)param_1,pcVar7,
                        "section was %s than expected size (%zu bytes expected, %zu decoded)",pcVar5
                        ,param_4,(long)pcVar7 - param_3);
      }
      goto LAB_015ed930;
    }
  }
  pcVar5 = *(char **)(param_1 + 0x10);
  if ((param_2 & 0xff) < 0x12) {
    pcVar7 = *(char **)(&DAT_01cc9e78 + (long)cVar2 * 8);
  }
  else {
    pcVar7 = "<unknown>";
  }
  pcVar6 = "unexpected section <%s>";
LAB_015ed65c:
  Decoder::errorf((uchar *)param_1,pcVar5,pcVar6,pcVar7);
LAB_015ed930:
  if (*(long *)(lVar3 + 0x28) == lVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

