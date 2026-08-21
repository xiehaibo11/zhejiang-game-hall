
/* cocostudio::DataReaderHelper::decodeArmature(cocostudio::CocoLoader*, cocostudio::stExpCocoNode*,
   cocostudio::DataReaderHelper::_DataInfo*) */

ArmatureData *
cocostudio::DataReaderHelper::decodeArmature
          (CocoLoader *param_1,stExpCocoNode *param_2,_DataInfo *param_3)

{
  double dVar1;
  uint uVar2;
  ArmatureData *this;
  long lVar3;
  char *pcVar4;
  size_t sVar5;
  stExpCocoNode *psVar6;
  Ref *this_00;
  ulong uVar7;
  
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this != (ArmatureData *)0x0) {
    ArmatureData::ArmatureData(this);
  }
  ArmatureData::init();
  lVar3 = stExpCocoNode::GetChildArray(param_2,param_1);
  pcVar4 = (char *)stExpCocoNode::GetValue((stExpCocoNode *)(lVar3 + 0x20),param_1);
  if (pcVar4 != (char *)0x0) {
    sVar5 = strlen(pcVar4);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x28),pcVar4,sVar5);
  }
  pcVar4 = (char *)stExpCocoNode::GetValue((stExpCocoNode *)(lVar3 + 0x10),param_1);
  dVar1 = (double)cocos2d::utils::atof(pcVar4);
  *(float *)(this + 0x68) = (float)dVar1;
  *(float *)(param_3 + 0x74) = (float)dVar1;
  uVar2 = stExpCocoNode::GetChildNum((stExpCocoNode *)(lVar3 + 0x30));
  uVar7 = (ulong)uVar2;
  psVar6 = (stExpCocoNode *)stExpCocoNode::GetChildArray((stExpCocoNode *)(lVar3 + 0x30),param_1);
  if (0 < (int)uVar2) {
    do {
      this_00 = (Ref *)decodeBone(param_1,psVar6,param_3);
      ArmatureData::addBoneData(this,(BoneData *)this_00);
      cocos2d::Ref::release(this_00);
      uVar7 = uVar7 - 1;
      psVar6 = psVar6 + 0x10;
    } while (uVar7 != 0);
  }
  return this;
}

