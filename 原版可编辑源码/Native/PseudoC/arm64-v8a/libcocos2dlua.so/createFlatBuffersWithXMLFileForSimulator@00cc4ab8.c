
/* cocostudio::FlatBuffersSerialize::createFlatBuffersWithXMLFileForSimulator(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall
cocostudio::FlatBuffersSerialize::createFlatBuffersWithXMLFileForSimulator
          (FlatBuffersSerialize *this,basic_string *param_1)

{
  void *pvVar1;
  ulong uVar2;
  FlatBuffersSerialize *pFVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long *plVar12;
  XMLDocument *this_00;
  XMLNode *pXVar13;
  char *pcVar14;
  XMLNode *pXVar15;
  FlatBufferBuilder *pFVar16;
  size_t sVar17;
  void *__dest;
  undefined8 uVar18;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar19;
  long lVar20;
  ulong uVar21;
  void *pvVar22;
  undefined4 local_108 [2];
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  uint local_e8 [2];
  ulong local_e0;
  void *local_d8;
  undefined4 *local_d0;
  undefined4 *local_c8;
  undefined4 *puStack_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8;
  undefined7 uStack_b7;
  ulong uStack_b0;
  void *local_a8;
  byte local_a0 [16];
  char *local_90;
  byte local_88 [16];
  void *local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  plVar12 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar12 + 0x50))(local_88,plVar12,param_1);
  plVar12 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar12 + 0x128))(plVar12,local_88);
  plVar12 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar12 + 0x18))(local_a0,plVar12,local_88);
  this_00 = operator_new(0x280,(nothrow_t *)&std::nothrow);
  if (this_00 != (XMLDocument *)0x0) {
    tinyxml2::XMLDocument::XMLDocument(this_00,1,0);
  }
  pcVar14 = (char *)((ulong)local_a0 | 1);
  if ((local_a0[0] & 1) != 0) {
    pcVar14 = local_90;
  }
  tinyxml2::XMLDocument::Parse(this_00,pcVar14,0xffffffffffffffff);
  pXVar13 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)this_00,(char *)0x0);
  pXVar13 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement(pXVar13,(char *)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_b8,"");
  if (pXVar13 != (XMLNode *)0x0) {
    do {
      pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(pXVar13 + 0x18));
      iVar5 = strcmp("PropertyGroup",pcVar14);
      if (iVar5 == 0) {
        for (lVar20 = *(long *)(pXVar13 + 0x60); lVar20 != 0; lVar20 = *(long *)(lVar20 + 0x38)) {
          pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 8));
          iVar5 = strcmp("Version",pcVar14);
          if (iVar5 == 0) {
            pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 0x20));
            sVar17 = strlen(pcVar14);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(this + 0x48),pcVar14,sVar17);
            break;
          }
        }
      }
      pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(pXVar13 + 0x18));
      iVar5 = strcmp("Content",pcVar14);
      if ((iVar5 == 0) && (*(long *)(pXVar13 + 0x60) == 0)) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(&local_b8,"NodeObjectData",0xe);
        pFVar16 = operator_new(0x68,(nothrow_t *)&std::nothrow);
        if (pFVar16 != (FlatBufferBuilder *)0x0) {
          flatbuffers::FlatBufferBuilder::FlatBufferBuilder(pFVar16,0x400,(simple_allocator *)0x0);
        }
        *(FlatBufferBuilder **)(this + 0x38) = pFVar16;
        local_c8 = (undefined4 *)0x0;
        puStack_c0 = (undefined4 *)0x0;
        local_d0 = (undefined4 *)0x0;
        pXVar13 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement(pXVar13,(char *)0x0);
        if (pXVar13 == (XMLNode *)0x0) {
          uVar7 = 0;
          uVar6 = 0;
          goto LAB_00cc5000;
        }
        pvVar22 = (void *)((ulong)local_e8 | 1);
        uVar6 = 0;
        uVar7 = 0;
        goto LAB_00cc4d24;
      }
      pXVar15 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement(pXVar13,(char *)0x0);
      if (pXVar15 == (XMLNode *)0x0) {
        pXVar15 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(pXVar13,(char *)0x0);
      }
      pXVar13 = pXVar15;
    } while (pXVar15 != (XMLNode *)0x0);
  }
  goto LAB_00cc5110;
LAB_00cc4d24:
  do {
    pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(pXVar13 + 0x18));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_e8,pcVar14);
    uVar2 = (ulong)((byte)local_e8[0]._0_1_ >> 1);
    if ((local_e8[0] & 1) != 0) {
      uVar2 = local_e0;
    }
    if (uVar2 == 0xd) {
      pvVar1 = pvVar22;
      if ((local_e8[0] & 1) != 0) {
        pvVar1 = local_d8;
      }
      iVar5 = memcmp(pvVar1,"AnimationList",0xd);
      if (iVar5 == 0) {
        for (pXVar15 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement(pXVar13,(char *)0x0);
            pXVar15 != (XMLNode *)0x0;
            pXVar15 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(pXVar15,(char *)0x0)) {
          local_108[0] = createAnimationInfo(this,(XMLElement *)pXVar15);
          if (local_c8 == puStack_c0) {
            std::__ndk1::
            vector<flatbuffers::Offset<flatbuffers::AnimationInfo>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::AnimationInfo>>>
            ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::AnimationInfo>const&>
                      ((vector<flatbuffers::Offset<flatbuffers::AnimationInfo>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::AnimationInfo>>>
                        *)&local_d0,(Offset *)local_108);
          }
          else {
            *local_c8 = local_108[0];
            local_c8 = local_c8 + 1;
          }
        }
      }
    }
    else if (uVar2 == 10) {
      pvVar1 = pvVar22;
      if ((local_e8[0] & 1) != 0) {
        pvVar1 = local_d8;
      }
      iVar5 = memcmp(pvVar1,"ObjectData",10);
      if (iVar5 == 0) {
        for (lVar20 = *(long *)(pXVar13 + 0x60); lVar20 != 0; lVar20 = *(long *)(lVar20 + 0x38)) {
          pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 8));
          iVar5 = strcmp("ctype",pcVar14);
          if (iVar5 == 0) {
            pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 0x20));
            sVar17 = strlen(pcVar14);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (&local_b8,pcVar14,sVar17);
            break;
          }
        }
        bVar19 = local_b8;
        uVar2 = (ulong)((byte)local_b8 >> 1);
        if (((byte)local_b8 & 1) != 0) {
          uVar2 = uStack_b0;
        }
        if (uVar2 == 0x13) {
          pvVar1 = (void *)((ulong)&local_b8 | 1);
          if (((byte)local_b8 & 1) != 0) {
            pvVar1 = local_a8;
          }
          iVar5 = memcmp(pvVar1,"GameLayerObjectData",0x13);
joined_r0x00cc4ee0:
          if (iVar5 == 0) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (&local_b8,"NodeObjectData",0xe);
            bVar19 = local_b8;
          }
        }
        else if (uVar2 == 0x12) {
          pvVar1 = (void *)((ulong)&local_b8 | 1);
          if (((byte)local_b8 & 1) != 0) {
            pvVar1 = local_a8;
          }
          iVar5 = memcmp(pvVar1,"GameNodeObjectData",0x12);
          goto joined_r0x00cc4ee0;
        }
        pvVar1 = local_a8;
        uVar2 = uStack_b0;
        uStack_f8 = 0;
        local_f0 = (void *)0x0;
        local_100 = 0;
        if (((byte)bVar19 & 1) == 0) {
          local_100 = CONCAT71(uStack_b7,local_b8);
          uStack_f8 = uStack_b0;
          local_f0 = local_a8;
        }
        else {
          if (0xffffffffffffffef < uStack_b0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uStack_b0 < 0x17) {
            local_100 = (ulong)(byte)((int)uStack_b0 << 1);
            __dest = (void *)((ulong)&local_100 | 1);
            if (uStack_b0 != 0) goto LAB_00cc4f98;
          }
          else {
            uVar21 = uStack_b0 + 0x10 & 0xfffffffffffffff0;
            __dest = operator_new(uVar21);
            local_100 = uVar21 | 1;
            uStack_f8 = uVar2;
            local_f0 = __dest;
LAB_00cc4f98:
            memcpy(__dest,pvVar1,uVar2);
          }
          *(undefined1 *)((long)__dest + uVar2) = 0;
        }
        uVar7 = createNodeTreeForSimulator(this,pXVar13,&local_100);
        if ((local_100 & 1) != 0) {
          operator_delete(local_f0);
        }
      }
    }
    else if (uVar2 == 9) {
      pvVar1 = pvVar22;
      if ((local_e8[0] & 1) != 0) {
        pvVar1 = local_d8;
      }
      iVar5 = memcmp(pvVar1,"Animation",9);
      if (iVar5 == 0) {
        uVar6 = createNodeAction(this,(XMLElement *)pXVar13);
      }
    }
    pXVar13 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(pXVar13,(char *)0x0);
    if ((local_e8[0] & 1) != 0) {
      operator_delete(local_d8);
    }
  } while (pXVar13 != (XMLNode *)0x0);
LAB_00cc5000:
  uVar2 = *(ulong *)(this + 0x50);
  pFVar3 = *(FlatBuffersSerialize **)(this + 0x58);
  pFVar16 = *(FlatBufferBuilder **)(this + 0x38);
  if (((byte)this[0x48] & 1) == 0) {
    pFVar3 = this + 0x49;
    uVar2 = (ulong)((byte)this[0x48] >> 1);
  }
  uVar8 = flatbuffers::FlatBufferBuilder::CreateString(pFVar16,(char *)pFVar3,uVar2);
  uVar9 = flatbuffers::FlatBufferBuilder::CreateVector<flatbuffers::Offset<flatbuffers::String>>
                    (*(FlatBufferBuilder **)(this + 0x38),*(Offset **)this,
                     *(long *)(this + 8) - (long)*(Offset **)this >> 2);
  uVar10 = flatbuffers::FlatBufferBuilder::CreateVector<flatbuffers::Offset<flatbuffers::String>>
                     (*(FlatBufferBuilder **)(this + 0x38),*(Offset **)(this + 0x18),
                      *(long *)(this + 0x20) - (long)*(Offset **)(this + 0x18) >> 2);
  uVar11 = flatbuffers::FlatBufferBuilder::
           CreateVector<flatbuffers::Offset<flatbuffers::AnimationInfo>>
                     (*(FlatBufferBuilder **)(this + 0x38),(Offset *)local_d0,
                      (long)local_c8 - (long)local_d0 >> 2);
  iVar5 = flatbuffers::CreateCSParseBinary(pFVar16,uVar8,uVar9,uVar10,uVar7,uVar6,uVar11);
  pFVar16 = *(FlatBufferBuilder **)(this + 0x38);
  flatbuffers::FlatBufferBuilder::PreAlign(pFVar16,4,*(ulong *)(pFVar16 + 0x58));
  flatbuffers::FlatBufferBuilder::Align(pFVar16,4);
  local_e8[0] = (((*(int *)(pFVar16 + 8) - *(int *)(pFVar16 + 0x18)) + *(int *)(pFVar16 + 0x10)) -
                iVar5) + 4;
  flatbuffers::FlatBufferBuilder::Align(pFVar16,4);
  flatbuffers::FlatBufferBuilder::PushBytes(pFVar16,(uchar *)local_e8,4);
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x18);
  if (local_d0 != (undefined4 *)0x0) {
    local_c8 = local_d0;
    operator_delete(local_d0);
  }
LAB_00cc5110:
  uVar18 = *(undefined8 *)(this + 0x38);
  if (((byte)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar18;
}

