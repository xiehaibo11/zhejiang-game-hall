
/* CrashReport::callJniStaticVoidMethod(_JNIEnv*, char const*, char const*, char const*, ...) */

void CrashReport::callJniStaticVoidMethod
               (_JNIEnv *param_1,char *param_2,char *param_3,char *param_4,...)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined1 **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  _JNIEnv *local_80;
  undefined1 **ppuStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  long local_58;
  
                    /* try { // try from 009d5504 to 00ad550f has its CatchHandler @ 009d5768 */
                    /* try { // try from 009d5528 to 00ad5533 has its CatchHandler @ 009d5758 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_e0 = in_x4;
  uStack_d8 = in_x5;
  local_d0 = in_x6;
  uStack_c8 = in_x7;
  if (((param_2 == (char *)0x0) || (param_3 == (char *)0x0)) || (param_4 == (char *)0x0)) {
    pcVar6 = "[cocos2d-x] parameters input to callJniStaticVoidMethod is not enough.";
LAB_009d55f4:
    __android_log_print(6,"CrashReport",pcVar6);
  }
  else {
    if (param_1 == (_JNIEnv *)0x0) {
      plVar4 = (long *)cocos2d::JniHelper::getJavaVM();
      if (plVar4 == (long *)0x0) {
        pcVar6 = "[cocos2d-x] JavaVM is null.";
      }
      else {
        local_80 = (_JNIEnv *)0x0;
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_80,0x10006);
        param_1 = local_80;
        if (local_80 != (_JNIEnv *)0x0) goto LAB_009d5560;
        pcVar6 = "[cocos2d-x] failed to get env.";
      }
      __android_log_print(6,"CrashReport",pcVar6);
      pcVar6 = "[cocos2d-x] can not get JNIEnv.";
      goto LAB_009d55f4;
    }
LAB_009d5560:
    uVar2 = (**(code **)(*(long *)param_1 + 0x30))(param_1,param_2);
    lVar3 = (**(code **)(*(long *)param_1 + 0x78))(param_1);
    if (lVar3 == 0) {
                    /* try { // try from 009d5678 to 00ad57d3 has its CatchHandler @ 009d5378 */
      uVar5 = (**(code **)(*(long *)param_1 + 0x388))(param_1,uVar2,param_3,param_4);
      lVar3 = (**(code **)(*(long *)param_1 + 0x78))(param_1);
      if (lVar3 == 0) {
                    /* catch() { ... } // from try @ 009d54ac with catch @ 009d5748 */
                    /* catch() { ... } // from try @ 009d5528 with catch @ 009d5758 */
                    /* catch() { ... } // from try @ 009d5504 with catch @ 009d5768 */
        __android_log_print(4,"CrashReport","[cocos2d-x] trying to call method: %s",param_3);
                    /* catch() { ... } // from try @ 009d5498 with catch @ 009d576c */
                    /* catch() { ... } // from try @ 009d54d0 with catch @ 009d5770 */
        uStack_a8 = 0xffffff80ffffffe0;
        uStack_68 = 0xffffff80ffffffe0;
        local_c0 = (undefined1 *)register0x00000008;
        ppuStack_b8 = &local_c0;
        puStack_b0 = &local_e0;
        local_80 = (_JNIEnv *)register0x00000008;
        ppuStack_78 = &local_c0;
        puStack_70 = &local_e0;
        (**(code **)(*(long *)param_1 + 0x470))(param_1,uVar2,uVar5,&local_80);
                    /* catch() { ... } // from try @ 009d55c0 with catch @ 009d57a0 */
        lVar3 = (**(code **)(*(long *)param_1 + 0x78))(param_1);
        if (lVar3 == 0) {
          uVar2 = 1;
          goto LAB_009d5600;
        }
        __android_log_print(6,"CrashReport","[cocos2d-x] check jni error");
                    /* try { // try from 009d57d4 to 00ad586b has its CatchHandler @ 009d57d4
                       catch() { ... } // from try @ 009d57d4 with catch @ 009d57d4
                       catch() { ... } // from try @ 009d58c4 with catch @ 009d57d4 */
        (**(code **)(*(long *)param_1 + 0x80))(param_1);
        (**(code **)(*(long *)param_1 + 0x88))(param_1);
        pcVar6 = "[cocos2d-x] failed to call method: %s";
        param_2 = param_3;
        goto LAB_009d55dc;
      }
      __android_log_print(6,"CrashReport","[cocos2d-x] check jni error");
      (**(code **)(*(long *)param_1 + 0x80))(param_1);
      (**(code **)(*(long *)param_1 + 0x88))(param_1);
      __android_log_print(6,"CrashReport",
                          "[cocos2d-x] failed to find method \'%s\' with param type \'%s\'.",param_3
                          ,param_4);
    }
    else {
      __android_log_print(6,"CrashReport","[cocos2d-x] check jni error");
      (**(code **)(*(long *)param_1 + 0x80))(param_1);
                    /* try { // try from 009d55c0 to 00ad5677 has its CatchHandler @ 009d57a0 */
      (**(code **)(*(long *)param_1 + 0x88))(param_1);
      pcVar6 = "[cocos2d-x] failed to find class: %s";
LAB_009d55dc:
      __android_log_print(6,"CrashReport",pcVar6,param_2);
    }
  }
  uVar2 = 0;
LAB_009d5600:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

