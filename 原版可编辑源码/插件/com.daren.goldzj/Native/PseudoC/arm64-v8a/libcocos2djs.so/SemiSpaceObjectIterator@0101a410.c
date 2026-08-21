
/* v8::internal::SemiSpaceObjectIterator::SemiSpaceObjectIterator(v8::internal::NewSpace*) */

void __thiscall
v8::internal::SemiSpaceObjectIterator::SemiSpaceObjectIterator
          (SemiSpaceObjectIterator *this,NewSpace *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)this = &PTR__ObjectIterator_01ca9690;
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(this + 8) = *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0x20);
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}

