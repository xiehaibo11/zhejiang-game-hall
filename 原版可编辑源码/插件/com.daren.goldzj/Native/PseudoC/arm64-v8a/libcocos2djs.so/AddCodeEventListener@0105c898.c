
/* v8::internal::Logger::AddCodeEventListener(v8::internal::CodeEventListener*) */

void __thiscall v8::internal::Logger::AddCodeEventListener(Logger *this,CodeEventListener *param_1)

{
  Mutex *this_00;
  ulong extraout_x1;
  __hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
  *this_01;
  CodeEventListener *local_28;
  
  this_01 = *(__hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
              **)(*(long *)(this + 8) + 0xb6d8);
  this_00 = (Mutex *)(this_01 + 0x28);
  local_28 = param_1;
  base::Mutex::Lock(this_00);
  std::__ndk1::
  __hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
  ::
  __emplace_unique_key_args<v8::internal::CodeEventListener*,v8::internal::CodeEventListener*const&>
            (this_01,&local_28,&local_28);
  base::Mutex::Unlock(this_00);
  if ((extraout_x1 & 1) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","result");
}

