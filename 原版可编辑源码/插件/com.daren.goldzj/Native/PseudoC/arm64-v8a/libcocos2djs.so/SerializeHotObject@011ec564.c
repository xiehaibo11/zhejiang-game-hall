
/* v8::internal::Serializer::SerializeHotObject(v8::internal::HeapObject) */

undefined8 __thiscall
v8::internal::Serializer::SerializeHotObject(Serializer *this,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 local_30;
  byte local_24 [4];
  
  iVar1 = (int)param_2;
  if (*(int *)(this + 8) == iVar1) {
    uVar2 = 0;
  }
  else if (*(int *)(this + 0x10) == iVar1) {
    uVar2 = 1;
  }
  else if (*(int *)(this + 0x18) == iVar1) {
    uVar2 = 2;
  }
  else if (*(int *)(this + 0x20) == iVar1) {
    uVar2 = 3;
  }
  else if (*(int *)(this + 0x28) == iVar1) {
    uVar2 = 4;
  }
  else if (*(int *)(this + 0x30) == iVar1) {
    uVar2 = 5;
  }
  else if (*(int *)(this + 0x38) == iVar1) {
    uVar2 = 6;
  }
  else {
    if (*(int *)(this + 0x40) != iVar1) {
      return 0;
    }
    uVar2 = 7;
  }
  local_30 = param_2;
  if (FLAG_trace_serializer != '\0') {
    PrintF(" Encoding hot object %d:",(ulong)uVar2);
    Object::ShortPrint((Object *)&local_30,(__sFILE *)waitpid);
    PrintF("\n");
  }
  local_24[0] = (byte)uVar2 | 0x90;
  if (*(byte **)(this + 0x58) == *(byte **)(this + 0x60)) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
    __push_back_slow_path<unsigned_char_const&>
              ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0x50),local_24
              );
  }
  else {
    **(byte **)(this + 0x58) = local_24[0];
    *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
  }
  return 1;
}

