
/* v8::internal::compiler::JSHeapBroker::Trace() const */

basic_ostream * __thiscall v8::internal::compiler::JSHeapBroker::Trace(JSHeapBroker *this)

{
  uint uVar1;
  basic_ostream *pbVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  undefined8 local_48;
  ulong local_40;
  char *local_38;
  
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)(this + 0x78),"[",1);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,this);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"] ",2)
  ;
  local_40 = 0;
  local_38 = (char *)0x0;
  local_48 = 0;
  uVar1 = *(int *)(this + 0x170) << 1;
  uVar3 = (ulong)uVar1;
  if (uVar1 < 0x17) {
    pcVar4 = (char *)((ulong)&local_48 | 1);
    local_48 = (ulong)(byte)(*(int *)(this + 0x170) << 2);
    if (uVar1 == 0) goto LAB_0170cbbc;
  }
  else {
    uVar5 = uVar3 + 0x10 & 0x1fffffff0;
    pcVar4 = operator_new(uVar5);
    local_48 = uVar5 | 1;
    local_40 = uVar3;
    local_38 = pcVar4;
  }
  memset(pcVar4,0x20,uVar3);
LAB_0170cbbc:
  pcVar4[uVar3] = '\0';
  uVar3 = local_40;
  pcVar4 = local_38;
  if ((local_48 & 1) == 0) {
    uVar3 = local_48 >> 1 & 0x7f;
    pcVar4 = (char *)((long)&local_48 + 1);
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,pcVar4,uVar3);
  if ((local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  return pbVar2;
}

