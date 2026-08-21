
/* cocostudio::Light3DReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

ulong __thiscall
cocostudio::Light3DReader::createOptionsWithFlatBuffers
          (Light3DReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  char *pcVar4;
  size_t sVar5;
  ulong uVar6;
  long lVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [16];
  void *local_a8;
  ulong local_a0;
  ulong local_98;
  void *local_90;
  long local_88;
  
  lVar1 = tpidr_el0;
  local_88 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)Node3DReader::getInstance();
  uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,param_1,param_2);
  local_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = 0;
  lVar7 = *(long *)(param_1 + 0x60);
  while (lVar7 != 0) {
    pcVar4 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar7 + 8));
    sVar5 = strlen(pcVar4);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &local_a0,pcVar4,sVar5);
    pcVar4 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar7 + 0x20));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_b8,pcVar4);
    uVar6 = local_a0 >> 1 & 0x7f;
    if ((local_a0 & 1) != 0) {
      uVar6 = local_98;
    }
    if (uVar6 - 4 < 7) {
      uVar6 = (*(code *)(&UNK_00ce9eb0 + (ulong)*(ushort *)(&DAT_014178e6 + (uVar6 - 4) * 2) * 4))()
      ;
      return uVar6;
    }
    lVar7 = *(long *)(lVar7 + 0x38);
    if (((byte)local_b8[0] & 1) != 0) {
      operator_delete(local_a8);
    }
  }
  uVar6 = flatbuffers::CreateLight3DOption(0x3f800000,0x40a00000,0x41f00000,param_2,uVar2,1,0,0);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar1 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6 & 0xffffffff;
}

