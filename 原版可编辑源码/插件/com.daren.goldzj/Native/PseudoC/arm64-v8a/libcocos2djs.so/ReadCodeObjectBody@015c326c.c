
/* v8::internal::Deserializer::ReadCodeObjectBody(v8::internal::SnapshotSpace, unsigned long) */

void __thiscall
v8::internal::Deserializer::ReadCodeObjectBody(Deserializer *this,undefined4 param_2,long param_3)

{
  bool bVar1;
  RelocInfo local_90 [48];
  RelocIterator aRStack_60 [56];
  char local_28;
  
  bVar1 = ReadData<v8::internal::CompressedMaybeObjectSlot>
                    (this,param_3 + 4,param_3 + 0x14,param_2,param_3);
  if (bVar1) {
    RelocIterator::RelocIterator(aRStack_60,param_3 + 1,1999);
    while (local_28 == '\0') {
      RelocInfo::Visit<v8::internal::Deserializer>(local_90,this);
      RelocIterator::next(aRStack_60);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","filled");
}

