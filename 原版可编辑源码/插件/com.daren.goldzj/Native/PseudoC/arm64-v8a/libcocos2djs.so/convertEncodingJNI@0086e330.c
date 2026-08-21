
/* convertEncodingJNI(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void convertEncodingJNI(basic_string *param_1,int param_2,basic_string *param_3,
                       basic_string *param_4,basic_string *param_5)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  basic_string *pbVar8;
  _jclass *local_70;
  _jmethodID *p_Stack_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = cocos2d::JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_70,"org/cocos2dx/lib/Cocos2dxHelper",
                     "conversionEncoding","([BLjava/lang/String;Ljava/lang/String;)[B");
  if ((uVar3 & 1) != 0) {
    uVar4 = (**(code **)(*(long *)local_70 + 0x580))(local_70,param_2);
    pbVar8 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    (**(code **)(*(long *)local_70 + 0x680))(local_70,uVar4,0,param_2,pbVar8);
    pbVar8 = *(basic_string **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar8 = param_3 + 1;
    }
    uVar5 = (**(code **)(*(long *)local_70 + 0x538))(local_70,pbVar8);
    pbVar8 = *(basic_string **)(param_5 + 0x10);
    if (((byte)*param_5 & 1) == 0) {
      pbVar8 = param_5 + 1;
    }
    uVar6 = (**(code **)(*(long *)local_70 + 0x538))(local_70,pbVar8);
    uVar7 = _JNIEnv::CallStaticObjectMethod(local_70,p_Stack_68,local_60,uVar4,uVar5,uVar6);
    uVar2 = (**(code **)(*(long *)local_70 + 0x558))(local_70,uVar7);
    pbVar8 = *(basic_string **)(param_4 + 0x10);
    if (((byte)*param_4 & 1) == 0) {
      pbVar8 = param_4 + 1;
    }
    (**(code **)(*(long *)local_70 + 0x640))(local_70,uVar7,0,uVar2,pbVar8);
    (**(code **)(*(long *)local_70 + 0xb8))(local_70,uVar4);
    (**(code **)(*(long *)local_70 + 0xb8))(local_70,uVar5);
    (**(code **)(*(long *)local_70 + 0xb8))(local_70,uVar6);
    (**(code **)(*(long *)local_70 + 0xb8))(local_70,uVar7);
    (**(code **)(*(long *)local_70 + 0xb8))(local_70,p_Stack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

