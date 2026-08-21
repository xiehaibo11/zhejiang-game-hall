
/* cocos2d::PolygonInfo::setTriangles(cocos2d::TrianglesCommand::Triangles const&) */

void __thiscall cocos2d::PolygonInfo::setTriangles(PolygonInfo *this,Triangles *param_1)

{
  undefined8 uVar1;
  
  if (this[0x18] != (PolygonInfo)0x0) {
    if (*(void **)this != (void *)0x0) {
      operator_delete__(*(void **)this);
      *(undefined8 *)this = 0;
    }
    if (*(void **)(this + 8) != (void *)0x0) {
      operator_delete__(*(void **)(this + 8));
      *(undefined8 *)(this + 8) = 0;
    }
  }
  this[0x18] = (PolygonInfo)0x0;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  return;
}

