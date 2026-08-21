
/* v8::internal::DescriptorArray::PrintDescriptorDetails(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::InternalIndex,
   v8::internal::PropertyDetails::PrintMode) */

void __thiscall
v8::internal::DescriptorArray::PrintDescriptorDetails
          (DescriptorArray *this,basic_ostream *param_1,long param_3,undefined4 param_4)

{
  uint uVar1;
  basic_ostream *pbVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_48;
  ulong local_40;
  int local_38 [2];
  
  uVar3 = param_3 * 0xc00000000 + 0x1000000000 >> 0x20;
  local_38[0] = *(int *)(*(long *)this + (uVar3 | 3)) >> 1;
  PropertyDetails::PrintAsFastTo((PropertyDetails *)local_38,param_1,param_4);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," @ ",3);
  if (((byte)local_38[0]._0_1_ >> 1 & 1) == 0) {
    local_40 = Map::UnwrapFieldType
                         (*(ulong *)this & 0xffffffff00000000 |
                          (ulong)*(uint *)(uVar3 + *(ulong *)this + 7));
    FieldType::PrintTo((FieldType *)&local_40,param_1);
  }
  else {
    uVar1 = *(uint *)(uVar3 + *(ulong *)this + 7);
    uVar3 = *(ulong *)this & 0xffffffff00000000;
    uVar4 = uVar3 | uVar1;
    local_40 = uVar4;
    internal::operator<<(param_1,(Brief *)&local_40);
    if (((uVar1 & 1) != 0) && (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x52)) {
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"(get: ",6);
      local_40 = uVar3 | *(uint *)(uVar4 + 3);
      pbVar2 = (basic_ostream *)internal::operator<<(pbVar2,(Brief *)&local_40);
      pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar2,", set: ",7);
      local_48 = uVar3 | *(uint *)(uVar4 + 7);
      pbVar2 = (basic_ostream *)internal::operator<<(pbVar2,(Brief *)&local_48);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,")",1);
    }
  }
  return;
}

