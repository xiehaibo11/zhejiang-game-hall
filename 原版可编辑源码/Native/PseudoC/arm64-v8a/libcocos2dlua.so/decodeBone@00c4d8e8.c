
/* cocostudio::DataReaderHelper::decodeBone(tinyxml2::XMLElement*, tinyxml2::XMLElement*,
   cocostudio::DataReaderHelper::_DataInfo*) */

BoneData *
cocostudio::DataReaderHelper::decodeBone(XMLElement *param_1,XMLElement *param_2,_DataInfo *param_3)

{
  ulong uVar1;
  long lVar2;
  BoneData *this;
  char *pcVar3;
  long lVar4;
  size_t sVar5;
  XMLAttribute *this_00;
  Ref *this_01;
  XMLElement *this_02;
  undefined1 auVar6 [16];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [8];
  ulong local_58;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this = operator_new(0xb8,(nothrow_t *)&std::nothrow);
  if (this != (BoneData *)0x0) {
    BoneData::BoneData(this);
  }
  (**(code **)(*(long *)this + 0x30))(this);
  pcVar3 = (char *)tinyxml2::XMLElement::Attribute(param_1,"name",(char *)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,pcVar3);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x58) != local_60) {
    uVar1 = (ulong)((byte)local_60[0] >> 1);
    pcVar3 = (char *)((ulong)local_60 | 1);
    if (((byte)local_60[0] & 1) != 0) {
      uVar1 = local_58;
      pcVar3 = local_50;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x58),pcVar3,uVar1);
  }
  lVar4 = tinyxml2::XMLElement::Attribute(param_1,"parent",(char *)0x0);
  if (lVar4 != 0) {
    pcVar3 = (char *)tinyxml2::XMLElement::Attribute(param_1,"parent",(char *)0x0);
    sVar5 = strlen(pcVar3);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x70),pcVar3,sVar5);
  }
  this_00 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"z");
  if (this_00 != (XMLAttribute *)0x0) {
    tinyxml2::XMLAttribute::QueryIntValue(this_00,(int *)(this + 0x2c));
  }
  auVar6 = tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,"d");
  while (this_02 = auVar6._0_8_, this_02 != (XMLElement *)0x0) {
    this_01 = (Ref *)decodeBoneDisplay(this_02,auVar6._8_8_);
    BoneData::addDisplayData(this,(DisplayData *)this_01);
    cocos2d::Ref::release(this_01);
    auVar6 = tinyxml2::XMLNode::NextSiblingElement((XMLNode *)this_02,"d");
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}

