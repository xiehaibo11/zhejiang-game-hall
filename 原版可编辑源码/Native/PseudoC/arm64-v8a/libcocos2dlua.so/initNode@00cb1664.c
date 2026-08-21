
/* cocos2d::CSLoader::initNode(cocos2d::Node*, rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void __thiscall cocos2d::CSLoader::initNode(CSLoader *this,Node *param_1,GenericValue *param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  DictionaryHelper *pDVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float local_b0;
  float fStack_ac;
  long local_a8;
  
  lVar1 = tpidr_el0;
  local_a8 = *(long *)(lVar1 + 0x28);
  pDVar9 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  fVar11 = (float)cocostudio::DictionaryHelper::getFloatValue_json(pDVar9,param_2,"width",0.0);
  pDVar9 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  fVar12 = (float)cocostudio::DictionaryHelper::getFloatValue_json(pDVar9,param_2,"height",0.0);
  pDVar9 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  fVar13 = (float)cocostudio::DictionaryHelper::getFloatValue_json(pDVar9,param_2,"x",0.0);
  pDVar9 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  fVar14 = (float)cocostudio::DictionaryHelper::getFloatValue_json(pDVar9,param_2,"y",0.0);
  pDVar9 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  uVar17 = cocostudio::DictionaryHelper::getFloatValue_json(pDVar9,param_2,"scaleX",1.0);
  pDVar9 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  uVar18 = cocostudio::DictionaryHelper::getFloatValue_json(pDVar9,param_2,"scaleY",1.0);
  pDVar9 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  uVar19 = cocostudio::DictionaryHelper::getFloatValue_json(pDVar9,param_2,"rotation",0.0);
  pDVar9 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  uVar20 = cocostudio::DictionaryHelper::getFloatValue_json(pDVar9,param_2,"rotationSkewX",0.0);
  pDVar9 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  uVar21 = cocostudio::DictionaryHelper::getFloatValue_json(pDVar9,param_2,"rotationSkewY",0.0);
  pDVar9 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  uVar22 = cocostudio::DictionaryHelper::getFloatValue_json(pDVar9,param_2,"skewX",0.0);
  pDVar9 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  uVar23 = cocostudio::DictionaryHelper::getFloatValue_json(pDVar9,param_2,"skewY",0.0);
  pDVar9 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  fVar15 = (float)cocostudio::DictionaryHelper::getFloatValue_json
                            (pDVar9,param_2,"anchorPointX",0.5);
  pDVar9 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  fVar16 = (float)cocostudio::DictionaryHelper::getFloatValue_json
                            (pDVar9,param_2,"anchorPointY",0.5);
  pDVar9 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  uVar5 = cocostudio::DictionaryHelper::getIntValue_json(pDVar9,param_2,"opacity",0xff);
  pDVar9 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  bVar2 = cocostudio::DictionaryHelper::getIntValue_json(pDVar9,param_2,"colorR",0xff);
  pDVar9 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  bVar3 = cocostudio::DictionaryHelper::getIntValue_json(pDVar9,param_2,"colorG",0xff);
  pDVar9 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  bVar4 = cocostudio::DictionaryHelper::getIntValue_json(pDVar9,param_2,"colorB",0xff);
  pDVar9 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  iVar6 = cocostudio::DictionaryHelper::getIntValue_json(pDVar9,param_2,"ZOrder",0);
  pDVar9 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  uVar7 = cocostudio::DictionaryHelper::getIntValue_json(pDVar9,param_2,"tag",0);
  pDVar9 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  iVar8 = cocostudio::DictionaryHelper::getIntValue_json(pDVar9,param_2,"actionTag",0);
  pDVar9 = (DictionaryHelper *)cocostudio::DictionaryHelper::getInstance();
  uVar10 = cocostudio::DictionaryHelper::getBooleanValue_json(pDVar9,param_2,"visible",false);
  if ((fVar13 != 0.0) || (fVar14 != 0.0)) {
    local_b0 = fVar13;
    fStack_ac = fVar14;
    (**(code **)(*(long *)param_1 + 0x98))(param_1,&local_b0);
  }
  if ((float)uVar17 != 1.0) {
    (**(code **)(*(long *)param_1 + 0x50))(uVar17,param_1);
  }
  if ((float)uVar18 != 1.0) {
    (**(code **)(*(long *)param_1 + 0x60))(uVar18,param_1);
  }
  if ((float)uVar19 != 0.0) {
    (**(code **)(*(long *)param_1 + 0x180))(uVar19,param_1);
  }
  if ((float)uVar20 != 0.0) {
    (**(code **)(*(long *)param_1 + 0x1b0))(uVar20,param_1);
  }
  if ((float)uVar21 != 0.0) {
    (**(code **)(*(long *)param_1 + 0x1d0))(uVar21,param_1);
  }
  if ((float)uVar22 != 0.0) {
    (**(code **)(*(long *)param_1 + 0x128))(uVar22,param_1);
  }
  if ((float)uVar23 != 0.0) {
    (**(code **)(*(long *)param_1 + 0x138))(uVar23,param_1);
  }
  if ((fVar15 != 0.5) || (fVar16 != 0.5)) {
    local_b0 = fVar15;
    fStack_ac = fVar16;
    (**(code **)(*(long *)param_1 + 0x148))(param_1,&local_b0);
  }
  if ((fVar11 != 0.0) || (fVar12 != 0.0)) {
    Size::Size((Size *)&local_b0,fVar11,fVar12);
    (**(code **)(*(long *)param_1 + 0x160))(param_1,&local_b0);
  }
  if (iVar6 != 0) {
    (**(code **)(*(long *)param_1 + 0x18))(param_1,iVar6);
  }
  if ((uVar10 & 1) == 0) {
    (**(code **)(*(long *)param_1 + 0x170))(param_1,0);
  }
  if ((~uVar5 & 0xff) != 0) {
    (**(code **)(*(long *)param_1 + 0x490))(param_1,uVar5);
  }
  if ((bVar2 & bVar3 & bVar4) != 0xff) {
    Color3B::Color3B((Color3B *)&local_b0,bVar2,bVar3,bVar4);
    (**(code **)(*(long *)param_1 + 0x4c0))(param_1,&local_b0);
  }
  (**(code **)(*(long *)param_1 + 0x2c0))(param_1,uVar7);
  uVar17 = cocostudio::timeline::ActionTimelineData::create(iVar8);
  (**(code **)(*(long *)param_1 + 0x300))(param_1,uVar17);
  if (*(long *)(lVar1 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

