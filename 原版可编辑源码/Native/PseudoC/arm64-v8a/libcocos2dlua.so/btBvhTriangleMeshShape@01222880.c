
/* btBvhTriangleMeshShape::btBvhTriangleMeshShape(btStridingMeshInterface*, bool, btVector3 const&,
   btVector3 const&, bool) */

void __thiscall
btBvhTriangleMeshShape::btBvhTriangleMeshShape
          (btBvhTriangleMeshShape *this,btStridingMeshInterface *param_1,bool param_2,
          btVector3 *param_3,btVector3 *param_4,bool param_5)

{
  btOptimizedBvh *this_00;
  
  btTriangleMeshShape::btTriangleMeshShape((btTriangleMeshShape *)this,param_1);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  this[0x58] = (btBvhTriangleMeshShape)param_2;
  this[0x59] = (btBvhTriangleMeshShape)0x0;
  *(undefined ***)this = &PTR__btBvhTriangleMeshShape_017326d0;
  *(undefined4 *)(this + 8) = 0x15;
  if (param_5) {
    this_00 = (btOptimizedBvh *)btAlignedAllocInternal(0xf8,0x10);
    btOptimizedBvh::btOptimizedBvh(this_00);
    *(btOptimizedBvh **)(this + 0x48) = this_00;
    btOptimizedBvh::build(this_00,param_1,(bool)this[0x58],param_3,param_4);
    this[0x59] = (btBvhTriangleMeshShape)0x1;
  }
  return;
}

