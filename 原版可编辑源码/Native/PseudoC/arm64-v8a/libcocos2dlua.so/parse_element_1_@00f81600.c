
/* void rapidxml::xml_sax3_parser<char>::parse_element<1>(char*&) */

void __thiscall
rapidxml::xml_sax3_parser<char>::parse_element<1>(xml_sax3_parser<char> *this,char **param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  byte *pbVar5;
  char *pcVar6;
  char *pcVar7;
  byte *pbVar8;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  pbVar8 = (byte *)*param_1;
  pbVar5 = pbVar8;
  while (((*(byte **)(this + 8) == (byte *)0x0 || (pbVar5 < *(byte **)(this + 8))) &&
         (internal::lookup_tables<0>::lookup_node_name[*pbVar5] != '\0'))) {
    pbVar5 = pbVar5 + 1;
  }
  lVar1 = (long)pbVar5 - (long)pbVar8;
  *param_1 = (char *)pbVar5;
  if (lVar1 == 0) {
    puVar3 = (undefined8 *)__cxa_allocate_exception(0x18);
    pcVar7 = *param_1;
    pcVar6 = "expected element name";
  }
  else {
    (**(code **)(**(long **)this + 0x10))(*(long **)this,pbVar8,lVar1);
    pbVar5 = (byte *)*param_1;
    while (((*(byte **)(this + 8) == (byte *)0x0 || (pbVar5 < *(byte **)(this + 8))) &&
           (internal::lookup_tables<0>::lookup_whitespace[*pbVar5] != '\0'))) {
      pbVar5 = pbVar5 + 1;
    }
    *param_1 = (char *)pbVar5;
    parse_node_attributes<1>(this,param_1);
    (**(code **)(**(long **)this + 0x20))();
    pcVar6 = *param_1;
    if (*pcVar6 == '/') {
      *param_1 = pcVar6 + 1;
      if (pcVar6[1] == '>') {
        *param_1 = pcVar6 + 2;
        goto LAB_00f81744;
      }
    }
    else if (*pcVar6 == '>') {
      *param_1 = pcVar6 + 1;
      parse_node_contents<1>((char **)this,(pair *)param_1);
LAB_00f81744:
      pbVar8[lVar1] = 0;
      (**(code **)(**(long **)this + 0x28))(*(long **)this,pbVar8,lVar1);
      if (*(long *)(lVar2 + 0x28) == lVar4) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar3 = (undefined8 *)__cxa_allocate_exception(0x18);
    pcVar7 = *param_1;
    pcVar6 = "expected >";
  }
  *puVar3 = &PTR__bad_exception_017221f8;
  puVar3[1] = pcVar6;
  puVar3[2] = pcVar7;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar3,&parse_error::typeinfo,std::bad_exception::~bad_exception);
}

