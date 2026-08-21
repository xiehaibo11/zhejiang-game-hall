
/* v8::internal::BasicBlockProfiler::Data::~Data() */

void __thiscall v8::internal::BasicBlockProfiler::Data::~Data(Data *this)

{
  Data DVar1;
  void *pvVar2;
  
  if (((byte)this[0x68] & 1) == 0) {
    DVar1 = this[0x50];
  }
  else {
    operator_delete(*(void **)(this + 0x78));
    DVar1 = this[0x50];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x38];
  }
  else {
    operator_delete(*(void **)(this + 0x60));
    DVar1 = this[0x38];
  }
  if (((byte)DVar1 & 1) == 0) {
    pvVar2 = *(void **)(this + 0x20);
  }
  else {
    operator_delete(*(void **)(this + 0x48));
    pvVar2 = *(void **)(this + 0x20);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar2;
    operator_delete(pvVar2);
    return;
  }
  return;
}

