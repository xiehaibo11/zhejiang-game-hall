
/* btQuantizedBvh::~btQuantizedBvh() */

void __thiscall btQuantizedBvh::~btQuantizedBvh(btQuantizedBvh *this)

{
  ~btQuantizedBvh(this);
  btAlignedFreeInternal(this);
  return;
}

