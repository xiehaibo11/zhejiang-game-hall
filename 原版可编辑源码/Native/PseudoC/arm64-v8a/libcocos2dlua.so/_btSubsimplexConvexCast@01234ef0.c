
/* btSubsimplexConvexCast::~btSubsimplexConvexCast() */

void __thiscall btSubsimplexConvexCast::~btSubsimplexConvexCast(btSubsimplexConvexCast *this)

{
  btConvexCast::~btConvexCast((btConvexCast *)this);
  operator_delete(this);
  return;
}

