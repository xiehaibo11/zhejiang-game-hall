
/* v8::internal::ValueSerializer::ExpandBuffer(unsigned long) */

undefined8 __thiscall
v8::internal::ValueSerializer::ExpandBuffer(ValueSerializer *this,ulong param_1)

{
  size_t __size;
  long *plVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong uVar4;
  size_t local_28;
  
  local_28 = 0;
  plVar1 = *(long **)(this + 8);
  uVar4 = *(long *)(this + 0x20) * 2;
  if (uVar4 < param_1 || uVar4 - param_1 == 0) {
    uVar4 = param_1;
  }
  __size = uVar4 + 0x40;
  if (plVar1 == (long *)0x0) {
    pvVar2 = realloc(*(void **)(this + 0x10),__size);
    local_28 = __size;
  }
  else {
    pvVar2 = (void *)(**(code **)(*plVar1 + 0x30))(plVar1,*(void **)(this + 0x10),__size,&local_28);
  }
  if (pvVar2 == (void *)0x0) {
    this[0x29] = (ValueSerializer)0x1;
    uVar3 = 0;
  }
  else {
    *(void **)(this + 0x10) = pvVar2;
    uVar3 = 0x101;
    *(size_t *)(this + 0x20) = local_28;
  }
  return uVar3;
}

