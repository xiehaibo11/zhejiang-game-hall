
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::FlatBuffersSerialize::serializeFlatBuffersWithXMLFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void cocostudio::FlatBuffersSerialize::serializeFlatBuffersWithXMLFile
               (basic_string *param_1,basic_string *param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long *plVar11;
  ulong uVar12;
  XMLDocument *this;
  XMLNode *pXVar13;
  char *pcVar14;
  XMLNode *pXVar15;
  FlatBufferBuilder *pFVar16;
  size_t sVar17;
  void *__dest;
  basic_string *pbVar18;
  undefined8 in_x2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  ulong uVar19;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar20;
  long lVar21;
  void *pvVar22;
  void *pvVar23;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_260 [16];
  void *local_250;
  uint local_248 [2];
  ulong local_240;
  void *local_238;
  ulong local_230;
  ulong uStack_228;
  void *local_220;
  uint *local_218;
  uint *local_210;
  uint *puStack_208;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_200;
  undefined7 uStack_1ff;
  ulong uStack_1f8;
  void *local_1f0;
  byte local_1e8 [16];
  char *local_1d8;
  byte local_1d0 [16];
  void *local_1c0;
  undefined **local_1b8;
  ulong local_1b0;
  void *local_1a8;
  byte abStack_198 [96];
  long local_138;
  undefined **local_108 [19];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  plVar11 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar11 + 0x50))(local_1d0,plVar11,param_2);
  plVar11 = (long *)cocos2d::FileUtils::getInstance();
  uVar12 = (**(code **)(*plVar11 + 0x128))(plVar11,local_1d0);
  if ((uVar12 & 1) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(in_x8,".csd file does not exist.");
    goto LAB_00cbe178;
  }
  plVar11 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar11 + 0x18))(local_1e8,plVar11,local_1d0);
  this = operator_new(0x280,(nothrow_t *)&std::nothrow);
  if (this != (XMLDocument *)0x0) {
    tinyxml2::XMLDocument::XMLDocument(this,1,0);
  }
  pcVar14 = (char *)((ulong)local_1e8 | 1);
  if ((local_1e8[0] & 1) != 0) {
    pcVar14 = local_1d8;
  }
  tinyxml2::XMLDocument::Parse(this,pcVar14,0xffffffffffffffff);
  pXVar13 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)this,(char *)0x0);
  pXVar13 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement(pXVar13,(char *)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_200,"");
  if (pXVar13 != (XMLNode *)0x0) {
    do {
      pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(pXVar13 + 0x18));
      iVar4 = strcmp("PropertyGroup",pcVar14);
      if (iVar4 == 0) {
        for (lVar21 = *(long *)(pXVar13 + 0x60); lVar21 != 0; lVar21 = *(long *)(lVar21 + 0x38)) {
          pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar21 + 8));
          iVar4 = strcmp("Version",pcVar14);
          if (iVar4 == 0) {
            pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar21 + 0x20));
            sVar17 = strlen(pcVar14);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)(param_1 + 0x48),pcVar14,sVar17);
            break;
          }
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (param_1 + 0x48),"2.1.0.0",7);
      }
      pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(pXVar13 + 0x18));
      iVar4 = strcmp("Content",pcVar14);
      if ((iVar4 == 0) && (*(long *)(pXVar13 + 0x60) == 0)) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(&local_200,"NodeObjectData",0xe);
        pFVar16 = operator_new(0x68,(nothrow_t *)&std::nothrow);
        if (pFVar16 != (FlatBufferBuilder *)0x0) {
          flatbuffers::FlatBufferBuilder::FlatBufferBuilder(pFVar16,0x400,(simple_allocator *)0x0);
        }
        *(FlatBufferBuilder **)(param_1 + 0x38) = pFVar16;
        local_210 = (uint *)0x0;
        puStack_208 = (uint *)0x0;
        local_218 = (uint *)0x0;
        pXVar13 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement(pXVar13,(char *)0x0);
        if (pXVar13 != (XMLNode *)0x0) {
          pvVar22 = (void *)((ulong)&local_1b8 | 1);
          uVar5 = 0;
          uVar6 = 0;
          goto LAB_00cbdbb4;
        }
        uVar6 = 0;
        uVar5 = 0;
        goto LAB_00cbde80;
      }
      pXVar15 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement(pXVar13,(char *)0x0);
      if (pXVar15 == (XMLNode *)0x0) {
        pXVar15 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(pXVar13,(char *)0x0);
      }
      pXVar13 = pXVar15;
    } while (pXVar15 != (XMLNode *)0x0);
  }
