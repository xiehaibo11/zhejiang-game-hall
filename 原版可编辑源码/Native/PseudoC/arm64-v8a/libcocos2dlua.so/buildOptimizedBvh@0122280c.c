
/* btBvhTriangleMeshShape::buildOptimizedBvh() */

void __thiscall btBvhTriangleMeshShape::buildOptimizedBvh(btBvhTriangleMeshShape *this)

{
  btOptimizedBvh *this_00;
  
  if (this[0x59] != (btBvhTriangleMeshShape)0x0) {
    (**(code **)**(undefined8 **)(this + 0x48))();
    btAlignedFreeInternal(*(void **)(this + 0x48));
  }
  this_00 = (btOptimizedBvh *)btAlignedAllocInternal(0xf8,0x10);
  btOptimizedBvh::btOptimizedBvh(this_00);
  *(btOptimizedBvh **)(this + 0x48) = this_00;
  btOptimizedBvh::build
            (this_00,*(btStridingMeshInterface **)(this + 0x40),(bool)this[0x58],
             (btVector3 *)(this + 0x1c),(btVector3 *)(this + 0x2c));
  this[0x59] = (btBvhTriangleMeshShape)0x1;
  return;
}

