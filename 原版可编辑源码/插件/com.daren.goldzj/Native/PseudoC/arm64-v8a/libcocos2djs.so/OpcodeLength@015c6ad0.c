
/* v8::internal::wasm::WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)0>::OpcodeLength(v8::internal::wasm::Decoder*,
   unsigned char const*) */

void v8::internal::wasm::WasmDecoder<(v8::internal::wasm::Decoder::ValidateFlag)0>::OpcodeLength
               (Decoder *param_1,uchar *param_2)

{
  byte bVar1;
  uchar uVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uchar *puVar9;
  long lVar10;
  byte *pbVar11;
  ImmI64Immediate<(v8::internal::wasm::Decoder::ValidateFlag)0> aIStack_38 [8];
  int local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  iVar5 = 1;
  switch(*param_2) {
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x06':
    uVar6 = param_2[1] - 0x40;
    if (((uVar6 < 0x40) && ((1L << ((ulong)uVar6 & 0x3f) & 0xf801810000000001U) != 0)) ||
       (-1 < (char)param_2[1])) goto switchD_015c6b1c_caseD_3f;
LAB_015c6b3c:
    if (-1 < (char)param_2[2]) goto switchD_015c6c74_caseD_5;
    if (-1 < (char)param_2[3]) goto switchD_015c6cc0_caseD_a;
    iVar5 = 5;
    if ((char)param_2[4] < '\0') {
      iVar5 = 6;
    }
    break;
  case '\b':
  case '\x10':
  case '\x12':
  case ' ':
  case '!':
  case '\"':
  case '#':
  case '$':
  case '%':
  case '&':
  case 'A':
  case 0xd2:
    if ((char)param_2[1] < '\0') goto LAB_015c6b3c;
  case '?':
  case '@':
switchD_015c6b1c_caseD_3f:
    iVar5 = 2;
    break;
  case '\n':
    if ((char)param_2[1] < '\0') {
      if ((char)param_2[2] < '\0') {
        if ((char)param_2[3] < '\0') {
          uVar6 = 4;
          if ((char)param_2[4] < '\0') {
            uVar6 = 5;
          }
        }
        else {
          uVar6 = 3;
        }
      }
      else {
        uVar6 = 2;
      }
    }
    else {
      uVar6 = 1;
    }
    puVar9 = param_2 + uVar6;
    if ((char)puVar9[1] < '\0') {
      if ((char)puVar9[2] < '\0') {
        if (-1 < (char)puVar9[3]) goto LAB_015c6c10;
LAB_015c6f34:
        uVar2 = puVar9[4];
LAB_015c6c1c:
        local_30 = 4;
        if ((char)uVar2 < '\0') {
          local_30 = 5;
        }
      }
      else {
LAB_015c6c00:
        local_30 = 2;
      }
    }
    else {
LAB_015c6bf0:
      local_30 = 1;
    }
    goto LAB_015c6c28;
  case '\f':
  case '\r':
    if ((char)param_2[1] < '\0') {
      if (-1 < (char)param_2[2]) goto switchD_015c6c74_caseD_5;
      if ((char)param_2[3] < '\0') {
        iVar5 = 5;
        if ((char)param_2[4] < '\0') {
          iVar5 = 6;
        }
        if (*(long *)(lVar3 + 0x28) == local_28) {
          return;
        }
        goto LAB_015c6d7c;
      }
      goto switchD_015c6cc0_caseD_a;
    }
    goto switchD_015c6b1c_caseD_3f;
  case '\x0e':
    pbVar7 = param_2 + 1;
    uVar6 = *pbVar7 & 0x7f;
    if ((char)*pbVar7 < '\0') {
      uVar6 = uVar6 | (param_2[2] & 0x7f) << 7;
      if ((char)param_2[2] < '\0') {
        uVar6 = uVar6 | (param_2[3] & 0x7f) << 0xe;
        if ((char)param_2[3] < '\0') {
          uVar6 = uVar6 | (param_2[4] & 0x7f) << 0x15;
          if ((char)param_2[4] < '\0') {
            lVar10 = 5;
            uVar6 = uVar6 | (uint)param_2[5] << 0x1c;
          }
          else {
            lVar10 = 4;
          }
        }
        else {
          lVar10 = 3;
        }
      }
      else {
        lVar10 = 2;
      }
    }
    else {
      lVar10 = 1;
    }
    uVar8 = 0;
    pbVar11 = pbVar7 + lVar10;
    do {
      uVar8 = uVar8 + 1;
      if ((char)*pbVar11 < '\0') {
        if ((char)pbVar11[1] < '\0') {
          if ((char)pbVar11[2] < '\0') {
            lVar10 = 4;
            if ((char)pbVar11[3] < '\0') {
              lVar10 = 5;
            }
          }
          else {
            lVar10 = 3;
          }
        }
        else {
          lVar10 = 2;
        }
      }
      else {
        lVar10 = 1;
      }
      pbVar11 = pbVar11 + lVar10;
    } while (uVar8 <= uVar6);
    local_30 = (int)pbVar11 - (int)pbVar7;
    goto LAB_015c6c2c;
  case '\x11':
  case '\x13':
    if ((char)param_2[1] < '\0') {
      if ((char)param_2[2] < '\0') {
        if ((char)param_2[3] < '\0') {
          uVar6 = 4;
          if ((char)param_2[4] < '\0') {
            uVar6 = 5;
          }
        }
        else {
          uVar6 = 3;
        }
      }
      else {
        uVar6 = 2;
      }
    }
    else {
      uVar6 = 1;
    }
    puVar9 = param_2 + uVar6;
    if (-1 < (char)puVar9[1]) goto LAB_015c6bf0;
    if (-1 < (char)puVar9[2]) goto LAB_015c6c00;
    if ((char)puVar9[3] < '\0') goto LAB_015c6f34;
    goto LAB_015c6c10;
  case '\x1c':
    if ((char)param_2[1] < '\0') {
      if ((char)param_2[2] < '\0') {
        if ((char)param_2[3] < '\0') {
          uVar6 = 4;
          if ((char)param_2[4] < '\0') {
            uVar6 = 5;
          }
        }
        else {
          uVar6 = 3;
        }
      }
      else {
        uVar6 = 2;
      }
    }
    else {
      uVar6 = 1;
    }
    if ((0x17 < param_2[(ulong)uVar6 + 1] - 0x68) ||
       ((1 << (ulong)(param_2[(ulong)uVar6 + 1] - 0x68 & 0x1f) & 0xf80181U) == 0)) {
      Decoder::error(param_1,param_2 + 1,"invalid select type");
    }
    iVar5 = uVar6 + 2;
    break;
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
    if ((char)param_2[1] < '\0') {
      if ((char)param_2[2] < '\0') {
        if ((char)param_2[3] < '\0') {
          uVar6 = 4;
          if ((char)param_2[4] < '\0') {
            uVar6 = 5;
          }
        }
        else {
          uVar6 = 3;
        }
      }
      else {
        uVar6 = 2;
      }
    }
    else {
      uVar6 = 1;
    }
    puVar9 = param_2 + 1 + uVar6;
    if (-1 < (char)*puVar9) goto LAB_015c6bf0;
    if (-1 < (char)puVar9[1]) goto LAB_015c6c00;
    if ((char)puVar9[2] < '\0') {
      uVar2 = puVar9[3];
      goto LAB_015c6c1c;
    }
LAB_015c6c10:
    local_30 = 3;
LAB_015c6c28:
    local_30 = uVar6 + local_30;
    goto LAB_015c6c2c;
  case 'B':
    ImmI64Immediate<(v8::internal::wasm::Decoder::ValidateFlag)0>::ImmI64Immediate
              (aIStack_38,param_1,param_2);
LAB_015c6c2c:
    iVar5 = local_30 + 1;
    break;
  case 'C':
switchD_015c6b1c_caseD_43:
    iVar5 = 5;
    break;
  case 'D':
    iVar5 = 9;
    break;
  case 0xfc:
    puVar9 = param_2 + 1;
    iVar5 = 2;
    switch(*puVar9) {
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
      if (-1 < (char)param_2[2]) goto switchD_015c6cc0_caseD_a;
      if (-1 < (char)param_2[3]) goto switchD_015c6b1c_caseD_43;
      if ((char)param_2[4] < '\0') {
        iVar5 = 7;
        if ((char)param_2[5] < '\0') {
          iVar5 = 8;
        }
      }
      else {
        iVar5 = 6;
      }
      break;
    case '\t':
      if (-1 < (char)param_2[2]) goto switchD_015c6c74_caseD_5;
      if (-1 < (char)param_2[3]) goto switchD_015c6cc0_caseD_a;
      if (-1 < (char)param_2[4]) goto switchD_015c6b1c_caseD_43;
LAB_015c6ff4:
      iVar5 = 6;
      if ((char)param_2[5] < '\0') {
        iVar5 = 7;
      }
      break;
    case '\v':
    case '\x0f':
    case '\x10':
    case '\x11':
      goto switchD_015c6c74_caseD_5;
    case '\f':
      if ((char)param_2[2] < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            uVar6 = 4;
            if ((char)param_2[5] < '\0') {
              uVar6 = 5;
            }
          }
          else {
            uVar6 = 3;
          }
        }
        else {
          uVar6 = 2;
        }
      }
      else {
        uVar6 = 1;
      }
      if ((char)puVar9[(ulong)uVar6 + 1] < '\0') {
        if ((char)puVar9[(ulong)uVar6 + 2] < '\0') {
          if ((char)puVar9[(ulong)uVar6 + 3] < '\0') {
            uVar2 = puVar9[(ulong)uVar6 + 4];
            goto LAB_015c7060;
          }
LAB_015c7054:
          iVar5 = 3;
        }
        else {
LAB_015c7044:
          iVar5 = 2;
        }
      }
      else {
LAB_015c7034:
        iVar5 = 1;
      }
LAB_015c706c:
      iVar5 = uVar6 + iVar5 + 2;
      break;
    case '\r':
      if (-1 < (char)param_2[2]) goto switchD_015c6c74_caseD_5;
      if ((char)param_2[3] < '\0') {
        if ((char)param_2[4] < '\0') goto LAB_015c6ff4;
        goto switchD_015c6b1c_caseD_43;
      }
    case '\n':
switchD_015c6cc0_caseD_a:
      iVar5 = 4;
      break;
    case '\x0e':
      if ((char)param_2[2] < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            lVar10 = 4;
            if ((char)param_2[5] < '\0') {
              lVar10 = 5;
            }
          }
          else {
            lVar10 = 3;
          }
        }
        else {
          lVar10 = 2;
        }
      }
      else {
        lVar10 = 1;
      }
      if ((char)puVar9[lVar10 + 1] < '\0') {
        if ((char)puVar9[lVar10 + 2] < '\0') {
          if ((char)puVar9[lVar10 + 3] < '\0') {
            iVar5 = 4;
            if ((char)puVar9[lVar10 + 4] < '\0') {
              iVar5 = 5;
            }
          }
          else {
            iVar5 = 3;
          }
        }
        else {
          iVar5 = 2;
        }
      }
      else {
        iVar5 = 1;
      }
      iVar5 = (int)lVar10 + iVar5 + 2;
      break;
    default:
      pcVar4 = "invalid numeric opcode";