LAB_00cbe148:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(in_x8,"");
  goto joined_r0x00cbe234;
LAB_00cbdbb4:
  do {
    pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(pXVar13 + 0x18));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_1b8,pcVar14);
    uVar12 = (ulong)local_1b8 >> 1 & 0x7f;
    if (((ulong)local_1b8 & 1) != 0) {
      uVar12 = local_1b0;
    }
    if (uVar12 == 0xd) {
      pvVar23 = pvVar22;
      if (((ulong)local_1b8 & 1) != 0) {
        pvVar23 = local_1a8;
      }
      iVar4 = memcmp(pvVar23,"AnimationList",0xd);
      if (iVar4 == 0) {
        for (pXVar15 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement(pXVar13,(char *)0x0);
            pXVar15 != (XMLNode *)0x0;
            pXVar15 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(pXVar15,(char *)0x0)) {
          local_248[0] = createAnimationInfo((FlatBuffersSerialize *)param_1,(XMLElement *)pXVar15);
          if (local_210 == puStack_208) {
            std::__ndk1::
            vector<flatbuffers::Offset<flatbuffers::AnimationInfo>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::AnimationInfo>>>
            ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::AnimationInfo>const&>
                      ((vector<flatbuffers::Offset<flatbuffers::AnimationInfo>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::AnimationInfo>>>
                        *)&local_218,(Offset *)local_248);
          }
          else {
            *local_210 = local_248[0];
            local_210 = local_210 + 1;
          }
        }
      }
    }
    else if (uVar12 == 10) {
      pvVar23 = pvVar22;
      if (((ulong)local_1b8 & 1) != 0) {
        pvVar23 = local_1a8;
      }
      iVar4 = memcmp(pvVar23,"ObjectData",10);
      if (iVar4 == 0) {
        for (lVar21 = *(long *)(pXVar13 + 0x60); lVar21 != 0; lVar21 = *(long *)(lVar21 + 0x38)) {
          pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar21 + 8));
          iVar4 = strcmp("ctype",pcVar14);
          if (iVar4 == 0) {
            pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar21 + 0x20));
            sVar17 = strlen(pcVar14);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (&local_200,pcVar14,sVar17);
            break;
          }
        }
        bVar20 = local_200;
        uVar12 = (ulong)((byte)local_200 >> 1);
        if (((byte)local_200 & 1) != 0) {
          uVar12 = uStack_1f8;
        }
        if (uVar12 == 0x13) {
          pvVar23 = (void *)((ulong)&local_200 | 1);
          if (((byte)local_200 & 1) != 0) {
            pvVar23 = local_1f0;
          }
          iVar4 = memcmp(pvVar23,"GameLayerObjectData",0x13);
joined_r0x00cbdd74:
          if (iVar4 == 0) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (&local_200,"NodeObjectData",0xe);
            bVar20 = local_200;
          }
        }
        else if (uVar12 == 0x12) {
          pvVar23 = (void *)((ulong)&local_200 | 1);
          if (((byte)local_200 & 1) != 0) {
            pvVar23 = local_1f0;
          }
          iVar4 = memcmp(pvVar23,"GameNodeObjectData",0x12);
          goto joined_r0x00cbdd74;
        }
        pvVar23 = local_1f0;
        uVar12 = uStack_1f8;
        uStack_228 = 0;
        local_220 = (void *)0x0;
        local_230 = 0;
        if (((byte)bVar20 & 1) == 0) {
          local_230 = CONCAT71(uStack_1ff,local_200);
          uStack_228 = uStack_1f8;
          local_220 = local_1f0;
        }
        else {
          if (0xffffffffffffffef < uStack_1f8) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uStack_1f8 < 0x17) {
            local_230 = (ulong)(byte)((int)uStack_1f8 << 1);
            __dest = (void *)((ulong)&local_230 | 1);
            if (uStack_1f8 != 0) goto LAB_00cbde18;
          }
          else {
            uVar19 = uStack_1f8 + 0x10 & 0xfffffffffffffff0;
            __dest = operator_new(uVar19);
            local_230 = uVar19 | 1;
            uStack_228 = uVar12;
            local_220 = __dest;
LAB_00cbde18:
            memcpy(__dest,pvVar23,uVar12);
          }
          *(undefined1 *)((long)__dest + uVar12) = 0;
        }
        uVar6 = createNodeTree((FlatBuffersSerialize *)param_1,pXVar13,&local_230);
        if ((local_230 & 1) != 0) {
          operator_delete(local_220);
        }
      }
    }
    else if (uVar12 == 9) {
      pvVar23 = pvVar22;
      if (((ulong)local_1b8 & 1) != 0) {
        pvVar23 = local_1a8;
      }
      iVar4 = memcmp(pvVar23,"Animation",9);
      if (iVar4 == 0) {
        uVar5 = createNodeAction((FlatBuffersSerialize *)param_1,(XMLElement *)pXVar13);
      }
    }
    pXVar13 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(pXVar13,(char *)0x0);
    if (((ulong)local_1b8 & 1) != 0) {
      operator_delete(local_1a8);
    }
  } while (pXVar13 != (XMLNode *)0x0);
