
/* cocostudio::DataReaderHelper::decodeArmature(tinyxml2::XMLElement*,
   cocostudio::DataReaderHelper::_DataInfo*) */

ArmatureData * cocostudio::DataReaderHelper::decodeArmature(XMLElement *param_1,_DataInfo *param_2)

{
  void *__s1;
  long lVar1;
  XMLNode *this;
  int iVar2;
  ArmatureData *this_00;
  char *pcVar3;
  size_t sVar4;
  XMLElement *this_01;
  Ref *this_02;
  undefined8 uVar5;
  size_t __n;
  undefined8 extraout_x1;
  XMLElement *extraout_x1_00;
  XMLElement *extraout_x1_01;
  XMLElement *pXVar6;
  XMLElement *extraout_x1_02;
  byte bVar7;
  undefined1 auVar8 [16];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  size_t local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this_00 = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this_00 != (ArmatureData *)0x0) {
    ArmatureData::ArmatureData(this_00);
  }
  ArmatureData::init();
  pcVar3 = (char *)tinyxml2::XMLElement::Attribute(param_1,"name",(char *)0x0);
  sVar4 = strlen(pcVar3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this_00 + 0x28),pcVar3,sVar4);
  this_01 = (XMLElement *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,"b");
  if (this_01 != (XMLElement *)0x0) {
    do {
      auVar8 = tinyxml2::XMLElement::Attribute(this_01,"parent",(char *)0x0);
      pXVar6 = auVar8._8_8_;
      if (auVar8._0_8_ != (char *)0x0) {
        uVar5 = tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,"b");
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_80,auVar8._0_8_);
        auVar8._8_8_ = extraout_x1;
        auVar8._0_8_ = uVar5;
        while( true ) {
          pXVar6 = auVar8._8_8_;
          this = auVar8._0_8_;
          if (this == (XMLNode *)0x0) break;
          pcVar3 = (char *)tinyxml2::XMLElement::Attribute((XMLElement *)this,"name",(char *)0x0);
          __n = strlen(pcVar3);
          sVar4 = (ulong)((byte)local_80[0] >> 1);
          if (((byte)local_80[0] & 1) != 0) {
            sVar4 = local_78;
          }
          if (__n == sVar4) {
            bVar7 = (byte)local_80[0] & 1;
            pXVar6 = extraout_x1_00;
            if (__n == 0) goto LAB_00c4d4e8;
            if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            __s1 = (void *)((ulong)local_80 | 1);
            if (((byte)local_80[0] & 1) != 0) {
              __s1 = local_70;
            }
            iVar2 = memcmp(__s1,pcVar3,__n);
            pXVar6 = extraout_x1_01;
            if (iVar2 == 0) goto LAB_00c4d4e8;
          }
          auVar8 = tinyxml2::XMLNode::NextSiblingElement(this,"b");
        }
        bVar7 = (byte)local_80[0] & 1;
LAB_00c4d4e8:
        if (bVar7 != 0) {
          operator_delete(local_70);
          pXVar6 = extraout_x1_02;
        }
      }
      this_02 = (Ref *)decodeBone(this_01,pXVar6,param_2);
      ArmatureData::addBoneData(this_00,(BoneData *)this_02);
      cocos2d::Ref::release(this_02);
      this_01 = (XMLElement *)tinyxml2::XMLNode::NextSiblingElement((XMLNode *)this_01,"b");
    } while (this_01 != (XMLElement *)0x0);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

