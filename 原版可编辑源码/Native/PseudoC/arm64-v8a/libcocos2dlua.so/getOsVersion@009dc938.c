
/* universe::Device::getOsVersion() */

undefined4 universe::Device::getOsVersion(void)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  _jclass *local_40;
  _jmethodID *p_Stack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = JniAssistant::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_40,"com/bianfeng/libuniverse/Device","getOsVersion",
                     "()I");
  if ((uVar3 & 1) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = _JNIEnv::CallStaticIntMethod(local_40,p_Stack_38,local_30);
    (**(code **)(*(long *)local_40 + 0xb8))(local_40,p_Stack_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

