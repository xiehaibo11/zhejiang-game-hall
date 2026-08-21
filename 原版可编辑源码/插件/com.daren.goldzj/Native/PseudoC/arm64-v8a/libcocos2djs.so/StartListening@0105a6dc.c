
/* v8::internal::ExternalCodeEventListener::StartListening(v8::CodeEventHandler*) */

void __thiscall
v8::internal::ExternalCodeEventListener::StartListening
          (ExternalCodeEventListener *this,CodeEventHandler *param_1)

{
  Mutex *this_00;
  undefined8 uVar1;
  long lVar2;
  ulong extraout_x1;
  __hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
  *this_01;
  Isolate *pIVar3;
  ExternalCodeEventListener *local_50;
  ExternalCodeEventListener *pEStack_48;
  
  if ((param_1 != (CodeEventHandler *)0x0) && (this[8] == (ExternalCodeEventListener)0x0)) {
    *(CodeEventHandler **)(this + 0x18) = param_1;
    this_01 = *(__hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
                **)(*(long *)(this + 0x10) + 0xb6d8);
    this_00 = (Mutex *)(this_01 + 0x28);
    local_50 = this;
    base::Mutex::Lock(this_00);
    std::__ndk1::
    __hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
    ::
    __emplace_unique_key_args<v8::internal::CodeEventListener*,v8::internal::CodeEventListener*const&>
              (this_01,(CodeEventListener **)&local_50,(CodeEventListener **)&local_50);
    base::Mutex::Unlock(this_00);
    this[8] = (ExternalCodeEventListener)((byte)extraout_x1 & 1);
    if ((extraout_x1 & 1) != 0) {
      pIVar3 = *(Isolate **)(this + 0x10);
      uVar1 = *(undefined8 *)(pIVar3 + 0x95a0);
      lVar2 = *(long *)(pIVar3 + 0x95a8);
      *(int *)(pIVar3 + 0x95b0) = *(int *)(pIVar3 + 0x95b0) + 1;
      local_50 = *(ExternalCodeEventListener **)(this + 0x10);
      pEStack_48 = this;
      ExistingCodeLogger::LogCodeObjects((ExistingCodeLogger *)&local_50);
      ExistingCodeLogger::LogCompiledFunctions((ExistingCodeLogger *)&local_50);
      if (pIVar3 != (Isolate *)0x0) {
        *(undefined8 *)(pIVar3 + 0x95a0) = uVar1;
        *(int *)(pIVar3 + 0x95b0) = *(int *)(pIVar3 + 0x95b0) + -1;
        if (*(long *)(pIVar3 + 0x95a8) != lVar2) {
          *(long *)(pIVar3 + 0x95a8) = lVar2;
          HandleScope::DeleteExtensions(pIVar3);
        }
      }
    }
  }
  return;
}

