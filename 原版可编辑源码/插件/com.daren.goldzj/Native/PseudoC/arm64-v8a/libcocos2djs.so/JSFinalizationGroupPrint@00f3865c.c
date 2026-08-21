
/* v8::internal::JSFinalizationGroup::JSFinalizationGroupPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::JSFinalizationGroup::JSFinalizationGroupPrint
          (JSFinalizationGroup *this,basic_ostream *param_1)

{
  uint *puVar1;
  uint uVar2;
  basic_ostream *pbVar3;
  ulong uVar4;
  ulong local_28;
  
  FUN_00f3d5b0(param_1,*(undefined8 *)this,"JSFinalizationGroup");
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - native_context: ",0x14);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  internal::operator<<(pbVar3,(Brief *)&local_28);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - cleanup: ",0xd);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xf);
  internal::operator<<(pbVar3,(Brief *)&local_28);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - active_cells: ",0x12);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x13);
  internal::operator<<(pbVar3,(Brief *)&local_28);
  uVar2 = *(uint *)(*(ulong *)this + 0x13);
  if ((uVar2 & 1) != 0) {
    uVar4 = *(ulong *)this & 0xffffffff00000000 | (ulong)uVar2;
    do {
      if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0xa8) break;
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n   - ",6);
      local_28 = uVar4;
      internal::operator<<(pbVar3,(Brief *)&local_28);
      puVar1 = (uint *)(uVar4 + 0x13);
      uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*puVar1;
    } while ((*puVar1 & 1) != 0);
  }
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - cleared_cells: ",0x13);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x17);
  internal::operator<<(pbVar3,(Brief *)&local_28);
  uVar2 = *(uint *)(*(ulong *)this + 0x17);
  if ((uVar2 & 1) != 0) {
    uVar4 = *(ulong *)this & 0xffffffff00000000 | (ulong)uVar2;
    do {
      if (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0xa8) break;
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n   - ",6);
      local_28 = uVar4;
      internal::operator<<(pbVar3,(Brief *)&local_28);
      puVar1 = (uint *)(uVar4 + 0x13);
      uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*puVar1;
    } while ((*puVar1 & 1) != 0);
  }
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - key_map: ",0xd);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x1b);
  internal::operator<<(pbVar3,(Brief *)&local_28);
  FUN_00f3d880(param_1,*(undefined8 *)this,1);
  return;
}

