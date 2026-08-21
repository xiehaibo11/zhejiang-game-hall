
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::InstructionOperand const&) */

basic_ostream *
v8::internal::compiler::operator<<(basic_ostream *param_1,InstructionOperand *param_2)

{
  basic_ostream *pbVar1;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this;
  size_t sVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  char *pcVar7;
  uint uVar8;
  
  uVar6 = *(ulong *)param_2;
  iVar3 = (int)(uVar6 >> 0x20);
  switch((uint)uVar6 & 7) {
  case 0:
    pcVar7 = "(x)";
    goto LAB_0164452c;
  case 1:
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"v",1);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
               (int)(*(ulong *)param_2 >> 3));
    if ((*(ulong *)param_2 >> 0x23 & 1) == 0) {
      pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"(=",2);
      param_1 = (basic_ostream *)
                std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                          ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                           (int)((long)*(undefined8 *)param_2 >> 0x24));
      pcVar7 = "S)";
      uVar6 = 2;
      goto LAB_01644958;
    }
    switch(*(ulong *)param_2 >> 0x24 & 7) {
    case 0:
      return param_1;
    case 1:
      pcVar7 = "(-)";
      break;
    case 2:
      pcVar7 = "(*)";
      break;
    case 3:
      pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"(=",2);
      uVar6 = *(ulong *)param_2;
      puVar5 = &RegisterName(v8::internal::Register)::Names;
      goto LAB_0164476c;
    case 4:
      pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"(=",2);
      uVar6 = *(ulong *)param_2;
      puVar5 = &RegisterName(v8::internal::VRegister)::Names;
LAB_0164476c:
      pcVar7 = (char *)puVar5[uVar6 >> 0x29 & 0x3f];
      sVar2 = strlen(pcVar7);
      param_1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar1,pcVar7,sVar2);
      pcVar7 = ")";
      uVar6 = 1;
      goto LAB_01644958;
    case 5:
      pcVar7 = "(R)";
      break;
    case 6:
      pcVar7 = "(S)";
      break;
    case 7:
      pcVar7 = "(1)";
    }
LAB_0164452c:
    uVar6 = 3;
    goto LAB_01644958;
  case 2:
    this = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
           std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"[constant:",10);
    iVar3 = (int)(*(ulong *)param_2 >> 3);
    goto LAB_01644654;
  case 3:
    if (((uint)uVar6 >> 3 & 1) == 0) {
      pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"#",1);
      pbVar1 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,iVar3);
      return pbVar1;
    }
    this = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
           std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"[immediate:",0xb);
LAB_01644654:
    param_1 = (basic_ostream *)
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        (this,iVar3);
    pcVar7 = "]";
    uVar6 = 1;
    goto LAB_01644958;
  case 4:
    uVar4 = uVar6 & 0x1c;
    uVar8 = (uint)(uVar6 >> 5);
    iVar3 = iVar3 >> 3;
    if ((uVar4 == 0xc) && ((uVar8 & 0xff) < 0xb)) {
      pcVar7 = "[stack:";
      uVar4 = 7;
LAB_01644628:
      pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,pcVar7,uVar4);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,iVar3);
    }
    else {
      if ((uVar4 == 0xc) && (10 < (uVar8 & 0xff))) {
        pcVar7 = "[fp_stack:";
        uVar4 = 10;
        goto LAB_01644628;
      }
      if ((uVar4 == 4) && ((uVar8 & 0xff) < 0xb)) {
        if (iVar3 < 0x20) {
          if (iVar3 == -1) {
            pcVar7 = "invalid";
          }
          else {
            pcVar7 = (char *)(&RegisterName(v8::internal::Register)::Names)[(long)uVar6 >> 0x23];
          }
        }
        else {
          pcVar7 = "sp";
          if (iVar3 != 0x3f) {
            pcVar7 = "UNKNOWN";
          }
        }
        pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"[",1);
        sVar2 = strlen(pcVar7);
      }
      else {
        pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"[",1);
        if (iVar3 == -1) {
          pcVar7 = "invalid";
        }
        else {
          pcVar7 = (char *)(&RegisterName(v8::internal::VRegister)::Names)[(long)uVar6 >> 0x23];
        }
        sVar2 = strlen(pcVar7);
      }
      pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar1,pcVar7,sVar2);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"|R",2);
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  switch(uVar6 >> 5 & 0xff) {
  case 0:
    pcVar7 = "|-";
    goto LAB_0164490c;
  case 1:
    pcVar7 = "|b";
    goto LAB_0164490c;
  case 2:
    pcVar7 = "|w8";
    uVar6 = 3;
    break;
  case 3:
    pcVar7 = "|w16";
    uVar6 = 4;
    break;
  case 4:
    pcVar7 = "|w32";
    uVar6 = 4;
    break;
  case 5:
    pcVar7 = "|w64";
    uVar6 = 4;
    break;
  case 6:
    pcVar7 = "|ts";
    uVar6 = 3;
    break;
  case 7:
    pcVar7 = "|tp";
    uVar6 = 3;
    break;
  case 8:
    pcVar7 = "|t";
    goto LAB_0164490c;
  case 9:
    pcVar7 = "|cp";
    uVar6 = 3;
    break;
  case 10:
    pcVar7 = "|c";
LAB_0164490c:
    uVar6 = 2;
    break;
  case 0xb:
    pcVar7 = "|f32";
    uVar6 = 4;
    break;
  case 0xc:
    pcVar7 = "|f64";
    uVar6 = 4;
    break;
  case 0xd:
    pcVar7 = "|s128";
    uVar6 = 5;
    break;
  default:
    goto switchD_0164486c_default;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar7,uVar6);
switchD_0164486c_default:
  pcVar7 = "]";
  uVar6 = 1;
LAB_01644958:
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar7,uVar6);
  return pbVar1;
}

