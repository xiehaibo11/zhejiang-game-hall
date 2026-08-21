
void FUN_00f3d5b0(basic_ostream *param_1,ulong param_2,char *param_3)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  basic_ostream *pbVar4;
  char *pcVar5;
  size_t sVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar8 = param_2 & 0xffffffff00000000;
  local_80 = param_2;
  v8::internal::HeapObject::PrintHeader((HeapObject *)&local_80,param_1,param_3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," [",2);
  if ((*(uint *)((uVar8 | 0xb) + (ulong)*(uint *)(param_2 - 1)) >> 0x15 & 1) == 0) {
    pcVar5 = "FastProperties";
    uVar7 = 0xe;
  }
  else {
    pcVar5 = "DictionaryProperties";
    uVar7 = 0x14;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar5,uVar7);
  local_60 = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_70 = uVar8;
  local_68 = param_2;
  v8::internal::PrototypeIterator::Advance((PrototypeIterator *)&local_70);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"]\n - prototype: ",0x10);
  local_78 = local_68;
  v8::internal::operator<<(pbVar4,(Brief *)&local_78);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - elements: ",0xe);
  local_78 = uVar8 | *(uint *)(param_2 + 7);
  pbVar4 = (basic_ostream *)v8::internal::operator<<(pbVar4,(Brief *)&local_78);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4," [",2)
  ;
  pcVar5 = (char *)v8::internal::ElementsKindToString
                             (*(byte *)((uVar8 | *(uint *)(param_2 - 1)) + 10) >> 3);
  sVar6 = strlen(pcVar5);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,pcVar5,sVar6);
  local_78 = uVar8 | *(uint *)(param_2 + 7);
  uVar7 = v8::internal::FixedArrayBase::IsCowArray((FixedArrayBase *)&local_78);
  if ((uVar7 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," (COW)",6);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"]",1);
  uVar7 = v8::internal::Object::GetSimpleHash(param_2);
  if ((uVar7 & 1) != 0) {
    local_78 = param_2;
    uVar7 = v8::internal::JSReceiver::GetIdentityHash((JSReceiver *)&local_78);
  }
  if ((uVar7 & 1) == 0) {
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - hash: ",10);
    local_78 = uVar7;
    v8::internal::operator<<(pbVar4,(Brief *)&local_78);
  }
  uVar7 = uVar8 | *(uint *)(param_2 - 1);
  bVar1 = *(byte *)(uVar7 + 3);
  if (bVar1 != 0) {
    if (*(short *)(uVar7 + 7) == 0x421) {
      iVar3 = 0xc;
    }
    else {
      iVar3 = v8::internal::JSObject::GetHeaderSize
                        (*(short *)(uVar7 + 7),*(char *)(uVar7 + 9) < '\0');
    }
    if (1 < (int)((((int)((uint)bVar1 * 4 - iVar3) >> 2) - (uint)*(byte *)(uVar7 + 3)) +
                 (uint)*(byte *)(uVar7 + 4))) {
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - embedder fields: ",0x15);
      uVar8 = uVar8 | *(uint *)(param_2 - 1);
      bVar1 = *(byte *)(uVar8 + 3);
      if (bVar1 == 0) {
        iVar3 = 0;
      }
      else {
        if (*(short *)(uVar8 + 7) == 0x421) {
          iVar3 = 0xc;
        }
        else {
          iVar3 = v8::internal::JSObject::GetHeaderSize
                            (*(short *)(uVar8 + 7),*(char *)(uVar8 + 9) < '\0');
        }
        iVar3 = (((int)((uint)bVar1 * 4 - iVar3) >> 2) - (uint)*(byte *)(uVar8 + 3)) +
                (uint)*(byte *)(uVar8 + 4);
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
      }
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,iVar3);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

