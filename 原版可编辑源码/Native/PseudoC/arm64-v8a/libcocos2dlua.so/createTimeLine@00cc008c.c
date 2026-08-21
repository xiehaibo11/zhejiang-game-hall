
/* cocostudio::FlatBuffersSerialize::createTimeLine(tinyxml2::XMLElement const*) */

undefined4 __thiscall
cocostudio::FlatBuffersSerialize::createTimeLine(FlatBuffersSerialize *this,XMLElement *param_1)

{
  uint *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  XMLNode *this_00;
  FlatBufferBuilder *this_01;
  long lVar11;
  long *plVar12;
  uint local_b0 [2];
  ulong local_a8;
  char *local_a0;
  uint *local_98;
  uint *local_90;
  uint *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80;
  undefined1 auStack_7f [15];
  long *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_80,"");
  lVar11 = *(long *)(param_1 + 0x60);
  if (lVar11 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    do {
      pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar11 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_98,pcVar10);
      pcVar10 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar11 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 local_b0,pcVar10);
      puVar1 = (uint *)((ulong)local_98 >> 1 & 0x7f);
      if (((ulong)local_98 & 1) != 0) {
        puVar1 = local_90;
      }
      if (puVar1 == (uint *)0x8) {
        puVar1 = (uint *)((ulong)&local_98 | 1);
        if (((ulong)local_98 & 1) != 0) {
          puVar1 = local_88;
        }
        if (*(long *)puVar1 == 0x79747265706f7250) {
          uVar2 = (ulong)((byte)local_b0[0]._0_1_ >> 1);
          pcVar10 = (char *)((ulong)local_b0 | 1);
          if ((local_b0[0] & 1) != 0) {
            uVar2 = local_a8;
            pcVar10 = local_a0;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (&local_80,pcVar10,uVar2);
        }
      }
      else if (puVar1 == (uint *)0x9) {
        puVar1 = (uint *)((ulong)&local_98 | 1);
        if (((ulong)local_98 & 1) != 0) {
          puVar1 = local_88;
        }
        iVar5 = memcmp(puVar1,"ActionTag",9);
        if (iVar5 == 0) {
          pcVar10 = (char *)((ulong)local_b0 | 1);
          if ((local_b0[0] & 1) != 0) {
            pcVar10 = local_a0;
          }
          iVar6 = atoi(pcVar10);
        }
      }
      lVar11 = *(long *)(lVar11 + 0x38);
      if ((local_b0[0] & 1) != 0) {
        operator_delete(local_a0);
      }
      if (((ulong)local_98 & 1) != 0) {
        operator_delete(local_88);
      }
    } while (lVar11 != 0);
  }
  local_90 = (uint *)0x0;
  local_88 = (uint *)0x0;
  local_98 = (uint *)0x0;
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  if (this_00 != (XMLNode *)0x0) {
    plVar12 = (long *)((ulong)&local_80 | 1);
    do {
      uVar7 = 0;
      local_b0[0] = 0;
      uVar2 = (ulong)((byte)local_80 >> 1);
      if (((byte)local_80 & 1) != 0) {
        uVar2 = auStack_7f._7_8_;
      }
      switch(uVar2) {
      case 5:
        plVar3 = plVar12;
        if (((byte)local_80 & 1) != 0) {
          plVar3 = local_70;
        }
        iVar5 = memcmp(plVar3,"Scale",5);
        if (iVar5 == 0) {
          uVar8 = createScaleFrame(this,(XMLElement *)this_00);
          uVar7 = flatbuffers::CreateFrame(*(undefined8 *)(this + 0x38),0,uVar8,0,0,0,0,0,0,0);
          local_b0[0] = uVar7;
        }
        else {
          iVar5 = memcmp(plVar3,"Alpha",5);
          if (iVar5 != 0) goto LAB_00cc0594;
          uVar8 = createIntFrame(this,(XMLElement *)this_00);
          uVar7 = flatbuffers::CreateFrame(*(undefined8 *)(this + 0x38),0,0,0,0,0,uVar8,0,0,0);
          local_b0[0] = uVar7;
        }
        break;
      case 6:
        plVar3 = plVar12;
        if (((byte)local_80 & 1) != 0) {
          plVar3 = local_70;
        }
        iVar5 = memcmp(plVar3,"CColor",6);
        if (iVar5 == 0) {
          uVar8 = createColorFrame(this,(XMLElement *)this_00);
          uVar7 = flatbuffers::CreateFrame(*(undefined8 *)(this + 0x38),0,0,uVar8,0,0,0,0,0,0);
          local_b0[0] = uVar7;
        }
        else {
          iVar5 = memcmp(plVar3,"ZOrder",6);
          if (iVar5 != 0) goto LAB_00cc0594;
          uVar8 = createIntFrame(this,(XMLElement *)this_00);
          uVar7 = flatbuffers::CreateFrame(*(undefined8 *)(this + 0x38),0,0,0,0,0,uVar8,0,0,0);
          local_b0[0] = uVar7;
        }
        break;
      case 8:
        plVar3 = plVar12;
        if (((byte)local_80 & 1) != 0) {
          plVar3 = local_70;
        }
        if (*plVar3 == 0x6e6f697469736f50) {
          uVar8 = createPointFrame(this,(XMLElement *)this_00);
          uVar7 = flatbuffers::CreateFrame(*(undefined8 *)(this + 0x38),uVar8,0,0,0,0,0,0,0,0);
          local_b0[0] = uVar7;
        }
        else {
          if (*plVar3 != 0x61746144656c6946) goto LAB_00cc0594;
          uVar8 = createTextureFrame(this,(XMLElement *)this_00);
          uVar7 = flatbuffers::CreateFrame(*(undefined8 *)(this + 0x38),0,0,0,uVar8,0,0,0,0,0);
          local_b0[0] = uVar7;
        }
        break;
      case 9:
        plVar3 = plVar12;
        if (((byte)local_80 & 1) != 0) {
          plVar3 = local_70;
        }
        iVar5 = memcmp(plVar3,"BlendFunc",9);
        if (iVar5 == 0) {
          uVar8 = createBlendFrame(this,(XMLElement *)this_00);
          uVar7 = flatbuffers::CreateFrame(*(undefined8 *)(this + 0x38),0,0,0,0,0,0,0,0,uVar8);
          local_b0[0] = uVar7;
        }
        else {
LAB_00cc0594:
          uVar7 = 0;
        }
        break;
      case 10:
        plVar3 = plVar12;
        if (((byte)local_80 & 1) != 0) {
          plVar3 = local_70;
        }
        iVar5 = memcmp(plVar3,"FrameEvent",10);
        if (iVar5 != 0) goto LAB_00cc0594;
        uVar8 = createEventFrame(this,(XMLElement *)this_00);
        uVar7 = flatbuffers::CreateFrame(*(undefined8 *)(this + 0x38),0,0,0,0,uVar8,0,0,0,0);
        local_b0[0] = uVar7;
        break;
      case 0xb:
        plVar3 = plVar12;
        if (((byte)local_80 & 1) != 0) {
          plVar3 = local_70;
        }
        iVar5 = memcmp(plVar3,"AnchorPoint",0xb);
        if (iVar5 == 0) {
          uVar8 = createScaleFrame(this,(XMLElement *)this_00);
          uVar7 = flatbuffers::CreateFrame(*(undefined8 *)(this + 0x38),0,uVar8,0,0,0,0,0,0,0);
          local_b0[0] = uVar7;
        }
        else {
          iVar5 = memcmp(plVar3,"ActionValue",0xb);
          if (iVar5 != 0) goto LAB_00cc0594;
          uVar8 = createInnerActionFrame(this,(XMLElement *)this_00);
          uVar7 = flatbuffers::CreateFrame(*(undefined8 *)(this + 0x38),0,0,0,0,0,0,0,uVar8,0);
          local_b0[0] = uVar7;
        }
        break;
      case 0xc:
        plVar3 = plVar12;
        if (((byte)local_80 & 1) != 0) {
          plVar3 = local_70;
        }
        iVar5 = memcmp(plVar3,"RotationSkew",0xc);
        if (iVar5 != 0) goto LAB_00cc0594;
        uVar8 = createScaleFrame(this,(XMLElement *)this_00);
        uVar7 = flatbuffers::CreateFrame(*(undefined8 *)(this + 0x38),0,uVar8,0,0,0,0,0,0,0);
        local_b0[0] = uVar7;
        break;
      case 0xf:
        plVar3 = plVar12;
        if (((byte)local_80 & 1) != 0) {
          plVar3 = local_70;
        }
        iVar5 = memcmp(plVar3,"VisibleForFrame",0xf);
        if (iVar5 != 0) goto LAB_00cc0594;
        uVar8 = createBoolFrame(this,(XMLElement *)this_00);
        uVar7 = flatbuffers::CreateFrame(*(undefined8 *)(this + 0x38),0,0,0,0,0,0,uVar8,0,0);
        local_b0[0] = uVar7;
      }
      if (local_90 == local_88) {
        std::__ndk1::
        vector<flatbuffers::Offset<flatbuffers::Frame>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::Frame>>>
        ::__push_back_slow_path<flatbuffers::Offset<flatbuffers::Frame>const&>
                  ((vector<flatbuffers::Offset<flatbuffers::Frame>,std::__ndk1::allocator<flatbuffers::Offset<flatbuffers::Frame>>>
                    *)&local_98,(Offset *)local_b0);
      }
      else {
        *local_90 = uVar7;
        local_90 = local_90 + 1;
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
    } while (this_00 != (XMLNode *)0x0);
  }
  this_01 = *(FlatBufferBuilder **)(this + 0x38);
  plVar12 = local_70;
  if (((byte)local_80 & 1) == 0) {
    auStack_7f._7_8_ = (ulong)((byte)local_80 >> 1);
    plVar12 = (long *)auStack_7f;
  }
  uVar8 = flatbuffers::FlatBufferBuilder::CreateString(this_01,(char *)plVar12,auStack_7f._7_8_);
  uVar9 = flatbuffers::FlatBufferBuilder::CreateVector<flatbuffers::Offset<flatbuffers::Frame>>
                    (*(FlatBufferBuilder **)(this + 0x38),(Offset *)local_98,
                     (long)local_90 - (long)local_98 >> 2);
  uVar8 = flatbuffers::CreateTimeLine(this_01,uVar8,iVar6,uVar9);
  if (local_98 != (uint *)0x0) {
    local_90 = local_98;
    operator_delete(local_98);
  }
  if (((byte)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

