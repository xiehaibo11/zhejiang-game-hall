
/* btCollisionWorld::~btCollisionWorld() */

void __thiscall btCollisionWorld::~btCollisionWorld(btCollisionWorld *this)

{
  ~btCollisionWorld(this);
  operator_delete(this);
  return;
}

