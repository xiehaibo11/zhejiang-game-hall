
/* cocostudio::DataReaderHelper::decodeMovementBone(tinyxml2::XMLElement*, tinyxml2::XMLElement*,
   cocostudio::BoneData*, cocostudio::DataReaderHelper::_DataInfo*) */

MovementBoneData *
cocostudio::DataReaderHelper::decodeMovementBone
          (XMLElement *param_1,XMLElement *param_2,BoneData *param_3,_DataInfo *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  MovementBoneData *this;
  XMLAttribute *pXVar6;
  char *pcVar7;
  XMLElement *this_00;
  Ref *this_01;
  FrameData *this_02;
  BoneData *pBVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [8];
  BoneData *local_a8;
  char *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  XMLElement *local_80;
  int local_74;
  float local_70;
  float local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (MovementBoneData *)0x0) {
    MovementBoneData::MovementBoneData(this);
  }
  (**(code **)(*(long *)this + 0x10))(this);
  if (param_1 != (XMLElement *)0x0) {
    pXVar6 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"sc");
    if ((pXVar6 != (XMLAttribute *)0x0) &&
       (iVar5 = tinyxml2::XMLAttribute::QueryFloatValue(pXVar6,&local_6c), iVar5 == 0)) {
      *(float *)(this + 0x28) = local_6c;
    }
    pXVar6 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(param_1,"dl");
    if ((pXVar6 != (XMLAttribute *)0x0) &&
       (iVar5 = tinyxml2::XMLAttribute::QueryFloatValue(pXVar6,&local_70), iVar5 == 0)) {
      if (0.0 < local_70) {
        local_70 = local_70 + -1.0;
      }
      *(float *)(this + 0x24) = local_70;
    }
  }
  local_74 = 0;
  local_88 = (long *)0x0;
  local_80 = (XMLElement *)0x0;
  local_98 = (long *)0x0;
  local_90 = (long *)0x0;
  if (param_2 == (XMLElement *)0x0) {
    uVar10 = 0;
  }
  else {
    for (local_80 = (XMLElement *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_2,"f");
        local_80 != (XMLElement *)0x0;
        local_80 = (XMLElement *)tinyxml2::XMLNode::NextSiblingElement((XMLNode *)local_80,"f")) {
      if (local_90 == local_88) {
        std::__ndk1::vector<tinyxml2::XMLElement*,std::__ndk1::allocator<tinyxml2::XMLElement*>>::
        __push_back_slow_path<tinyxml2::XMLElement*const&>
                  ((vector<tinyxml2::XMLElement*,std::__ndk1::allocator<tinyxml2::XMLElement*>> *)
                   &local_98,&local_80);
      }
      else {
        *local_90 = (long)local_80;
        local_90 = local_90 + 1;
      }
    }
    uVar10 = (long)local_90 - (long)local_98 >> 3;
  }
  local_80 = (XMLElement *)0x0;
  pBVar8 = (BoneData *)0x0;
  pcVar7 = (char *)tinyxml2::XMLElement::Attribute(param_1,"name",(char *)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b0,pcVar7);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x30) != local_b0) {
    pBVar8 = (BoneData *)(ulong)((byte)local_b0[0] >> 1);
    pcVar7 = (char *)((ulong)local_b0 | 1);
    if (((byte)local_b0[0] & 1) != 0) {
      pBVar8 = local_a8;
      pcVar7 = local_a0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x30),pcVar7,(ulong)pBVar8);
  }
  this_00 = (XMLElement *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,"f");
  iVar5 = 0;
  iVar12 = 0;
  uVar13 = 0;
  do {
    if (this_00 == (XMLElement *)0x0) {
      local_c0 = (undefined8 *)0x0;
      uStack_b8 = 0;
      local_c8 = (undefined8 *)0x0;
      if ((MovementBoneData *)&local_c8 != this + 0x48) {
        std::__ndk1::vector<cocostudio::FrameData*,std::__ndk1::allocator<cocostudio::FrameData*>>::
        assign<cocostudio::FrameData**>
                  ((vector<cocostudio::FrameData*,std::__ndk1::allocator<cocostudio::FrameData*>> *)
                   &local_c8,*(FrameData ***)(this + 0x48),*(FrameData ***)(this + 0x50));
        puVar3 = local_c0;
        for (puVar2 = local_c8; puVar2 != puVar3; puVar2 = puVar2 + 1) {
          cocos2d::Ref::retain((Ref *)*puVar2);
        }
      }
      lVar11 = *(long *)(this + 0x50);
      if (0 < lVar11 - *(long *)(this + 0x48)) {
        uVar10 = (ulong)(lVar11 - *(long *)(this + 0x48)) >> 3;
        lVar9 = uVar10 - 1;
        while (0 < lVar9) {
          lVar9 = local_c8[uVar10 - 2];
          fVar16 = *(float *)(local_c8[uVar10 - 1] + 0x30) - *(float *)(lVar9 + 0x30);
          fVar15 = *(float *)(local_c8[uVar10 - 1] + 0x34) - *(float *)(lVar9 + 0x34);
          if ((fVar16 < -3.1415927) || (3.1415927 < fVar16)) {
            *(float *)(lVar9 + 0x30) =
                 (float)(*(double *)(&DAT_01412ae8 + (ulong)(fVar16 < 0.0) * 8) +
                        (double)*(float *)(lVar9 + 0x30));
          }
          if ((fVar15 < -3.1415927) || (3.1415927 < fVar15)) {
            *(float *)(lVar9 + 0x34) =
                 (float)(*(double *)(&DAT_01412ae8 + (ulong)(fVar15 < 0.0) * 8) +
                        (double)*(float *)(lVar9 + 0x34));
          }
          lVar9 = uVar10 - 2;
          uVar10 = uVar10 - 1;
        }
      }
      this_02 = operator_new(0xe0,(nothrow_t *)&std::nothrow);
      if (this_02 != (FrameData *)0x0) {
        FrameData::FrameData(this_02);
        lVar11 = *(long *)(this + 0x50);
      }
      (**(code **)(*(long *)this_02 + 0x10))(this_02,*(undefined8 *)(lVar11 + -8));
      *(int *)(this_02 + 0x58) = (int)*(float *)(this + 0x2c);
      MovementBoneData::addFrameData(this,this_02);
      cocos2d::Ref::release((Ref *)this_02);
      puVar3 = local_c0;
      for (puVar2 = local_c8; puVar2 != puVar3; puVar2 = puVar2 + 1) {
        cocos2d::Ref::release((Ref *)*puVar2);
      }
      local_c0 = local_c8;
      if (local_c8 != (undefined8 *)0x0) {
        operator_delete(local_c8);
      }
      if (((byte)local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
      if (local_98 != (long *)0x0) {
        local_90 = local_98;
        operator_delete(local_98);
      }
      if (*(long *)(lVar1 + 0x28) == local_68) {
        return this;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if ((param_2 != (XMLElement *)0x0) && (uVar14 = uVar13, uVar13 < uVar10)) {
      do {
        iVar4 = local_74;
        if ((local_80 != (XMLElement *)0x0) &&
           ((iVar5 <= iVar12 && (uVar13 = uVar14, iVar12 < local_74 + iVar5)))) break;
        local_80 = (XMLElement *)local_98[uVar14];
        pXVar6 = (XMLAttribute *)tinyxml2::XMLElement::FindAttribute(local_80,"dr");
        if (pXVar6 != (XMLAttribute *)0x0) {
          tinyxml2::XMLAttribute::QueryIntValue(pXVar6,&local_74);
        }
        uVar14 = uVar14 + 1;
        iVar5 = iVar4 + iVar5;
        uVar13 = uVar10;
      } while (uVar10 != uVar14);
    }
    this_01 = (Ref *)decodeFrame(this_00,local_80,pBVar8,param_4);
    MovementBoneData::addFrameData(this,(FrameData *)this_01);
    cocos2d::Ref::release(this_01);
    *(int *)(this_01 + 0x58) = iVar12;
    iVar12 = *(int *)(this_01 + 0x5c) + iVar12;
    *(float *)(this + 0x2c) = (float)iVar12;
    this_00 = (XMLElement *)tinyxml2::XMLNode::NextSiblingElement((XMLNode *)this_00,"f");
  } while( true );
}

