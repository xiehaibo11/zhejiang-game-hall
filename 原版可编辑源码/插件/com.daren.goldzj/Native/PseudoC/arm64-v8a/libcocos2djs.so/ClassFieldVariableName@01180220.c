
/* v8::internal::ParserBase<v8::internal::PreParser>::ClassFieldVariableName(v8::internal::AstValueFactory*,
   int) */

undefined8 __thiscall
v8::internal::ParserBase<v8::internal::PreParser>::ClassFieldVariableName
          (ParserBase<v8::internal::PreParser> *this,AstValueFactory *param_1,int param_2)

{
  char *__s;
  ulong *puVar1;
  size_t sVar2;
  undefined8 uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58 [16];
  void *local_48;
  ulong local_40;
  ulong uStack_38;
  char *local_30;
  
  std::__ndk1::to_string((__ndk1 *)(ulong)(uint)param_2,(int)param_1);
  puVar1 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    insert(local_58,0,".class-field-",0xd);
  local_30 = (char *)puVar1[2];
  uStack_38 = puVar1[1];
  local_40 = *puVar1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  if (((byte)local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  __s = (char *)((ulong)&local_40 | 1);
  if ((local_40 & 1) != 0) {
    __s = local_30;
  }
  sVar2 = strlen(__s);
  uVar3 = AstValueFactory::GetOneByteStringInternal(param_1,__s,sVar2);
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  return uVar3;
}

