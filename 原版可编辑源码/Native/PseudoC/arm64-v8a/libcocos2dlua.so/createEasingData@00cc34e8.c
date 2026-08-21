
/* cocostudio::FlatBuffersSerialize::createEasingData(tinyxml2::XMLElement const*) */

void __thiscall
cocostudio::FlatBuffersSerialize::createEasingData(FlatBuffersSerialize *this,XMLElement *param_1)

{
  int *piVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  long lVar3;
  uchar *puVar4;
  int iVar5;
  undefined4 uVar6;
  XMLNode *pXVar7;
  char *pcVar8;
  FlatBufferBuilder *this_00;
  ulong uVar9;
  long lVar10;
  bool bVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [16];
  char *local_b0;
  float local_a8;
  float fStack_a4;
  ulong local_a0;
  int *local_98;
  uchar *local_90;
  uchar *local_88;
  uchar *puStack_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if (param_1 == (XMLElement *)0x0) {
    uVar6 = 0;
  }
  else {
    local_88 = (uchar *)0x0;
    puStack_80 = (uchar *)0x0;
    local_90 = (uchar *)0x0;
    lVar10 = *(long *)(param_1 + 0x60);
    iVar5 = -1;
    do {
      if (lVar10 == 0) break;
      pcVar8 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar10 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,pcVar8);
      pcVar8 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar10 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_c0,pcVar8);
      fVar13 = local_a8;
      bVar2 = local_c0[0];
      uVar9 = (ulong)((byte)local_a8._0_1_ >> 1);
      if (((uint)local_a8 & 1) != 0) {
        uVar9 = local_a0;
      }
      if (uVar9 == 4) {
        piVar1 = (int *)((ulong)&local_a8 | 1);
        if (((uint)local_a8 & 1) != 0) {
          piVar1 = local_98;
        }
        if (*piVar1 != 0x65707954) goto LAB_00cc35bc;
        pcVar8 = (char *)((ulong)local_c0 | 1);
        if (((byte)local_c0[0] & 1) != 0) {
          pcVar8 = local_b0;
        }
        iVar5 = atoi(pcVar8);
        bVar11 = false;
      }
      else {
LAB_00cc35bc:
        lVar10 = *(long *)(lVar10 + 0x38);
        bVar11 = true;
      }
      if (((byte)bVar2 & 1) != 0) {
        operator_delete(local_b0);
        fVar13 = local_a8;
      }
      if (((uint)fVar13 & 1) != 0) {
        operator_delete(local_98);
      }
    } while (bVar11);
    pXVar7 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
    if ((pXVar7 != (XMLNode *)0x0) &&
       (pXVar7 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement(pXVar7,(char *)0x0),
       pXVar7 != (XMLNode *)0x0)) {
      do {
        lVar10 = *(long *)(pXVar7 + 0x60);
        if (lVar10 == 0) {
          fVar14 = 0.0;
          fVar13 = 0.0;
        }
        else {
          fVar13 = 0.0;
          fVar14 = 0.0;
          do {
            pcVar8 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar10 + 8));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_a8,pcVar8);
            pcVar8 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar10 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(local_c0,pcVar8);
            bVar2 = local_a8._0_1_;
            uVar9 = (ulong)((byte)local_a8._0_1_ >> 1);
            if (((uint)local_a8 & 1) != 0) {
              uVar9 = local_a0;
            }
            if (uVar9 == 1) {
              piVar1 = (int *)((ulong)&local_a8 | 1);
              if (((uint)local_a8 & 1) != 0) {
                piVar1 = local_98;
              }
              if ((char)*piVar1 == 'Y') {
                pcVar8 = (char *)((ulong)local_c0 | 1);
                if (((byte)local_c0[0] & 1) != 0) {
                  pcVar8 = local_b0;
                }
                dVar12 = atof(pcVar8);
                fVar14 = (float)dVar12;
              }
              else if ((char)*piVar1 == 'X') {
                pcVar8 = (char *)((ulong)local_c0 | 1);
                if (((byte)local_c0[0] & 1) != 0) {
                  pcVar8 = local_b0;
                }
                dVar12 = atof(pcVar8);
                fVar13 = (float)dVar12;
              }
            }
            lVar10 = *(long *)(lVar10 + 0x38);
            if (((byte)local_c0[0] & 1) != 0) {
              operator_delete(local_b0);
              bVar2 = local_a8._0_1_;
            }
            if (((byte)bVar2 & 1) != 0) {
              operator_delete(local_98);
            }
          } while (lVar10 != 0);
        }
        local_a8 = fVar13;
        fStack_a4 = fVar14;
        if (local_88 == puStack_80) {
          std::__ndk1::vector<flatbuffers::Position,std::__ndk1::allocator<flatbuffers::Position>>::
          __push_back_slow_path<flatbuffers::Position_const&>
                    ((vector<flatbuffers::Position,std::__ndk1::allocator<flatbuffers::Position>> *)
                     &local_90,(Position *)&local_a8);
        }
        else {
          *(ulong *)local_88 = CONCAT44(fVar14,fVar13);
          local_88 = local_88 + 8;
        }
        pXVar7 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(pXVar7,(char *)0x0);
      } while (pXVar7 != (XMLNode *)0x0);
    }
    puVar4 = local_90;
    this_00 = *(FlatBufferBuilder **)(this + 0x38);
    uVar9 = (long)local_88 - (long)local_90;
    flatbuffers::FlatBufferBuilder::PreAlign(this_00,uVar9,4);
    flatbuffers::FlatBufferBuilder::PreAlign(this_00,uVar9,4);
    flatbuffers::FlatBufferBuilder::PushBytes(this_00,puVar4,uVar9);
    local_a8 = (float)(uVar9 >> 3);
    flatbuffers::FlatBufferBuilder::Align(this_00,4);
    flatbuffers::FlatBufferBuilder::PushBytes(this_00,(uchar *)&local_a8,4);
    uVar6 = flatbuffers::CreateEasingData
                      (this_00,iVar5,
                       (*(int *)(this_00 + 8) - *(int *)(this_00 + 0x18)) + *(int *)(this_00 + 0x10)
                      );
    if (local_90 != (uchar *)0x0) {
      local_88 = local_90;
      operator_delete(local_90);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

