
/* conversionEncodingJNI(char const*, int, char const*, char*, char const*) */

void conversionEncodingJNI(char *param_1,int param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  _jclass *local_70;
  _jmethodID *p_Stack_68;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pcVar1 = DAT_01781c30;
  if ((DAT_01781c20 & 1) == 0) {
    pcVar1 = &DAT_01781c21;
  }
  uVar4 = cocos2d::JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_70,pcVar1,"conversionEncoding",
                     "([BLjava/lang/String;Ljava/lang/String;)[B");
  if ((uVar4 & 1) != 0) {
    uVar5 = (**(code **)(*(long *)local_70 + 0x580))(local_70,param_2);
    (**(code **)(*(long *)local_70 + 0x680))(local_70,uVar5,0,param_2,param_1);
    uVar6 = (**(code **)(*(long *)local_70 + 0x538))(local_70,param_3);
    uVar7 = (**(code **)(*(long *)local_70 + 0x538))(local_70,param_5);
    uVar8 = _JNIEnv::CallStaticObjectMethod(local_70,p_Stack_68,local_60,uVar5,uVar6,uVar7);
    uVar3 = (**(code **)(*(long *)local_70 + 0x558))(local_70,uVar8);
    (**(code **)(*(long *)local_70 + 0x640))(local_70,uVar8,0,uVar3,param_4);
    (**(code **)(*(long *)local_70 + 0xb8))(local_70,uVar5);
    (**(code **)(*(long *)local_70 + 0xb8))(local_70,uVar6);
    (**(code **)(*(long *)local_70 + 0xb8))(local_70,uVar7);
    (**(code **)(*(long *)local_70 + 0xb8))(local_70,uVar8);
    (**(code **)(*(long *)local_70 + 0xb8))(local_70,p_Stack_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

