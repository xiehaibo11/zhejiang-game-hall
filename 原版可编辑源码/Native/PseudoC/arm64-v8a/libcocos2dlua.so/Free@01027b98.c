
/* tinyxml2::MemPoolT<96>::Free(void*) */

void __thiscall tinyxml2::MemPoolT<96>::Free(MemPoolT<96> *this,void *param_1)

{
  if (param_1 != (void *)0x0) {
    *(int *)(this + 0x70) = *(int *)(this + 0x70) + -1;
    *(undefined8 *)param_1 = *(undefined8 *)(this + 0x68);
    *(void **)(this + 0x68) = param_1;
  }
  return;
}

