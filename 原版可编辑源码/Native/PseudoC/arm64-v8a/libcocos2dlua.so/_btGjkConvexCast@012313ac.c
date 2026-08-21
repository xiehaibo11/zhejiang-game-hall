
/* btGjkConvexCast::~btGjkConvexCast() */

void __thiscall btGjkConvexCast::~btGjkConvexCast(btGjkConvexCast *this)

{
  btConvexCast::~btConvexCast((btConvexCast *)this);
  operator_delete(this);
  return;
}

