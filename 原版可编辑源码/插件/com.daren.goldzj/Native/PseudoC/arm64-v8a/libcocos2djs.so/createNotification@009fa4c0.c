
/* universe::Device::createNotification(long, char const*, int) */

void universe::Device::createNotification(long param_1,char *param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  _jclass *local_50;
  _jmethodID *p_Stack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = JniAssistant::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_50,"com/bianfeng/libuniverse/Device",
                     "createNotification","(Ljava/lang/String;II)V");
  if ((uVar2 & 1) != 0) {
    uVar3 = (**(code **)(*(long *)local_50 + 0x538))(local_50,param_2);
    _JNIEnv::CallStaticVoidMethod(local_50,p_Stack_48,local_40,uVar3,param_1,(ulong)(uint)param_3);
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,uVar3);
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,p_Stack_48);
  }
                    /* catch() { ... } // from try @ 009fa60c with catch @ 009fa570
                       catch() { ... } // from try @ 009fa6f8 with catch @ 009fa570
                       catch() { ... } // from try @ 009fa760 with catch @ 009fa570 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

