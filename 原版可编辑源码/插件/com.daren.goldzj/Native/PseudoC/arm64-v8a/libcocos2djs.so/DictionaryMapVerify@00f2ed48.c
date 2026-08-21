
/* v8::internal::Map::DictionaryMapVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::Map::DictionaryMapVerify(Map *this,Isolate *param_1)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  
  MapVerify(this,param_1);
  lVar2 = *(long *)this;
  if ((*(uint *)(lVar2 + 0xb) >> 0x15 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","is_dictionary_map()");
  }
  if ((~*(uint *)(lVar2 + 0xb) & 0x3ff) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kInvalidEnumCacheSentinel == EnumLength()");
  }
  if (*(int *)(lVar2 + 0x17) != *(int *)(param_1 + 0x170)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "ReadOnlyRoots(isolate).empty_descriptor_array() == instance_descriptors()");
  }
  bVar1 = *(byte *)(lVar2 + 5);
  uVar3 = (uint)bVar1;
  if (2 < bVar1) {
    uVar3 = (uint)*(byte *)(lVar2 + 3) - (uint)bVar1;
  }
  if (uVar3 == 0) {
    uVar3 = GetVisitorId();
    if (uVar3 == *(byte *)(*(long *)this + 6)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","Map::GetVisitorId(*this) == visitor_id()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","0 == UnusedPropertyFields()");
}

