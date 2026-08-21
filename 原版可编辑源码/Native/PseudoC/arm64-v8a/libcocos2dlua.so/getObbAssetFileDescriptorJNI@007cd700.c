
/* getObbAssetFileDescriptorJNI(char const*, long*, long*) */

undefined4 getObbAssetFileDescriptorJNI(char *param_1,long *param_2,long *param_3)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 local_64 [4];
  _jclass *local_60;
  _jmethodID *p_Stack_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pcVar1 = DAT_01781c30;
  if ((DAT_01781c20 & 1) == 0) {
    pcVar1 = &DAT_01781c21;
  }
  uVar4 = cocos2d::JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_60,pcVar1,"getObbAssetFileDescriptor",
                     "(Ljava/lang/String;)[J");
  if ((uVar4 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    uVar5 = (**(code **)(*(long *)local_60 + 0x538))(local_60,param_1);
    uVar6 = _JNIEnv::CallStaticObjectMethod(local_60,p_Stack_58,local_50,uVar5);
    iVar3 = (**(code **)(*(long *)local_60 + 0x558))(local_60,uVar6);
    if (iVar3 == 3) {
      local_64[0] = 0;
      puVar7 = (undefined4 *)(**(code **)(*(long *)local_60 + 0x5e0))(local_60,uVar6,local_64);
      uVar8 = *puVar7;
      *param_2 = *(long *)(puVar7 + 2);
      *param_3 = *(long *)(puVar7 + 4);
      (**(code **)(*(long *)local_60 + 0x620))(local_60,uVar6,puVar7,0);
    }
    else {
      uVar8 = 0;
    }
    (**(code **)(*(long *)local_60 + 0xb8))(local_60,p_Stack_58);
    (**(code **)(*(long *)local_60 + 0xb8))(local_60,uVar5);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

