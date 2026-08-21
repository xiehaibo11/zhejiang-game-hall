
/* btDbvtBroadphase::~btDbvtBroadphase() */

void __thiscall btDbvtBroadphase::~btDbvtBroadphase(btDbvtBroadphase *this)

{
  ~btDbvtBroadphase(this);
  operator_delete(this);
  return;
}

