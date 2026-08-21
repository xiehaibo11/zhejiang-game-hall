
/* v8::internal::SourcePositionTableIterator::SourcePositionTableIterator(v8::internal::ByteArray,
   v8::internal::SourcePositionTableIterator::IterationFilter) */

void __thiscall
v8::internal::SourcePositionTableIterator::SourcePositionTableIterator
          (SourcePositionTableIterator *this,long param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 3);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (SourcePositionTableIterator)0x0;
  *(long *)this = param_2 + 7;
  *(long *)(this + 8) = (long)((ulong)uVar1 << 0x20) >> 0x21;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x38) = param_3;
  Advance(this);
  return;
}

