
/* cocostudio::FlatBuffersSerialize::createNodeAction(tinyxml2::XMLElement const*) */

undefined4 __thiscall
cocostudio::FlatBuffersSerialize::createNodeAction(FlatBuffersSerialize *this,XMLElement *param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  size_t sVar8;
  XMLNode *this_00;
  uint *puVar9;
  uint *puVar10;
  FlatBufferBuilder *this_01;
  long lVar11;
  long *plVar12;
  char *pcVar13;
  double dVar14;
  float fVar15;
  uint local_c0 [4];
  char *local_b0;
  uint *local_a8;
  uint *local_a0;
  uint *local_98;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [8];
  ulong local_88;
  char *local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_90,"");
  lVar11 = *(long *)(param_1 + 0x60);
  if (lVar11 == 0) {
    iVar3 = 0;
    fVar15 = 0.0;
  }
  else {
    iVar3 = 0;
    fVar15 = 0.0;
    plVar12 = (long *)((ulong)&local_a8 | 1);
    pcVar13 = (char *)((ulong)local_c0 | 1);
    do {
      pcVar7 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar11 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,pcVar7);
      pcVar7 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar11 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_c0,pcVar7);
      puVar9 = (uint *)((ulong)local_a8 >> 1 & 0x7f);
      if (((ulong)local_a8 & 1) != 0) {
        puVar9 = local_a0;
      }
      if (puVar9 == (uint *)0x5) {
        puVar9 = (uint *)plVar12;
        if (((ulong)local_a8 & 1) != 0) {
          puVar9 = local_98;
        }
        iVar4 = memcmp(puVar9,"Speed",5);
        if (iVar4 == 0) {
          pcVar7 = pcVar13;
          if ((local_c0[0] & 1) != 0) {
            pcVar7 = local_b0;
          }
          dVar14 = atof(pcVar7);
          fVar15 = (float)dVar14;
        }
      }
      else if (puVar9 == (uint *)0x14) {
        puVar9 = (uint *)plVar12;
        if (((ulong)local_a8 & 1) != 0) {
          puVar9 = local_98;
        }
        iVar4 = memcmp(puVar9,"ActivedAnimationName",0x14);
        if (iVar4 == 0) {
          pcVar7 = pcVar13;
          if ((local_c0[0] & 1) != 0) {
            pcVar7 = local_b0;
          }
          sVar8 = strlen(pcVar7);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_90,pcVar7,sVar8);
        }
      }
      else if (puVar9 == (uint *)0x8) {
        puVar9 = (uint *)plVar12;
        if (((ulong)local_a8 & 1) != 0) {
          puVar9 = local_98;
        }
        if (*(long *)puVar9 == 0x6e6f697461727544) {
          pcVar7 = pcVar13;
          if ((local_c0[0] & 1) != 0) {
            pcVar7 = local_b0;
          }
          iVar3 = atoi(pcVar7);
        }
      }
      lVar11 = *(long *)(lVar11 + 0x38);
      if ((local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
      }
      if (((ulong)local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
    } while (lVar11 != 0);
  }
  local_a0 = (uint *)0x0;
  local_98 = (uint *)0x0;
  local_a8 = (uint *)0x0;
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  if (this_00 == (XMLNode *)0x0) {
    puVar9 = (uint *)0x0;
    puVar10 = (uint *)0x0;
  }
  else {
    do {
      local_c0[0] = createTimeLine(this,(XMLElement *)this_00);
      if (local_a0 == local_98) {
        std::__ndk1::
        vector<flatbuffers::Offset<flatbuffers::TimeLine>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::TimeLine>>>
        ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::TimeLine>const&>
                  ((vector<flatbuffers::Offset<flatbuffers::TimeLine>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::TimeLine>>>
                    *)&local_a8,(Offset *)local_c0);
      }
      else {
        *local_a0 = local_c0[0];
        local_a0 = local_a0 + 1;
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      puVar9 = local_a8;
      puVar10 = local_a0;
    } while (this_00 != (XMLNode *)0x0);
  }
  this_01 = *(FlatBufferBuilder **)(this + 0x38);
  uVar5 = flatbuffers::FlatBufferBuilder::CreateVector<flatbuffers::Offset<flatbuffers::TimeLine>>
                    (this_01,(Offset *)puVar9,(long)puVar10 - (long)puVar9 >> 2);
  uVar1 = (ulong)((byte)local_90[0] >> 1);
  pcVar13 = (char *)((ulong)local_90 | 1);
  if (((byte)local_90[0] & 1) != 0) {
    uVar1 = local_88;
    pcVar13 = local_80;
  }
  uVar6 = flatbuffers::FlatBufferBuilder::CreateString
                    (*(FlatBufferBuilder **)(this + 0x38),pcVar13,uVar1);
  uVar5 = flatbuffers::CreateNodeAction(fVar15,this_01,iVar3,uVar5,uVar6);
  if (local_a8 != (uint *)0x0) {
    local_a0 = local_a8;
    operator_delete(local_a8);
  }
  if (((byte)local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

