
/* GetDeclaredMethod(_JNIEnv*, _jobject*, _jobject*, _jstring*, _jobjectArray*) */

void GetDeclaredMethod(_JNIEnv *param_1,_jobject *param_2,_jobject *param_3,_jstring *param_4,
                      _jobjectArray *param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  code *extraout_x8_02;
  undefined1 auVar7 [16];
  void *local_80;
  pthread_t local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00100ee4(*(undefined8 *)param_1,param_1,param_3);
  uVar5 = FUN_00100ee4(*(undefined8 *)param_1,param_1,param_4);
  if (param_5 == (_jobjectArray *)0x0) {
    local_60 = 0;
  }
  else {
    FUN_00100eec(*(undefined8 *)param_1);
    iVar2 = (**(code **)(extraout_x8 + 0x558))();
    for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
      auVar7 = FUN_00100eec(*(undefined8 *)(*(long *)param_1 + 0x568));
      uVar6 = (*extraout_x8_00)(auVar7._0_8_,auVar7._8_8_,iVar3);
      FUN_00100ee4(*(undefined8 *)param_1,param_1,uVar6);
      auVar7 = FUN_00100eec(*(undefined8 *)param_1);
      (**(code **)(extraout_x8_01 + 0x570))(auVar7._0_8_,auVar7._8_8_,iVar3);
    }
    FUN_00100eec(*(undefined8 *)(*(long *)param_1 + 0xa8));
    local_60 = (*extraout_x8_02)();
  }
  local_70 = uVar4;
  uStack_68 = uVar5;
  iVar3 = pthread_create(&local_78,(pthread_attr_t *)0x0,GetDeclaredMethodInternal,&local_70);
  if (iVar3 < 0) {
    local_80 = (void *)0x0;
  }
  else {
    pthread_join(local_78,&local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_80);
}

