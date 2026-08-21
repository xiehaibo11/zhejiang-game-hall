
/* v8::internal::Heap::RegisterStrongRoots(v8::internal::FullObjectSlot,
   v8::internal::FullObjectSlot) */

void __thiscall
v8::internal::Heap::RegisterStrongRoots(Heap *this,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(0x18);
  uVar2 = *(undefined8 *)(this + 0x878);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = uVar2;
  *(undefined8 **)(this + 0x878) = puVar1;
  return;
}

