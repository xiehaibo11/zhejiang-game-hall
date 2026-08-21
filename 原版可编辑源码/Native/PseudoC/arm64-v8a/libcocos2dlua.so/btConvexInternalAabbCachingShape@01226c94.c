
/* btConvexInternalAabbCachingShape::btConvexInternalAabbCachingShape() */

void __thiscall
btConvexInternalAabbCachingShape::btConvexInternalAabbCachingShape
          (btConvexInternalAabbCachingShape *this)

{
  btConvexShape::btConvexShape((btConvexShape *)this);
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x38) = 0x3d23d70a;
  *(undefined8 *)(this + 0x1c) = 0x3f8000003f800000;
  *(undefined8 *)(this + 0x44) = 0x3f8000003f800000;
  *(undefined4 *)(this + 0x18) = 0x3f800000;
  *(undefined4 *)(this + 0x40) = 0x3f800000;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0xbf800000;
  *(undefined8 *)(this + 0x54) = 0xbf800000bf800000;
  *(undefined ***)this = &PTR__btConvexShape_01732e98;
  this[0x60] = (btConvexInternalAabbCachingShape)0x0;
  return;
}

