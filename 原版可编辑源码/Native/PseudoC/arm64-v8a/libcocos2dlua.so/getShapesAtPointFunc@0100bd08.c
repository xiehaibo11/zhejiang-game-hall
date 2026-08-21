
/* cocos2d::PhysicsWorldCallback::getShapesAtPointFunc(cpShape*, cpVect, float, cpVect,
   cocos2d::Vector<cocos2d::PhysicsShape*>*) */

void cocos2d::PhysicsWorldCallback::getShapesAtPointFunc
               (undefined8 param_1,
               vector<cocos2d::PhysicsShape*,std::__ndk1::allocator<cocos2d::PhysicsShape*>>
               *param_2)

{
  long *plVar1;
  long lVar2;
  Ref *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = (Ref *)cpShapeGetUserData();
  if (local_40 == (Ref *)0x0) {
    __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/physics/CCPhysicsWorld.cpp",
                        "getShapesAtPointFunc",0xab);
  }
  plVar1 = *(long **)(param_2 + 8);
  if (plVar1 == *(long **)(param_2 + 0x10)) {
    std::__ndk1::vector<cocos2d::PhysicsShape*,std::__ndk1::allocator<cocos2d::PhysicsShape*>>::
    __push_back_slow_path<cocos2d::PhysicsShape*const&>(param_2,(PhysicsShape **)&local_40);
  }
  else {
    *plVar1 = (long)local_40;
    *(long **)(param_2 + 8) = plVar1 + 1;
  }
  Ref::retain(local_40);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

