
/* v8::internal::interpreter::BytecodeArrayAccessor::PrintTo(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) const */

void __thiscall
v8::internal::interpreter::BytecodeArrayAccessor::PrintTo
          (BytecodeArrayAccessor *this,basic_ostream *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = (**(code **)(**(long **)this + 0x20))();
  iVar1 = *(int *)(this + 8);
  iVar2 = (**(code **)(**(long **)this + 8))(*(long **)this);
  BytecodeDecoder::Decode(param_1,(uchar *)(lVar3 + iVar1),iVar2);
  return;
}

