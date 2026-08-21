
/* btBvhTriangleMeshShape::btBvhTriangleMeshShape(btStridingMeshInterface*, bool, bool) */

void __thiscall
btBvhTriangleMeshShape::btBvhTriangleMeshShape
          (btBvhTriangleMeshShape *this,btStridingMeshInterface *param_1,bool param_2,bool param_3)

{
  btOptimizedBvh *this_00;
  
  btTriangleMeshShape::btTriangleMeshShape((btTriangleMeshShape *)this,param_1);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  this[0x58] = (btBvhTriangleMeshShape)param_2;
  this[0x59] = (btBvhTriangleMeshShape)0x0;
  *(undefined ***)this = &PTR__btBvhTriangleMeshShape_017326d0;
  *(undefined4 *)(this + 8) = 0x15;
  if (param_3) {
    this_00 = (btOptimizedBvh *)btAlignedAllocInternal(0xf8,0x10);
    btOptimizedBvh::btOptimizedBvh(this_00);
    *(btOptimizedBvh **)(this + 0x48) = this_00;
    btOptimizedBvh::build
              (this_00,*(btStridingMeshInterface **)(this + 0x40),(bool)this[0x58],
               (btVector3 *)(this + 0x1c),(btVector3 *)(this + 0x2c));
    this[0x59] = (btBvhTriangleMeshShape)0x1;
  }
  return;
}

