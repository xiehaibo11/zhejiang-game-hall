
/* cocos2d::renderer::RenderFlow::render(cocos2d::renderer::NodeProxy*, float,
   cocos2d::renderer::Camera*) */

void __thiscall
cocos2d::renderer::RenderFlow::render
          (RenderFlow *this,NodeProxy *param_1,float param_2,Camera *param_3)

{
  long lVar1;
  long lVar2;
  MiddlewareManager *pMVar3;
  RenderFlow *pRVar4;
  NodeProxy *pNVar5;
  ulong uVar6;
  long *plVar7;
  code *pcVar8;
  long lVar9;
  undefined8 local_b8;
  undefined8 local_b0;
  NodeProxy *pNStack_a8;
  long local_a0 [4];
  long *local_80;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_1 != (NodeProxy *)0x0) {
    if (middleware::MiddlewareManager::_instance == (MiddlewareManager *)0x0) {
      pMVar3 = operator_new(0x50);
      middleware::MiddlewareManager::MiddlewareManager(pMVar3);
      middleware::MiddlewareManager::_instance = pMVar3;
    }
    middleware::MiddlewareManager::update(middleware::MiddlewareManager::_instance,param_2);
    pRVar4 = (RenderFlow *)MemPool::getCommonList(NodeMemPool::_instance);
    if ((ulong)(*(long *)(pRVar4 + 8) - *(long *)pRVar4 >> 3) < 5) {
      *(undefined4 *)(this + 0x40) = 1;
      calculateLocalMatrix(pRVar4,-1);
    }
    else {
      *(undefined4 *)(this + 0x40) = 2;
      pRVar4 = (RenderFlow *)ParallelTask::beginAllThreads(*(ParallelTask **)(this + 0x48));
      calculateLocalMatrix(pRVar4,1);
      ParallelTask::waitAllThreads(*(ParallelTask **)(this + 0x48));
    }
    lVar9 = *(long *)(this + 0x28);
    *(undefined8 *)(this + 0x20) = 0;
    lVar1 = *(long *)(this + 0x30) - lVar9;
    if (lVar1 != 0) {
      uVar6 = 0;
      while( true ) {
        plVar7 = (long *)(lVar9 + uVar6 * 0x18);
        if ((ulong)(plVar7[1] - *plVar7 >> 6) < 500) {
          *(undefined4 *)(this + 0x40) = 1;
          calculateLevelWorldMatrix((int)this,-1);
        }
        else {
          *(undefined4 *)(this + 0x40) = 4;
          ParallelTask::beginAllThreads(*(ParallelTask **)(this + 0x48));
          calculateLevelWorldMatrix((int)this,1);
          ParallelTask::waitAllThreads(*(ParallelTask **)(this + 0x48));
        }
        uVar6 = *(long *)(this + 0x20) + 1;
        *(ulong *)(this + 0x20) = uVar6;
        if ((ulong)((lVar1 >> 3) * -0x5555555555555555) <= uVar6) break;
        lVar9 = *(long *)(this + 0x28);
      }
    }
    ModelBatcher::startBatch(*(ModelBatcher **)this);
    if (middleware::MiddlewareManager::_instance == (MiddlewareManager *)0x0) {
      pMVar3 = operator_new(0x50);
      middleware::MiddlewareManager::MiddlewareManager(pMVar3);
      middleware::MiddlewareManager::_instance = pMVar3;
    }
    middleware::MiddlewareManager::render(middleware::MiddlewareManager::_instance,param_2);
    NodeProxy::_globalRenderOrder = 0;
    pNVar5 = *(NodeProxy **)(param_1 + 0x30);
    if (pNVar5 == (NodeProxy *)0x0) {
      local_80 = (long *)0x0;
    }
    else if (param_1 + 0x10 == pNVar5) {
      local_80 = local_a0;
      (**(code **)(*(long *)pNVar5 + 0x18))(pNVar5,local_a0);
    }
    else {
      local_80 = (long *)(**(code **)(*(long *)pNVar5 + 0x10))();
    }
    local_b0 = *(undefined8 *)this;
    local_b8 = *(undefined8 *)(this + 8);
    pNStack_a8 = param_1;
    if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    (**(code **)(*local_80 + 0x30))(local_80,&pNStack_a8,&local_b0,&local_b8);
    ModelBatcher::terminateBatch(*(ModelBatcher **)this);
    if (param_3 == (Camera *)0x0) {
      ForwardRenderer::render(*(ForwardRenderer **)(this + 0x18),*(Scene **)(this + 8),param_2);
    }
    else {
      ForwardRenderer::renderCamera
                (*(ForwardRenderer **)(this + 0x18),param_3,*(Scene **)(this + 8));
    }
    if (local_a0 == local_80) {
      pcVar8 = *(code **)(*local_80 + 0x20);
    }
    else {
      if (local_80 == (long *)0x0) goto LAB_00925a20;
      pcVar8 = *(code **)(*local_80 + 0x28);
    }
    (*pcVar8)();
  }
LAB_00925a20:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

