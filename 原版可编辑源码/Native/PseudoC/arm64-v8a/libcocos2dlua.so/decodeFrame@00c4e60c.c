
/* cocostudio::DataReaderHelper::decodeFrame(tinyxml2::XMLElement*, tinyxml2::XMLElement*,
   cocostudio::BoneData*, cocostudio::DataReaderHelper::_DataInfo*) */

FrameData *
cocostudio::DataReaderHelper::decodeFrame
          (XMLElement *param_1,XMLElement *param_2,BoneData *param_3,_DataInfo *param_4)

{
  ulong uVar1;
  void *__s1;
  long lVar2;
  int iVar3;
  FrameData *this;
  long lVar4;
  char *pcVar5;
  size_t sVar6;
  XMLAttribute *pXVar7;
  XMLElement *this_00;
  BaseData *pBVar8;
  undefined8 uVar9;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  FrameData local_e4 [4];
  undefined8 local_e0;
  int local_d8 [3];
  float fStack_cc;
  float local_c8 [6];
  uint local_b0 [2];
  ulong local_a8;
  void *local_a0;
  float fStack_8c;
  float local_88 [2];
  undefined8 local_80;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_c8[2] = 0.0;
  local_c8[3] = 0.0;
  local_c8[4] = 0.0;
  local_c8[5] = 0.0;
  stack0xffffffffffffff30 = 0;
  local_c8[0] = 0.0;
  local_c8[1] = 0.0;
  local_e0 = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  this = operator_new(0xe0,(nothrow_t *)&std::nothrow);
  if (this != (FrameData *)0x0) {
    FrameData::FrameData(this);
  }
  lVar4 = tinyxml2::XMLElement::Attribute(param_1,"mov",(char *)0x0);
  if (lVar4 != 0) {
    pcVar5 = (char *)tinyxml2::XMLElement::Attribute(param_1,"mov",(char *)0x0);
    sVar6 = strlen(pcVar5);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x98),pcVar5,sVar6);
  }
  lVar4 = tinyxml2::XMLElement::Attribute(param_1,"evt",(char *)0x0);
  if (lVar4 != 0) {
    pcVar5 = (char *)tinyxml2::XMLElement::Attribute(param_1,"evt",(char *)0x0);
    sVar6 = strlen(pcVar5);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x80),pcVar5,sVar6);
  }
  lVar4 = tinyxml2::XMLElement::Attribute(param_1,"sd",(char *)0x0);
  if (lVar4 != 0) {
    pcVar5 = (char *)tinyxml2::XMLElement::Attribute(param_1,"sd",(char *)0x0);
    sVar6 = strlen(pcVar5);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0xb0),pcVar5,sVar6);
  }
  lVar4 = tinyxml2::XMLElement::Attribute(param_1,"sdE",(char *)0x0);
  if (lVar4 != 0) {
    pcVar5 = (char *)tinyxml2::XMLElement::Attribute(param_1,"sdE",(char *)0x0);
    sVar6 = strlen(pcVar5);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 200),pcVar5,sVar6);
  }
  local_e4[0] = (FrameData)0x0;
  pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"tweenFrame");
  if ((pXVar7 != (XMLAttribute *)0x0) &&
     (iVar3 = tinyxml2::XMLAttribute::QueryBoolValue(pXVar7,(bool *)local_e4), iVar3 == 0)) {
    this[0x70] = local_e4[0];
  }
  if (2.0 <= *(float *)(param_4 + 0x70)) {
    pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"cocos2d_x");
    if ((pXVar7 != (XMLAttribute *)0x0) &&
       (iVar3 = tinyxml2::XMLAttribute::QueryFloatValue(pXVar7,local_c8 + 5), iVar3 == 0)) {
      *(float *)(this + 0x24) = local_c8[5] * s_PositionReadScale;
    }
    pcVar5 = "cocos2d_y";
  }
  else {
    pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"x");
    if ((pXVar7 != (XMLAttribute *)0x0) &&
       (iVar3 = tinyxml2::XMLAttribute::QueryFloatValue(pXVar7,local_c8 + 5), iVar3 == 0)) {
      *(float *)(this + 0x24) = local_c8[5] * s_PositionReadScale;
    }
    pcVar5 = "y";
  }
  pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,pcVar5);
  if ((pXVar7 != (XMLAttribute *)0x0) &&
     (iVar3 = tinyxml2::XMLAttribute::QueryFloatValue(pXVar7,local_c8 + 4), iVar3 == 0)) {
    *(float *)(this + 0x28) = -(local_c8[4] * s_PositionReadScale);
  }
  pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"cX");
  if ((pXVar7 != (XMLAttribute *)0x0) &&
     (iVar3 = tinyxml2::XMLAttribute::QueryFloatValue(pXVar7,local_c8 + 3), iVar3 == 0)) {
    *(float *)(this + 0x38) = local_c8[3];
  }
  pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"cY");
  if ((pXVar7 != (XMLAttribute *)0x0) &&
     (iVar3 = tinyxml2::XMLAttribute::QueryFloatValue(pXVar7,local_c8 + 2), iVar3 == 0)) {
    *(float *)(this + 0x3c) = local_c8[2];
  }
  pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"kX");
  if ((pXVar7 != (XMLAttribute *)0x0) &&
     (iVar3 = tinyxml2::XMLAttribute::QueryFloatValue(pXVar7,local_c8 + 1), iVar3 == 0)) {
    *(float *)(this + 0x30) = local_c8[1] * 0.017453292;
  }
  pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"kY");
  if ((pXVar7 != (XMLAttribute *)0x0) &&
     (iVar3 = tinyxml2::XMLAttribute::QueryFloatValue(pXVar7,local_c8), iVar3 == 0)) {
    *(float *)(this + 0x34) = local_c8[0] * -0.017453292;
  }
  pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"dr");
  if ((pXVar7 != (XMLAttribute *)0x0) &&
     (iVar3 = tinyxml2::XMLAttribute::QueryIntValue(pXVar7,local_d8 + 2), iVar3 == 0)) {
    *(int *)(this + 0x5c) = local_d8[2];
  }
  pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"dI");
  if ((pXVar7 != (XMLAttribute *)0x0) &&
     (iVar3 = tinyxml2::XMLAttribute::QueryIntValue(pXVar7,local_d8 + 1), iVar3 == 0)) {
    *(int *)(this + 0x74) = local_d8[1];
  }
  pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"z");
  if ((pXVar7 != (XMLAttribute *)0x0) &&
     (iVar3 = tinyxml2::XMLAttribute::QueryIntValue(pXVar7,local_d8), iVar3 == 0)) {
    *(int *)(this + 0x2c) = local_d8[0];
  }
  pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"twR");
  if ((pXVar7 != (XMLAttribute *)0x0) &&
     (iVar3 = tinyxml2::XMLAttribute::QueryFloatValue(pXVar7,&fStack_cc), iVar3 == 0)) {
    *(float *)(this + 0x40) = fStack_cc;
  }
  pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"bd");
  if ((pXVar7 != (XMLAttribute *)0x0) &&
     (iVar3 = tinyxml2::XMLAttribute::QueryIntValue(pXVar7,(int *)&local_e0), iVar3 == 0)) {
    switch(local_e0 & 0xffffffff) {
    case 0:
      *(undefined8 *)(this + 0x78) = 0x30300000001;
      goto LAB_00c4ea58;
    default:
      uVar9 = 0x30300000001;
      break;
    case 3:
      uVar9 = 0x30300000306;
      break;
    case 5:
      uVar9 = 0x30100000001;
      break;
    case 8:
      uVar9 = 0x100000302;
    }
    *(undefined8 *)(this + 0x78) = uVar9;
  }
