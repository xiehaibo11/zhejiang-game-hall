
/* cocostudio::FlatBuffersSerialize::createInnerActionFrame(tinyxml2::XMLElement const*) */

undefined4 __thiscall
cocostudio::FlatBuffersSerialize::createInnerActionFrame
          (FlatBuffersSerialize *this,XMLElement *param_1)

{
  int *piVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  XMLElement *pXVar13;
  long lVar14;
  FlatBufferBuilder *this_00;
  int *piVar15;
  void *pvVar16;
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
  lVar14 = *(long *)(param_1 + 0x60);
  if (lVar14 == 0) {
    uVar11 = 0;
    iVar7 = 0;
    iVar6 = 0;
    bVar5 = true;
  }
  else {
    iVar6 = 0;
    iVar7 = 0;
    uVar11 = 0;
    bVar5 = true;
    pvVar16 = (void *)((ulong)local_98 | 1);
    piVar15 = (int *)((ulong)local_b0 | 1);
    do {
      pcVar12 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_98,pcVar12);
      pcVar12 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar14 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_b0,pcVar12);
      uVar3 = (ulong)((byte)local_98[0] >> 1);
      if (((byte)local_98[0] & 1) != 0) {
        uVar3 = local_90;
      }
      uVar9 = uVar11;
      switch(uVar3) {
      case 5:
        pvVar2 = pvVar16;
        if (((byte)local_98[0] & 1) != 0) {
          pvVar2 = local_88;
        }
        iVar8 = memcmp(pvVar2,"Tween",5);
        if (iVar8 == 0) {
          uVar3 = (ulong)((byte)local_b0[0] >> 1);
          if (((byte)local_b0[0] & 1) != 0) {
            uVar3 = local_a8;
          }
          if (uVar3 == 4) {
            piVar1 = piVar15;
            if (((byte)local_b0[0] & 1) != 0) {
              piVar1 = local_a0;
            }
            bVar5 = *piVar1 == 0x65757254;
          }
          else {
            bVar5 = false;
          }
        }
        break;
      case 10:
        pvVar2 = pvVar16;
        if (((byte)local_98[0] & 1) != 0) {
          pvVar2 = local_88;
        }
        iVar8 = memcmp(pvVar2,"FrameIndex",10);
        if (iVar8 == 0) {
          piVar1 = piVar15;
          if (((byte)local_b0[0] & 1) != 0) {
            piVar1 = local_a0;
          }
          iVar6 = atoi((char *)piVar1);
        }
        break;
      case 0xf:
        pvVar2 = pvVar16;
        if (((byte)local_98[0] & 1) != 0) {
          pvVar2 = local_88;
        }
        iVar8 = memcmp(pvVar2,"InnerActionType",0xf);
        if (iVar8 == 0) {
          uVar3 = (ulong)((byte)local_b0[0] >> 1);
          if (((byte)local_b0[0] & 1) != 0) {
            uVar3 = local_a8;
          }
          if (uVar3 == 0xc) {
            piVar1 = piVar15;
            if (((byte)local_b0[0] & 1) != 0) {
              piVar1 = local_a0;
            }
            iVar8 = memcmp(piVar1,"NoLoopAction",0xc);
            if (iVar8 == 0) {
              uVar9 = 1;
            }
          }
          else if (uVar3 == 0xb) {
            piVar1 = piVar15;
            if (((byte)local_b0[0] & 1) != 0) {
              piVar1 = local_a0;
            }
            iVar8 = memcmp(piVar1,"SingleFrame",0xb);
            uVar9 = 2;
            if (iVar8 != 0) {
              uVar9 = uVar11;
            }
          }
          else if (uVar3 == 10) {
            piVar1 = piVar15;
            if (((byte)local_b0[0] & 1) != 0) {
              piVar1 = local_a0;
            }
            iVar8 = memcmp(piVar1,"LoopAction",10);
            uVar9 = 0;
            if (iVar8 != 0) {
              uVar9 = uVar11;
            }
          }
        }
        break;
      case 0x10:
        pvVar2 = pvVar16;
        if (((byte)local_98[0] & 1) != 0) {
          pvVar2 = local_88;
        }
        iVar8 = memcmp(pvVar2,"SingleFrameIndex",0x10);
        if (iVar8 == 0) {
          piVar1 = piVar15;
          if (((byte)local_b0[0] & 1) != 0) {
            piVar1 = local_a0;
          }
          iVar7 = atoi((char *)piVar1);
        }
        break;
      case 0x14:
        pvVar2 = pvVar16;
        if (((byte)local_98[0] & 1) != 0) {
          pvVar2 = local_88;
        }
        iVar8 = memcmp(pvVar2,"CurrentAniamtionName",0x14);
        if (iVar8 == 0) {
          uVar3 = (ulong)((byte)local_b0[0] >> 1);
          piVar1 = piVar15;
          if (((byte)local_b0[0] & 1) != 0) {
            uVar3 = local_a8;
            piVar1 = local_a0;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_80,(char *)piVar1,uVar3);
        }
      }
      uVar11 = uVar9;
      lVar14 = *(long *)(lVar14 + 0x38);
      if (((byte)local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
      if (((byte)local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
    } while (lVar14 != 0);
  }
  this_00 = *(FlatBufferBuilder **)(this + 0x38);
  uVar3 = (ulong)((byte)local_80[0] >> 1);
  pcVar12 = (char *)((ulong)local_80 | 1);
  if (((byte)local_80[0] & 1) != 0) {
    uVar3 = local_78;
    pcVar12 = local_70;
  }
  uVar9 = flatbuffers::FlatBufferBuilder::CreateString(this_00,pcVar12,uVar3);
  pXVar13 = (XMLElement *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  uVar10 = createEasingData(this,pXVar13);
  uVar11 = flatbuffers::CreateInnerActionFrame(this_00,iVar6,bVar5,uVar11,uVar9,iVar7,uVar10);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

