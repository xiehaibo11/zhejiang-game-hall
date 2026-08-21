
/* cocostudio::FlatBuffersSerialize::~FlatBuffersSerialize() */

void __thiscall cocostudio::FlatBuffersSerialize::~FlatBuffersSerialize(FlatBuffersSerialize *this)

{
  void *pvVar1;
  
  if (((byte)this[0x48] & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
  }
  pvVar1 = *(void **)(this + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 8) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

