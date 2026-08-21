
/* v8::internal::ZoneVector<v8::internal::compiler::Hints>
   v8::internal::compiler::SerializerForBackgroundCompilation::PrepareArgumentsHints<>(v8::internal::compiler::Hints*)
    */

void v8::internal::compiler::SerializerForBackgroundCompilation::PrepareArgumentsHints<>
               (Hints *param_1)

{
  undefined8 *puVar1;
  Hints *in_x1;
  vector<v8::internal::compiler::Hints,v8::internal::ZoneAllocator<v8::internal::compiler::Hints>>
  *in_x8;
  Zone *this;
  
  this = *(Zone **)(param_1 + 0x20);
  if (this == (Zone *)0x0) {
    this = (Zone *)ZoneStats::NewEmptyZone
                             (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10));
    *(Zone **)(param_1 + 0x20) = this;
    *(undefined8 *)in_x8 = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 0x10) = 0;
    *(Zone **)(in_x8 + 0x18) = this;
    if (this == (Zone *)0x0) {
      this = (Zone *)ZoneStats::NewEmptyZone
                               (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10));
      *(Zone **)(param_1 + 0x20) = this;
      puVar1 = *(undefined8 **)in_x1;
    }
    else {
      puVar1 = *(undefined8 **)in_x1;
    }
  }
  else {
    *(undefined8 *)in_x8 = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 0x10) = 0;
    *(Zone **)(in_x8 + 0x18) = this;
    puVar1 = *(undefined8 **)in_x1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(this + 0x10);
    if ((ulong)(*(long *)(this + 0x18) - (long)puVar1) < 0x30) {
      puVar1 = (undefined8 *)Zone::NewExpand(this,0x30);
    }
    else {
      *(undefined8 **)(this + 0x10) = puVar1 + 6;
    }
    puVar1[4] = 0;
    puVar1[5] = this;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *(undefined8 **)in_x1 = puVar1;
  }
  if (*(undefined8 **)(in_x8 + 8) != *(undefined8 **)(in_x8 + 0x10)) {
    **(undefined8 **)(in_x8 + 8) = puVar1;
    *(long *)(in_x8 + 8) = *(long *)(in_x8 + 8) + 8;
    return;
  }
  std::__ndk1::
  vector<v8::internal::compiler::Hints,v8::internal::ZoneAllocator<v8::internal::compiler::Hints>>::
  __push_back_slow_path<v8::internal::compiler::Hints_const&>(in_x8,in_x1);
  return;
}

