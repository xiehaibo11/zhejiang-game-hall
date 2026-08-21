
/* v8::internal::FlatStringReader::PostGarbageCollection() */

void __thiscall v8::internal::FlatStringReader::PostGarbageCollection(FlatStringReader *this)

{
  undefined1 auVar1 [16];
  undefined8 local_28;
  
  if (*(undefined8 **)(this + 0x18) != (undefined8 *)0x0) {
    local_28 = **(undefined8 **)(this + 0x18);
    auVar1 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_28);
    this[0x20] = (FlatStringReader)((auVar1._8_8_ & 0xffffffff00000000) == 0x100000000);
    *(long *)(this + 0x28) = auVar1._0_8_;
  }
  return;
}

