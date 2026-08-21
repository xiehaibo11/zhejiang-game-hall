
/* v8::internal::ValueSerializer::ReserveRawBytes(unsigned long) */

undefined8 __thiscall
v8::internal::ValueSerializer::ReserveRawBytes(ValueSerializer *this,ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  size_t local_38;
  
  uVar1 = *(long *)(this + 0x18) + param_1;
  if (*(ulong *)(this + 0x20) < uVar1) {
    local_38 = 0;
    uVar3 = *(ulong *)(this + 0x20) * 2;
    if (uVar3 < uVar1 || uVar3 - uVar1 == 0) {
      uVar3 = uVar1;
    }
    if (*(long **)(this + 8) == (long *)0x0) {
      pvVar2 = realloc(*(void **)(this + 0x10),uVar3 + 0x40);
      local_38 = uVar3 + 0x40;
    }
    else {
      pvVar2 = (void *)(**(code **)(**(long **)(this + 8) + 0x30))();
    }
    if (pvVar2 == (void *)0x0) {
      this[0x29] = (ValueSerializer)0x1;
      return 0;
    }
    *(void **)(this + 0x10) = pvVar2;
    *(size_t *)(this + 0x20) = local_38;
  }
  *(ulong *)(this + 0x18) = uVar1;
  return 1;
}

