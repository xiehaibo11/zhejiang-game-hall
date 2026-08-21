
/* btConvexPolyhedron::~btConvexPolyhedron() */

void __thiscall btConvexPolyhedron::~btConvexPolyhedron(btConvexPolyhedron *this)

{
  ~btConvexPolyhedron(this);
  btAlignedFreeInternal(this);
  return;
}

