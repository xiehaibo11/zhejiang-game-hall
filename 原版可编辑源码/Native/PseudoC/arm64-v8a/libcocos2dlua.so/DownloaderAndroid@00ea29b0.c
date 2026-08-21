
/* cocos2d::network::DownloaderAndroid::DownloaderAndroid(cocos2d::network::DownloaderHints const&)
    */

void __thiscall
cocos2d::network::DownloaderAndroid::DownloaderAndroid
          (DownloaderAndroid *this,DownloaderHints *param_1)

{
  DownloaderHints *pDVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  _jclass *local_70;
  _jmethodID *p_Stack_68;
  undefined8 local_60;
  ulong local_58;
  DownloaderAndroid *pDStack_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined ***)this = &PTR__DownloaderAndroid_016f4c78;
  DAT_0178f5d0 = DAT_0178f5d0 + 1;
  *(int *)(this + 0x70) = DAT_0178f5d0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xa0) = 0x3f800000;
  uVar4 = JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_70,"org.cocos2dx.lib.Cocos2dxDownloader",
                     "createDownloader",
                     "(IILjava/lang/String;I)Lorg/cocos2dx/lib/Cocos2dxDownloader;");
  if ((uVar4 & 1) != 0) {
    pDVar1 = param_1 + 9;
    if (((byte)param_1[8] & 1) != 0) {
      pDVar1 = *(DownloaderHints **)(param_1 + 0x18);
    }
    uVar5 = (**(code **)(*(long *)local_70 + 0x538))(local_70,pDVar1);
    uVar6 = _JNIEnv::CallStaticObjectMethod
                      (local_70,p_Stack_68,local_60,(ulong)*(uint *)(this + 0x70),
                       (ulong)*(uint *)(param_1 + 4),uVar5,(ulong)*(uint *)param_1);
    uVar7 = (**(code **)(*(long *)local_70 + 0xa8))(local_70,uVar6);
    uVar2 = *(uint *)(this + 0x70);
    *(undefined8 *)(this + 0x78) = uVar7;
    std::__ndk1::mutex::lock((mutex *)sDownloaderMutex);
    local_58 = (ulong)uVar2;
    pDStack_50 = this;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>>>
    ::__emplace_unique_key_args<int,std::__ndk1::pair<int,cocos2d::network::DownloaderAndroid*>>
              ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloaderAndroid*>>>
                *)&sDownloaderMap,(int *)&local_58,(pair *)&local_58);
    std::__ndk1::mutex::unlock((mutex *)sDownloaderMutex);
    (**(code **)(*(long *)local_70 + 0xb8))(local_70,uVar5);
    (**(code **)(*(long *)local_70 + 0xb8))(local_70,uVar6);
    (**(code **)(*(long *)local_70 + 0xb8))(local_70,p_Stack_68);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

