
/* v8::internal::compiler::ElementAccessFeedback::AddGroup(v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>
   >&&) */

void __thiscall
v8::internal::compiler::ElementAccessFeedback::AddGroup
          (ElementAccessFeedback *this,ZoneVector *param_1)

{
  undefined8 *puVar1;
  
  if (*(long *)param_1 == *(long *)(param_1 + 8)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!group.empty()");
  }
  puVar1 = *(undefined8 **)(this + 0x18);
  if (puVar1 < *(undefined8 **)(this + 0x20)) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = *(undefined8 *)param_1;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(long *)(this + 0x18) = *(long *)(this + 0x18) + 0x20;
    return;
  }
  std::__ndk1::
  vector<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>,v8::internal::ZoneAllocator<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>>
  ::__push_back_slow_path<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>
            ((vector<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>,v8::internal::ZoneAllocator<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>>
              *)(this + 0x10),param_1);
  return;
}

