
/* v8::internal::StringTableInsertionKey::StringTableInsertionKey(v8::internal::String) */

void __thiscall
v8::internal::StringTableInsertionKey::StringTableInsertionKey
          (StringTableInsertionKey *this,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long local_18;
  
  *(undefined ***)this = &PTR__StringTableKey_01cc94c8;
  uVar2 = *(uint *)(param_2 + 3);
  if ((uVar2 & 1) != 0) {
    local_18 = param_2;
    String::ComputeAndSetHash((String *)&local_18);
    uVar2 = *(uint *)(param_2 + 3);
  }
  uVar1 = *(undefined4 *)(param_2 + 7);
  *(undefined ***)this = &PTR__StringTableKey_01cc94c8;
  *(long *)(this + 0x10) = param_2;
  *(uint *)(this + 8) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}

