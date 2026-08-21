
/* v8::internal::PreparseDataBuilder::PreparseDataBuilder(v8::internal::Zone*,
   v8::internal::PreparseDataBuilder*, std::__ndk1::vector<void*, std::__ndk1::allocator<void*> >*)
    */

void __thiscall
v8::internal::PreparseDataBuilder::PreparseDataBuilder
          (PreparseDataBuilder *this,Zone *param_1,PreparseDataBuilder *param_2,vector *param_3)

{
  long lVar1;
  long lVar2;
  
  *(PreparseDataBuilder **)this = param_2;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  this[0x18] = (PreparseDataBuilder)0x0;
  *(vector **)(this + 0x20) = param_3;
  *(long *)(this + 0x28) = *(long *)(param_3 + 8) - *(long *)param_3 >> 3;
  lVar1 = *(long *)param_3;
  lVar2 = *(long *)(param_3 + 8);
  *(undefined8 *)(this + 0x40) = 0xffffffff;
  *(undefined4 *)(this + 0x48) = 0;
  *(long *)(this + 0x30) = lVar2 - lVar1 >> 3;
  *(undefined8 *)(this + 0x38) = 0;
  this[0x4c] = (PreparseDataBuilder)((byte)this[0x4c] & 0xfc);
  return;
}

