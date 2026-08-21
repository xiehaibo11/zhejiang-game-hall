
/* v8::internal::SourcePositionTableIterator::SourcePositionTableIterator(v8::internal::Vector<unsigned
   char const>, v8::internal::SourcePositionTableIterator::IterationFilter) */

void __thiscall
v8::internal::SourcePositionTableIterator::SourcePositionTableIterator
          (SourcePositionTableIterator *this,undefined8 param_2,undefined8 param_3,
          undefined4 param_4)

{
  *(undefined8 *)this = param_2;
  *(undefined8 *)(this + 8) = param_3;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x30] = (SourcePositionTableIterator)0x0;
  *(undefined4 *)(this + 0x38) = param_4;
  Advance(this);
  return;
}

