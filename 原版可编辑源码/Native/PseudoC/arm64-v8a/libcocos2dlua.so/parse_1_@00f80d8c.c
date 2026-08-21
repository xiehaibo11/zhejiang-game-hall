
/* void rapidxml::xml_sax3_parser<char>::parse<1>(char*, int) */

void __thiscall
rapidxml::xml_sax3_parser<char>::parse<1>(xml_sax3_parser<char> *this,char *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pbVar3 = (byte *)(param_1 + param_2);
  if (param_2 < 1) {
    pbVar3 = (byte *)0x0;
  }
  *(byte **)(this + 8) = pbVar3;
  local_40 = (byte *)param_1;
  if (((*param_1 == -0x11) && (param_1[1] == -0x45)) && (param_1[2] == -0x41)) {
    local_40 = (byte *)(param_1 + 3);
  }
  while( true ) {
    while (((pbVar3 == (byte *)0x0 || (local_40 < pbVar3)) &&
           (internal::lookup_tables<0>::lookup_whitespace[*local_40] != '\0'))) {
      local_40 = local_40 + 1;
    }
    if ((pbVar3 <= local_40) || (*local_40 == 0)) break;
    if (*local_40 != 0x3c) {
      puVar2 = (undefined8 *)__cxa_allocate_exception(0x18);
      puVar2[2] = local_40;
      *puVar2 = &PTR__bad_exception_017221f8;
      puVar2[1] = "expected <";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&parse_error::typeinfo,std::bad_exception::~bad_exception);
    }
    local_40 = local_40 + 1;
    parse_node<1>(this,(char **)&local_40);
    pbVar3 = *(byte **)(this + 8);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

