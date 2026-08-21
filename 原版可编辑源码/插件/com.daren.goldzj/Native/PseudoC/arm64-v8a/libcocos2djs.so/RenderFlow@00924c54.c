
/* cocos2d::renderer::RenderFlow::RenderFlow(cocos2d::renderer::DeviceGraphics*,
   cocos2d::renderer::Scene*, cocos2d::renderer::ForwardRenderer*) */

void __thiscall
cocos2d::renderer::RenderFlow::RenderFlow
          (RenderFlow *this,DeviceGraphics *param_1,Scene *param_2,ForwardRenderer *param_3)

{
  vector<std::__ndk1::vector<cocos2d::renderer::RenderFlow::LevelInfo,std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo>>,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::renderer::RenderFlow::LevelInfo,std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo>>>>
  *this_00;
  long lVar1;
  ModelBatcher *this_01;
  ParallelTask *this_02;
  void *pvVar2;
  size_t sVar3;
  code *pcVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined **local_90;
  RenderFlow *pRStack_88;
  long *local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this_00 = (vector<std::__ndk1::vector<cocos2d::renderer::RenderFlow::LevelInfo,std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo>>,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::renderer::RenderFlow::LevelInfo,std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo>>>>
             *)(this + 0x28);
  *(undefined8 *)this = 0;
  *(Scene **)(this + 8) = param_2;
  *(DeviceGraphics **)(this + 0x10) = param_1;
  *(ForwardRenderer **)(this + 0x18) = param_3;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x40) = 1;
  *(undefined8 *)(this + 0x48) = 0;
  _instance = this;
  this_01 = operator_new(0xd8);
  ModelBatcher::ModelBatcher(this_01,this);
  *(ModelBatcher **)this = this_01;
  this_02 = operator_new(0xa0);
  ParallelTask::ParallelTask(this_02);
  *(ParallelTask **)(this + 0x48) = this_02;
  ParallelTask::init(this_02,1);
  local_90 = &PTR_FUN_01c695a0;
  pRStack_88 = this;
  local_70 = (long *)&local_90;
  ParallelTask::pushTask(*(ParallelTask **)(this + 0x48),0,(function *)&local_90);
  if (&local_90 == (undefined ***)local_70) {
    pcVar4 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_00924d30;
    pcVar4 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar4)();
LAB_00924d30:
  lVar8 = *(long *)(this + 0x28);
  lVar9 = *(long *)(this + 0x30);
  lVar5 = lVar9 - lVar8 >> 3;
  if ((ulong)(lVar5 * -0x5555555555555555) < 3) {
    std::__ndk1::
    vector<std::__ndk1::vector<cocos2d::renderer::RenderFlow::LevelInfo,std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo>>,std::__ndk1::allocator<std::__ndk1::vector<cocos2d::renderer::RenderFlow::LevelInfo,std::__ndk1::allocator<cocos2d::renderer::RenderFlow::LevelInfo>>>>
    ::__append(this_00,lVar5 * 0x5555555555555555 + 3);
  }
  else if (lVar9 - lVar8 != 0x48) {
    if (lVar8 + 0x48 != lVar9) {
      lVar9 = lVar9 + -0x48;
      do {
        pvVar6 = *(void **)(lVar9 + 0x30);
        if (pvVar6 != (void *)0x0) {
          *(void **)(lVar9 + 0x38) = pvVar6;
          operator_delete(pvVar6);
        }
        lVar9 = lVar9 + -0x18;
      } while (lVar8 != lVar9);
    }
    *(long *)(this + 0x30) = lVar8 + 0x48;
  }
  puVar7 = *(undefined8 **)this_00;
  pvVar6 = (void *)*puVar7;
  if ((ulong)(puVar7[2] - (long)pvVar6 >> 6) < 100) {
    lVar8 = puVar7[1];
    pvVar2 = operator_new(0x1900);
    sVar3 = lVar8 - (long)pvVar6;
    if (0 < (long)sVar3) {
      memcpy(pvVar2,pvVar6,sVar3);
    }
    *puVar7 = pvVar2;
    puVar7[1] = (long)pvVar2 + sVar3;
    puVar7[2] = (long)pvVar2 + 0x1900;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
  }
  lVar8 = *(long *)this_00;
  pvVar6 = *(void **)(lVar8 + 0x18);
  if ((ulong)(*(long *)(lVar8 + 0x28) - (long)pvVar6 >> 6) < 100) {
    lVar9 = *(long *)(lVar8 + 0x20);
    pvVar2 = operator_new(0x1900);
    sVar3 = lVar9 - (long)pvVar6;
    if (0 < (long)sVar3) {
      memcpy(pvVar2,pvVar6,sVar3);
    }
    *(void **)(lVar8 + 0x18) = pvVar2;
    *(size_t *)(lVar8 + 0x20) = (long)pvVar2 + sVar3;
    *(long *)(lVar8 + 0x28) = (long)pvVar2 + 0x1900;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
  }
  lVar8 = *(long *)this_00;
  pvVar6 = *(void **)(lVar8 + 0x30);
  if ((ulong)(*(long *)(lVar8 + 0x40) - (long)pvVar6 >> 6) < 100) {
    lVar9 = *(long *)(lVar8 + 0x38);
    pvVar2 = operator_new(0x1900);
    sVar3 = lVar9 - (long)pvVar6;
    if (0 < (long)sVar3) {
      memcpy(pvVar2,pvVar6,sVar3);
    }
    *(void **)(lVar8 + 0x30) = pvVar2;
    *(size_t *)(lVar8 + 0x38) = (long)pvVar2 + sVar3;
    *(long *)(lVar8 + 0x40) = (long)pvVar2 + 0x1900;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

