
/* cocostudio::DataReaderHelper::decodeTexture(tinyxml2::XMLElement*,
   cocostudio::DataReaderHelper::_DataInfo*) */

TextureData * cocostudio::DataReaderHelper::decodeTexture(XMLElement *param_1,_DataInfo *param_2)

{
  long lVar1;
  TextureData *this;
  long lVar2;
  char *pcVar3;
  size_t sVar4;
  XMLAttribute *pXVar5;
  Ref *this_00;
  undefined1 auVar6 [16];
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (TextureData *)0x0) {
    TextureData::TextureData(this);
  }
  (**(code **)(*(long *)this + 0x10))(this);
  lVar2 = tinyxml2::XMLElement::Attribute(param_1,"name",(char *)0x0);
  if (lVar2 != 0) {
    pcVar3 = (char *)tinyxml2::XMLElement::Attribute(param_1,"name",(char *)0x0);
    sVar4 = strlen(pcVar3);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x38),pcVar3,sVar4);
  }
  local_58 = 0.0;
  if (2.0 <= *(float *)(param_2 + 0x70)) {
    pXVar5 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"cocos2d_pX");
    if (pXVar5 != (XMLAttribute *)0x0) {
      tinyxml2::XMLAttribute::QueryFloatValue(pXVar5,&fStack_4c);
    }
    pcVar3 = "cocos2d_pY";
  }
  else {
    pXVar5 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"pX");
    if (pXVar5 != (XMLAttribute *)0x0) {
      tinyxml2::XMLAttribute::QueryFloatValue(pXVar5,&fStack_4c);
    }
    pcVar3 = "pY";
  }
  pXVar5 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,pcVar3);
  if (pXVar5 != (XMLAttribute *)0x0) {
    tinyxml2::XMLAttribute::QueryFloatValue(pXVar5,&local_50);
  }
  pXVar5 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"width");
  if (pXVar5 != (XMLAttribute *)0x0) {
    tinyxml2::XMLAttribute::QueryFloatValue(pXVar5,&fStack_54);
  }
  pXVar5 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"height");
  if (pXVar5 != (XMLAttribute *)0x0) {
    tinyxml2::XMLAttribute::QueryFloatValue(pXVar5,&local_58);
  }
  *(float *)(this + 0x2c) = fStack_4c / fStack_54;
  *(float *)(this + 0x30) = (local_58 - local_50) / local_58;
  auVar6 = tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,"con");
  lVar2 = auVar6._0_8_;
  while (lVar2 != 0) {
    this_00 = (Ref *)decodeContour(auVar6._0_8_,auVar6._8_8_);
    TextureData::addContourData(this,(ContourData *)this_00);
    cocos2d::Ref::release(this_00);
    auVar6 = tinyxml2::XMLNode::NextSiblingElement((XMLNode *)auVar6._0_8_,"con");
    lVar2 = auVar6._0_8_;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

