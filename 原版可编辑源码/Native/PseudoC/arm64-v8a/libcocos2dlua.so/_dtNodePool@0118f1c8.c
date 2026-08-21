
/* dtNodePool::~dtNodePool() */

void __thiscall dtNodePool::~dtNodePool(dtNodePool *this)

{
  dtFree(*(void **)this);
  dtFree(*(void **)(this + 0x10));
  dtFree(*(void **)(this + 8));
  return;
}

