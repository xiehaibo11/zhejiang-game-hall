
/* cocostudio::FlatBuffersSerialize::createEventFrame(tinyxml2::XMLElement const*) */

undefined4 __thiscall
cocostudio::FlatBuffersSerialize::createEventFrame(FlatBuffersSerialize *this,XMLElement *param_1)

{
  void *pvVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  XMLElement *pXVar11;
  int *piVar12;
  FlatBufferBuilder *this_00;
  long lVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [8];
  ulong local_a8;
  int *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  ulong local_90;
  void *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong local_78;
  char *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"");
  lVar13 = *(long *)(param_1 + 0x60);
  if (lVar13 == 0) {
    iVar7 = 0;
    bVar5 = true;
  }
  else {
    iVar7 = 0;
    bVar5 = true;
    piVar12 = (int *)((ulong)local_b0 | 1);
    do {
      pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar13 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_98,pcVar10);
      pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar13 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_b0,pcVar10);
      uVar3 = (ulong)((byte)local_98[0] >> 1);
      if (((byte)local_98[0] & 1) != 0) {
        uVar3 = local_90;
      }
      if (uVar3 == 10) {
        pvVar1 = (void *)((ulong)local_98 | 1);
        if (((byte)local_98[0] & 1) != 0) {
          pvVar1 = local_88;
        }
        iVar6 = memcmp(pvVar1,"FrameIndex",10);
        if (iVar6 == 0) {
          piVar2 = piVar12;
          if (((byte)local_b0[0] & 1) != 0) {
            piVar2 = local_a0;
          }
          iVar7 = atoi((char *)piVar2);
        }
      }
      else if (uVar3 == 5) {
        pvVar1 = (void *)((ulong)local_98 | 1);
        if (((byte)local_98[0] & 1) != 0) {
          pvVar1 = local_88;
        }
        iVar6 = memcmp(pvVar1,"Value",5);
        if (iVar6 == 0) {
          uVar3 = (ulong)((byte)local_b0[0] >> 1);
          piVar2 = piVar12;
          if (((byte)local_b0[0] & 1) != 0) {
            uVar3 = local_a8;
            piVar2 = local_a0;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_80,(char *)piVar2,uVar3);
        }
        else {
          iVar6 = memcmp(pvVar1,"Tween",5);
          if (iVar6 == 0) {
            uVar3 = (ulong)((byte)local_b0[0] >> 1);
            if (((byte)local_b0[0] & 1) != 0) {
              uVar3 = local_a8;
            }
            if (uVar3 == 4) {
              piVar2 = piVar12;
              if (((byte)local_b0[0] & 1) != 0) {
                piVar2 = local_a0;
              }
              bVar5 = *piVar2 == 0x65757254;
            }
            else {
              bVar5 = false;
            }
          }
        }
      }
      lVar13 = *(long *)(lVar13 + 0x38);
      if (((byte)local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
      if (((byte)local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
    } while (lVar13 != 0);
  }
  this_00 = *(FlatBufferBuilder **)(this + 0x38);
  uVar3 = (ulong)((byte)local_80[0] >> 1);
  pcVar10 = (char *)((ulong)local_80 | 1);
  if (((byte)local_80[0] & 1) != 0) {
    uVar3 = local_78;
    pcVar10 = local_70;
  }
  uVar8 = flatbuffers::FlatBufferBuilder::CreateString(this_00,pcVar10,uVar3);
  pXVar11 = (XMLElement *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  uVar9 = createEasingData(this,pXVar11);
  uVar8 = flatbuffers::CreateEventFrame(this_00,iVar7,bVar5,uVar8,uVar9);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

