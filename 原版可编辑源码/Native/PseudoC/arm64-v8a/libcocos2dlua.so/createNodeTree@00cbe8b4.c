
/* cocostudio::FlatBuffersSerialize::createNodeTree(tinyxml2::XMLElement const*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >)
    */

undefined4 __thiscall
cocostudio::FlatBuffersSerialize::createNodeTree
          (FlatBuffersSerialize *this,XMLNode *param_1,byte *param_3)

{
  byte *pbVar1;
  void *pvVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  basic_string *pbVar12;
  ObjectFactory *this_00;
  long lVar13;
  long *plVar14;
  XMLNode *pXVar15;
  void *__dest;
  ulong uVar16;
  ulong uVar17;
  FlatBufferBuilder *this_01;
  undefined8 uVar18;
  byte *pbVar19;
  char *pcVar20;
  bool bVar21;
  byte *pbVar22;
  bool bVar23;
  uint local_130 [2];
  ulong local_128;
  char *local_120;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_118 [16];
  void *local_108;
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e8;
  undefined7 uStack_e7;
  ulong uStack_e0;
  void *local_d8;
  uint local_d0 [2];
  ulong local_c8;
  char *local_c0;
  uint *local_b8;
  uint *local_b0;
  uint *puStack_a8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [16];
  void *local_90;
  ulong local_88;
  ulong local_80;
  char *local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  bVar3 = *param_3;
  if ((bVar3 & 1) == 0) {
    pbVar22 = param_3 + 1;
    uVar16 = (ulong)(bVar3 >> 1);
  }
  else {
    uVar16 = *(ulong *)(param_3 + 8);
    pbVar22 = *(byte **)(param_3 + 0x10);
  }
  pbVar1 = pbVar22 + uVar16;
  pbVar11 = pbVar22;
  while ((((pbVar19 = pbVar1, 9 < (long)uVar16 && (uVar16 - 9 != 0)) &&
          (pbVar11 = memchr(pbVar11,0x4f,uVar16 - 9), pbVar11 != (byte *)0x0)) &&
         (iVar5 = memcmp(pbVar11,"ObjectData",10), pbVar19 = pbVar11, iVar5 != 0))) {
    pbVar11 = pbVar11 + 1;
    uVar16 = (long)pbVar1 - (long)pbVar11;
  }
  local_80 = 0;
  local_78 = (char *)0x0;
  local_88 = 0;
  uVar16 = *(ulong *)(param_3 + 8);
  pbVar11 = *(byte **)(param_3 + 0x10);
  uVar17 = (long)pbVar19 - (long)pbVar22;
  if (pbVar19 == pbVar1) {
    uVar17 = 0xffffffffffffffff;
  }
  if ((bVar3 & 1) == 0) {
    pbVar11 = param_3 + 1;
    uVar16 = (ulong)(bVar3 >> 1);
  }
  if (uVar17 <= uVar16) {
    uVar16 = uVar17;
  }
  if (0xffffffffffffffef < uVar16) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar16 < 0x17) {
    pcVar20 = (char *)((ulong)&local_88 | 1);
    local_88 = (ulong)(byte)((int)uVar16 << 1);
    if (uVar16 != 0) goto LAB_00cbe9d0;
  }
  else {
    uVar17 = uVar16 + 0x10 & 0xfffffffffffffff0;
    pcVar20 = operator_new(uVar17);
    local_88 = uVar17 | 1;
    local_80 = uVar16;
    local_78 = pcVar20;
LAB_00cbe9d0:
    memcpy(pcVar20,pbVar11,uVar16);
  }
  pcVar20[uVar16] = '\0';
  pbVar12 = (basic_string *)
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_a0,"");
  local_b0 = (uint *)0x0;
  puStack_a8 = (uint *)0x0;
  local_b8 = (uint *)0x0;
  uVar16 = local_88 >> 1 & 0x7f;
  if ((local_88 & 1) != 0) {
    uVar16 = local_80;
  }
  if (uVar16 == 0xb) {
    pcVar20 = (char *)((ulong)&local_88 | 1);
    if ((local_88 & 1) != 0) {
      pcVar20 = local_78;
    }
    iVar5 = memcmp(pcVar20,"ProjectNode",0xb);
    if (iVar5 == 0) {
      plVar14 = (long *)ProjectNodeReader::getInstance();
      uVar18 = *(undefined8 *)(this + 0x38);
      uVar7 = (**(code **)(*plVar14 + 0x10))(plVar14,param_1,uVar18);
      uVar7 = flatbuffers::CreateOptions(uVar18,uVar7);
      goto LAB_00cbeb50;
    }
    uVar6 = memcmp(pcVar20,"SimpleAudio",0xb);
    pbVar12 = (basic_string *)(ulong)uVar6;
    if (uVar6 == 0) {
      plVar14 = (long *)ComAudioReader::getInstance();
      uVar18 = *(undefined8 *)(this + 0x38);
      uVar7 = (**(code **)(*plVar14 + 0x10))(plVar14,param_1,uVar18);
      uVar7 = flatbuffers::CreateOptions(uVar18,uVar7);
      goto LAB_00cbeb50;
    }
  }
  getGUIClassName(pbVar12);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)local_d0,
         "Reader",6);
  this_00 = (ObjectFactory *)cocos2d::ObjectFactory::getInstance();
  lVar13 = cocos2d::ObjectFactory::createObject(this_00,(basic_string *)local_d0);
  if ((lVar13 == 0) ||
     (plVar14 = (long *)__dynamic_cast(lVar13,&cocos2d::Ref::typeinfo,&NodeReaderProtocol::typeinfo,
                                       0xfffffffffffffffe), plVar14 == (long *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar18 = *(undefined8 *)(this + 0x38);
    uVar7 = (**(code **)(*plVar14 + 0x10))(plVar14,param_1,uVar18);
    uVar7 = flatbuffers::CreateOptions(uVar18,uVar7);
  }
  if ((local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
LAB_00cbeb50:
  pXVar15 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement(param_1,(char *)0x0);
  while( true ) {
    if (pXVar15 == (XMLNode *)0x0) goto LAB_00cbedd0;
    pcVar20 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(pXVar15 + 0x18));
    iVar5 = strcmp("Children",pcVar20);
    if (iVar5 == 0) break;
    pXVar15 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(pXVar15,(char *)0x0);
  }
  pXVar15 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement(pXVar15,(char *)0x0);
  for (; pXVar15 != (XMLNode *)0x0;
      pXVar15 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(pXVar15,(char *)0x0)) {
    lVar13 = *(long *)(pXVar15 + 0x60);
    bVar21 = false;
    do {
      if (lVar13 == 0) break;
      pcVar20 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar13 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_d0,pcVar20);
      pcVar20 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar13 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_e8,pcVar20);
      uVar16 = (ulong)((byte)local_d0[0]._0_1_ >> 1);
      if ((local_d0[0] & 1) != 0) {
        uVar16 = local_c8;
      }
      if (uVar16 == 5) {
        pcVar20 = (char *)((ulong)local_d0 | 1);
        if ((local_d0[0] & 1) != 0) {
          pcVar20 = local_c0;
        }
        iVar5 = memcmp(pcVar20,"ctype",5);
        pvVar2 = local_d8;
        uVar16 = uStack_e0;
        if (iVar5 != 0) goto LAB_00cbec54;
        local_100 = 0;
        uStack_f8 = 0;
        local_f0 = (void *)0x0;
        if (((byte)local_e8 & 1) == 0) {
          local_100 = CONCAT71(uStack_e7,local_e8);
          uStack_f8 = uStack_e0;
          local_f0 = local_d8;
        }
        else {
          if (0xffffffffffffffef < uStack_e0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uStack_e0 < 0x17) {
            local_100 = (ulong)(byte)((int)uStack_e0 << 1);
            __dest = (void *)((ulong)&local_100 | 1);
            if (uStack_e0 != 0) goto LAB_00cbecf0;
          }
          else {
            uVar17 = uStack_e0 + 0x10 & 0xfffffffffffffff0;
            __dest = operator_new(uVar17);
            local_100 = uVar17 | 1;
            uStack_f8 = uVar16;
            local_f0 = __dest;
LAB_00cbecf0:
            memcpy(__dest,pvVar2,uVar16);
          }
          *(undefined1 *)((long)__dest + uVar16) = 0;
        }
        local_130[0] = createNodeTree(this,pXVar15,&local_100);
        if (local_b0 < puStack_a8) {
          *local_b0 = local_130[0];
          local_b0 = local_b0 + 1;
        }
        else {
          std::__ndk1::
          vector<flatbuffers::Offset<flatbuffers::NodeTree>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::NodeTree>>>
          ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::NodeTree>>
                    ((vector<flatbuffers::Offset<flatbuffers::NodeTree>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::NodeTree>>>
                      *)&local_b8,(Offset *)local_130);
        }
        if ((local_100 & 1) != 0) {
          operator_delete(local_f0);
        }
        bVar23 = false;
        bVar21 = true;
      }
      else {
LAB_00cbec54:
        lVar13 = *(long *)(lVar13 + 0x38);
        bVar23 = true;
      }
      if (((byte)local_e8 & 1) != 0) {
        operator_delete(local_d8);
      }
      if ((local_d0[0] & 1) != 0) {
        operator_delete(local_c0);
      }
    } while (bVar23);
    if (!bVar21) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_118,"NodeObjectData");
      local_d0[0] = createNodeTree(this,pXVar15,local_118);
      if (local_b0 < puStack_a8) {
        *local_b0 = local_d0[0];
        local_b0 = local_b0 + 1;
      }
      else {
        std::__ndk1::
        vector<flatbuffers::Offset<flatbuffers::NodeTree>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::NodeTree>>>
        ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::NodeTree>>
                  ((vector<flatbuffers::Offset<flatbuffers::NodeTree>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::NodeTree>>>
                    *)&local_b8,(Offset *)local_d0);
      }
      if (((byte)local_118[0] & 1) != 0) {
        operator_delete(local_108);
      }
    }
  }
