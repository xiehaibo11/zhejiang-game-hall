
/* void v8::internal::RelocInfo::Visit<v8::internal::Deserializer>(v8::internal::Deserializer*) */

void __thiscall
v8::internal::RelocInfo::Visit<v8::internal::Deserializer>(RelocInfo *this,Deserializer *param_1)

{
  RelocInfo RVar1;
  bool bVar2;
  long local_8;
  
  RVar1 = this[8];
  if (((byte)RVar1 & 0xfe) == 2) {
    Deserializer::VisitEmbeddedPointer(param_1,param_1,this);
    return;
  }
  if ((char)RVar1 < '\x02') {
    local_8 = 0;
    bVar2 = Deserializer::ReadData<v8::internal::FullMaybeObjectSlot>
                      (param_1,&local_8,&stack0x00000000,1,0);
    if (!bVar2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","filled");
    }
    set_target_address(this,local_8 + 0x3f,4,0);
  }
  else {
    switch(RVar1) {
    case (RelocInfo)0x6:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    case (RelocInfo)0x7:
      Deserializer::VisitExternalReference(param_1,*(undefined8 *)(this + 0x18),this);
      return;
    case (RelocInfo)0x8:
    case (RelocInfo)0x9:
      Deserializer::VisitInternalReference(param_1,*(undefined8 *)(this + 0x18),this);
      return;
    case (RelocInfo)0xa:
      Deserializer::VisitOffHeapTarget(param_1,*(undefined8 *)(this + 0x18),this);
      return;
    }
  }
  return;
}