LAB_00c4ea58:
  this_00 = (XMLElement *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,"colorTransform");
  if (this_00 != (XMLElement *)0x0) {
    local_f0 = 100;
    local_100 = 0;
    pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(this_00,"a");
    if (pXVar7 != (XMLAttribute *)0x0) {
      tinyxml2::XMLAttribute::QueryIntValue(pXVar7,(int *)local_b0);
    }
    pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(this_00,"r");
    if (pXVar7 != (XMLAttribute *)0x0) {
      tinyxml2::XMLAttribute::QueryIntValue(pXVar7,&local_e8);
    }
    pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(this_00,"g");
    if (pXVar7 != (XMLAttribute *)0x0) {
      tinyxml2::XMLAttribute::QueryIntValue(pXVar7,&local_ec);
    }
    pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(this_00,"b");
    if (pXVar7 != (XMLAttribute *)0x0) {
      tinyxml2::XMLAttribute::QueryIntValue(pXVar7,&local_f0);
    }
    pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(this_00,"aM");
    if (pXVar7 != (XMLAttribute *)0x0) {
      tinyxml2::XMLAttribute::QueryIntValue(pXVar7,&local_f4);
    }
    pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(this_00,"rM");
    if (pXVar7 != (XMLAttribute *)0x0) {
      tinyxml2::XMLAttribute::QueryIntValue(pXVar7,&local_f8);
    }
    pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(this_00,"gM");
    if (pXVar7 != (XMLAttribute *)0x0) {
      tinyxml2::XMLAttribute::QueryIntValue(pXVar7,&local_fc);
    }
    pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(this_00,"bM");
    if (pXVar7 != (XMLAttribute *)0x0) {
      tinyxml2::XMLAttribute::QueryIntValue(pXVar7,&local_100);
    }
    *(int *)(this + 0x48) = (int)((double)(long)local_f4 * 2.55 + (double)(long)(int)local_b0[0]);
    *(int *)(this + 0x4c) = (int)((double)(long)local_f8 * 2.55 + (double)(long)local_e8);
    *(int *)(this + 0x50) = (int)((double)(long)local_fc * 2.55 + (double)(long)local_ec);
    *(int *)(this + 0x54) = (int)((double)(long)local_100 * 2.55 + (double)(long)local_f0);
    this[0x44] = (FrameData)0x1;
  }
  pBVar8 = (BaseData *)0x0;
  pcVar5 = (char *)tinyxml2::XMLElement::Attribute(param_1,"twE",(char *)0x0);
  if (pcVar5 == (char *)0x0) goto LAB_00c4ecb8;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_b0,pcVar5);
  uVar1 = (ulong)((byte)local_b0[0]._0_1_ >> 1);
  if ((local_b0[0] & 1) != 0) {
    uVar1 = local_a8;
  }
  if (uVar1 == 3) {
    __s1 = (void *)((ulong)local_b0 | 1);
    if ((local_b0[0] & 1) != 0) {
      __s1 = local_a0;
    }
    pBVar8 = (BaseData *)0x3;
    iVar3 = memcmp(__s1,&DAT_012f0666,3);
    if (iVar3 != 0) goto LAB_00c4ec74;
    *(undefined4 *)(this + 0x60) = 0;
    if ((local_b0[0] & 1) == 0) goto LAB_00c4ecb8;
  }
  else {
LAB_00c4ec74:
    pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"twE");
    if ((pXVar7 != (XMLAttribute *)0x0) &&
       (iVar3 = tinyxml2::XMLAttribute::QueryIntValue(pXVar7,(int *)((long)&local_e0 + 4)),
       iVar3 == 0)) {
      iVar3 = 3;
      if (local_e0._4_4_ != 2) {
        iVar3 = local_e0._4_4_;
      }
      *(int *)(this + 0x60) = iVar3;
    }
    if (((byte)local_b0[0]._0_1_ & 1) == 0) goto LAB_00c4ecb8;
  }
  operator_delete(local_a0);
