
/* btConvexTriangleCallback::~btConvexTriangleCallback() */

void __thiscall btConvexTriangleCallback::~btConvexTriangleCallback(btConvexTriangleCallback *this)

{
  *(undefined ***)this = &PTR__btConvexTriangleCallback_017343a8;
  (**(code **)(**(long **)(this + 0x40) + 0x28))
            (*(long **)(this + 0x40),*(undefined8 *)(this + 0x58));
  (**(code **)(**(long **)(this + 0x40) + 0x20))
            (*(long **)(this + 0x40),*(undefined8 *)(this + 0x58));
  btTriangleCallback::~btTriangleCallback((btTriangleCallback *)this);
  operator_delete(this);
  return;
}

