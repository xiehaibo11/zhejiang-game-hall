
/* btConvexPolyhedron::btConvexPolyhedron() */

void __thiscall btConvexPolyhedron::btConvexPolyhedron(btConvexPolyhedron *this)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  this[0x20] = (btConvexPolyhedron)0x1;
  this[0x40] = (btConvexPolyhedron)0x1;
  this[0x60] = (btConvexPolyhedron)0x1;
  *(undefined ***)this = &PTR__btConvexPolyhedron_01734738;
  *(undefined8 *)(this + 0x4c) = 0;
  return;
}

