
/* void rapidxml::xml_sax3_parser<char>::parse_doctype<1>(char*&) */

void __thiscall
rapidxml::xml_sax3_parser<char>::parse_doctype<1>(xml_sax3_parser<char> *this,char **param_1)

{
  char cVar1;
  undefined8 *puVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = *param_1;
  while( true ) {
    while( true ) {
      cVar1 = *pcVar3;
      if (cVar1 == '>') {
        *param_1 = pcVar3 + 1;
        return;
      }
      if (cVar1 != '[') break;
      pcVar3 = pcVar3 + 1;
      iVar4 = 1;
      *param_1 = pcVar3;
      do {
        cVar1 = *pcVar3;
        if (cVar1 == '[') {
          iVar4 = iVar4 + 1;
        }
        else if (cVar1 == ']') {
          iVar4 = iVar4 + -1;
        }
        else if (cVar1 == '\0') goto LAB_00f8187c;
        pcVar3 = pcVar3 + 1;
        *param_1 = pcVar3;
      } while (0 < iVar4);
    }
    if (cVar1 == '\0') break;
    pcVar3 = pcVar3 + 1;
    *param_1 = pcVar3;
  }
LAB_00f8187c:
  puVar2 = (undefined8 *)__cxa_allocate_exception(0x18);
  puVar2[2] = *param_1;
  *puVar2 = &PTR__bad_exception_017221f8;
  puVar2[1] = "unexpected end of data";
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar2,&parse_error::typeinfo,std::bad_exception::~bad_exception);
}

