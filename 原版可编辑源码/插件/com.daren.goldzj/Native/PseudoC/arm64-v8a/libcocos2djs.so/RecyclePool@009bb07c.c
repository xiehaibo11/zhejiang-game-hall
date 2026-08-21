
/* cocos2d::renderer::RecyclePool<cocos2d::renderer::View>::RecyclePool(std::__ndk1::function<cocos2d::renderer::View*
   ()>, int) */

void __thiscall
cocos2d::renderer::RecyclePool<cocos2d::renderer::View>::RecyclePool
          (RecyclePool<cocos2d::renderer::View> *this,long *param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  vector<cocos2d::renderer::View*,std::__ndk1::allocator<cocos2d::renderer::View*>> *this_00;
  long lVar6;
  ulong uVar7;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  local_70 = alStack_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x30) = 0;
  this_00 = (vector<cocos2d::renderer::View*,std::__ndk1::allocator<cocos2d::renderer::View*>> *)
            (this + 0x40);
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
  FUN_009bcf60(alStack_90,this + 0x10);
  if (alStack_90 == local_70) {
    pcVar4 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_009bb144;
    pcVar4 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar4)();
LAB_009bb144:
  uVar7 = (ulong)param_3;
  uVar5 = *(long *)(this + 0x48) - *(long *)(this + 0x40) >> 3;
  if (uVar5 < uVar7) {
    std::__ndk1::vector<cocos2d::renderer::View*,std::__ndk1::allocator<cocos2d::renderer::View*>>::
    __append(this_00,uVar7 - uVar5);
  }
  else if (uVar5 != uVar7) {
                    /* try { // try from 009bb174 to 00abb257 has its CatchHandler @ 009bafe4 */
    *(ulong *)(this + 0x48) = *(long *)(this + 0x40) + uVar7 * 8;
  }
  if (0 < param_3) {
    lVar6 = 0;
    do {
      if ((long *)param_2[4] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_008589d0();
      }
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

