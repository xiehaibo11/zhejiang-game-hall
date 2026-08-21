
/* btTriangleMeshShape::processAllTriangles(btTriangleCallback*, btVector3 const&, btVector3 const&)
   const */

void __thiscall
btTriangleMeshShape::processAllTriangles
          (btTriangleMeshShape *this,btTriangleCallback *param_1,btVector3 *param_2,
          btVector3 *param_3)

{
  undefined **local_50;
  btTriangleCallback *pbStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_50 = &PTR__btInternalTriangleIndexCallback_01733a38;
  uStack_38 = *(undefined8 *)(param_2 + 8);
  local_40 = *(undefined8 *)param_2;
  uStack_28 = *(undefined8 *)(param_3 + 8);
  local_30 = *(undefined8 *)param_3;
  pbStack_48 = param_1;
  (**(code **)(**(long **)(this + 0x40) + 0x10))(*(long **)(this + 0x40),&local_50);
  btInternalTriangleIndexCallback::~btInternalTriangleIndexCallback
            ((btInternalTriangleIndexCallback *)&local_50);
  return;
}

