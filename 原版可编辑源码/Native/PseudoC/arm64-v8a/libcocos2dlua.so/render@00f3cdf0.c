
/* cocos2d::Scene::render(cocos2d::Renderer*, cocos2d::Mat4 const*, cocos2d::Mat4 const*, unsigned
   int) */

void __thiscall
cocos2d::Scene::render(Scene *this,Renderer *param_1,Mat4 *param_2,Mat4 *param_3,uint param_4)

{
  Mat4 *pMVar1;
  Camera *pCVar2;
  long *plVar3;
  long lVar4;
  Director *this_00;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  Mat4 *pMVar8;
  long lVar9;
  long *plVar10;
  Camera *this_01;
  Node *this_02;
  Camera *local_f8;
  Mat4 aMStack_f0 [64];
  Mat4 aMStack_b0 [64];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  this_00 = (Director *)Director::getInstance();
  uVar5 = (**(code **)(*(long *)this + 1000))(this);
  puVar6 = (undefined8 *)getCameras(this);
  plVar10 = (long *)*puVar6;
  plVar3 = (long *)puVar6[1];
  if (plVar10 == plVar3) {
    local_f8 = (Camera *)0x0;
  }
  else {
    local_f8 = (Camera *)0x0;
    do {
      uVar7 = (**(code **)(*(long *)*plVar10 + 0x178))();
      if ((uVar7 & 1) != 0) {
        Camera::_visitingCamera = (Camera *)*plVar10;
        pCVar2 = Camera::_visitingCamera;
        if (*(int *)(Camera::_visitingCamera + 0x42c) != 1) {
          pCVar2 = local_f8;
        }
        if (param_4 != 0) {
          uVar7 = 0;
          pMVar1 = param_3;
          do {
            if (param_3 != (Mat4 *)0x0) {
              this_01 = (Camera *)*plVar10;
              Camera::getProjectionMatrix(this_01);
              Mat4::getInversed();
              Mat4::Mat4(aMStack_b0,pMVar1);
              Mat4::multiply(aMStack_b0,aMStack_f0);
              Camera::setAdditionalProjection(this_01,aMStack_b0);
              Mat4::~Mat4(aMStack_b0);
              Mat4::~Mat4(aMStack_f0);
            }
            if (param_2 != (Mat4 *)0x0) {
              this_02 = (Node *)*plVar10;
              Mat4::getInversed();
              Node::setAdditionalTransform(this_02,aMStack_b0);
              Mat4::~Mat4(aMStack_b0);
            }
            Director::pushProjectionMatrix(this_00,uVar7);
            pMVar8 = (Mat4 *)Camera::getViewProjectionMatrix(Camera::_visitingCamera);
            Director::loadProjectionMatrix(this_00,pMVar8,uVar7);
            uVar7 = uVar7 + 1;
            pMVar1 = pMVar1 + 0x40;
          } while (param_4 != uVar7);
        }
        Camera::apply((Camera *)*plVar10);
        Camera::clearBackground((Camera *)*plVar10);
        (**(code **)(*(long *)this + 0x358))(this,param_1,uVar5,0);
        if (*(long *)(this + 0x328) != 0) {
          *(Renderer **)(*(long *)(this + 0x328) + 0x38) = param_1;
          lVar9 = Director::getInstance();
          EventDispatcher::dispatchEvent
                    (*(EventDispatcher **)(lVar9 + 0xb0),*(Event **)(this + 0x328));
        }
        if ((*(NavMesh **)(this + 0x360) != (NavMesh *)0x0) && (*(long *)(this + 0x368) == *plVar10)
           ) {
          NavMesh::debugDraw(*(NavMesh **)(this + 0x360),param_1);
        }
        Renderer::render(param_1);
        Camera::restore((Camera *)*plVar10);
        local_f8 = pCVar2;
        if (param_4 != 0) {
          uVar7 = 0;
          do {
            Director::popProjectionMatrix(this_00,uVar7);
            uVar7 = uVar7 + 1;
                    /* catch() { ... } // from try @ 00f3d05c with catch @ 00f3d02c */
          } while (param_4 != uVar7);
        }
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar3);
  }
  if ((*(Physics3DWorld **)(this + 0x350) != (Physics3DWorld *)0x0) &&
     (uVar7 = Physics3DWorld::isDebugDrawEnabled(*(Physics3DWorld **)(this + 0x350)),
     (uVar7 & 1) != 0)) {
                    /* try { // try from 00f3d054 to 0103d05b has its CatchHandler @ 00f3d098 */
    if (*(Camera **)(this + 0x358) != (Camera *)0x0) {
      local_f8 = *(Camera **)(this + 0x358);
    }
    if (param_4 == 0) {
      Camera::apply(local_f8);
      Camera::clearBackground(local_f8);
      Physics3DWorld::debugDraw(*(Physics3DWorld **)(this + 0x350),param_1);
      Renderer::render(param_1);
      Camera::restore(local_f8);
    }
    else {
                    /* try { // try from 00f3d05c to 0103d0b3 has its CatchHandler @ 00f3d02c */
      uVar7 = 0;
      pMVar1 = param_3;
      do {
        if (param_3 != (Mat4 *)0x0) {
          Camera::getProjectionMatrix(local_f8);
          Mat4::getInversed();
          Mat4::Mat4(aMStack_b0,pMVar1);
          Mat4::multiply(aMStack_b0,aMStack_f0);
          Camera::setAdditionalProjection(local_f8,aMStack_b0);
          Mat4::~Mat4(aMStack_b0);
          Mat4::~Mat4(aMStack_f0);
        }
        if (param_2 != (Mat4 *)0x0) {
          Mat4::getInversed();
          Node::setAdditionalTransform((Node *)local_f8,aMStack_b0);
          Mat4::~Mat4(aMStack_b0);
        }
        Director::pushProjectionMatrix(this_00,uVar7);
                    /* catch() { ... } // from try @ 00f3d054 with catch @ 00f3d098 */
        pMVar8 = (Mat4 *)Camera::getViewProjectionMatrix(local_f8);
        Director::loadProjectionMatrix(this_00,pMVar8,uVar7);
        uVar7 = uVar7 + 1;
        pMVar1 = pMVar1 + 0x40;
      } while (param_4 != uVar7);
      Camera::apply(local_f8);
      Camera::clearBackground(local_f8);
      Physics3DWorld::debugDraw(*(Physics3DWorld **)(this + 0x350),param_1);
      Renderer::render(param_1);
      Camera::restore(local_f8);
      if (param_4 != 0) {
        uVar7 = 0;
        do {
          Director::popProjectionMatrix(this_00,uVar7);
          uVar7 = uVar7 + 1;
        } while (param_4 != uVar7);
      }
    }
  }
  Camera::_visitingCamera = (Camera *)0x0;
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

