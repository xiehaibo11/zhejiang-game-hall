
/* cocostudio::DataReaderHelper::decodeMovement(tinyxml2::XMLElement*, cocostudio::ArmatureData*,
   cocostudio::DataReaderHelper::_DataInfo*) */

MovementData *
cocostudio::DataReaderHelper::decodeMovement
          (XMLElement *param_1,ArmatureData *param_2,_DataInfo *param_3)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  MovementData *this;
  char *pcVar4;
  size_t sVar5;
  XMLAttribute *pXVar6;
  XMLElement *this_00;
  long lVar7;
  BoneData *pBVar8;
  XMLNode *this_01;
  size_t __n;
  Ref *this_02;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  size_t local_90;
  void *local_88;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this != (MovementData *)0x0) {
    MovementData::MovementData(this);
  }
  pcVar4 = (char *)tinyxml2::XMLElement::Attribute(param_1,"name",(char *)0x0);
  sVar5 = strlen(pcVar4);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x28),pcVar4,sVar5);
  local_7c = 0;
  pXVar6 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"dr");
  if ((pXVar6 != (XMLAttribute *)0x0) &&
     (iVar3 = tinyxml2::XMLAttribute::QueryIntValue(pXVar6,&local_6c), iVar3 == 0)) {
    *(int *)(this + 0x40) = local_6c;
  }
  pXVar6 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"to");
  if ((pXVar6 != (XMLAttribute *)0x0) &&
     (iVar3 = tinyxml2::XMLAttribute::QueryIntValue(pXVar6,&local_70), iVar3 == 0)) {
    *(int *)(this + 0x48) = local_70;
  }
  pXVar6 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"drTW");
  if ((pXVar6 != (XMLAttribute *)0x0) &&
     (iVar3 = tinyxml2::XMLAttribute::QueryIntValue(pXVar6,&local_74), iVar3 == 0)) {
    *(int *)(this + 0x4c) = local_74;
  }
  pXVar6 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"lp");
  if ((pXVar6 != (XMLAttribute *)0x0) &&
     (iVar3 = tinyxml2::XMLAttribute::QueryIntValue(pXVar6,&local_78), iVar3 == 0)) {
    this[0x50] = (MovementData)(local_78 != 0);
  }
  pcVar4 = (char *)tinyxml2::XMLElement::Attribute(param_1,"twE",(char *)0x0);
  if (pcVar4 == (char *)0x0) goto LAB_00c4ddf0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_98,pcVar4);
  sVar5 = (ulong)((byte)local_98[0] >> 1);
  if (((byte)local_98[0] & 1) != 0) {
    sVar5 = local_90;
  }
  if (sVar5 == 3) {
    pvVar1 = (void *)((ulong)local_98 | 1);
    if (((byte)local_98[0] & 1) != 0) {
      pvVar1 = local_88;
    }
    iVar3 = memcmp(pvVar1,&DAT_012f0666,3);
    if (iVar3 != 0) goto LAB_00c4ddac;
    *(undefined4 *)(this + 0x54) = 0;
  }
  else {
LAB_00c4ddac:
    pXVar6 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"twE");
    if ((pXVar6 != (XMLAttribute *)0x0) &&
       (iVar3 = tinyxml2::XMLAttribute::QueryIntValue(pXVar6,&local_7c), iVar3 == 0)) {
      iVar3 = 3;
      if (local_7c != 2) {
        iVar3 = local_7c;
      }
      *(int *)(this + 0x54) = iVar3;
    }
  }
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
LAB_00c4ddf0:
  this_00 = (XMLElement *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,"b");
  if (this_00 != (XMLElement *)0x0) {
    do {
      while( true ) {
        pcVar4 = (char *)tinyxml2::XMLElement::Attribute(this_00,"name",(char *)0x0);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_98,pcVar4);
        lVar7 = MovementData::getMovementBoneData(this,(basic_string *)local_98);
        if (((byte)local_98[0] & 1) != 0) {
          operator_delete(local_88);
        }
        if (lVar7 == 0) break;
        this_00 = (XMLElement *)
                  tinyxml2::XMLNode::NextSiblingElement((XMLNode *)this_00,(char *)0x0);
        if (this_00 == (XMLElement *)0x0) goto LAB_00c4dfb4;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_98,pcVar4);
      pBVar8 = (BoneData *)ArmatureData::getBoneData(param_2,(basic_string *)local_98);
      if (((byte)local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_98,(basic_string *)(pBVar8 + 0x70));
      sVar5 = (ulong)((byte)local_98[0] >> 1);
      if (((byte)local_98[0] & 1) != 0) {
        sVar5 = local_90;
      }
      if (sVar5 == 0) {
        this_01 = (XMLNode *)0x0;
      }
      else {
        for (this_01 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,"b");
            this_01 != (XMLNode *)0x0;
            this_01 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_01,"b")) {
          pcVar4 = (char *)tinyxml2::XMLElement::Attribute((XMLElement *)this_01,"name",(char *)0x0)
          ;
          __n = strlen(pcVar4);
          sVar5 = (ulong)((byte)local_98[0] >> 1);
          if (((byte)local_98[0] & 1) != 0) {
            sVar5 = local_90;
          }
          if (__n == sVar5) {
            if (__n == 0) break;
            if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            pvVar1 = (void *)((ulong)local_98 | 1);
            if (((byte)local_98[0] & 1) != 0) {
              pvVar1 = local_88;
            }
            iVar3 = memcmp(pvVar1,pcVar4,__n);
            if (iVar3 == 0) break;
          }
        }
      }
      this_02 = (Ref *)decodeMovementBone(this_00,(XMLElement *)this_01,pBVar8,param_3);
      MovementData::addMovementBoneData(this,(MovementBoneData *)this_02);
      cocos2d::Ref::release(this_02);
      this_00 = (XMLElement *)tinyxml2::XMLNode::NextSiblingElement((XMLNode *)this_00,"b");
      if (((byte)local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
    } while (this_00 != (XMLElement *)0x0);
  }
LAB_00c4dfb4:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}

