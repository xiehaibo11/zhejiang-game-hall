
/* cocos2d::Physics3DShape::initMesh(cocos2d::Vec3 const*, int) */

undefined8 cocos2d::Physics3DShape::initMesh(Vec3 *param_1,int param_2)

{
  long lVar1;
  btTriangleMesh *this;
  btBvhTriangleMeshShape *this_00;
  Vec3 *pVVar2;
  int in_w2;
  int iVar3;
  undefined4 local_78 [4];
  undefined4 local_68 [4];
  undefined4 local_58 [4];
  long local_48;
  
  pVVar2 = (Vec3 *)(ulong)(uint)param_2;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = 6;
  this = (btTriangleMesh *)btAlignedAllocInternal(0xf0,0x10);
  btTriangleMesh::btTriangleMesh(this,false,true);
  if (0 < in_w2) {
    iVar3 = 0;
    do {
      local_58[0] = convertVec3TobtVector3(pVVar2);
      local_68[0] = convertVec3TobtVector3(pVVar2 + 0xc);
      local_78[0] = convertVec3TobtVector3(pVVar2 + 0x18);
      btTriangleMesh::addTriangle
                (this,(btVector3 *)local_58,(btVector3 *)local_68,(btVector3 *)local_78,false);
      iVar3 = iVar3 + 3;
      pVVar2 = pVVar2 + 0x24;
    } while (iVar3 < in_w2 * 3);
  }
  this_00 = (btBvhTriangleMeshShape *)btAlignedAllocInternal(0x68,0x10);
  btBvhTriangleMeshShape::btBvhTriangleMeshShape(this_00,(btStridingMeshInterface *)this,true,true);
  *(btBvhTriangleMeshShape **)(param_1 + 0x28) = this_00;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

