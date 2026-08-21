
void FUN_0100ce7c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = cpShapeGetUserData();
  if (lVar3 == 0) {
    __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                        "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/physics/CCPhysicsWorld.cpp",
                        "queryPointFunc",0xb2);
  }
  local_40 = param_2[8];
  plVar4 = (long *)param_2[6];
  if (plVar4 != (long *)0x0) {
    bVar2 = (**(code **)(*plVar4 + 0x30))(plVar4,*param_2,lVar3,&local_40);
    cocos2d::PhysicsWorldCallback::continues = bVar2 & 1;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_009d64e4(0,*param_2);
}

