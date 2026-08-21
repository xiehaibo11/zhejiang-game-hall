
/* v8::internal::StringStream::ToString(v8::internal::Isolate*) */

void __thiscall v8::internal::StringStream::ToString(StringStream *this,Isolate *param_1)

{
  long lVar1;
  undefined8 local_20;
  ulong uStack_18;
  
  uStack_18 = (ulong)*(uint *)(this + 0x10);
  local_20 = *(undefined8 *)(this + 0x18);
  lVar1 = Factory::NewStringFromUtf8((Factory *)param_1,&local_20,0);
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

