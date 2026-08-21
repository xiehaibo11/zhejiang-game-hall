
/* btPairCachingGhostObject::~btPairCachingGhostObject() */

void __thiscall btPairCachingGhostObject::~btPairCachingGhostObject(btPairCachingGhostObject *this)

{
  ~btPairCachingGhostObject(this);
  btAlignedFreeInternal(this);
  return;
}

