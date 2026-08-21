
/* btPolyhedralConvexAabbCachingShape::btPolyhedralConvexAabbCachingShape() */

void __thiscall
btPolyhedralConvexAabbCachingShape::btPolyhedralConvexAabbCachingShape
          (btPolyhedralConvexAabbCachingShape *this)

{
  btConvexInternalShape::btConvexInternalShape((btConvexInternalShape *)this);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  *(undefined8 *)(this + 0x4c) = 0x3f8000003f800000;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0xbf800000;
  *(undefined8 *)(this + 0x5c) = 0xbf800000bf800000;
  *(undefined ***)this = &PTR__btPolyhedralConvexShape_01733618;
  this[0x68] = (btPolyhedralConvexAabbCachingShape)0x0;
  return;
}

