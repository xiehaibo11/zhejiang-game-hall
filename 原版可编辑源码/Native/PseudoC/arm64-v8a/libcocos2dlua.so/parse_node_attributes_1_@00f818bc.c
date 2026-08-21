
/* void rapidxml::xml_sax3_parser<char>::parse_node_attributes<1>(char*&) */

void __thiscall
rapidxml::xml_sax3_parser<char>::parse_node_attributes<1>
          (xml_sax3_parser<char> *this,char **param_1)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  pbVar9 = (byte *)*param_1;
  cVar2 = internal::lookup_tables<0>::lookup_attribute_name[*pbVar9];
  do {
    if (cVar2 == '\0') {
      return;
    }
    pbVar6 = pbVar9 + 1;
    *param_1 = (char *)pbVar6;
    pbVar5 = *(byte **)(this + 8);
    if ((pbVar5 == (byte *)0x0) || (pbVar6 < pbVar5)) {
      do {
        if (internal::lookup_tables<0>::lookup_attribute_name[*pbVar6] == '\0') break;
        pbVar6 = pbVar6 + 1;
      } while ((pbVar5 == (byte *)0x0) || (pbVar6 < pbVar5));
      *param_1 = (char *)pbVar6;
      if (pbVar6 == pbVar9) {
        puVar4 = (undefined8 *)__cxa_allocate_exception(0x18);
        puVar4[2] = pbVar9;
        *puVar4 = &PTR__bad_exception_017221f8;
        puVar4[1] = "expected attribute name";
        goto LAB_00f81ae0;
      }
      pbVar8 = *(byte **)(this + 8);
      pbVar5 = pbVar6;
      if (pbVar8 != (byte *)0x0) goto LAB_00f81968;
LAB_00f81978:
      do {
        if (internal::lookup_tables<0>::lookup_whitespace[*pbVar6] == '\0') break;
        pbVar6 = pbVar6 + 1;
      } while ((pbVar8 == (byte *)0x0) || (pbVar6 < pbVar8));
    }
    else {
      *param_1 = (char *)pbVar6;
      pbVar8 = *(byte **)(this + 8);
      pbVar5 = pbVar6;
      if (pbVar8 == (byte *)0x0) goto LAB_00f81978;
LAB_00f81968:
      pbVar5 = pbVar6;
      if (pbVar6 < pbVar8) goto LAB_00f81978;
    }
    *param_1 = (char *)pbVar6;
    if (*pbVar6 != 0x3d) {
      puVar4 = (undefined8 *)__cxa_allocate_exception(0x18);
      pcVar7 = *param_1;
      pcVar3 = "expected =";
LAB_00f81ad4:
      *puVar4 = &PTR__bad_exception_017221f8;
      puVar4[1] = pcVar3;
      puVar4[2] = pcVar7;
LAB_00f81ae0:
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar4,&parse_error::typeinfo,std::bad_exception::~bad_exception);
    }
    *param_1 = (char *)(pbVar6 + 1);
    *pbVar5 = 0;
    pbVar6 = (byte *)*param_1;
    while (((*(byte **)(this + 8) == (byte *)0x0 || (pbVar6 < *(byte **)(this + 8))) &&
           (internal::lookup_tables<0>::lookup_whitespace[*pbVar6] != '\0'))) {
      pbVar6 = pbVar6 + 1;
    }
    *param_1 = (char *)pbVar6;
    bVar1 = *pbVar6;
    if ((bVar1 != 0x22) && (bVar1 != 0x27)) {
LAB_00f81a98:
      puVar4 = (undefined8 *)__cxa_allocate_exception(0x18);
      pcVar7 = *param_1;
      pcVar3 = "expected \' or \"";
      goto LAB_00f81ad4;
    }
    pbVar6 = pbVar6 + 1;
    *param_1 = (char *)pbVar6;
    if (bVar1 == 0x27) {
      pcVar3 = skip_and_expand_character_refs<rapidxml::xml_sax3_parser<char>::attribute_value_pred<(char)39>,rapidxml::xml_sax3_parser<char>::attribute_value_pure_pred<(char)39>,1>
                         (param_1);
    }
    else {
      pcVar3 = skip_and_expand_character_refs<rapidxml::xml_sax3_parser<char>::attribute_value_pred<(char)34>,rapidxml::xml_sax3_parser<char>::attribute_value_pure_pred<(char)34>,1>
                         (param_1);
    }
    if (**param_1 != bVar1) goto LAB_00f81a98;
    *param_1 = *param_1 + 1;
    *pcVar3 = '\0';
    (**(code **)(**(long **)this + 0x18))
              (*(long **)this,pbVar9,(long)pbVar5 - (long)pbVar9,pbVar6,(long)pcVar3 - (long)pbVar6)
    ;
    pbVar9 = (byte *)*param_1;
    while (((*(byte **)(this + 8) == (byte *)0x0 || (pbVar9 < *(byte **)(this + 8))) &&
           (internal::lookup_tables<0>::lookup_whitespace[*pbVar9] != '\0'))) {
      pbVar9 = pbVar9 + 1;
    }
    *param_1 = (char *)pbVar9;
    cVar2 = internal::lookup_tables<0>::lookup_attribute_name[*pbVar9];
  } while( true );
}

