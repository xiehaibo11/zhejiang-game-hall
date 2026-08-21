
/* v8::internal::Isolate::SetTerminationOnExternalTryCatch() */

void __thiscall v8::internal::Isolate::SetTerminationOnExternalTryCatch(Isolate *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x2bb8);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x28) = *(byte *)(lVar1 + 0x28) & 0xfd;
    *(byte *)(*(long *)(this + 0x2bb8) + 0x28) = *(byte *)(*(long *)(this + 0x2bb8) + 0x28) | 0x10;
    *(undefined8 *)(*(long *)(this + 0x2bb8) + 0x10) = *(undefined8 *)(this + 0xb0);
  }
  return;
}

