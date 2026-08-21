
/* v8::internal::ReadOnlySpace::ReadOnlySpace(v8::internal::Heap*) */

void __thiscall v8::internal::ReadOnlySpace::ReadOnlySpace(ReadOnlySpace *this,Heap *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FreeList::CreateFreeList();
  *(undefined8 *)(this + 0x60) = uVar1;
  this[0x38] = (ReadOnlySpace)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(Heap **)(this + 0x40) = param_1;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__Space_01ca9d00;
  puVar2 = operator_new__(0x10);
  *(undefined8 **)(this + 0x30) = puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined ***)this = &PTR__PagedSpace_01ca9518;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  base::Mutex::Mutex((Mutex *)(this + 0xc0));
  *(undefined8 *)(this + 0xa0) = 0x3fee8;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  this[0xe8] = (ReadOnlySpace)0x0;
  *(undefined ***)this = &PTR__ReadOnlySpace_01ca9898;
  this[0xe9] = *(ReadOnlySpace *)(param_1 + 0x2e6a);
  return;
}

