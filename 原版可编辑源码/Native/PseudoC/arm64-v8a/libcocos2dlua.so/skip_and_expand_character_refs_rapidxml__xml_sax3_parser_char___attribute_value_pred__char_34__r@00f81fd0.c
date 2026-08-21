
/* char* 
   rapidxml::xml_sax3_parser<char>::skip_and_expand_character_refs<rapidxml::xml_sax3_parser<char>::attribute_value_pred<(char)34>,
   rapidxml::xml_sax3_parser<char>::attribute_value_pure_pred<(char)34>, 1>(char*&) */

char * rapidxml::xml_sax3_parser<char>::
       skip_and_expand_character_refs<rapidxml::xml_sax3_parser<char>::attribute_value_pred<(char)34>,rapidxml::xml_sax3_parser<char>::attribute_value_pure_pred<(char)34>,1>
                 (char **param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  byte *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pbVar5 = (byte *)(*param_1 + -1);
  do {
    pbVar5 = pbVar5 + 1;
  } while (internal::lookup_tables<0>::lookup_attribute_data_2_pure[*pbVar5] != '\0');
  *param_1 = (char *)pbVar5;
  local_70 = pbVar5;
LAB_00f82060:
  bVar6 = *pbVar5;
  if (bVar6 != 0x26) {
    if ((bVar6 == 0) || (bVar6 == 0x22)) {
      *param_1 = (char *)pbVar5;
      if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return (char *)local_70;
    }
    goto switchD_00f82098_caseD_62;
  }
  switch((int)(char)pbVar5[1]) {
  case 0x61:
    if (pbVar5[2] == 0x70) {
      if (((pbVar5[3] == 0x6f) && (pbVar5[4] == 0x73)) && (pbVar5[5] == 0x3b)) {
        *local_70 = 0x27;
        goto LAB_00f82214;
      }
    }
    else if (((pbVar5[2] == 0x6d) && (pbVar5[3] == 0x70)) && (pbVar5[4] == 0x3b)) {
      pbVar5 = pbVar5 + 5;
      *local_70 = 0x26;
      local_70 = local_70 + 1;
      goto LAB_00f82060;
    }
    break;
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
    break;
  case 0x67:
    if ((pbVar5[2] == 0x74) && (pbVar5[3] == 0x3b)) {
      *local_70 = 0x3e;
LAB_00f821a0:
      pbVar5 = pbVar5 + 4;
      local_70 = local_70 + 1;
      goto LAB_00f82060;
    }
    break;
  case 0x6c:
    if ((pbVar5[2] == 0x74) && (pbVar5[3] == 0x3b)) {
      *local_70 = 0x3c;
      goto LAB_00f821a0;
    }
    break;
  case 0x71:
    if ((((pbVar5[2] == 0x75) && (pbVar5[3] == 0x6f)) && (pbVar5[4] == 0x74)) && (pbVar5[5] == 0x3b)
       ) {
      *local_70 = 0x22;
LAB_00f82214:
      pbVar5 = pbVar5 + 6;
      local_70 = local_70 + 1;
      goto LAB_00f82060;
    }
    break;
  default:
    if ((char)pbVar5[1] != 0x23) break;
    pbVar7 = pbVar5 + 2;
    if ((ulong)*pbVar7 == 0x78) {
      pbVar7 = pbVar5 + 2;
      uVar2 = 0;
      do {
        uVar4 = uVar2;
        pbVar7 = pbVar7 + 1;
        uVar2 = (ulong)(byte)internal::lookup_tables<0>::lookup_digits[*pbVar7] + uVar4 * 0x10;
      } while ((ulong)(byte)internal::lookup_tables<0>::lookup_digits[*pbVar7] != 0xff);
    }
    else {
      bVar6 = internal::lookup_tables<0>::lookup_digits[*pbVar7];
      if (bVar6 == 0xff) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        pbVar7 = pbVar5 + 2;
        do {
          pbVar7 = pbVar7 + 1;
          uVar4 = uVar4 * 10 + (ulong)bVar6;
          bVar6 = internal::lookup_tables<0>::lookup_digits[*pbVar7];
        } while (bVar6 != 0xff);
      }
    }
    insert_coded_character<1>((char **)&local_70,uVar4);
    if (*pbVar7 != 0x3b) {
      puVar3 = (undefined8 *)__cxa_allocate_exception(0x18);
      puVar3[2] = pbVar7;
      *puVar3 = &PTR__bad_exception_017221f8;
      puVar3[1] = "expected ;";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&parse_error::typeinfo,std::bad_exception::~bad_exception);
    }
    pbVar5 = pbVar7 + 1;
    goto LAB_00f82060;
  }
switchD_00f82098_caseD_62:
  pbVar5 = pbVar5 + 1;
  *local_70 = bVar6;
  local_70 = local_70 + 1;
  goto LAB_00f82060;
}

