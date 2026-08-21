
/* cocos2d::NavMeshDebugDraw::vertex(float, float, float, unsigned int) */

void __thiscall
cocos2d::NavMeshDebugDraw::vertex
          (NavMeshDebugDraw *this,float param_1,float param_2,float param_3,uint param_4)

{
  undefined8 *puVar1;
  long lVar2;
  uint extraout_w1;
  undefined8 local_58;
  undefined4 local_50;
  Vec4 aVStack_4c [20];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x38) != 0) {
                    /* catch() { ... } // from try @ 0101d860 with catch @ 0101d8b8 */
    Vec3::Vec3((Vec3 *)&local_58,param_1,param_2,param_3);
    getColor((NavMeshDebugDraw *)(ulong)param_4,extraout_w1);
    puVar1 = *(undefined8 **)(this + 0x10);
    if (puVar1 == *(undefined8 **)(this + 0x18)) {
      std::__ndk1::
      vector<cocos2d::NavMeshDebugDraw::V3F_C4F,std::__ndk1::allocator<cocos2d::NavMeshDebugDraw::V3F_C4F>>
      ::__push_back_slow_path<cocos2d::NavMeshDebugDraw::V3F_C4F_const&>
                ((vector<cocos2d::NavMeshDebugDraw::V3F_C4F,std::__ndk1::allocator<cocos2d::NavMeshDebugDraw::V3F_C4F>>
                  *)(this + 8),(V3F_C4F *)&local_58);
    }
    else {
      *(undefined4 *)(puVar1 + 1) = local_50;
      *puVar1 = local_58;
      Vec4::Vec4((Vec4 *)((long)puVar1 + 0xc),aVStack_4c);
      *(long *)(this + 0x10) = (long)puVar1 + 0x1c;
    }
    this[0xb4] = (NavMeshDebugDraw)0x1;
    Vec4::~Vec4(aVStack_4c);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

