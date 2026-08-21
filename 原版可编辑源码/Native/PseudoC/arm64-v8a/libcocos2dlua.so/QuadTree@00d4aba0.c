
/* cocos2d::Terrain::QuadTree::QuadTree(int, int, int, int, cocos2d::Terrain*) */

void __thiscall
cocos2d::Terrain::QuadTree::QuadTree
          (QuadTree *this,int param_1,int param_2,int param_3,int param_4,Terrain *param_5)

{
  AABB *this_00;
  AABB *this_01;
  int iVar1;
  int iVar2;
  Vec3 *pVVar3;
  long lVar4;
  QuadTree *pQVar5;
  long lVar6;
  Vec3 *pVVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  Mat4 aMStack_b8 [64];
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  this_00 = (AABB *)(this + 0x48);
                    /* try { // try from 00d4abfc to 00e4abff has its CatchHandler @ 00d4ad88 */
  AABB::AABB(this_00);
  this_01 = (AABB *)(this + 0x60);
                    /* try { // try from 00d4ac04 to 00e4ac13 has its CatchHandler @ 00d4ad84 */
  AABB::AABB(this_01);
                    /* try { // try from 00d4ac14 to 00e4ac23 has its CatchHandler @ 00d4ad74 */
  *(Terrain **)(this + 0x78) = param_5;
  *(undefined8 *)(this + 0x40) = 0;
  *(int *)(this + 0x30) = param_1;
  *(int *)(this + 0x34) = param_2;
  this[0x80] = (QuadTree)0x1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
                    /* try { // try from 00d4ac24 to 00e4ac37 has its CatchHandler @ 00d4ad54 */
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x38) = param_4;
  *(int *)(this + 0x3c) = param_3;
  if ((float)param_3 <= *(float *)(param_5 + 0x80530)) {
    fVar10 = *(float *)(param_5 + 0x80534);
  }
  else {
    fVar10 = *(float *)(param_5 + 0x80534);
    if (fVar10 < (float)param_4) {
      this[0x20] = (QuadTree)0x0;
      pQVar5 = operator_new(0x88,(nothrow_t *)&std::nothrow);
      if (pQVar5 != (QuadTree *)0x0) {
        if (param_3 < 0) {
          param_3 = param_3 + 1;
        }
        if (param_4 < 0) {
          param_4 = param_4 + 1;
        }
        QuadTree(pQVar5,param_1,param_2,param_3 >> 1,param_4 >> 1,param_5);
      }
      *(QuadTree **)this = pQVar5;
      *(QuadTree **)(pQVar5 + 0x40) = this;
      pQVar5 = operator_new(0x88,(nothrow_t *)&std::nothrow);
      if (pQVar5 != (QuadTree *)0x0) {
        iVar1 = *(int *)(this + 0x38);
        iVar2 = *(int *)(this + 0x3c);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        QuadTree(pQVar5,(iVar2 >> 1) + param_1,param_2,iVar2 >> 1,iVar1 >> 1,param_5);
      }
      *(QuadTree **)(this + 8) = pQVar5;
      *(QuadTree **)(pQVar5 + 0x40) = this;
      pQVar5 = operator_new(0x88,(nothrow_t *)&std::nothrow);
      if (pQVar5 != (QuadTree *)0x0) {
        iVar2 = *(int *)(this + 0x38);
        iVar1 = *(int *)(this + 0x3c);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        QuadTree(pQVar5,param_1,(iVar2 >> 1) + param_2,iVar1 >> 1,iVar2 >> 1,param_5);
      }
      *(QuadTree **)(this + 0x10) = pQVar5;
      *(QuadTree **)(pQVar5 + 0x40) = this;
                    /* try { // try from 00d4ad3c to 00e4ad4b has its CatchHandler @ 00d4ad50 */
      pQVar5 = operator_new(0x88,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00d4ad4c to 00e4af2b has its CatchHandler @ 00d4a578 */
                    /* catch() { ... } // from try @ 00d4ad3c with catch @ 00d4ad50 */
      if (pQVar5 != (QuadTree *)0x0) {
                    /* catch() { ... } // from try @ 00d4ac24 with catch @ 00d4ad54 */
        iVar1 = *(int *)(this + 0x38);
        iVar2 = *(int *)(this + 0x3c);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
                    /* catch() { ... } // from try @ 00d4ac14 with catch @ 00d4ad74 */
        QuadTree(pQVar5,(iVar2 >> 1) + param_1,(iVar1 >> 1) + param_2,iVar2 >> 1,iVar1 >> 1,param_5)
        ;
      }
                    /* catch() { ... } // from try @ 00d4ac04 with catch @ 00d4ad84 */
      *(QuadTree **)(this + 0x18) = pQVar5;
                    /* catch() { ... } // from try @ 00d4abfc with catch @ 00d4ad88 */
      *(QuadTree **)(pQVar5 + 0x40) = this;
                    /* catch() { ... } // from try @ 00d4ab50 with catch @ 00d4ad98 */
      AABB::merge(this_00,(AABB *)(*(long *)this + 0x48));
      AABB::merge(this_00,(AABB *)(*(long *)(this + 8) + 0x48));
                    /* catch() { ... } // from try @ 00d4ab40 with catch @ 00d4adb8 */
      AABB::merge(this_00,(AABB *)(*(long *)(this + 0x10) + 0x48));
      AABB::merge(this_00,(AABB *)(*(long *)(this + 0x18) + 0x48));
      goto LAB_00d4aea4;
    }
  }
  lVar6 = *(long *)(param_5 +
                   (long)(int)((float)param_1 / *(float *)(param_5 + 0x80530)) * 8 +
                   (long)(int)((float)param_2 / fVar10) * 0x800 + 0x4f8);
  this[0x20] = (QuadTree)0x1;
  *(long *)(this + 0x28) = lVar6;
                    /* catch() { ... } // from try @ 00d4ab20 with catch @ 00d4ae08 */
  uVar9 = *(undefined8 *)(lVar6 + 0x90);
  uVar8 = *(undefined8 *)(lVar6 + 0x88);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(lVar6 + 0x98);
  *(undefined8 *)(this + 0x50) = uVar9;
  *(undefined8 *)this_00 = uVar8;
  pVVar7 = *(Vec3 **)(lVar6 + 0x118);
  pVVar3 = *(Vec3 **)(lVar6 + 0x120);
  *(QuadTree **)(lVar6 + 0xd8) = this;
  if (pVVar7 != pVVar3) {
    while( true ) {
                    /* catch() { ... } // from try @ 00d4ab00 with catch @ 00d4ae2c */
                    /* catch() { ... } // from try @ 00d4aa70 with catch @ 00d4ae30 */
      (**(code **)(*(long *)param_5 + 0x430))(aMStack_b8,param_5);
                    /* catch() { ... } // from try @ 00d4aa58 with catch @ 00d4ae50 */
      Mat4::transformVector
                (aMStack_b8,*(float *)pVVar7,*(float *)(pVVar7 + 4),*(float *)(pVVar7 + 8),1.0,
                 pVVar7);
                    /* catch() { ... } // from try @ 00d4aa28 with catch @ 00d4ae60 */
                    /* catch() { ... } // from try @ 00d4aa20 with catch @ 00d4ae64 */
      Mat4::transformVector
                (aMStack_b8,*(float *)(pVVar7 + 0xc),*(float *)(pVVar7 + 0x10),
                 *(float *)(pVVar7 + 0x14),1.0,pVVar7 + 0xc);
      Mat4::transformVector
                (aMStack_b8,*(float *)(pVVar7 + 0x18),*(float *)(pVVar7 + 0x1c),
                 *(float *)(pVVar7 + 0x20),1.0,pVVar7 + 0x18);
      Mat4::~Mat4(aMStack_b8);
      pVVar7 = pVVar7 + 0x24;
                    /* catch() { ... } // from try @ 00d4aa0c with catch @ 00d4ae94 */
      if (pVVar7 == pVVar3) break;
      param_5 = *(Terrain **)(this + 0x78);
    }
  }
LAB_00d4aea4:
                    /* catch() { ... } // from try @ 00d4a9f8 with catch @ 00d4aea4 */
                    /* catch() { ... } // from try @ 00d4a9b4 with catch @ 00d4aea8
                       catch() { ... } // from try @ 00d4ab8c with catch @ 00d4aea8 */
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0x58);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(this + 0x50);
  *(undefined8 *)this_01 = *(undefined8 *)this_00;
                    /* catch() { ... } // from try @ 00d4a890 with catch @ 00d4aeb8 */
                    /* catch() { ... } // from try @ 00d4aa40 with catch @ 00d4aebc */
  (**(code **)(**(long **)(this + 0x78) + 0x430))(aMStack_b8);
  AABB::transform(this_01,aMStack_b8);
  Mat4::~Mat4(aMStack_b8);
  if (*(long *)(lVar4 + 0x28) == local_78) {
                    /* catch() { ... } // from try @ 00d4a648 with catch @ 00d4aef4 */
                    /* catch() { ... } // from try @ 00d4a918 with catch @ 00d4aef8 */
                    /* catch() { ... } // from try @ 00d4a670 with catch @ 00d4aefc
                       catch() { ... } // from try @ 00d4a724 with catch @ 00d4aefc
                       catch() { ... } // from try @ 00d4a7d0 with catch @ 00d4aefc */
                    /* catch() { ... } // from try @ 00d4a8f8 with catch @ 00d4af00 */
                    /* catch() { ... } // from try @ 00d4a814 with catch @ 00d4af04 */
                    /* catch() { ... } // from try @ 00d4a768 with catch @ 00d4af08 */
                    /* catch() { ... } // from try @ 00d4a6bc with catch @ 00d4af0c */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00d4a828 with catch @ 00d4af10 */
  __stack_chk_fail();
}

