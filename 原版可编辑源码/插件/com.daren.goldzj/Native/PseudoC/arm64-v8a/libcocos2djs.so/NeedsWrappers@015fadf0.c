
/* v8::internal::wasm::InstanceBuilder::NeedsWrappers() const */

undefined8 __thiscall v8::internal::wasm::InstanceBuilder::NeedsWrappers(InstanceBuilder *this)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x10);
  if (*(int *)(lVar3 + 0x48) == 0) {
    pcVar2 = *(char **)(lVar3 + 0xb8);
    do {
      if (pcVar2 == *(char **)(lVar3 + 0xc0)) {
        return 0;
      }
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 0x10;
    } while (cVar1 != '\a');
  }
  return 1;
}

