
/* cocostudio::DataReaderHelper::addDataFromCache(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocostudio::DataReaderHelper::_DataInfo*) */

void cocostudio::DataReaderHelper::addDataFromCache(basic_string *param_1,_DataInfo *param_2)

{
  long lVar1;
  XMLElement *this;
  XMLAttribute *this_00;
  XMLNode *pXVar2;
  Ref *pRVar3;
  ArmatureDataManager *pAVar4;
  basic_string *pbVar5;
  XMLDocument aXStack_2e8 [640];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  tinyxml2::XMLDocument::XMLDocument(aXStack_2e8,1,0);
  pbVar5 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar5 = param_1 + 1;
  }
  tinyxml2::XMLDocument::Parse(aXStack_2e8,(char *)pbVar5,0xffffffffffffffff);
  this = (XMLElement *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)aXStack_2e8,(char *)0x0);
  this_00 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(this,"version");
  if (this_00 != (XMLAttribute *)0x0) {
    tinyxml2::XMLAttribute::QueryFloatValue(this_00,(float *)(param_2 + 0x70));
  }
  pXVar2 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)this,"armatures");
  pXVar2 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement(pXVar2,"armature");
  pbVar5 = (basic_string *)(param_2 + 0x40);
  for (; pXVar2 != (XMLNode *)0x0;
      pXVar2 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(pXVar2,"armature")) {
    pRVar3 = (Ref *)decodeArmature((XMLElement *)pXVar2,param_2);
    if (*(long *)param_2 != 0) {
      std::__ndk1::mutex::lock((mutex *)(_dataReaderHelper + 0xd8));
    }
    pAVar4 = (ArmatureDataManager *)ArmatureDataManager::getInstance();
    ArmatureDataManager::addArmatureData
              (pAVar4,(basic_string *)(pRVar3 + 0x28),(ArmatureData *)pRVar3,pbVar5);
    cocos2d::Ref::release(pRVar3);
    if (*(long *)param_2 != 0) {
      std::__ndk1::mutex::unlock((mutex *)(_dataReaderHelper + 0xd8));
    }
  }
  pXVar2 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)this,"animations");
  for (pXVar2 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement(pXVar2,"animation");
      pXVar2 != (XMLNode *)0x0;
      pXVar2 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(pXVar2,"animation")) {
    pRVar3 = (Ref *)decodeAnimation((XMLElement *)pXVar2,param_2);
    if (*(long *)param_2 != 0) {
      std::__ndk1::mutex::lock((mutex *)(_dataReaderHelper + 0xd8));
    }
    pAVar4 = (ArmatureDataManager *)ArmatureDataManager::getInstance();
    ArmatureDataManager::addAnimationData
              (pAVar4,(basic_string *)(pRVar3 + 0x28),(AnimationData *)pRVar3,pbVar5);
    cocos2d::Ref::release(pRVar3);
    if (*(long *)param_2 != 0) {
      std::__ndk1::mutex::unlock((mutex *)(_dataReaderHelper + 0xd8));
    }
  }
  pXVar2 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)this,"TextureAtlas");
  for (pXVar2 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement(pXVar2,"SubTexture");
      pXVar2 != (XMLNode *)0x0;
      pXVar2 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(pXVar2,"SubTexture")) {
    pRVar3 = (Ref *)decodeTexture((XMLElement *)pXVar2,param_2);
    if (*(long *)param_2 != 0) {
      std::__ndk1::mutex::lock((mutex *)(_dataReaderHelper + 0xd8));
    }
    pAVar4 = (ArmatureDataManager *)ArmatureDataManager::getInstance();
    ArmatureDataManager::addTextureData
              (pAVar4,(basic_string *)(pRVar3 + 0x38),(TextureData *)pRVar3,pbVar5);
    cocos2d::Ref::release(pRVar3);
    if (*(long *)param_2 != 0) {
      std::__ndk1::mutex::unlock((mutex *)(_dataReaderHelper + 0xd8));
    }
  }
  tinyxml2::XMLDocument::~XMLDocument(aXStack_2e8);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

