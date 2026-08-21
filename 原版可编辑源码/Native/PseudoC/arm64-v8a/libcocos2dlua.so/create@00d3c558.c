
/* cocos2d::Skeleton3D::create(std::__ndk1::vector<cocos2d::NodeData*,
   std::__ndk1::allocator<cocos2d::NodeData*> > const&) */

Ref * cocos2d::Skeleton3D::create(vector *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  Ref *this;
  Bone3D *this_00;
  undefined8 *puVar4;
  Bone3D *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d3c5f8 with catch @ 00d3c588
                       catch(type#1 @ 00000000) { ... } // from try @ 00d3c628 with catch @ 00d3c588
                       catch(type#1 @ 00000000) { ... } // from try @ 00d3c658 with catch @ 00d3c588
                       catch(type#1 @ 00000000) { ... } // from try @ 00d3c680 with catch @ 00d3c588
                       catch(type#1 @ 00000000) { ... } // from try @ 00d3c6ac with catch @ 00d3c588
                        */
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined ***)this = &PTR__Skeleton3D_016d3d48;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
  }
  puVar4 = *(undefined8 **)param_1;
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar4 != puVar2) {
    do {
                    /* try { // try from 00d3c5f8 to 00e3c61b has its CatchHandler @ 00d3c588 */
      this_00 = (Bone3D *)createBone3D((Skeleton3D *)this,(NodeData *)*puVar4);
      Bone3D::resetPose(this_00);
      puVar1 = *(undefined8 **)(this + 0x48);
      local_50 = this_00;
      if (puVar1 == *(undefined8 **)(this + 0x50)) {
        std::__ndk1::vector<cocos2d::Bone3D*,std::__ndk1::allocator<cocos2d::Bone3D*>>::
        __push_back_slow_path<cocos2d::Bone3D*const&>
                  ((vector<cocos2d::Bone3D*,std::__ndk1::allocator<cocos2d::Bone3D*>> *)
                   (this + 0x40),&local_50);
      }
      else {
        *puVar1 = this_00;
                    /* try { // try from 00d3c61c to 00e3c627 has its CatchHandler @ 00d3c6ec */
        *(undefined8 **)(this + 0x48) = puVar1 + 1;
      }
      Ref::retain((Ref *)local_50);
      puVar4 = puVar4 + 1;
                    /* try { // try from 00d3c5f0 to 00e3c5f7 has its CatchHandler @ 00d3c6ec */
    } while (puVar2 != puVar4);
  }
                    /* try { // try from 00d3c628 to 00e3c64f has its CatchHandler @ 00d3c588 */
  Ref::autorelease(this);
  if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 00d3c650 to 00e3c657 has its CatchHandler @ 00d3c6e8 */
    return this;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00d3c658 to 00e3c677 has its CatchHandler @ 00d3c588 */
  __stack_chk_fail();
}

