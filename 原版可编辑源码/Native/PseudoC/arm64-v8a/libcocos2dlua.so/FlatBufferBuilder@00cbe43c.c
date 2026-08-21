
/* flatbuffers::FlatBufferBuilder::FlatBufferBuilder(unsigned int, flatbuffers::simple_allocator
   const*) */

void __thiscall
flatbuffers::FlatBufferBuilder::FlatBufferBuilder
          (FlatBufferBuilder *this,uint param_1,simple_allocator *param_2)

{
  FlatBufferBuilder *pFVar1;
  long lVar2;
  void *pvVar3;
  
  pFVar1 = this;
  if (param_2 != (simple_allocator *)0x0) {
    pFVar1 = (FlatBufferBuilder *)param_2;
  }
  *(undefined ***)this = &PTR__simple_allocator_016cdd88;
  *(ulong *)(this + 8) = (ulong)param_1;
  lVar2 = (**(code **)(*(long *)pFVar1 + 0x10))(pFVar1);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x58) = 1;
  *(long *)(this + 0x10) = lVar2;
  *(long *)(this + 0x18) = lVar2 + *(long *)(this + 8);
  *(FlatBufferBuilder **)(this + 0x20) = pFVar1;
  this[0x60] = (FlatBufferBuilder)0x0;
  pvVar3 = operator_new(0x80);
  *(void **)(this + 0x30) = pvVar3;
  *(void **)(this + 0x28) = pvVar3;
  *(long *)(this + 0x38) = (long)pvVar3 + 0x80;
  pvVar3 = operator_new(0x40);
  *(void **)(this + 0x48) = pvVar3;
  *(void **)(this + 0x40) = pvVar3;
  *(long *)(this + 0x50) = (long)pvVar3 + 0x40;
  return;
}

