
/* void rapidxml::xml_sax3_parser<char>::parse_node_contents<1>(char*&, std::__ndk1::pair<char*,
   unsigned long> const&) */

void rapidxml::xml_sax3_parser<char>::parse_node_contents<1>(char **param_1,pair *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  byte *pbVar6;
  
  while( true ) {
    pbVar6 = *(byte **)param_2;
    pbVar1 = pbVar6;
    while ((((byte *)param_1[1] == (byte *)0x0 || (pbVar1 < param_1[1])) &&
           (internal::lookup_tables<0>::lookup_whitespace[*pbVar1] != '\0'))) {
      pbVar1 = pbVar1 + 1;
    }
    *(byte **)param_2 = pbVar1;
    bVar2 = *pbVar1;
    while (bVar2 != 0x3c) {
      if (bVar2 == 0) {
        puVar4 = (undefined8 *)__cxa_allocate_exception(0x18);
        uVar5 = *(undefined8 *)param_2;
        pcVar3 = "unexpected end of data";
        goto LAB_00f81ca4;
      }
      *(byte **)param_2 = pbVar6;
      pcVar3 = skip_and_expand_character_refs<rapidxml::xml_sax3_parser<char>::text_pred,rapidxml::xml_sax3_parser<char>::text_pure_no_ws_pred,1>
                         ((char **)param_2);
      bVar2 = **(byte **)param_2;
      *pcVar3 = '\0';
      (**(code **)(*(long *)*param_1 + 0x30))(*param_1,pbVar6,(long)pcVar3 - (long)pbVar6);
    }
    pcVar3 = (char *)(*(long *)param_2 + 1);
    if (*pcVar3 == '/') break;
    *(char **)param_2 = pcVar3;
    parse_node<1>((xml_sax3_parser<char> *)param_1,(char **)param_2);
  }
  pbVar1 = (byte *)(*(long *)param_2 + 2);
  *(byte **)param_2 = pbVar1;
  while ((((byte *)param_1[1] == (byte *)0x0 || (pbVar1 < param_1[1])) &&
         (internal::lookup_tables<0>::lookup_node_name[*pbVar1] != '\0'))) {
    pbVar1 = pbVar1 + 1;
  }
  *(byte **)param_2 = pbVar1;
  while ((((byte *)param_1[1] == (byte *)0x0 || (pbVar1 < param_1[1])) &&
         (internal::lookup_tables<0>::lookup_whitespace[*pbVar1] != '\0'))) {
    pbVar1 = pbVar1 + 1;
  }
  *(byte **)param_2 = pbVar1;
  if (*pbVar1 == 0x3e) {
    *(byte **)param_2 = pbVar1 + 1;
    return;
  }
  puVar4 = (undefined8 *)__cxa_allocate_exception(0x18);
  uVar5 = *(undefined8 *)param_2;
  pcVar3 = "expected >";
LAB_00f81ca4:
  *puVar4 = &PTR__bad_exception_017221f8;
  puVar4[1] = pcVar3;
  puVar4[2] = uVar5;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&parse_error::typeinfo,std::bad_exception::~bad_exception);
}

