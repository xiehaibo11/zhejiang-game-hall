
/* cocostudio::DataReaderHelper::decodeBoneDisplay(tinyxml2::XMLElement*,
   cocostudio::DataReaderHelper::_DataInfo*) */

SpriteDisplayData *
cocostudio::DataReaderHelper::decodeBoneDisplay(XMLElement *param_1,_DataInfo *param_2)

{
  long lVar1;
  int iVar2;
  XMLAttribute *this;
  SpriteDisplayData *this_00;
  long lVar3;
  char *__s;
  size_t sVar4;
  undefined4 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = 0;
  this = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"isArmature");
  if ((this == (XMLAttribute *)0x0) ||
     (iVar2 = tinyxml2::XMLAttribute::QueryIntValue(this,&local_3c), iVar2 != 0)) {
    this_00 = operator_new(0x98,(nothrow_t *)&std::nothrow);
    SpriteDisplayData::SpriteDisplayData(this_00);
  }
  else {
    if (local_3c != 0) {
      this_00 = operator_new(0x40,(nothrow_t *)&std::nothrow);
      ArmatureDisplayData::ArmatureDisplayData((ArmatureDisplayData *)this_00);
      uVar5 = 1;
      goto LAB_00c4db2c;
    }
    this_00 = operator_new(0x98,(nothrow_t *)&std::nothrow);
    SpriteDisplayData::SpriteDisplayData(this_00);
  }
  uVar5 = 0;
LAB_00c4db2c:
  *(undefined4 *)(this_00 + 0x24) = uVar5;
  lVar3 = tinyxml2::XMLElement::Attribute(param_1,"name",(char *)0x0);
  if (lVar3 != 0) {
    __s = (char *)tinyxml2::XMLElement::Attribute(param_1,"name",(char *)0x0);
    sVar4 = strlen(__s);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this_00 + 0x28),__s,sVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

