
/* v8::internal::compiler::JSONGraphEdgeWriter::PrintEdge(v8::internal::compiler::Node*, int,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSONGraphEdgeWriter::PrintEdge
          (JSONGraphEdgeWriter *this,Node *param_1,int param_2,Node *param_3)

{
  int iVar1;
  basic_ostream *pbVar2;
  size_t sVar3;
  uint uVar4;
  char *__s;
  
  if (this[0x50] == (JSONGraphEdgeWriter)0x0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (*(basic_ostream **)this,",\n",2);
  }
  else {
    this[0x50] = (JSONGraphEdgeWriter)0x0;
  }
  if (param_2 < 0) {
    __s = "unknown";
  }
  else {
    iVar1 = NodeProperties::PastValueIndex(param_1);
    if (param_2 < iVar1) {
      __s = "value";
    }
    else {
      iVar1 = NodeProperties::PastContextIndex(param_1);
      if (param_2 < iVar1) {
        __s = "context";
      }
      else {
        iVar1 = NodeProperties::PastFrameStateIndex(param_1);
        if (param_2 < iVar1) {
          __s = "frame-state";
        }
        else {
          iVar1 = NodeProperties::PastEffectIndex(param_1);
          __s = "effect";
          if (iVar1 <= param_2) {
            __s = "control";
          }
        }
      }
    }
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (*(basic_ostream **)this,"{\"source\":",10);
  if (param_3 == (Node *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(uint *)(param_3 + 0x14) & 0xffffff;
  }
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,uVar4);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,",\"target\":",10);
  if (param_1 == (Node *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x14) & 0xffffff;
  }
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,uVar4);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,",\"index\":",9);
  pbVar2 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,param_2);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,",\"type\":\"",9);
  sVar3 = strlen(__s);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar2,__s,sVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"\"}",2);
  return;
}