LAB_015c6f9c:
      Decoder::error(param_1,param_2,pcVar4);
      goto switchD_015c6b1c_caseD_3f;
    }
    break;
  case 0xfd:
    iVar5 = 2;
    switch(param_2[1]) {
    case '\0':
    case '\x01':
switchD_015c6c74_caseD_0:
      if ((char)param_2[2] < '\0') {
        if ((char)param_2[3] < '\0') {
          if ((char)param_2[4] < '\0') {
            uVar6 = 4;
            if ((char)param_2[5] < '\0') {
              uVar6 = 5;
            }
          }
          else {
            uVar6 = 3;
          }
        }
        else {
          uVar6 = 2;
        }
      }
      else {
        uVar6 = 1;
      }
      puVar9 = param_2 + 2 + uVar6;
      if (-1 < (char)*puVar9) goto LAB_015c7034;
      if (-1 < (char)puVar9[1]) goto LAB_015c7044;
      if (-1 < (char)puVar9[2]) goto LAB_015c7054;
      uVar2 = puVar9[3];
LAB_015c7060:
      iVar5 = 4;
      if ((char)uVar2 < '\0') {
        iVar5 = 5;
      }
      goto LAB_015c706c;
    default:
      pcVar4 = "invalid SIMD opcode";
      goto LAB_015c6f9c;
    case '\x03':
      iVar5 = 0x12;
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
      goto switchD_015c6c74_caseD_5;
    }
    break;
  case 0xfe:
    bVar1 = param_2[1];
    if ((bVar1 - 0x10 < 0x3f) || (bVar1 < 3)) goto switchD_015c6c74_caseD_0;
    if (bVar1 != 3) {
      pcVar4 = "invalid Atomics opcode";
      goto LAB_015c6f9c;
    }
switchD_015c6c74_caseD_5:
    iVar5 = 3;
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
LAB_015c6d7c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
}