LAB_00cbedd0:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_d0,"");
  lVar13 = *(long *)(param_1 + 0x60);
  do {
    if (lVar13 == 0) goto LAB_00cbeecc;
    pcVar20 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar13 + 8));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(&local_e8,pcVar20);
    pcVar20 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar13 + 0x20));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               local_130,pcVar20);
    uVar16 = (ulong)((byte)local_e8 >> 1);
    if (((byte)local_e8 & 1) != 0) {
      uVar16 = uStack_e0;
    }
    if (uVar16 == 0xf) {
      pvVar2 = (void *)((ulong)&local_e8 | 1);
      if (((byte)local_e8 & 1) != 0) {
        pvVar2 = local_d8;
      }
      iVar5 = memcmp(pvVar2,"CustomClassName",0xf);
      if (iVar5 != 0) goto LAB_00cbee70;
      uVar16 = (ulong)((byte)local_130[0]._0_1_ >> 1);
      pcVar20 = (char *)((ulong)local_130 | 1);
      if ((local_130[0] & 1) != 0) {
        uVar16 = local_128;
        pcVar20 = local_120;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_d0,pcVar20,uVar16);
      bVar21 = false;
    }
    else {
LAB_00cbee70:
      lVar13 = *(long *)(lVar13 + 0x38);
      bVar21 = true;
    }
    if ((local_130[0] & 1) != 0) {
      operator_delete(local_120);
    }
    if (((byte)local_e8 & 1) != 0) {
      operator_delete(local_d8);
    }
    if (!bVar21) {
LAB_00cbeecc:
      this_01 = *(FlatBufferBuilder **)(this + 0x38);
      uVar16 = local_88 >> 1 & 0x7f;
      pcVar20 = (char *)((ulong)&local_88 | 1);
      if ((local_88 & 1) != 0) {
        uVar16 = local_80;
        pcVar20 = local_78;
      }
      uVar8 = flatbuffers::FlatBufferBuilder::CreateString(this_01,pcVar20,uVar16);
      uVar9 = flatbuffers::FlatBufferBuilder::
              CreateVector<flatbuffers::Offset<flatbuffers::NodeTree>>
                        (*(FlatBufferBuilder **)(this + 0x38),(Offset *)local_b8,
                         (long)local_b0 - (long)local_b8 >> 2);
      uVar16 = (ulong)((byte)local_d0[0]._0_1_ >> 1);
      pcVar20 = (char *)((ulong)local_d0 | 1);
      if ((local_d0[0] & 1) != 0) {
        uVar16 = local_c8;
        pcVar20 = local_c0;
      }
      uVar10 = flatbuffers::FlatBufferBuilder::CreateString
                         (*(FlatBufferBuilder **)(this + 0x38),pcVar20,uVar16);
      uVar7 = flatbuffers::CreateNodeTree(this_01,uVar8,uVar9,uVar7,uVar10);
      if ((local_d0[0] & 1) != 0) {
        operator_delete(local_c0);
      }
      if (local_b8 != (uint *)0x0) {
        local_b0 = local_b8;
        operator_delete(local_b8);
      }
      if (((byte)local_a0[0] & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if (*(long *)(lVar4 + 0x28) == local_70) {
        return uVar7;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}

