
/* WARNING: Removing unreachable block (ram,0x00cc635c) */
/* cocostudio::FlatBuffersSerialize::serializeFlatBuffersWithXMLFileForLanguageData(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void cocostudio::FlatBuffersSerialize::serializeFlatBuffersWithXMLFileForLanguageData
               (basic_string *param_1,basic_string *param_2,basic_string *param_3)

{
  byte *__s1;
  int iVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long *plVar10;
  ulong uVar11;
  XMLDocument *this;
  XMLNode *pXVar12;
  FlatBufferBuilder *pFVar13;
  char *pcVar14;
  XMLNode *this_00;
  size_t sVar15;
  byte *in_x3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  long lVar16;
  basic_string *pbVar17;
  byte *pbVar18;
  undefined4 local_208 [2];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_200 [8];
  ulong local_1f8;
  char *local_1f0;
  undefined4 *local_1e8;
  undefined4 *local_1e0;
  undefined4 *puStack_1d8;
  byte local_1d0 [16];
  char *local_1c0;
  undefined **local_1b8;
  ulong local_1b0;
  char *local_1a8;
  byte abStack_198 [96];
  long local_138;
  undefined **local_108 [19];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  plVar10 = (long *)cocos2d::FileUtils::getInstance();
  uVar11 = (**(code **)(*plVar10 + 0x128))(plVar10,param_2);
  if ((uVar11 & 1) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(in_x8,"Language XML file does not exist.");
  }
  else {
    plVar10 = (long *)cocos2d::FileUtils::getInstance();
    (**(code **)(*plVar10 + 0x18))(local_1d0,plVar10,param_2);
    this = operator_new(0x280,(nothrow_t *)&std::nothrow);
    if (this != (XMLDocument *)0x0) {
      tinyxml2::XMLDocument::XMLDocument(this,1,0);
    }
    pcVar14 = (char *)((ulong)local_1d0 | 1);
    if ((local_1d0[0] & 1) != 0) {
      pcVar14 = local_1c0;
    }
    tinyxml2::XMLDocument::Parse(this,pcVar14,0xffffffffffffffff);
    pXVar12 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)this,(char *)0x0);
    pXVar12 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement(pXVar12,(char *)0x0);
    pFVar13 = operator_new(0x68,(nothrow_t *)&std::nothrow);
    if (pFVar13 != (FlatBufferBuilder *)0x0) {
      flatbuffers::FlatBufferBuilder::FlatBufferBuilder(pFVar13,0x400,(simple_allocator *)0x0);
    }
    *(FlatBufferBuilder **)(param_1 + 0x38) = pFVar13;
    local_1e0 = (undefined4 *)0x0;
    puStack_1d8 = (undefined4 *)0x0;
    local_1e8 = (undefined4 *)0x0;
    if (pXVar12 != (XMLNode *)0x0) {
      do {
        while( true ) {
          pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(pXVar12 + 0x18));
          iVar7 = strcmp("language",pcVar14);
          if (iVar7 == 0) break;
          pXVar12 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(pXVar12,(char *)0x0);
LAB_00cc621c:
          if (pXVar12 == (XMLNode *)0x0) goto LAB_00cc6458;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_1b8,"");
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_200,"");
        this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement(pXVar12,(char *)0x0);
        bVar6 = false;
        bVar5 = false;
        for (; this_00 != (XMLNode *)0x0;
            this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0)) {
          pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
          iVar7 = strcmp("key",pcVar14);
          if (iVar7 == 0) {
            pcVar14 = (char *)tinyxml2::XMLElement::GetText((XMLElement *)this_00);
            sVar15 = strlen(pcVar14);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_1b8,pcVar14,sVar15);
            bVar5 = true;
LAB_00cc6324:
            if (bVar6) goto LAB_00cc6328;
          }
          else {
            bVar3 = *in_x3;
            pbVar18 = *(byte **)(in_x3 + 0x10);
            pcVar14 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
            __s1 = in_x3 + 1;
            if ((bVar3 & 1) != 0) {
              __s1 = pbVar18;
            }
            iVar7 = strcmp((char *)__s1,pcVar14);
            if (iVar7 != 0) goto LAB_00cc6324;
            pcVar14 = (char *)tinyxml2::XMLElement::GetText((XMLElement *)this_00);
            if ((pcVar14 == (char *)0x0) || (*pcVar14 == '\0')) {
              pcVar14 = (char *)((ulong)&local_1b8 | 1);
              uVar11 = (ulong)local_1b8 >> 1 & 0x7f;
              if (((ulong)local_1b8 & 1) != 0) {
                pcVar14 = local_1a8;
                uVar11 = local_1b0;
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (local_200,pcVar14,uVar11);
            }
            else {
              sVar15 = strlen(pcVar14);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (local_200,pcVar14,sVar15);
            }
            bVar6 = true;
LAB_00cc6328:
            if (bVar5) break;
          }
        }
        pFVar13 = *(FlatBufferBuilder **)(param_1 + 0x38);
        pcVar14 = (char *)((ulong)&local_1b8 | 1);
        uVar11 = (ulong)local_1b8 >> 1 & 0x7f;
        if (((ulong)local_1b8 & 1) != 0) {
          pcVar14 = local_1a8;
          uVar11 = local_1b0;
        }
        uVar8 = flatbuffers::FlatBufferBuilder::CreateString(pFVar13,pcVar14,uVar11);
        pcVar14 = (char *)((ulong)local_200 | 1);
        uVar11 = (ulong)((byte)local_200[0] >> 1);
        if (((byte)local_200[0] & 1) != 0) {
          pcVar14 = local_1f0;
          uVar11 = local_1f8;
        }
        uVar9 = flatbuffers::FlatBufferBuilder::CreateString
                          (*(FlatBufferBuilder **)(param_1 + 0x38),pcVar14,uVar11);
        iVar7 = *(int *)(pFVar13 + 8);
        iVar1 = *(int *)(pFVar13 + 0x18);
        iVar2 = *(int *)(pFVar13 + 0x10);
        flatbuffers::FlatBufferBuilder::AddOffset<flatbuffers::String>(pFVar13,6,uVar9);
        flatbuffers::FlatBufferBuilder::AddOffset<flatbuffers::String>(pFVar13,4,uVar8);
        local_208[0] = flatbuffers::FlatBufferBuilder::EndTable(pFVar13,(iVar7 - iVar1) + iVar2,2);
        if (local_1e0 == puStack_1d8) {
          std::__ndk1::
          vector<flatbuffers::Offset<flatbuffers::LanguageItem>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::LanguageItem>>>
          ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::LanguageItem>const&>
                    ((vector<flatbuffers::Offset<flatbuffers::LanguageItem>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::LanguageItem>>>
                      *)&local_1e8,(Offset *)local_208);
        }
        else {
          *local_1e0 = local_208[0];
          local_1e0 = local_1e0 + 1;
        }
        pXVar12 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(pXVar12,(char *)0x0);
        if (((byte)local_200[0] & 1) != 0) {
          operator_delete(local_1f0);
        }
        if (((ulong)local_1b8 & 1) == 0) goto LAB_00cc621c;
        operator_delete(local_1a8);
      } while (pXVar12 != (XMLNode *)0x0);
LAB_00cc6458:
      pFVar13 = *(FlatBufferBuilder **)(param_1 + 0x38);
    }
    uVar8 = flatbuffers::FlatBufferBuilder::
            CreateVector<flatbuffers::Offset<flatbuffers::LanguageItem>>
                      (pFVar13,(Offset *)local_1e8,(long)local_1e0 - (long)local_1e8 >> 2);
    iVar7 = flatbuffers::CreateLanguageSet(pFVar13,uVar8);
    pFVar13 = *(FlatBufferBuilder **)(param_1 + 0x38);
    flatbuffers::FlatBufferBuilder::PreAlign(pFVar13,4,*(ulong *)(pFVar13 + 0x58));
    flatbuffers::FlatBufferBuilder::Align(pFVar13,4);
    local_1b8 = (undefined **)
                CONCAT44(local_1b8._4_4_,
                         (((*(int *)(pFVar13 + 8) - *(int *)(pFVar13 + 0x18)) +
                          *(int *)(pFVar13 + 0x10)) - iVar7) + 4);
    flatbuffers::FlatBufferBuilder::Align(pFVar13,4);
    flatbuffers::FlatBufferBuilder::PushBytes(pFVar13,(uchar *)&local_1b8,4);
    lVar16 = *(long *)(param_1 + 0x38);
    pbVar17 = *(basic_string **)(param_3 + 0x10);
    pcVar14 = *(char **)(lVar16 + 0x18);
    iVar7 = *(int *)(lVar16 + 8);
    iVar1 = *(int *)(lVar16 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar17 = param_3 + 1;
    }
    FUN_00cc6ba4(&local_1b8,pbVar17,4);
    if (local_138 == 0) {
      bVar6 = false;
    }
    else {
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::write
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1b8,pcVar14,
                 (ulong)(uint)((iVar7 - (int)pcVar14) + iVar1));
      bVar6 = (abStack_198[(long)local_1b8[-3]] & 1) == 0;
    }
    local_1b8 = &PTR__basic_ofstream_016cddd0;
    local_108[0] = &PTR__basic_ofstream_016cddf8;
    std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
              ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)&local_1b0);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
    if (bVar6) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(in_x8,"");
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(in_x8,"Failed to save language .csb file.");
    }
    if (local_1e8 != (undefined4 *)0x0) {
      local_1e0 = local_1e8;
      operator_delete(local_1e8);
    }
    if ((local_1d0[0] & 1) != 0) {
      operator_delete(local_1c0);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

