
/* cocos2d::Physics3DShape::initCompoundShape(std::__ndk1::vector<std::__ndk1::pair<cocos2d::Physics3DShape*,
   cocos2d::Mat4>, std::__ndk1::allocator<std::__ndk1::pair<cocos2d::Physics3DShape*, cocos2d::Mat4>
   > > const&) */

undefined8 __thiscall
cocos2d::Physics3DShape::initCompoundShape(Physics3DShape *this,vector *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  btCompoundShape *this_00;
  long *plVar4;
  btTransform abStack_e0 [64];
  Ref *local_a0;
  Mat4 aMStack_98 [64];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  *(undefined4 *)(this + 0x24) = 8;
  this_00 = (btCompoundShape *)btAlignedAllocInternal(0x78,0x10);
  btCompoundShape::btCompoundShape(this_00,true);
                    /* try { // try from 01018088 to 0111808f has its CatchHandler @ 01018154 */
  plVar4 = *(long **)param_1;
  plVar2 = *(long **)(param_1 + 8);
  if (plVar4 != plVar2) {
    do {
      local_a0 = (Ref *)*plVar4;
                    /* try { // try from 010180cc to 011180d7 has its CatchHandler @ 01018144 */
      Mat4::Mat4(aMStack_98,(Mat4 *)(plVar4 + 1));
                    /* try { // try from 010180d8 to 0111816f has its CatchHandler @ 01018008 */
      convertMat4TobtTransform(aMStack_98);
      btCompoundShape::addChildShape(this_00,abStack_e0,*(btCollisionShape **)(local_a0 + 0x28));
      if (local_a0 != (Ref *)0x0) {
        Ref::retain(local_a0);
      }
      puVar1 = *(undefined8 **)(this + 0x40);
      if (puVar1 == *(undefined8 **)(this + 0x48)) {
        std::__ndk1::
        vector<cocos2d::Physics3DShape*,std::__ndk1::allocator<cocos2d::Physics3DShape*>>::
        __push_back_slow_path<cocos2d::Physics3DShape*const&>
                  ((vector<cocos2d::Physics3DShape*,std::__ndk1::allocator<cocos2d::Physics3DShape*>>
                    *)(this + 0x38),(Physics3DShape **)&local_a0);
      }
      else {
        *puVar1 = local_a0;
        *(undefined8 **)(this + 0x40) = puVar1 + 1;
      }
      Mat4::~Mat4(aMStack_98);
      plVar4 = plVar4 + 9;
    } while (plVar4 != plVar2);
  }
  *(btCompoundShape **)(this + 0x28) = this_00;
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 010180cc with catch @ 01018144 */
    return 1;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 01018088 with catch @ 01018154 */
  __stack_chk_fail();
}

