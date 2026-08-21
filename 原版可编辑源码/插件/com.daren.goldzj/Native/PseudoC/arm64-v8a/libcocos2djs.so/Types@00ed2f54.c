
/* v8::debug::TypeProfile::Entry::Types() const */

void v8::debug::TypeProfile::Entry::Types(void)

{
  undefined8 *puVar1;
  long *in_x0;
  vector<v8::MaybeLocal<v8::String>,std::__ndk1::allocator<v8::MaybeLocal<v8::String>>> *in_x8;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_18;
  
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  puVar4 = *(undefined8 **)(*in_x0 + 8);
  puVar1 = *(undefined8 **)(*in_x0 + 0x10);
  if (puVar4 != puVar1) {
    puVar3 = (undefined8 *)0x0;
    puVar2 = (undefined8 *)0x0;
    while( true ) {
      local_18 = *puVar4;
      if (puVar2 < puVar3) {
        *puVar2 = local_18;
        *(long *)(in_x8 + 8) = *(long *)(in_x8 + 8) + 8;
      }
      else {
        std::__ndk1::
        vector<v8::MaybeLocal<v8::String>,std::__ndk1::allocator<v8::MaybeLocal<v8::String>>>::
        __emplace_back_slow_path<v8::Local<v8::String>>(in_x8,(Local *)&local_18);
      }
      if (puVar1 + -1 == puVar4) break;
      puVar2 = *(undefined8 **)(in_x8 + 8);
      puVar3 = *(undefined8 **)(in_x8 + 0x10);
      puVar4 = puVar4 + 1;
    }
  }
  return;
}

