
/* cocostudio::DataReaderHelper::decodeAnimation(tinyxml2::XMLElement*,
   cocostudio::DataReaderHelper::_DataInfo*) */

AnimationData *
cocostudio::DataReaderHelper::decodeAnimation(XMLElement *param_1,_DataInfo *param_2)

{
  long lVar1;
  AnimationData *this;
  char *__s;
  ArmatureDataManager *this_00;
  ArmatureData *pAVar2;
  size_t sVar3;
  XMLElement *this_01;
  Ref *this_02;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x80);
  AnimationData::AnimationData(this);
  __s = (char *)tinyxml2::XMLElement::Attribute(param_1,"name",(char *)0x0);
  this_00 = (ArmatureDataManager *)ArmatureDataManager::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_70,__s);
  pAVar2 = (ArmatureData *)ArmatureDataManager::getArmatureData(this_00,(basic_string *)local_70);
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  sVar3 = strlen(__s);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x28),__s,sVar3);
  for (this_01 = (XMLElement *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,"mov");
      this_01 != (XMLElement *)0x0;
      this_01 = (XMLElement *)tinyxml2::XMLNode::NextSiblingElement((XMLNode *)this_01,"mov")) {
    this_02 = (Ref *)decodeMovement(this_01,pAVar2,param_2);
    AnimationData::addMovement(this,(MovementData *)this_02);
    cocos2d::Ref::release(this_02);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

