
void FUN_0100c998(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 *param_7)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (cocos2d::PhysicsWorldCallback::continues != 0) {
    local_a8 = cpShapeGetUserData();
    if (local_a8 == 0) {
      __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                          "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/physics/CCPhysicsWorld.cpp"
                          ,"rayCastCallbackFunc",0x8c);
    }
    uStack_98 = param_7[9];
    local_a0 = param_7[8];
    uStack_70 = param_7[10];
    local_78 = 0;
    plVar3 = (long *)param_7[6];
    local_90 = param_1;
    uStack_8c = param_2;
    local_88 = param_3;
    uStack_84 = param_4;
    local_80 = param_5;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_009d64e4(0,*param_7);
    }
    bVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,*param_7,&local_a8,&uStack_70);
    cocos2d::PhysicsWorldCallback::continues = bVar2 & 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 0100c900 with catch @ 0100ca84 */
                    /* catch() { ... } // from try @ 0100c970 with catch @ 0100ca88 */
                    /* catch() { ... } // from try @ 0100c8d0 with catch @ 0100ca8c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

