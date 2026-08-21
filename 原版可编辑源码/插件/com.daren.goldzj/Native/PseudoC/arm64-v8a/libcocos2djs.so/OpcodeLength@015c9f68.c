
/* v8::internal::wasm::WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1>::OpcodeLength(v8::internal::wasm::Decoder*,
   unsigned char const*) */

void v8::internal::wasm::WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)1>::OpcodeLength
               (Decoder *param_1,uchar *param_2)

{
  uchar *puVar1;
  byte *pbVar2;
  byte bVar3;
  Decoder DVar4;
  long lVar5;
  undefined3 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  char *pcVar11;
  int iVar12;
  uchar *puVar13;
  ulong uVar14;
  byte *pbVar15;
  uint local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  uint local_78 [4];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  iVar7 = 1;
  uVar6 = local_90._5_3_;
  uVar8 = local_90._4_4_;
  switch(*param_2) {
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x06':
    local_98[0] = 0xfff;
    BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::BlockTypeImmediate
              ((BlockTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)&local_90,
               (WasmFeatures *)local_98,param_1,param_2);
    goto LAB_015ca380;
  default:
    goto switchD_015c9fc4_caseD_5;
  case '\b':
    local_88 = 0;
    if (*(byte **)(param_1 + 0x18) <= param_2 + 1) {
      local_80 = (ulong)local_80._4_4_ << 0x20;
      pcVar11 = "exception index";
LAB_015ca45c:
      Decoder::errorf((uchar *)param_1,(char *)(param_2 + 1),"expected %s",pcVar11);
      iVar7 = 1;
      goto switchD_015c9fc4_caseD_5;
    }
    bVar3 = param_2[1];
    if (-1 < (char)bVar3) {
LAB_015ca304:
      local_88 = 0;
      local_80 = CONCAT44(local_80._4_4_,1);
      goto LAB_015ca30c;
    }
    uVar8 = bVar3 & 0x7f;
    pcVar11 = "exception index";
    goto LAB_015ca508;
  case '\n':
    pbVar2 = param_2 + 1;
    if (pbVar2 < *(byte **)(param_1 + 0x18)) {
      uVar8 = *pbVar2 & 0x7f;
      if ((char)*pbVar2 < '\0') {
        uVar8 = Decoder::
                read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                          (param_1,param_2 + 2,(uint *)((ulong)&local_90 | 4),"branch depth",uVar8);
        uVar14 = local_90 >> 0x20;
      }
      else {
        uVar14 = 1;
        local_90 = 0x100000000;
      }
    }
    else {
      local_90 = local_90 & 0xffffffff;
      Decoder::errorf((uchar *)param_1,(char *)pbVar2,"expected %s","branch depth");
      uVar14 = 0;
      uVar8 = 0;
    }
    local_90 = CONCAT44(local_90._4_4_,uVar8);
    local_80 = 0;
    pbVar2 = param_2 + uVar14 + 1;
    if (pbVar2 < *(byte **)(param_1 + 0x18)) {
      if ((char)*pbVar2 < '\0') {
        Decoder::
        read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                  (param_1,param_2 + uVar14 + 2,local_78,"exception index",*pbVar2 & 0x7f);
      }
      else {
        local_78[0] = 1;
      }
    }
    else {
      local_78[0] = 0;
      Decoder::errorf((uchar *)param_1,(char *)pbVar2,"expected %s","exception index");
    }
    uVar8 = local_78[0] + local_90._4_4_;
    break;
  case '\f':
  case '\r':
    if (*(byte **)(param_1 + 0x18) <= param_2 + 1) {
      local_90 = local_90 & 0xffffffff;
      pcVar11 = "branch depth";
      goto LAB_015ca45c;
    }
    bVar3 = param_2[1];
    if ((char)bVar3 < '\0') {
      puVar10 = (uint *)((ulong)&local_90 | 4);
      uVar8 = bVar3 & 0x7f;
      pcVar11 = "branch depth";
      goto LAB_015ca4dc;
    }
LAB_015ca294:
    local_90 = CONCAT44(1,(uint)local_90);
    goto LAB_015ca30c;
  case '\x0e':
    uVar14 = (ulong)local_90._4_4_;
    local_90 = uVar14 << 0x20;
    pbVar2 = param_2 + 1;
    if (pbVar2 < *(byte **)(param_1 + 0x18)) {
      uVar9 = *pbVar2 & 0x7f;
      if ((char)*pbVar2 < '\0') {
        uVar9 = Decoder::
                read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                          (param_1,param_2 + 2,(uint *)&local_90,"table count",uVar9);
        uVar14 = local_90 & 0xffffffff;
      }
      else {
        uVar14 = 1;
        local_90 = CONCAT44(uVar8,1);
      }
    }
    else {
      local_90 = uVar14 << 0x20;
      Decoder::errorf((uchar *)param_1,(char *)pbVar2,"expected %s","table count");
      uVar14 = 0;
      uVar9 = 0;
    }
    uVar8 = 0;
    pbVar15 = pbVar2 + uVar14;
    DVar4 = param_1[0x30];
    if (((byte)DVar4 & 1) == 0) goto LAB_015ca610;
    while (uVar14 = *(ulong *)(param_1 + 0x38), uVar8 <= uVar9) {
      while( true ) {
        if (uVar14 != 0) goto LAB_015ca674;
        uVar8 = uVar8 + 1;
        if (pbVar15 < *(byte **)(param_1 + 0x18)) {
          if ((char)*pbVar15 < '\0') {
            Decoder::
            read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                      (param_1,pbVar15 + 1,(uint *)&local_90,"branch table entry",*pbVar15 & 0x7f);
            uVar14 = local_90 & 0xffffffff;
          }
          else {
            uVar14 = 1;
            local_90 = CONCAT44(local_90._4_4_,1);
          }
          pbVar15 = pbVar15 + uVar14;
          DVar4 = param_1[0x30];
        }
        else {
          local_90 = (ulong)local_90._4_4_ << 0x20;
          Decoder::errorf((uchar *)param_1,(char *)pbVar15,"expected %s","branch table entry");
          DVar4 = param_1[0x30];
        }
        if (((byte)DVar4 & 1) != 0) break;
LAB_015ca610:
        uVar14 = (ulong)((byte)DVar4 >> 1);
        if (uVar9 < uVar8) goto LAB_015ca674;
      }
    }
LAB_015ca674:
    uVar8 = (int)pbVar15 - (int)pbVar2;
    break;
  case '\x10':
  case '\x12':
    local_88 = 0;
    if (*(byte **)(param_1 + 0x18) <= param_2 + 1) {
      local_80 = (ulong)local_80._4_4_ << 0x20;
LAB_015ca434:
      pcVar11 = "function index";
      goto LAB_015ca45c;
    }
    bVar3 = param_2[1];
    if (-1 < (char)bVar3) goto LAB_015ca304;
    uVar8 = bVar3 & 0x7f;
    pcVar11 = "function index";
    goto LAB_015ca508;
  case '\x11':
  case '\x13':
    CallIndirectImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::CallIndirectImmediate
              ((CallIndirectImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)&local_90,
               0xfff,param_1,param_2);
    goto LAB_015ca510;
  case '\x1c':
    SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::SelectTypeImmediate
              ((SelectTypeImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)&local_90,
               param_1,param_2);
LAB_015ca380:
    uVar8 = (uint)local_90;
    break;
  case ' ':
  case '!':
  case '\"':
    local_90._0_5_ = (uint5)(uint)local_90;
    local_90 = CONCAT35(uVar6,(uint5)local_90);
    if (*(byte **)(param_1 + 0x18) <= param_2 + 1) {
      local_88 = (ulong)local_88._4_4_ << 0x20;
      pcVar11 = "local index";
      goto LAB_015ca45c;
    }
    bVar3 = param_2[1];
    if (-1 < (char)bVar3) {
      local_88 = CONCAT44(local_88._4_4_,1);
      goto LAB_015ca30c;
    }
    Decoder::
    read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
              (param_1,param_2 + 2,(uint *)&local_88,"local index",bVar3 & 0x7f);
    goto LAB_015c9fdc;
  case '#':
  case '$':
    local_90._0_5_ = (uint5)(uint)local_90;
    local_90 = CONCAT35(uVar6,(uint5)local_90);
    local_88 = 0;
    if (*(byte **)(param_1 + 0x18) <= param_2 + 1) {
      local_80 = (ulong)local_80._4_4_ << 0x20;
      pcVar11 = "global index";
      goto LAB_015ca45c;
    }
    bVar3 = param_2[1];
    if (-1 < (char)bVar3) goto LAB_015ca304;
    uVar8 = bVar3 & 0x7f;
    pcVar11 = "global index";
LAB_015ca508:
    local_88 = 0;
    Decoder::
    read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
              (param_1,param_2 + 2,(uint *)&local_80,pcVar11,uVar8);
LAB_015ca510:
    uVar8 = (uint)local_80;
    break;
  case '%':
  case '&':
    local_90 = 0x100000000;
    if (*(byte **)(param_1 + 0x18) <= param_2 + 1) {
      local_90 = 0;
      pcVar11 = "table index";
      goto LAB_015ca45c;
    }
    bVar3 = param_2[1];
    if (-1 < (char)bVar3) goto LAB_015ca294;
    puVar10 = (uint *)((ulong)&local_90 | 4);
    uVar8 = bVar3 & 0x7f;
    pcVar11 = "table index";
    goto LAB_015ca4dc;
  case '(':
  case ')':
  case '*':
  case '+':
  case ',':
  case '-':
  case '.':
  case '/':
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
  case ':':
  case ';':
  case '<':
  case '=':
  case '>':
    MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::MemoryAccessImmediate
              ((MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)&local_90,
               param_1,param_2,0xffffffff);
    goto LAB_015c9fdc;
  case '?':
  case '@':
    param_2 = param_2 + 1;
    if ((*(uchar **)(param_1 + 0x18) < param_2) ||
       ((int)*(uchar **)(param_1 + 0x18) == (int)param_2)) {
      pcVar11 = "memory index";
      goto LAB_015ca6f4;
    }
    if (*param_2 != '\0') {
      Decoder::errorf((uchar *)param_1,(char *)param_2,"expected memory index 0, found %u");
    }
    goto LAB_015ca30c;
  case 'A':
    Decoder::read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>
              (param_1,param_2 + 1,(uint *)((ulong)&local_90 | 4),"immi32");
    goto LAB_015ca4e4;
  case 'B':
    Decoder::read_i64v<(v8::internal::wasm::Decoder::ValidateFlag)1>
              (param_1,param_2 + 1,(uint *)&local_88,"immi64");
LAB_015c9fdc:
    uVar8 = (uint)local_88;
    break;
  case 'C':
    iVar7 = 5;
    goto switchD_015c9fc4_caseD_5;
  case 'D':
    iVar7 = 9;
    goto switchD_015c9fc4_caseD_5;
  case 0xd2:
    local_90 = 0x100000000;
    if (*(byte **)(param_1 + 0x18) <= param_2 + 1) {
      local_90 = 0;
      goto LAB_015ca434;
    }
    bVar3 = param_2[1];
    if (-1 < (char)bVar3) goto LAB_015ca294;
    puVar10 = (uint *)((ulong)&local_90 | 4);
    uVar8 = bVar3 & 0x7f;
    pcVar11 = "function index";
LAB_015ca4dc:
    Decoder::
    read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
              (param_1,param_2 + 2,puVar10,pcVar11,uVar8);
LAB_015ca4e4:
    uVar8 = local_90._4_4_;
    break;
  case 0xfc:
    puVar13 = *(uchar **)(param_1 + 0x18);
    puVar1 = param_2 + 1;
    if ((puVar13 < puVar1) || (iVar12 = (int)puVar13, iVar12 == (int)puVar1)) {
      pcVar11 = "numeric_index";
      param_2 = puVar1;
      goto LAB_015ca6f4;
    }
    iVar7 = 2;
    switch(*puVar1) {
    case '\0':
    case '\x01':
    case '\x02':
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
    case '\a':
      break;
    case '\b':
      local_90 = (ulong)local_90._4_4_ << 0x20;
      Decoder::read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                (param_1,param_2 + 2,(uint *)&local_90,"data segment index");
      puVar1 = puVar1 + (local_90 & 0xffffffff) + 1;
      if ((*(uchar **)(param_1 + 0x18) < puVar1) ||
         ((int)*(uchar **)(param_1 + 0x18) == (int)puVar1)) {
        Decoder::error(param_1,puVar1,"memory index");
      }
      else if (*puVar1 != '\0') {
        Decoder::errorf((uchar *)param_1,(char *)puVar1,"expected memory index 0, found %u");
      }
      iVar7 = (uint)local_90 + 3;
      break;
    case '\t':
      pcVar11 = "data segment index";
      goto LAB_015ca878;
    case '\n':
      puVar1 = param_2 + 2;
      if ((puVar13 < puVar1) || (iVar12 == (int)puVar1)) {
        Decoder::error(param_1,puVar1,"memory index");
      }
      else if (*puVar1 != '\0') {
        Decoder::errorf((uchar *)param_1,(char *)puVar1,"expected memory index 0, found %u");
      }
      puVar1 = param_2 + 3;
      if ((*(uchar **)(param_1 + 0x18) < puVar1) ||
         ((int)*(uchar **)(param_1 + 0x18) == (int)puVar1)) {
        Decoder::error(param_1,puVar1,"memory index");
        iVar7 = 4;
      }
      else if (*puVar1 == '\0') {
        iVar7 = 4;
      }
      else {
        Decoder::errorf((uchar *)param_1,(char *)puVar1,"expected memory index 0, found %u");
        iVar7 = 4;
      }
      break;
    case '\v':
      puVar1 = param_2 + 2;
      if ((puVar13 < puVar1) || (iVar12 == (int)puVar1)) {
        Decoder::error(param_1,puVar1,"memory index");
        iVar7 = 3;
        break;
      }
      if (*puVar1 != '\0') {
        Decoder::errorf((uchar *)param_1,(char *)puVar1,"expected memory index 0, found %u");
        iVar7 = 3;
        break;
      }
      goto switchD_015ca1f4_caseD_5;
    case '\f':
      local_98[0] = 0;
      Decoder::read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                (param_1,param_2 + 2,local_98,"elem segment index");
      local_90 = 0x100000000;
      pbVar2 = puVar1 + (ulong)local_98[0] + 1;
      if (pbVar2 < *(byte **)(param_1 + 0x18)) {
        if ((char)*pbVar2 < '\0') {
          Decoder::
          read_leb_tail<unsigned_int,(v8::internal::wasm::Decoder::ValidateFlag)1,(v8::internal::wasm::Decoder::AdvancePCFlag)0,(v8::internal::wasm::Decoder::TraceFlag)0,1>
                    (param_1,puVar1 + (ulong)local_98[0] + 2,(uint *)((ulong)&local_90 | 4),
                     "table index",*pbVar2 & 0x7f);
        }
        else {
          local_90 = 0x100000000;
        }
      }
      else {
        local_90 = 0;
        Decoder::errorf((uchar *)param_1,(char *)pbVar2,"expected %s","table index");
      }
      iVar7 = local_90._4_4_ + local_98[0] + 2;
      break;
    case '\r':
      pcVar11 = "elem segment index";
LAB_015ca878:
      Decoder::read_i32v<(v8::internal::wasm::Decoder::ValidateFlag)1>
                (param_1,param_2 + 2,(uint *)((ulong)&local_90 | 4),pcVar11);
      iVar7 = local_90._4_4_ + 2;
      break;
    case '\x0e':
      TableCopyImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::TableCopyImmediate
                ((TableCopyImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)&local_90,
                 param_1,param_2);
      iVar7 = (uint)local_80 + 2;
      break;
    case '\x0f':
    case '\x10':
    case '\x11':
      if (puVar13 <= puVar1) {
        Decoder::errorf((uchar *)param_1,(char *)puVar1,"expected %s","table index");
        goto LAB_015ca30c;
      }
switchD_015ca1f4_caseD_5:
      iVar7 = 3;
      break;
    default:
      pcVar11 = "invalid numeric opcode";
      goto LAB_015ca6f4;
    }
    goto switchD_015c9fc4_caseD_5;
  case 0xfd:
    puVar1 = param_2 + 1;
    if ((*(uchar **)(param_1 + 0x18) < puVar1) || ((int)*(uchar **)(param_1 + 0x18) == (int)puVar1))
    {
      pcVar11 = "simd_index";
LAB_015ca948:
      Decoder::error(param_1,param_2 + 1,pcVar11);
switchD_015ca1f4_caseD_0:
      MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1>::MemoryAccessImmediate
                ((MemoryAccessImmediate<(v8::internal::wasm::Decoder::ValidateFlag)1> *)&local_90,
                 param_1,param_2 + 1,0xffffffff);
      iVar7 = (uint)local_88 + 2;
    }
    else {
      iVar7 = 2;
      switch(*puVar1) {
      case '\0':
      case '\x01':
        goto switchD_015ca1f4_caseD_0;
      default:
        pcVar11 = "invalid SIMD opcode";
        goto LAB_015ca6f4;
      case '\x03':
        iVar7 = 0x12;
        break;
      case '\x04':
      case '\b':
      case '\f':
      case '\x0f':
      case '\x12':
      case '\x15':
      case '\x18':
      case '\x19':
      case '\x1a':
      case '\x1b':
      case '\x1c':
      case '\x1d':
      case '\x1e':
      case '\x1f':
      case ' ':
      case '!':
      case '\"':
      case '#':
      case '$':
      case '%':
      case '&':
      case '\'':
      case '(':
      case ')':
      case '*':
      case '+':
      case ',':
      case '-':
      case '.':
      case '/':
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      case ':':
      case ';':
      case '<':
      case '=':
      case '>':
      case '?':
      case '@':
      case 'A':
      case 'B':
      case 'C':
      case 'D':
      case 'E':
      case 'F':
      case 'G':
      case 'H':
      case 'I':
      case 'J':
      case 'K':
      case 'L':
      case 'M':
      case 'N':
      case 'O':
      case 'P':
      case 'Q':
      case 'R':
      case 'S':
      case 'T':
      case 'U':
      case 'V':
      case 'W':
      case 'X':
      case 'Y':
      case 'Z':
      case '[':
      case '\\':
      case ']':
      case '^':
      case '_':
      case '`':
      case 'a':
      case 'b':
      case 'c':
      case 'd':
      case 'e':
      case 'f':
      case 'g':
      case 'h':
      case 'i':
      case 'j':
      case 'k':
      case 'l':
      case 'm':
      case 'n':
      case 'o':
      case 'p':
      case 'q':
      case 'r':
      case 's':
      case 't':
      case 'u':
      case 'v':
      case 'w':
      case 'x':
      case 'y':
      case '|':
      case '\x7f':
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
      case 0x90:
      case 0x91:
      case 0x95:
      case 0x96:
      case 0x97:
      case 0x98:
      case 0x99:
      case 0x9a:
      case 0x9b:
      case 0x9c:
      case 0x9d:
      case 0x9e:
      case 0x9f:
      case 0xa0:
      case 0xa1:
      case 0xa2:
      case 0xa3:
      case 0xa4:
      case 0xa5:
      case 0xa6:
      case 0xa7:
      case 0xa8:
      case 0xa9:
      case 0xaa:
      case 0xab:
      case 0xac:
      case 0xaf:
      case 0xb0:
      case 0xb1:
      case 0xb2:
      case 0xbd:
      case 0xbe:
      case 0xbf:
      case 0xc0:
      case 0xc2:
      case 0xc3:
      case 0xc4:
      case 0xc5:
      case 0xc6:
      case 199:
      case 200:
      case 0xc9:
      case 0xca:
      case 0xcb:
      case 0xcc:
      case 0xcd:
      case 0xce:
      case 0xcf:
      case 0xd0:
      case 0xd1:
      case 0xd2:
      case 0xd3:
      case 0xd4:
      case 0xd5:
      case 0xd6:
      case 0xd7:
      case 0xe0:
      case 0xe1:
        break;
      case '\x05':
      case '\x06':
      case '\a':
      case '\t':
      case '\n':
      case '\v':
      case '\r':
      case '\x0e':
      case '\x10':
      case '\x11':
      case '\x13':
      case '\x14':
      case '\x16':
      case '\x17':
        goto switchD_015ca1f4_caseD_5;
      }
    }
    goto switchD_015c9fc4_caseD_5;
  case 0xfe:
    pbVar2 = param_2 + 1;
    if ((*(byte **)(param_1 + 0x18) < pbVar2) || ((int)*(byte **)(param_1 + 0x18) == (int)pbVar2)) {
      pcVar11 = "atomic_index";
      goto LAB_015ca948;
    }
    bVar3 = *pbVar2;
    if ((bVar3 - 0x10 < 0x3f) || (bVar3 < 3)) goto switchD_015ca1f4_caseD_0;
    if (bVar3 == 3) goto switchD_015ca1f4_caseD_5;
    pcVar11 = "invalid Atomics opcode";
LAB_015ca6f4:
    Decoder::error(param_1,param_2,pcVar11);
LAB_015ca30c:
    iVar7 = 2;
    goto switchD_015c9fc4_caseD_5;
  }
  iVar7 = uVar8 + 1;
switchD_015c9fc4_caseD_5:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar7);
}

