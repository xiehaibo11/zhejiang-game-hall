
/* cocos2d::Mesh::calculateAABB() */

void __thiscall cocos2d::Mesh::calculateAABB(Mesh *this)

{
  undefined8 *puVar1;
  long lVar2;
  Bone3D *this_00;
  bool bVar3;
  Bone3D *pBVar4;
  Mat4 *pMVar5;
  Mat4 *pMVar6;
  long lVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  Mat4 aMStack_c8 [64];
  Mat4 aMStack_88 [64];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar7 = *(long *)(this + 0x128);
  if (lVar7 != 0) {
    uVar11 = *(undefined8 *)(lVar7 + 0x38);
    uVar8 = *(undefined8 *)(lVar7 + 0x48);
    *(undefined8 *)(this + 0x158) = *(undefined8 *)(lVar7 + 0x40);
    *(undefined8 *)(this + 0x150) = uVar11;
    *(undefined8 *)(this + 0x160) = uVar8;
    if (*(long *)(this + 0x40) != 0) {
      Mat4::Mat4(aMStack_88);
      puVar10 = *(undefined8 **)(*(long *)(this + 0x40) + 0x28);
      if (*(undefined8 **)(*(long *)(this + 0x40) + 0x30) != puVar10) {
        pBVar4 = (Bone3D *)*puVar10;
        do {
          this_00 = pBVar4;
          if (this_00 == (Bone3D *)0x0) goto LAB_00d30310;
          pBVar4 = (Bone3D *)Bone3D::getParentBone(this_00);
          puVar10 = *(undefined8 **)(*(long *)(this + 0x40) + 0x28);
          puVar1 = *(undefined8 **)(*(long *)(this + 0x40) + 0x30);
          if (puVar10 == puVar1) break;
          bVar9 = false;
          do {
            bVar9 = (bool)(bVar9 | (Bone3D *)*puVar10 == pBVar4);
            if ((Bone3D *)*puVar10 == pBVar4) break;
            bVar3 = puVar1 + -1 != puVar10;
            puVar10 = puVar10 + 1;
          } while (bVar3);
        } while (bVar9);
        pMVar5 = (Mat4 *)Bone3D::getWorldMat(this_00);
        pMVar6 = (Mat4 *)MeshSkin::getInvBindPose(*(MeshSkin **)(this + 0x40),this_00);
        Mat4::Mat4(aMStack_c8,pMVar5);
        Mat4::multiply(aMStack_c8,pMVar6);
        AABB::transform((AABB *)(this + 0x150),aMStack_c8);
        Mat4::~Mat4(aMStack_c8);
      }
LAB_00d30310:
      Mat4::~Mat4(aMStack_88);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

