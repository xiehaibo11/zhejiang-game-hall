
/* v8::internal::Deserializer::VisitCodeTarget(v8::internal::Code, v8::internal::RelocInfo*) */

void __thiscall
v8::internal::Deserializer::VisitCodeTarget
          (Deserializer *this,undefined8 param_2,RelocInfo *param_3)

{
  bool bVar1;
  long local_8;
  
  local_8 = 0;
  bVar1 = ReadData<v8::internal::FullMaybeObjectSlot>(this,&local_8,&stack0x00000000,1,0);
  if (bVar1) {
    RelocInfo::set_target_address(param_3,local_8 + 0x3f,4,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","filled");
}