LAB_00c4ecb8:
  if (param_2 != (XMLElement *)0x0) {
    BaseData::BaseData((BaseData *)local_b0);
    if (2.0 <= *(float *)(param_4 + 0x70)) {
      pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_2,"cocos2d_x");
      if (pXVar7 != (XMLAttribute *)0x0) {
        tinyxml2::XMLAttribute::QueryFloatValue(pXVar7,&fStack_8c);
      }
      pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_2,"cocos2d_y");
      if (pXVar7 != (XMLAttribute *)0x0) {
        tinyxml2::XMLAttribute::QueryFloatValue(pXVar7,local_88);
      }
    }
    else {
      pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_2,"x");
      if (pXVar7 != (XMLAttribute *)0x0) {
        tinyxml2::XMLAttribute::QueryFloatValue(pXVar7,&fStack_8c);
      }
      pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_2,"y");
      if (pXVar7 != (XMLAttribute *)0x0) {
        tinyxml2::XMLAttribute::QueryFloatValue(pXVar7,local_88);
      }
    }
    pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_2,"kX");
    if (pXVar7 != (XMLAttribute *)0x0) {
      tinyxml2::XMLAttribute::QueryFloatValue(pXVar7,(float *)&local_80);
    }
    pXVar7 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_2,"kY");
    if (pXVar7 != (XMLAttribute *)0x0) {
      tinyxml2::XMLAttribute::QueryFloatValue(pXVar7,(float *)((long)&local_80 + 4));
    }
    local_88[0] = -local_88[0];
    local_80 = CONCAT44((float)((ulong)local_80 >> 0x20) * -0.017453292,
                        (float)local_80 * 0.017453292);
    TransformHelp::transformFromParent((TransformHelp *)this,(BaseData *)local_b0,pBVar8);
    BaseData::~BaseData((BaseData *)local_b0);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

