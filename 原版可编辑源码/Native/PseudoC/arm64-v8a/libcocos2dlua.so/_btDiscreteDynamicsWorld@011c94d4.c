
/* btDiscreteDynamicsWorld::~btDiscreteDynamicsWorld() */

void __thiscall btDiscreteDynamicsWorld::~btDiscreteDynamicsWorld(btDiscreteDynamicsWorld *this)

{
  ~btDiscreteDynamicsWorld(this);
  btAlignedFreeInternal(this);
  return;
}