LAB_00cbde80:
  uVar12 = *(ulong *)(param_1 + 0x50);
  pbVar18 = *(basic_string **)(param_1 + 0x58);
  pFVar16 = *(FlatBufferBuilder **)(param_1 + 0x38);
  if (((byte)param_1[0x48] & 1) == 0) {
    pbVar18 = param_1 + 0x49;
    uVar12 = (ulong)((byte)param_1[0x48] >> 1);
  }
  uVar7 = flatbuffers::FlatBufferBuilder::CreateString(pFVar16,(char *)pbVar18,uVar12);
  uVar8 = flatbuffers::FlatBufferBuilder::CreateVector<flatbuffers::Offset<flatbuffers::String>>
                    (*(FlatBufferBuilder **)(param_1 + 0x38),*(Offset **)param_1,
                     *(long *)(param_1 + 8) - (long)*(Offset **)param_1 >> 2);
  uVar9 = flatbuffers::FlatBufferBuilder::CreateVector<flatbuffers::Offset<flatbuffers::String>>
                    (*(FlatBufferBuilder **)(param_1 + 0x38),*(Offset **)(param_1 + 0x18),
                     *(long *)(param_1 + 0x20) - (long)*(Offset **)(param_1 + 0x18) >> 2);
  uVar10 = flatbuffers::FlatBufferBuilder::
           CreateVector<flatbuffers::Offset<flatbuffers::AnimationInfo>>
                     (*(FlatBufferBuilder **)(param_1 + 0x38),(Offset *)local_218,
                      (long)local_210 - (long)local_218 >> 2);
  iVar4 = flatbuffers::CreateCSParseBinary(pFVar16,uVar7,uVar8,uVar9,uVar6,uVar5,uVar10);
  pFVar16 = *(FlatBufferBuilder **)(param_1 + 0x38);
  flatbuffers::FlatBufferBuilder::PreAlign(pFVar16,4,*(ulong *)(pFVar16 + 0x58));
  flatbuffers::FlatBufferBuilder::Align(pFVar16,4);
  local_1b8 = (undefined **)
              CONCAT44(local_1b8._4_4_,
                       (((*(int *)(pFVar16 + 8) - *(int *)(pFVar16 + 0x18)) +
                        *(int *)(pFVar16 + 0x10)) - iVar4) + 4);
  flatbuffers::FlatBufferBuilder::Align(pFVar16,4);
  flatbuffers::FlatBufferBuilder::PushBytes(pFVar16,(uchar *)&local_1b8,4);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)param_1;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  plVar11 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar11 + 0x50))(local_248,plVar11,in_x2);
  pvVar22 = (void *)((ulong)local_248 | 1);
  uVar12 = (ulong)((byte)local_248[0] >> 1);
  if ((local_248[0] & 1) != 0) {
    pvVar22 = local_238;
    uVar12 = local_240;
  }
  uVar19 = uVar12;
  if (uVar12 == 0) {
LAB_00cbdfd8:
    uVar19 = 0xffffffffffffffff;
  }
  else {
    do {
      if (uVar19 == 0) goto LAB_00cbdfd8;
      lVar21 = uVar19 - 1;
      uVar19 = uVar19 - 1;
    } while (*(char *)((long)pvVar22 + lVar21) != '.');
  }
  if (uVar19 <= uVar12) {
    uVar12 = uVar19;
  }
  local_1b0 = 0;
  local_1a8 = (void *)0x0;
  local_1b8 = (undefined **)0x0;
  if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar12 < 0x17) {
    pvVar23 = (void *)((ulong)&local_1b8 | 1);
    local_1b8 = (undefined **)(ulong)(byte)((int)uVar12 << 1);
    if (uVar12 != 0) goto LAB_00cbe034;
  }
  else {
    uVar19 = uVar12 + 0x10 & 0xfffffffffffffff0;
    pvVar23 = operator_new(uVar19);
    local_1b8 = (undefined **)(uVar19 | 1);
    local_1b0 = uVar12;
    local_1a8 = pvVar23;
LAB_00cbe034:
    memcpy(pvVar23,pvVar22,uVar12);
  }
  *(undefined1 *)((long)pvVar23 + uVar12) = 0;
  pbVar18 = (basic_string *)
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_1b8,".csb",4);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_260,pbVar18);
  if (((ulong)local_1b8 & 1) != 0) {
    operator_delete(local_1a8);
  }
  lVar21 = *(long *)(param_1 + 0x38);
  pcVar14 = *(char **)(lVar21 + 0x18);
  iVar4 = *(int *)(lVar21 + 8);
  iVar1 = *(int *)(lVar21 + 0x10);
  pvVar22 = (void *)((ulong)local_260 | 1);
  if (((byte)local_260[0] & 1) != 0) {
    pvVar22 = local_250;
  }
  FUN_00cc6ba4(&local_1b8,pvVar22,4);
  if (local_138 == 0) {
    bVar3 = false;
  }
  else {
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1b8,pcVar14,
               (ulong)(uint)((iVar4 - (int)pcVar14) + iVar1));
    bVar3 = (abStack_198[(long)local_1b8[-3]] & 1) == 0;
  }
  local_1b8 = &PTR__basic_ofstream_016cddd0;
  local_108[0] = &PTR__basic_ofstream_016cddf8;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)&local_1b0);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  if (bVar3) {
    deleteFlatBufferBuilder((FlatBuffersSerialize *)param_1);
    if (((byte)local_260[0] & 1) != 0) {
      operator_delete(local_250);
    }
    if ((local_248[0] & 1) != 0) {
      operator_delete(local_238);
    }
    if (local_218 != (uint *)0x0) {
      local_210 = local_218;
      operator_delete(local_218);
    }
    goto LAB_00cbe148;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(in_x8,"couldn\'t save files!");
  if (((byte)local_260[0] & 1) != 0) {
    operator_delete(local_250);
  }
  if ((local_248[0] & 1) != 0) {
    operator_delete(local_238);
  }
  if (local_218 != (uint *)0x0) {
    local_210 = local_218;
    operator_delete(local_218);
  }
joined_r0x00cbe234:
  if (((byte)local_200 & 1) != 0) {
    operator_delete(local_1f0);
  }
  if ((local_1e8[0] & 1) != 0) {
    operator_delete(local_1d8);
  }
LAB_00cbe178:
  if ((local_1d0[0] & 1) != 0) {
    operator_delete(local_1c0);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

