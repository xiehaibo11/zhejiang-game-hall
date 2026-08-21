
/* v8::internal::Heap::GetFromRingBuffer(char*) */

void __thiscall v8::internal::Heap::GetFromRingBuffer(Heap *this,char *param_1)

{
  size_t __n;
  
  if (this[0xac1] == (Heap)0x0) {
    __n = 0;
  }
  else {
    __n = 0x200 - *(long *)(this + 0xac8);
    memcpy(param_1,this + *(long *)(this + 0xac8) + 0x8c0,__n);
  }
  memcpy(param_1 + __n,this + 0x8c0,*(size_t *)(this + 0xac8));
  return;
}

