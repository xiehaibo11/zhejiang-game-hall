
/* cocos2d::renderer::BaseRenderer::requestView() */

void __thiscall cocos2d::renderer::BaseRenderer::requestView(BaseRenderer *this)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  View *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  puVar7 = *(ulong **)(this + 0x68);
  uVar4 = puVar7[8];
  uVar5 = *puVar7;
  uVar6 = puVar7[9] - uVar4;
  uVar8 = uVar6 >> 3;
  if ((((ulong)(long)(int)uVar8 <= uVar5) &&
      (uVar2 = (uint)(uVar6 >> 2) & 0xfffffffe, (ulong)((long)uVar6 >> 3) < (ulong)(long)(int)uVar2)
      ) && ((int)uVar8 < (int)uVar2)) {
    do {
      if ((long *)puVar7[6] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_008589d0();
      }
      local_50 = (View *)(**(code **)(*(long *)puVar7[6] + 0x30))();
      if ((undefined8 *)puVar7[9] == (undefined8 *)puVar7[10]) {
        std::__ndk1::
        vector<cocos2d::renderer::View*,std::__ndk1::allocator<cocos2d::renderer::View*>>::
        __push_back_slow_path<cocos2d::renderer::View*const&>
                  ((vector<cocos2d::renderer::View*,std::__ndk1::allocator<cocos2d::renderer::View*>>
                    *)(puVar7 + 8),&local_50);
      }
      else {
        *(undefined8 *)puVar7[9] = local_50;
        puVar7[9] = puVar7[9] + 8;
      }
      uVar1 = (int)uVar8 + 1;
      uVar8 = (ulong)uVar1;
    } while ((int)uVar1 < (int)uVar2);
    uVar5 = *puVar7;
    uVar4 = puVar7[8];
  }
  *puVar7 = uVar5 + 1;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(uVar4 + uVar5 * 8));
}

