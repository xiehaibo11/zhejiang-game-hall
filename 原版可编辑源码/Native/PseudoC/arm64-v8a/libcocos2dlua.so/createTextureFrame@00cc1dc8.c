
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::FlatBuffersSerialize::createTextureFrame(tinyxml2::XMLElement const*) */

undefined4 __thiscall
cocostudio::FlatBuffersSerialize::createTextureFrame(FlatBuffersSerialize *this,XMLElement *param_1)

{
  int *piVar1;
  uint *puVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  long lVar4;
  ulong __n;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  XMLNode *this_00;
  int *piVar12;
  XMLElement *pXVar13;
  long lVar14;
  FlatBufferBuilder *this_01;
  ulong uVar15;
  int *piVar16;
  ulong local_120;
  ulong uStack_118;
  int *local_110;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_100;
  undefined7 uStack_ff;
  ulong uStack_f8;
  int *local_f0;
  uint local_e8 [2];
  ulong local_e0;
  int *local_d8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d0 [16];
  void *local_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [8];
  ulong local_b0;
  char *local_a8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [8];
  ulong local_98;
  char *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [8];
  ulong local_80;
  char *local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b8,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_d0,"");
  lVar14 = *(long *)(param_1 + 0x60);
  if (lVar14 == 0) {
    iVar7 = 0;
    bVar5 = true;
  }
  else {
    iVar7 = 0;
    bVar5 = true;
    do {
      pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_e8,pcVar11);
      pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_100,pcVar11);
      bVar3 = local_e8[0]._0_1_;
      uVar15 = (ulong)((byte)local_e8[0]._0_1_ >> 1);
      if ((local_e8[0] & 1) != 0) {
        uVar15 = local_e0;
      }
      if (uVar15 == 5) {
        piVar16 = (int *)((ulong)local_e8 | 1);
        if ((local_e8[0] & 1) != 0) {
          piVar16 = local_d8;
        }
        iVar6 = memcmp(piVar16,"Tween",5);
        if (iVar6 == 0) {
          uVar15 = (ulong)((byte)local_100 >> 1);
          if (((byte)local_100 & 1) != 0) {
            uVar15 = uStack_f8;
          }
          if (uVar15 == 4) {
            piVar16 = (int *)((ulong)&local_100 | 1);
            if (((byte)local_100 & 1) != 0) {
              piVar16 = local_f0;
            }
            bVar5 = *piVar16 == 0x65757254;
          }
          else {
            bVar5 = false;
          }
        }
      }
      else if (uVar15 == 10) {
        piVar16 = (int *)((ulong)local_e8 | 1);
        if ((local_e8[0] & 1) != 0) {
          piVar16 = local_d8;
        }
        iVar6 = memcmp(piVar16,"FrameIndex",10);
        if (iVar6 == 0) {
          piVar16 = (int *)((ulong)&local_100 | 1);
          if (((byte)local_100 & 1) != 0) {
            piVar16 = local_f0;
          }
          iVar7 = atoi((char *)piVar16);
        }
      }
      lVar14 = *(long *)(lVar14 + 0x38);
      if (((byte)local_100 & 1) != 0) {
        operator_delete(local_f0);
        bVar3 = local_e8[0]._0_1_;
      }
      if (((byte)bVar3 & 1) != 0) {
        operator_delete(local_d8);
      }
    } while (lVar14 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  iVar6 = 0;
  piVar16 = (int *)((ulong)&local_100 | 1);
  do {
    if (this_00 == (XMLNode *)0x0) {
      this_01 = *(FlatBufferBuilder **)(this + 0x38);
      uVar15 = (ulong)((byte)local_88[0] >> 1);
      pcVar11 = (char *)((ulong)local_88 | 1);
      if (((byte)local_88[0] & 1) != 0) {
        uVar15 = local_80;
        pcVar11 = local_78;
      }
      uVar9 = flatbuffers::FlatBufferBuilder::CreateString(this_01,pcVar11,uVar15);
      uVar15 = (ulong)((byte)local_a0[0] >> 1);
      pcVar11 = (char *)((ulong)local_a0 | 1);
      if (((byte)local_a0[0] & 1) != 0) {
        uVar15 = local_98;
        pcVar11 = local_90;
      }
      uVar10 = flatbuffers::FlatBufferBuilder::CreateString
                         (*(FlatBufferBuilder **)(this + 0x38),pcVar11,uVar15);
      uVar9 = flatbuffers::CreateResourceData(this_01,uVar9,uVar10,iVar6);
      pXVar13 = (XMLElement *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
      uVar10 = createEasingData(this,pXVar13);
      uVar9 = flatbuffers::CreateTextureFrame(this_01,iVar7,bVar5,uVar9,uVar10);
      if (((byte)local_d0[0] & 1) != 0) {
        operator_delete(local_c0);
      }
      if (((byte)local_b8[0] & 1) != 0) {
        operator_delete(local_a8);
      }
      if (((byte)local_a0[0] & 1) != 0) {
        operator_delete(local_90);
      }
      if (((byte)local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      if (*(long *)(lVar4 + 0x28) == local_70) {
        return uVar9;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar14 = *(long *)(this_00 + 0x60);
    while (lVar14 != 0) {
      pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_e8,pcVar11);
      pcVar11 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_100,pcVar11);
      piVar1 = local_f0;
      __n = uStack_f8;
      uVar15 = (ulong)((byte)local_e8[0]._0_1_ >> 1);
      if ((local_e8[0] & 1) != 0) {
        uVar15 = local_e0;
      }
      if (uVar15 == 5) {
        piVar1 = (int *)((ulong)local_e8 | 1);
        if ((local_e8[0] & 1) != 0) {
          piVar1 = local_d8;
        }
        iVar8 = memcmp(piVar1,"Plist",5);
        if (iVar8 == 0) {
          uVar15 = (ulong)((byte)local_100 >> 1);
          piVar1 = piVar16;
          if (((byte)local_100 & 1) != 0) {
            uVar15 = uStack_f8;
            piVar1 = local_f0;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_a0,(char *)piVar1,uVar15);
          uVar15 = (ulong)((byte)local_100 >> 1);
          piVar1 = piVar16;
          if (((byte)local_100 & 1) != 0) {
            uVar15 = uStack_f8;
            piVar1 = local_f0;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_b8,(char *)piVar1,uVar15);
        }
      }
      else if (uVar15 == 4) {
        piVar12 = (int *)((ulong)local_e8 | 1);
        if ((local_e8[0] & 1) != 0) {
          piVar12 = local_d8;
        }
        if (*piVar12 == 0x68746150) {
          uVar15 = (ulong)((byte)local_100 >> 1);
          piVar1 = piVar16;
          if (((byte)local_100 & 1) != 0) {
            uVar15 = uStack_f8;
            piVar1 = local_f0;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_88,(char *)piVar1,uVar15);
        }
        else if (*piVar12 == 0x65707954) {
          uStack_118 = 0;
          local_110 = (int *)0x0;
          local_120 = 0;
          if (((byte)local_100 & 1) == 0) {
            local_120 = CONCAT71(uStack_ff,local_100);
            uStack_118 = uStack_f8;
            local_110 = local_f0;
          }
          else {
            if (0xffffffffffffffef < uStack_f8) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (uStack_f8 < 0x17) {
              local_120 = (ulong)(byte)((int)uStack_f8 << 1);
              piVar12 = (int *)((ulong)&local_120 | 1);
              if (uStack_f8 != 0) goto LAB_00cc219c;
            }
            else {
              uVar15 = uStack_f8 + 0x10 & 0xfffffffffffffff0;
              piVar12 = operator_new(uVar15);
              local_120 = uVar15 | 1;
              uStack_118 = __n;
              local_110 = piVar12;
LAB_00cc219c:
              memcpy(piVar12,piVar1,__n);
            }
            *(char *)((long)piVar12 + __n) = '\0';
          }
          iVar6 = getResourceType(this,&local_120);
          if ((local_120 & 1) != 0) {
            operator_delete(local_110);
          }
        }
      }
      lVar14 = *(long *)(lVar14 + 0x38);
      if (((byte)local_100 & 1) != 0) {
        operator_delete(local_f0);
      }
      if ((local_e8[0] & 1) != 0) {
        operator_delete(local_d8);
      }
    }
    if (iVar6 == 1) {
      pcVar11 = (char *)((ulong)local_b8 | 1);
      uVar15 = (ulong)((byte)local_b8[0] >> 1);
      if (((byte)local_b8[0] & 1) != 0) {
        pcVar11 = local_a8;
        uVar15 = local_b0;
      }
      local_e8[0] = flatbuffers::FlatBufferBuilder::CreateString
                              (*(FlatBufferBuilder **)(this + 0x38),pcVar11,uVar15);
      puVar2 = *(uint **)(this + 8);
      if (puVar2 < *(uint **)(this + 0x10)) {
        *puVar2 = local_e8[0];
        *(uint **)(this + 8) = puVar2 + 1;
      }
      else {
        std::__ndk1::
        vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
        ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::String>>
                  ((vector<flatbuffers::Offset<flatbuffers::String>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::String>>>
                    *)this,(Offset *)local_e8);
      }
    }
    this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
  } while( true );
}

