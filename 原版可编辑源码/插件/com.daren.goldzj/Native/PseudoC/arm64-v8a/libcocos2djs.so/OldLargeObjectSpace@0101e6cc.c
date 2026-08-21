
/* v8::internal::OldLargeObjectSpace::OldLargeObjectSpace(v8::internal::Heap*) */

void __thiscall
v8::internal::OldLargeObjectSpace::OldLargeObjectSpace(OldLargeObjectSpace *this,Heap *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR__FreeList_01caa258;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined8 **)(this + 0x60) = puVar1;
  *(undefined ***)this = &PTR__Space_01ca9d00;
  this[0x38] = (OldLargeObjectSpace)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(Heap **)(this + 0x40) = param_1;
  *(undefined4 *)(this + 0x48) = 5;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  puVar1 = operator_new__(0x10);
  *(undefined8 **)(this + 0x30) = puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined ***)this = &PTR__LargeObjectSpace_01ca9a40;
  return;
}

