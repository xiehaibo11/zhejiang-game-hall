
/* v8::internal::JSGeneratorObject::JSGeneratorObjectPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::JSGeneratorObject::JSGeneratorObjectPrint
          (JSGeneratorObject *this,basic_ostream *param_1)

{
  int iVar1;
  int iVar2;
  basic_ostream *pbVar3;
  size_t sVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  char *pcVar10;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  
  FUN_00f3d5b0(param_1,*(undefined8 *)this,"JSGeneratorObject");
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - function: ",0xe);
  local_38 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  internal::operator<<(pbVar3,(Brief *)&local_38);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - context: ",0xd);
  local_38 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xf);
  internal::operator<<(pbVar3,(Brief *)&local_38);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - receiver: ",0xe);
  local_38 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x13);
  internal::operator<<(pbVar3,(Brief *)&local_38);
  if (*(uint *)(*(long *)this + 0x1f) < 0xfffffffc) {
    pcVar10 = "\n - debug pos: ";
    uVar5 = 0xf;
  }
  else {
    pcVar10 = "\n - input: ";
    uVar5 = 0xb;
  }
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar10,uVar5);
  local_38 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x17);
  internal::operator<<(pbVar3,(Brief *)&local_38);
  uVar8 = *(int *)(*(long *)this + 0x1b) >> 1;
  if (uVar8 < 3) {
    pcVar10 = (&PTR_s__next___01ca4c00)[(int)uVar8];
  }
  else {
    pcVar10 = "(invalid)";
  }
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - resume mode: ",0x11);
  sVar4 = strlen(pcVar10);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,pcVar10,sVar4);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - continuation: ",0x12);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
             *(int *)(*(long *)this + 0x1f) >> 1);
  uVar5 = *(ulong *)this;
  puVar6 = (uint *)(uVar5 + 0x1f);
  if (0xfffffffd < *puVar6) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1," (closed)",9);
    uVar5 = *(ulong *)this;
    puVar6 = (uint *)(uVar5 + 0x1f);
  }
  uVar8 = *(uint *)(uVar5 + 0x1f);
  if ((uVar8 & 0xfffffffe) == 0xfffffffc) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1," (executing)",0xc);
    uVar5 = *(ulong *)this;
    puVar6 = (uint *)(uVar5 + 0x1f);
    uVar8 = *puVar6;
  }
  if (-1 < (int)uVar8) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1," (suspended)",0xc);
    uVar5 = *(ulong *)this;
    puVar6 = (uint *)(uVar5 + 0x1f);
  }
  if ((int)*puVar6 < 0) goto LAB_00f3250c;
  local_38 = uVar5 & 0xffffffff00000000 |
             (ulong)*(uint *)((uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0xb)) + 0xb);
  uVar5 = SharedFunctionInfo::HasSourceCode((SharedFunctionInfo *)&local_38);
  if ((uVar5 & 1) == 0) goto LAB_00f3250c;
  uVar5 = local_38 & 0xffffffff00000000;
  local_40 = uVar5 | *(uint *)(local_38 + 0xf);
  if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(local_40 - 1)) == 0x5b) {
    local_40 = uVar5 | *(uint *)(local_40 + 0xb);
  }
  if (((*(uint *)(local_40 + 7) & 1) == 0) ||
     (local_48 = local_40 & 0xffffffff00000000 | (ulong)*(uint *)(local_40 + 7),
     0x3f < *(ushort *)((local_40 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_48 - 1)))) {
    local_48 = *(ulong *)(((ulong)*(uint *)(this + 4) << 0x20) + 200);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\n - source position: ",0x15);
  if (((*(uint *)(local_38 + 3) & 1) == 0) ||
     (*(short *)((local_38 & 0xffffffff00000000 | 7) +
                (ulong)*(uint *)((local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 3)) -
                                1)) != 0x86)) {
    if (((*(uint *)(local_38 + 3) & 1) != 0) &&
       (*(short *)((local_38 & 0xffffffff00000000 | 7) +
                  (ulong)*(uint *)((local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 3))
                                  - 1)) == 0x61)) goto LAB_00f32384;
LAB_00f324e4:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"unavailable",0xb);
  }
  else {
LAB_00f32384:
    uVar5 = local_38 & 0xffffffff00000000;
    uVar9 = uVar5 | *(uint *)(local_38 + 0xf);
    uVar7 = uVar5 | 7;
    if ((*(short *)(uVar7 + *(uint *)(uVar9 - 1)) == 0x5b) &&
       (*(short *)(uVar7 + *(uint *)((uVar5 | *(uint *)(uVar9 + 0x13)) - 1)) == 0x86)) {
      uVar8 = *(uint *)(uVar9 + 0xf);
    }
    else if (((*(uint *)(local_38 + 3) & 1) == 0) ||
            (*(short *)(uVar7 + *(uint *)((uVar5 | *(uint *)(local_38 + 3)) - 1)) != 0x86)) {
      uVar8 = *(uint *)((local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 3)) + 3);
    }
    else {
      uVar8 = *(uint *)(local_38 + 3);
    }
    uVar5 = local_38 & 0xffffffff00000000;
    uVar8 = *(uint *)((uVar5 | uVar8) + 0xf);
    if (((uVar8 & 1) != 0) &&
       ((uVar8 == *(uint *)(uVar5 + 0xa0) || (uVar8 == *(uint *)(uVar5 + 0x180)))))
    goto LAB_00f324e4;
    iVar1 = source_position(this);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,iVar1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," (",2);
    String::PrintUC16((String *)&local_48,param_1,0,-1);
    iVar1 = source_position(this);
    iVar1 = Script::GetLineNumber((Script *)&local_40,iVar1);
    iVar2 = source_position(this);
    iVar2 = Script::GetColumnNumber((Script *)&local_40,iVar2);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,", lin ",6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,iVar1 + 1);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,", col ",6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,iVar2 + 1);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,")",1);
LAB_00f3250c:
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - register file: ",0x13);
  local_38 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x23);
  internal::operator<<(pbVar3,(Brief *)&local_38);
  FUN_00f3d880(param_1,*(undefined8 *)this,1);
  return;
}

