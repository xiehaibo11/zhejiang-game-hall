
/* cocos2d::SAXParser::parseIntrusive(char*, unsigned long) */

undefined8 __thiscall
cocos2d::SAXParser::parseIntrusive(SAXParser *this,char *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *local_90;
  undefined8 local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  void *pvStack_60;
  long local_58;
  SAXParser *pSStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_70 = 0;
  local_78 = 0;
  pvStack_60 = (void *)0x0;
  local_68 = (void *)0x0;
  local_58 = 0;
  local_80 = &PTR__xml_sax2_handler_01722198;
  local_68 = operator_new(0x200);
  local_58 = (long)local_68 + 0x200;
  local_90 = &local_80;
  local_80 = &PTR__xml_sax2_handler_017220f8;
  local_88 = 0;
  pvStack_60 = local_68;
  pSStack_50 = this;
  rapidxml::xml_sax3_parser<char>::parse<1>((xml_sax3_parser<char> *)&local_90,param_1,(int)param_2)
  ;
  local_80 = &PTR__xml_sax2_handler_01722198;
  if (local_68 != (void *)0x0) {
    pvStack_60 = local_68;
    operator_delete(local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

