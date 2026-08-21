
/* cocostudio::ActionObject::initWithDictionary(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, cocos2d::Ref*) */

void __thiscall
cocostudio::ActionObject::initWithDictionary(ActionObject *this,GenericValue *param_1,Ref *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  DictionaryHelper *pDVar9;
  char *__s;
  size_t sVar10;
  ActionNode *this_00;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  Ref *local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
  __s = (char *)DictionaryHelper::getStringValue_json(pDVar9,param_1,"name",(char *)0x0);
  sVar10 = strlen(__s);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x40),__s,sVar10);
  pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
  bVar5 = DictionaryHelper::getBooleanValue_json(pDVar9,param_1,"loop",false);
  this[0x58] = (ActionObject)(bVar5 & 1);
  pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
  fVar15 = 0.0;
  fVar14 = (float)DictionaryHelper::getFloatValue_json(pDVar9,param_1,"unittime",0.0);
  puVar2 = *(undefined8 **)(this + 0x28);
  puVar3 = *(undefined8 **)(this + 0x30);
  *(float *)(this + 0x5c) = fVar14;
  if (puVar2 != puVar3) {
    ActionNode::setUnitTime((ActionNode *)*puVar2,fVar14);
    while (puVar2 = puVar2 + 1, puVar2 != puVar3) {
      ActionNode::setUnitTime((ActionNode *)*puVar2,*(float *)(this + 0x5c));
    }
  }
  pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
  iVar6 = DictionaryHelper::getArrayCount_json(pDVar9,param_1,"actionnodelist",0);
  if (0 < iVar6) {
    iVar12 = 0;
    iVar13 = 0;
    do {
      this_00 = operator_new(0x70,(nothrow_t *)&std::nothrow);
      if (this_00 != (ActionNode *)0x0) {
        ActionNode::ActionNode(this_00);
      }
      cocos2d::Ref::autorelease((Ref *)this_00);
      pDVar9 = (DictionaryHelper *)DictionaryHelper::getInstance();
      uVar11 = DictionaryHelper::getDictionaryFromArray_json(pDVar9,param_1,"actionnodelist",iVar12)
      ;
      (**(code **)(*(long *)this_00 + 0x28))(this_00,uVar11,param_2);
      ActionNode::setUnitTime(this_00,*(float *)(this + 0x5c));
      puVar2 = *(undefined8 **)(this + 0x30);
      local_80 = (Ref *)this_00;
      if (puVar2 == *(undefined8 **)(this + 0x38)) {
        std::__ndk1::vector<cocostudio::ActionNode*,std::__ndk1::allocator<cocostudio::ActionNode*>>
        ::__push_back_slow_path<cocostudio::ActionNode*const&>
                  ((vector<cocostudio::ActionNode*,std::__ndk1::allocator<cocostudio::ActionNode*>>
                    *)(this + 0x28),(ActionNode **)&local_80);
      }
      else {
        *puVar2 = this_00;
        *(undefined8 **)(this + 0x30) = puVar2 + 1;
      }
      cocos2d::Ref::retain(local_80);
      iVar7 = ActionNode::getLastFrameIndex(this_00);
      iVar8 = ActionNode::getFirstFrameIndex(this_00);
      iVar12 = iVar12 + 1;
      iVar1 = iVar7 - iVar8;
      if (iVar7 - iVar8 <= iVar13) {
        iVar1 = iVar13;
      }
      iVar13 = iVar1;
    } while (iVar6 != iVar12);
    fVar15 = (float)iVar1;
  }
  *(float *)(this + 0x78) = *(float *)(this + 0x5c) * fVar15;
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

