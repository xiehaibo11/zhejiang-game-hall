
/* cocostudio::FlatBuffersSerialize::createColorFrame(tinyxml2::XMLElement const*) */

undefined4 __thiscall
cocostudio::FlatBuffersSerialize::createColorFrame(FlatBuffersSerialize *this,XMLElement *param_1)

{
  ulong uVar1;
  int *piVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  char cVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  XMLNode *this_00;
  XMLElement *pXVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [8];
  ulong local_98;
  int *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88;
  undefined2 local_87;
  undefined1 local_85;
  ulong local_80;
  char *local_78;
  undefined2 local_70;
  undefined1 local_6e;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  cocos2d::Color3B::Color3B((Color3B *)&local_70);
  lVar13 = *(long *)(param_1 + 0x60);
  if (lVar13 == 0) {
    iVar8 = 0;
    bVar6 = true;
  }
  else {
    iVar8 = 0;
    bVar6 = true;
    do {
      pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar13 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_88,pcVar10);
      pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar13 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_a0,pcVar10);
      bVar3 = local_88;
      uVar1 = (ulong)((byte)local_88 >> 1);
      if (((byte)local_88 & 1) != 0) {
        uVar1 = local_80;
      }
      if (uVar1 == 5) {
        pcVar10 = (char *)((ulong)&local_88 | 1);
        if (((byte)local_88 & 1) != 0) {
          pcVar10 = local_78;
        }
        iVar7 = memcmp(pcVar10,"Tween",5);
        if (iVar7 == 0) {
          uVar1 = (ulong)((byte)local_a0[0] >> 1);
          if (((byte)local_a0[0] & 1) != 0) {
            uVar1 = local_98;
          }
          if (uVar1 == 4) {
            piVar14 = (int *)((ulong)local_a0 | 1);
            if (((byte)local_a0[0] & 1) != 0) {
              piVar14 = local_90;
            }
            bVar6 = *piVar14 == 0x65757254;
          }
          else {
            bVar6 = false;
          }
        }
      }
      else if (uVar1 == 10) {
        pcVar10 = (char *)((ulong)&local_88 | 1);
        if (((byte)local_88 & 1) != 0) {
          pcVar10 = local_78;
        }
        iVar7 = memcmp(pcVar10,"FrameIndex",10);
        if (iVar7 == 0) {
          piVar14 = (int *)((ulong)local_a0 | 1);
          if (((byte)local_a0[0] & 1) != 0) {
            piVar14 = local_90;
          }
          iVar8 = atoi((char *)piVar14);
        }
      }
      lVar13 = *(long *)(lVar13 + 0x38);
      if (((byte)local_a0[0] & 1) != 0) {
        operator_delete(local_90);
        bVar3 = local_88;
      }
      if (((byte)bVar3 & 1) != 0) {
        operator_delete(local_78);
      }
    } while (lVar13 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  if (this_00 != (XMLNode *)0x0) {
    piVar14 = (int *)((ulong)local_a0 | 1);
    lVar13 = *(long *)(this_00 + 0x60);
    while( true ) {
      while (lVar13 != 0) {
        pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar13 + 8));
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(&local_88,pcVar10);
        pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar13 + 0x20));
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_a0,pcVar10);
        bVar3 = local_88;
        uVar1 = (ulong)((byte)local_88 >> 1);
        if (((byte)local_88 & 1) != 0) {
          uVar1 = local_80;
        }
        if (uVar1 == 1) {
          pcVar10 = (char *)((ulong)&local_88 | 1);
          if (((byte)local_88 & 1) != 0) {
            pcVar10 = local_78;
          }
          cVar4 = *pcVar10;
          if (cVar4 == 'B') {
            piVar2 = piVar14;
            if (((byte)local_a0[0] & 1) != 0) {
              piVar2 = local_90;
            }
            iVar7 = atoi((char *)piVar2);
            local_6e = (undefined1)iVar7;
          }
          else if (cVar4 == 'G') {
            piVar2 = piVar14;
            if (((byte)local_a0[0] & 1) != 0) {
              piVar2 = local_90;
            }
            iVar7 = atoi((char *)piVar2);
            local_70 = CONCAT11((char)iVar7,local_70._0_1_);
          }
          else if (cVar4 == 'R') {
            piVar2 = piVar14;
            if (((byte)local_a0[0] & 1) != 0) {
              piVar2 = local_90;
            }
            iVar7 = atoi((char *)piVar2);
            local_70 = CONCAT11(local_70._1_1_,(char)iVar7);
          }
        }
        lVar13 = *(long *)(lVar13 + 0x38);
        if (((byte)local_a0[0] & 1) != 0) {
          operator_delete(local_90);
          bVar3 = local_88;
        }
        if (((byte)bVar3 & 1) != 0) {
          operator_delete(local_78);
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if (this_00 == (XMLNode *)0x0) break;
      lVar13 = *(long *)(this_00 + 0x60);
    }
  }
  local_88 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0xff;
  local_87 = local_70;
  local_85 = local_6e;
  uVar12 = *(undefined8 *)(this + 0x38);
  pXVar11 = (XMLElement *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  uVar9 = createEasingData(this,pXVar11);
  uVar9 = flatbuffers::CreateColorFrame(uVar12,iVar8,bVar6,&local_88,uVar9);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

