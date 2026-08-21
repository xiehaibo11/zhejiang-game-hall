
/* cocos2d::Skeleton3D::createBone3D(cocos2d::NodeData const&) */

Bone3D * __thiscall cocos2d::Skeleton3D::createBone3D(Skeleton3D *this,NodeData *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  Bone3D *this_00;
  Ref *pRVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  Ref *local_60;
  long local_58;
  
                    /* try { // try from 00d3c678 to 00e3c67f has its CatchHandler @ 00d3c6e8 */
                    /* try { // try from 00d3c680 to 00e3c69f has its CatchHandler @ 00d3c588 */
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 00d3c6a0 to 00e3c6ab has its CatchHandler @ 00d3c6e8 */
                    /* try { // try from 00d3c6ac to 00e3c6ef has its CatchHandler @ 00d3c588 */
  this_00 = operator_new(0x180,(nothrow_t *)&std::nothrow);
  if (this_00 != (Bone3D *)0x0) {
    Bone3D::Bone3D(this_00,(basic_string *)(param_1 + 8));
  }
  Ref::autorelease((Ref *)this_00);
  puVar7 = *(undefined8 **)(param_1 + 0x78);
  puVar2 = *(undefined8 **)(param_1 + 0x80);
  if (puVar7 != puVar2) {
    do {
      pRVar5 = (Ref *)createBone3D(this,(NodeData *)*puVar7);
      plVar6 = *(long **)(this_00 + 200);
      plVar3 = *(long **)(this_00 + 0xd0);
      if ((plVar6 != plVar3) && ((Ref *)*plVar6 != pRVar5)) {
        do {
          if (plVar3 + -1 == plVar6) goto LAB_00d3c764;
          plVar1 = plVar6 + 1;
          plVar6 = plVar6 + 1;
        } while ((Ref *)*plVar1 != pRVar5);
      }
                    /* try { // try from 00d3c760 to 00e3c783 has its CatchHandler @ 00d3c6f0 */
      if (plVar6 == plVar3) {
LAB_00d3c764:
        local_60 = pRVar5;
        if (plVar3 == *(long **)(this_00 + 0xd8)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d3c650 with catch @ 00d3c6e8
                       catch(type#1 @ 00000000) { ... } // from try @ 00d3c678 with catch @ 00d3c6e8
                       catch(type#1 @ 00000000) { ... } // from try @ 00d3c6a0 with catch @ 00d3c6e8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d3c5f0 with catch @ 00d3c6ec
                       catch(type#1 @ 00000000) { ... } // from try @ 00d3c61c with catch @ 00d3c6ec
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d3c760 with catch @ 00d3c6f0
                       catch(type#1 @ 00000000) { ... } // from try @ 00d3c790 with catch @ 00d3c6f0
                       catch(type#1 @ 00000000) { ... } // from try @ 00d3c7c0 with catch @ 00d3c6f0
                       catch(type#1 @ 00000000) { ... } // from try @ 00d3c7e8 with catch @ 00d3c6f0
                       catch(type#1 @ 00000000) { ... } // from try @ 00d3c814 with catch @ 00d3c6f0
                        */
          std::__ndk1::vector<cocos2d::Bone3D*,std::__ndk1::allocator<cocos2d::Bone3D*>>::
          __push_back_slow_path<cocos2d::Bone3D*const&>
                    ((vector<cocos2d::Bone3D*,std::__ndk1::allocator<cocos2d::Bone3D*>> *)
                     (this_00 + 200),(Bone3D **)&local_60);
        }
        else {
          *plVar3 = (long)pRVar5;
          *(long **)(this_00 + 0xd0) = plVar3 + 1;
        }
        Ref::retain(local_60);
      }
      puVar7 = puVar7 + 1;
      *(Bone3D **)(pRVar5 + 0xc0) = this_00;
    } while (puVar7 != puVar2);
  }
                    /* try { // try from 00d3c784 to 00e3c78f has its CatchHandler @ 00d3c854 */
  puVar7 = *(undefined8 **)(this + 0x30);
  local_60 = (Ref *)this_00;
  if (puVar7 == *(undefined8 **)(this + 0x38)) {
    std::__ndk1::vector<cocos2d::Bone3D*,std::__ndk1::allocator<cocos2d::Bone3D*>>::
    __push_back_slow_path<cocos2d::Bone3D*const&>
              ((vector<cocos2d::Bone3D*,std::__ndk1::allocator<cocos2d::Bone3D*>> *)(this + 0x28),
               (Bone3D **)&local_60);
  }
  else {
                    /* try { // try from 00d3c790 to 00e3c7b7 has its CatchHandler @ 00d3c6f0 */
    *puVar7 = this_00;
    *(undefined8 **)(this + 0x30) = puVar7 + 1;
  }
  Ref::retain(local_60);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
                    /* try { // try from 00d3c7b8 to 00e3c7bf has its CatchHandler @ 00d3c850 */
  *(undefined8 *)(this_00 + 0xa8) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this_00 + 0xa0) = uVar8;
  *(undefined8 *)(this_00 + 0xb8) = uVar10;
  *(undefined8 *)(this_00 + 0xb0) = uVar9;
  *(undefined8 *)(this_00 + 0x88) = uVar12;
  *(undefined8 *)(this_00 + 0x80) = uVar11;
  *(undefined8 *)(this_00 + 0x98) = uVar14;
  *(undefined8 *)(this_00 + 0x90) = uVar13;
                    /* try { // try from 00d3c7c0 to 00e3c7df has its CatchHandler @ 00d3c6f0 */
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00d3c7e0 to 00e3c7e7 has its CatchHandler @ 00d3c850 */
                    /* try { // try from 00d3c7e8 to 00e3c807 has its CatchHandler @ 00d3c6f0 */
  return this_00;
}

