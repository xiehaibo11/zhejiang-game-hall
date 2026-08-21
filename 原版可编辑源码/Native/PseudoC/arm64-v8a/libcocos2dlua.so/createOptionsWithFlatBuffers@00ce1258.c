
/* cocostudio::Node3DReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4
cocostudio::Node3DReader::createOptionsWithFlatBuffers
          (XMLElement *param_1,FlatBufferBuilder *param_2)

{
  void *__s1;
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  size_t sVar6;
  XMLNode *this;
  FlatBufferBuilder *in_x2;
  long lVar7;
  undefined4 in_s1;
  undefined4 in_s2;
  ulong local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  char *local_b8;
  ulong local_b0;
  ulong local_a8;
  void *local_a0;
  undefined4 local_98 [4];
  undefined4 local_88 [4];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  createOptionsWithFlatBuffersForNode((Node3DReader *)param_1,(XMLElement *)param_2,in_x2);
  cocos2d::Vec3::Vec3((Vec3 *)&local_78);
  cocos2d::Vec3::Vec3((Vec3 *)local_88);
  cocos2d::Vec3::Vec3((Vec3 *)local_98);
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  lVar7 = *(long *)(param_2 + 0x60);
  if (lVar7 != 0) {
    do {
      pcVar5 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar7 + 8));
      sVar6 = strlen(pcVar5);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_b0,pcVar5,sVar6);
      pcVar5 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar7 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_c8,pcVar5);
      uVar1 = local_b0 >> 1 & 0x7f;
      if ((local_b0 & 1) != 0) {
        uVar1 = local_a8;
      }
      if (uVar1 == 0xe) {
        __s1 = (void *)((ulong)&local_b0 | 1);
        if ((local_b0 & 1) != 0) {
          __s1 = local_a0;
        }
        iVar3 = memcmp(__s1,"CameraFlagMode",0xe);
        if (iVar3 == 0) {
          pcVar5 = (char *)((ulong)&local_c8 | 1);
          if ((local_c8 & 1) != 0) {
            pcVar5 = local_b8;
          }
          atoi(pcVar5);
        }
      }
      lVar7 = *(long *)(lVar7 + 0x38);
      if ((local_c8 & 1) != 0) {
        operator_delete(local_b8);
      }
    } while (lVar7 != 0);
  }
  this = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_2,(char *)0x0);
  if (this != (XMLNode *)0x0) {
    do {
      pcVar5 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_c8,pcVar5);
      uVar1 = local_c8 >> 1 & 0x7f;
      if ((local_c8 & 1) != 0) {
        uVar1 = CONCAT44(uStack_bc,local_c0);
      }
      if (uVar1 == 7) {
        pcVar5 = (char *)((ulong)&local_c8 | 1);
        if ((local_c8 & 1) != 0) {
          pcVar5 = local_b8;
        }
        iVar3 = memcmp(pcVar5,"Scale3D",7);
        if (iVar3 == 0) {
          local_98[0] = getVec3Attribute((Node3DReader *)0x0,*(XMLAttribute **)(this + 0x60));
        }
      }
      else if (uVar1 == 10) {
        pcVar5 = (char *)((ulong)&local_c8 | 1);
        if ((local_c8 & 1) != 0) {
          pcVar5 = local_b8;
        }
        iVar3 = memcmp(pcVar5,"Position3D",10);
        if (iVar3 == 0) {
          local_78 = getVec3Attribute((Node3DReader *)0x0,*(XMLAttribute **)(this + 0x60));
          uStack_74 = in_s1;
          local_70 = in_s2;
        }
        else {
          iVar3 = memcmp(pcVar5,"Rotation3D",10);
          if (iVar3 == 0) {
            local_88[0] = getVec3Attribute((Node3DReader *)0x0,*(XMLAttribute **)(this + 0x60));
          }
        }
      }
      this = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this,(char *)0x0);
      if ((local_c8 & 1) != 0) {
        operator_delete(local_b8);
      }
    } while (this != (XMLNode *)0x0);
  }
  local_c8 = CONCAT44(uStack_74,local_78);
  local_c0 = local_70;
  uVar4 = flatbuffers::CreateNode3DOption();
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

