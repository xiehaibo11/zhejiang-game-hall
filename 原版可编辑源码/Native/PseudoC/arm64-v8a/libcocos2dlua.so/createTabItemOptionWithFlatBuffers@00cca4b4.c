
/* TabItemReader::createTabItemOptionWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
TabItemReader::createTabItemOptionWithFlatBuffers
          (TabItemReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  ulong uVar1;
  XMLNode *pXVar2;
  size_t sVar3;
  void *pvVar4;
  long lVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  XMLNode *this_00;
  char *pcVar11;
  Ref *this_01;
  FlatBuffersSerialize *pFVar12;
  void *pvVar13;
  XMLNode *pXVar14;
  XMLNode *this_02;
  XMLNode *pXVar15;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  if (this_00 == (XMLNode *)0x0) {
    this_02 = (XMLNode *)0x0;
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    pvVar13 = (void *)((ulong)local_80 | 1);
    pXVar14 = (XMLNode *)0x0;
    pXVar15 = (XMLNode *)0x0;
    do {
      pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_80,pcVar11);
      bVar6 = local_80[0];
      uVar1 = (ulong)((byte)local_80[0] >> 1);
      if (((byte)local_80[0] & 1) != 0) {
        uVar1 = local_78;
      }
      sVar3 = 8;
      if (uVar1 < 9) {
        sVar3 = uVar1;
      }
      if (sVar3 == 0) {
LAB_00cca574:
        uVar7 = (uint)(8 < uVar1);
        if (uVar1 < 8) {
          uVar7 = 0xffffffff;
        }
      }
      else {
        pvVar4 = pvVar13;
        if (((byte)local_80[0] & 1) != 0) {
          pvVar4 = local_70;
        }
        uVar7 = memcmp(pvVar4,"Children",sVar3);
        if (uVar7 == 0) goto LAB_00cca574;
      }
      pXVar2 = this_00;
      if (uVar7 != 0) {
        pXVar2 = pXVar15;
      }
      sVar3 = 6;
      if (uVar1 < 7) {
        sVar3 = uVar1;
      }
      if (sVar3 == 0) {
LAB_00cca5b0:
        if (6 < uVar1 == 5 < uVar1) goto LAB_00cca640;
        this_01 = TabHeaderReader::_tabheaderReaderInstance;
        if ((TabHeaderReader::_tabheaderReaderInstance == (Ref *)0x0) &&
           (this_01 = operator_new(0x30,(nothrow_t *)&std::nothrow), this_01 != (Ref *)0x0)) {
          cocos2d::Ref::Ref(this_01);
          *(undefined ***)this_01 = &PTR__TabHeaderReader_016ce078;
          *(undefined ***)(this_01 + 0x28) = &PTR__TabHeaderReader_016ce0b0;
        }
        TabHeaderReader::_tabheaderReaderInstance = this_01;
        uVar9 = (**(code **)(*(long *)TabHeaderReader::_tabheaderReaderInstance + 0x10))
                          (TabHeaderReader::_tabheaderReaderInstance,this_00,param_2);
        this_02 = pXVar14;
      }
      else {
        pvVar4 = pvVar13;
        if (((byte)bVar6 & 1) != 0) {
          pvVar4 = local_70;
        }
        iVar8 = memcmp(pvVar4,"Header",sVar3);
        if (iVar8 == 0) goto LAB_00cca5b0;
LAB_00cca640:
        sVar3 = 9;
        if (uVar1 < 10) {
          sVar3 = uVar1;
        }
        if (sVar3 == 0) {
LAB_00cca668:
          uVar7 = (uint)(9 < uVar1);
          if (uVar1 < 9) {
            uVar7 = 0xffffffff;
          }
        }
        else {
          pvVar4 = pvVar13;
          if (((byte)bVar6 & 1) != 0) {
            pvVar4 = local_70;
          }
          uVar7 = memcmp(pvVar4,"Container",sVar3);
          if (uVar7 == 0) goto LAB_00cca668;
        }
        this_02 = this_00;
        if (uVar7 != 0) {
          this_02 = pXVar14;
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if (((byte)local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      pXVar14 = this_02;
      pXVar15 = pXVar2;
    } while (this_00 != (XMLNode *)0x0);
    if (pXVar2 != (XMLNode *)0x0) {
      tinyxml2::XMLNode::InsertEndChild(this_02,pXVar2);
    }
  }
  pFVar12 = (FlatBuffersSerialize *)cocostudio::FlatBuffersSerialize::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_98,"PanelObjectData");
  uVar10 = cocostudio::FlatBuffersSerialize::createNodeTree(pFVar12,this_02,local_98);
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  uVar9 = flatbuffers::CreateTabItemOption(param_2,uVar9,uVar10);
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}

