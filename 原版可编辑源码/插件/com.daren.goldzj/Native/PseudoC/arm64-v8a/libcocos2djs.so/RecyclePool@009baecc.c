
/* cocos2d::renderer::RecyclePool<cocos2d::renderer::BaseRenderer::StageInfo>::RecyclePool(std::__ndk1::function<cocos2d::renderer::BaseRenderer::StageInfo*
   ()>, int) */

void __thiscall
cocos2d::renderer::RecyclePool<cocos2d::renderer::BaseRenderer::StageInfo>::RecyclePool
          (RecyclePool<cocos2d::renderer::BaseRenderer::StageInfo> *this,long *param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  vector<cocos2d::renderer::BaseRenderer::StageInfo*,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageInfo*>>
  *this_00;
  long lVar6;
  ulong uVar7;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  local_70 = alStack_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009baf00 to 00abafe3 has its CatchHandler @ 009bad70 */
  *(undefined8 *)(this + 0x30) = 0;
  this_00 = (vector<cocos2d::renderer::BaseRenderer::StageInfo*,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageInfo*>>
             *)(this + 0x40);
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)this = 0;
  plVar2 = (long *)param_2[4];
  if (plVar2 == (long *)0x0) {
    local_70 = (long *)0x0;
  }
  else if (param_2 == plVar2) {
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_90);
  }
  else {
    local_70 = (long *)(**(code **)(*plVar2 + 0x10))();
  }
  FUN_009bcc24(alStack_90,this + 0x10);
                    /* catch() { ... } // from try @ 009badf0 with catch @ 009baf74 */
  if (alStack_90 == local_70) {
                    /* catch() { ... } // from try @ 009badfc with catch @ 009baf8c */
    pcVar4 = *(code **)(*local_70 + 0x20);
  }
  else {
                    /* catch() { ... } // from try @ 009bade4 with catch @ 009baf78 */
    if (local_70 == (long *)0x0) goto LAB_009baf94;
                    /* catch() { ... } // from try @ 009badc4 with catch @ 009baf7c */
    pcVar4 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar4)();
LAB_009baf94:
  uVar7 = (ulong)param_3;
  uVar5 = *(long *)(this + 0x48) - *(long *)(this + 0x40) >> 3;
  if (uVar5 < uVar7) {
    std::__ndk1::
    vector<cocos2d::renderer::BaseRenderer::StageInfo*,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageInfo*>>
    ::__append(this_00,uVar7 - uVar5);
  }
  else if (uVar5 != uVar7) {
    *(ulong *)(this + 0x48) = *(long *)(this + 0x40) + uVar7 * 8;
  }
  if (0 < param_3) {
    lVar6 = 0;
    do {
      if ((long *)param_2[4] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_008589d0();
      }
                    /* try { // try from 009bafe4 to 00abb037 has its CatchHandler @ 009bafe4
                       catch() { ... } // from try @ 009bafe4 with catch @ 009bafe4
                       catch() { ... } // from try @ 009bb174 with catch @ 009bafe4 */
      uVar3 = (**(code **)(*(long *)param_2[4] + 0x30))();
      *(undefined8 *)(*(long *)this_00 + lVar6 * 8) = uVar3;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (long)uVar7);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

