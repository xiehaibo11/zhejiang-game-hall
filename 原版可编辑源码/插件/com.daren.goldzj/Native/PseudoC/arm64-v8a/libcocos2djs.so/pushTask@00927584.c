
/* cocos2d::renderer::ParallelTask::pushTask(int, std::__ndk1::function<void (int)> const&) */

void __thiscall
cocos2d::renderer::ParallelTask::pushTask(ParallelTask *this,int param_1,function *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if (-1 < param_1) {
    lVar1 = *(long *)(this + 8);
    uVar4 = (ulong)param_1;
    uVar5 = (*(long *)(this + 0x10) - lVar1 >> 3) * -0x5555555555555555;
    if (uVar4 <= uVar5 && uVar5 - uVar4 != 0) {
      lVar7 = lVar1 + uVar4 * 0x18;
      plVar8 = (long *)(lVar7 + 8);
      lVar6 = *plVar8;
      if (lVar6 == *(long *)(lVar7 + 0x10)) {
        std::__ndk1::
        vector<std::__ndk1::function<void(int)>,std::__ndk1::allocator<std::__ndk1::function<void(int)>>>
        ::__push_back_slow_path<std::__ndk1::function<void(int)>const&>
                  ((vector<std::__ndk1::function<void(int)>,std::__ndk1::allocator<std::__ndk1::function<void(int)>>>
                    *)(lVar1 + uVar4 * 0x18),param_2);
        return;
      }
      plVar2 = *(long **)(param_2 + 0x20);
      if (plVar2 == (long *)0x0) {
        *(undefined8 *)(lVar6 + 0x20) = 0;
      }
      else if ((long *)param_2 == plVar2) {
        *(long *)(lVar6 + 0x20) = lVar6;
        (**(code **)(**(long **)(param_2 + 0x20) + 0x18))(*(long **)(param_2 + 0x20),lVar6);
      }
      else {
        uVar3 = (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)(lVar6 + 0x20) = uVar3;
      }
      *plVar8 = *plVar8 + 0x30;
    }
  }
  return;
}

