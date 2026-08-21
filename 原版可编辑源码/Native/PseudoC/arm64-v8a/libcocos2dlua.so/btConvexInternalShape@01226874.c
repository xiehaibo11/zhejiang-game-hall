
/* btConvexInternalShape::btConvexInternalShape() */

void __thiscall btConvexInternalShape::btConvexInternalShape(btConvexInternalShape *this)

{
  btConvexShape::btConvexShape((btConvexShape *)this);
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x18) = 0x3f800000;
  *(undefined8 *)(this + 0x1c) = 0x3f8000003f800000;
  *(undefined ***)this = &PTR__btConvexShape_01732dd0;
  *(undefined4 *)(this + 0x38) = 0x3d23d70a;
  return;
}

