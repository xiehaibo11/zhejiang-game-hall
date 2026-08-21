
/* dtNodePool::clear() */

void __thiscall dtNodePool::clear(dtNodePool *this)

{
  memset(*(void **)(this + 8),0xff,(long)*(int *)(this + 0x1c) << 1);
  *(undefined4 *)(this + 0x20) = 0;
  return;
}

