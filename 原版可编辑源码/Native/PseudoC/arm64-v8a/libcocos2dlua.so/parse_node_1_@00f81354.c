
/* void rapidxml::xml_sax3_parser<char>::parse_node<1>(char*&) */

void __thiscall
rapidxml::xml_sax3_parser<char>::parse_node<1>(xml_sax3_parser<char> *this,char **param_1)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pcVar4 = *param_1;
  if (*pcVar4 == '!') {
    cVar2 = pcVar4[1];
    if (cVar2 == '[') {
      if ((((pcVar4[2] == 'C') && (pcVar4[3] == 'D')) && (pcVar4[4] == 'A')) &&
         (((pcVar4[5] == 'T' && (pcVar4[6] == 'A')) && (pcVar4[7] == '[')))) {
        pcVar4 = pcVar4 + 8;
        do {
          *param_1 = pcVar4;
          if (*pcVar4 == ']') {
            if ((pcVar4[1] == ']') && (pcVar4[2] == '>')) goto LAB_00f81458;
          }
          else if (*pcVar4 == '\0') goto LAB_00f815c0;
          pcVar4 = pcVar4 + 1;
        } while( true );
      }
    }
    else if (cVar2 == 'D') {
      if ((((pcVar4[2] == 'O') && (pcVar4[3] == 'C')) && (pcVar4[4] == 'T')) &&
         (((pcVar4[5] == 'Y' && (pcVar4[6] == 'P')) &&
          ((pcVar4[7] == 'E' &&
           (internal::lookup_tables<0>::lookup_whitespace[(byte)pcVar4[8]] != '\0')))))) {
        *param_1 = pcVar4 + 9;
        parse_doctype<1>(this,param_1);
        return;
      }
    }
    else if ((cVar2 == '-') && (pcVar4[2] == '-')) {
      pcVar4 = pcVar4 + 3;
      do {
        *param_1 = pcVar4;
        if (*pcVar4 == '-') {
          if ((pcVar4[1] == '-') && (pcVar4[2] == '>')) goto LAB_00f81458;
        }
        else if (*pcVar4 == '\0') goto LAB_00f815c0;
        pcVar4 = pcVar4 + 1;
      } while( true );
    }
    pbVar5 = (byte *)(pcVar4 + 1);
    do {
      *param_1 = (char *)pbVar5;
      pbVar6 = pbVar5 + 1;
      bVar1 = *pbVar5;
      if (bVar1 == 0x3e) goto LAB_00f8157c;
      pbVar5 = pbVar6;
    } while (bVar1 != 0);
LAB_00f815c0:
    puVar3 = (undefined8 *)__cxa_allocate_exception(0x18);
    puVar3[2] = *param_1;
    *puVar3 = &PTR__bad_exception_017221f8;
    puVar3[1] = "unexpected end of data";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&parse_error::typeinfo,std::bad_exception::~bad_exception);
  }
  if (*pcVar4 != '?') {
    parse_element<1>(this,param_1);
    return;
  }
  *param_1 = pcVar4 + 1;
  bVar1 = pcVar4[1];
  if (((((bVar1 | 0x20) != 0x78) || ((byte)(pcVar4[2] | 0x20U) != 0x6d)) ||
      ((byte)(pcVar4[3] | 0x20U) != 0x6c)) ||
     (internal::lookup_tables<0>::lookup_whitespace[(byte)pcVar4[4]] == '\0')) {
    pbVar6 = (byte *)(pcVar4 + 2);
    do {
      if (bVar1 == 0x3f) {
        if (*pbVar6 == 0x3e) goto code_r0x00f81498;
      }
      else if (bVar1 == 0) goto LAB_00f815c0;
      *param_1 = (char *)pbVar6;
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while( true );
  }
  pcVar4 = pcVar4 + 5;
  do {
    *param_1 = pcVar4;
    if (*pcVar4 == '?') {
      if (pcVar4[1] == '>') goto code_r0x00f813f0;
    }
    else if (*pcVar4 == '\0') goto LAB_00f815c0;
    pcVar4 = pcVar4 + 1;
  } while( true );
LAB_00f81458:
  pbVar6 = (byte *)(pcVar4 + 3);
  goto LAB_00f8157c;
code_r0x00f81498:
  pbVar6 = pbVar6 + 1;
  goto LAB_00f8157c;
code_r0x00f813f0:
  pbVar6 = (byte *)(pcVar4 + 2);
LAB_00f8157c:
  *param_1 = (char *)pbVar6;
  return;
}

