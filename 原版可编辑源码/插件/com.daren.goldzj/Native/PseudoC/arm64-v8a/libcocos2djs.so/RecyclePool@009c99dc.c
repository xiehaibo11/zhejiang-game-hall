
/* cocos2d::renderer::RecyclePool<float>::RecyclePool(std::__ndk1::function<float* ()>, int) */

void __thiscall
cocos2d::renderer::RecyclePool<float>::RecyclePool
          (RecyclePool<float> *this,long *param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  vector<float*,std::__ndk1::allocator<float*>> *this_00;
  long lVar6;
  ulong uVar7;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
  local_70 = alStack_90;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x30) = 0;
  this_00 = (vector<float*,std::__ndk1::allocator<float*>> *)(this + 0x40);
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
  FUN_009cbb18(alStack_90,this + 0x10);
  if (alStack_90 == local_70) {
    pcVar4 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_009c9aa4;
    pcVar4 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar4)();
LAB_009c9aa4:
  uVar7 = (ulong)param_3;
  uVar5 = *(long *)(this + 0x48) - *(long *)(this + 0x40) >> 3;
  if (uVar5 < uVar7) {
    std::__ndk1::vector<float*,std::__ndk1::allocator<float*>>::__append(this_00,uVar7 - uVar5);
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

