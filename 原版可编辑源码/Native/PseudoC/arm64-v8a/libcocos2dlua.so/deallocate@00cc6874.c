
/* flatbuffers::simple_allocator::deallocate(unsigned char*) const */

void __thiscall flatbuffers::simple_allocator::deallocate(simple_allocator *this,uchar *param_1)

{
  if (param_1 != (uchar *)0x0) {
    operator_delete__(param_1);
    return;
  }
  return;
}

