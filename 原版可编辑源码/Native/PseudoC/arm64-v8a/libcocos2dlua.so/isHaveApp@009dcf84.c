
/* universe::Device::isHaveApp(char const*) */

bool universe::Device::isHaveApp(char *param_1)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  _jclass *local_50;
  _jmethodID *p_Stack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = JniAssistant::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_50,"com/bianfeng/libuniverse/Device","isHaveApp",
                     "(Ljava/lang/String;)Z");
  if ((uVar4 & 1) == 0) {
    bVar2 = false;
  }
  else {
    uVar5 = (**(code **)(*(long *)local_50 + 0x538))(local_50,param_1);
    cVar3 = _JNIEnv::CallStaticBooleanMethod(local_50,p_Stack_48,local_40,uVar5);
    bVar2 = cVar3 != '\0';
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,uVar5);
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,p_Stack_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

