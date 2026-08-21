
/* getObbAssetFileDescriptorJNI(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, long*, long*) */

undefined4 getObbAssetFileDescriptorJNI(basic_string *param_1,long *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  basic_string *pbVar7;
  undefined4 uVar8;
  undefined1 local_64 [4];
  _jclass *local_60;
  _jmethodID *p_Stack_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = cocos2d::JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_60,"org/cocos2dx/lib/Cocos2dxHelper",
                     "getObbAssetFileDescriptor","(Ljava/lang/String;)[J");
  if ((uVar3 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    pbVar7 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar7 = param_1 + 1;
    }
    uVar4 = (**(code **)(*(long *)local_60 + 0x538))(local_60,pbVar7);
    uVar5 = _JNIEnv::CallStaticObjectMethod(local_60,p_Stack_58,local_50,uVar4);
    iVar2 = (**(code **)(*(long *)local_60 + 0x558))(local_60,uVar5);
    if (iVar2 == 3) {
      local_64[0] = 0;
      puVar6 = (undefined4 *)(**(code **)(*(long *)local_60 + 0x5e0))(local_60,uVar5,local_64);
      uVar8 = *puVar6;
      *param_2 = *(long *)(puVar6 + 2);
      *param_3 = *(long *)(puVar6 + 4);
      (**(code **)(*(long *)local_60 + 0x620))(local_60,uVar5,puVar6,0);
    }
    else {
      uVar8 = 0;
    }
    (**(code **)(*(long *)local_60 + 0xb8))(local_60,p_Stack_58);
    (**(code **)(*(long *)local_60 + 0xb8))(local_60,uVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

