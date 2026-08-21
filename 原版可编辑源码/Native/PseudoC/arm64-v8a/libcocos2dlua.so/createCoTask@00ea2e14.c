
/* cocos2d::network::DownloaderAndroid::createCoTask(std::__ndk1::shared_ptr<cocos2d::network::DownloadTask
   const>&) */

undefined8 * __thiscall
cocos2d::network::DownloaderAndroid::createCoTask(DownloaderAndroid *this,shared_ptr *param_1)

{
  long *plVar1;
  __shared_weak_count *p_Var2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  __shared_weak_count *this_00;
  ulong local_70;
  undefined8 *puStack_68;
  _jclass *local_60;
  _jmethodID *p_Stack_58;
  undefined8 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  puVar6 = operator_new(0x20);
  puVar6[2] = 0;
  puVar6[3] = 0;
  DAT_0178f5d8 = DAT_0178f5d8 + 1;
  *puVar6 = &PTR__DownloadTaskAndroid_016f4cf0;
  *(int *)(puVar6 + 1) = DAT_0178f5d8;
  uVar8 = *(undefined8 *)param_1;
  lVar10 = *(long *)(param_1 + 8);
  if (lVar10 == 0) {
    puVar6[2] = uVar8;
    puVar6[3] = 0;
  }
  else {
    plVar1 = (long *)(lVar10 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    this_00 = (__shared_weak_count *)puVar6[3];
    puVar6[2] = uVar8;
    puVar6[3] = lVar10;
    if (this_00 != (__shared_weak_count *)0x0) {
      p_Var2 = this_00 + 8;
      do {
        lVar10 = *(long *)p_Var2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(p_Var2,0x10);
        if (bVar4) {
          *(long *)p_Var2 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        std::__ndk1::__shared_weak_count::__release_weak(this_00);
      }
    }
  }
  uVar7 = JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_60,"org.cocos2dx.lib.Cocos2dxDownloader","createTask",
                     "(Lorg/cocos2dx/lib/Cocos2dxDownloader;ILjava/lang/String;Ljava/lang/String;)V"
                    );
  if ((uVar7 & 1) != 0) {
    lVar10 = *(long *)param_1;
    if ((*(byte *)(lVar10 + 0x20) & 1) == 0) {
      lVar10 = lVar10 + 0x21;
    }
    else {
      lVar10 = *(long *)(lVar10 + 0x30);
    }
    uVar8 = (**(code **)(*(long *)local_60 + 0x538))(local_60,lVar10);
    lVar10 = *(long *)param_1;
    if ((*(byte *)(lVar10 + 0x38) & 1) == 0) {
      lVar10 = lVar10 + 0x39;
    }
    else {
      lVar10 = *(long *)(lVar10 + 0x48);
    }
    uVar9 = (**(code **)(*(long *)local_60 + 0x538))(local_60,lVar10);
    _JNIEnv::CallStaticVoidMethod
              (local_60,p_Stack_58,local_50,*(undefined8 *)(this + 0x78),
               (ulong)*(uint *)(puVar6 + 1),uVar8,uVar9);
    (**(code **)(*(long *)local_60 + 0xb8))(local_60,uVar8);
    (**(code **)(*(long *)local_60 + 0xb8))(local_60,uVar9);
    (**(code **)(*(long *)local_60 + 0xb8))(local_60,p_Stack_58);
  }
  local_70 = (ulong)*(uint *)(puVar6 + 1);
  puStack_68 = puVar6;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>>>
  ::__emplace_unique_key_args<int,std::__ndk1::pair<int,cocos2d::network::DownloadTaskAndroid*>>
            ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>>>
              *)(this + 0x80),(int *)&local_70,(pair *)&local_70);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

