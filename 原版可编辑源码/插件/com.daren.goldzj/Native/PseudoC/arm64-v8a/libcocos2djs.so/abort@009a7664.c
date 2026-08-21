
/* cocos2d::network::DownloaderAndroid::abort(std::__ndk1::unique_ptr<cocos2d::network::IDownloadTask,
   std::__ndk1::default_delete<cocos2d::network::IDownloadTask> > const&) */

void __thiscall
cocos2d::network::DownloaderAndroid::abort(DownloaderAndroid *this,unique_ptr *param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  __shared_weak_count *this_00;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  ulong local_90 [2];
  char *local_80;
  _jclass *local_70;
  _jmethodID *p_Stack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  void *local_50;
  void *local_48;
  undefined8 uStack_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 009a7478 with catch @ 009a7668 */
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 009a7684 to 00aa76d7 has its CatchHandler @ 009a7684
                       catch() { ... } // from try @ 009a7684 with catch @ 009a7684
                       catch() { ... } // from try @ 009a7838 with catch @ 009a7684 */
  plVar7 = *(long **)(this + 0x90);
  if (plVar7 != (long *)0x0) {
    do {
      if (*(long *)param_1 == plVar7[3]) {
        if ((*(long *)(this + 0x78) != 0) &&
           (uVar6 = JniHelper::getStaticMethodInfo
                              ((JniMethodInfo_ *)&local_70,"org/cocos2dx/lib/Cocos2dxDownloader",
                               "abort","(Lorg/cocos2dx/lib/Cocos2dxDownloader;I)V"),
           (uVar6 & 1) != 0)) {
                    /* try { // try from 009a76d8 to 00aa76ef has its CatchHandler @ 009a78b4 */
          _JNIEnv::CallStaticVoidMethod
                    (local_70,p_Stack_68,local_60,*(undefined8 *)(this + 0x78),
                     (ulong)*(uint *)(plVar7 + 2));
                    /* try { // try from 009a76f8 to 00aa7703 has its CatchHandler @ 009a78b0 */
          (**(code **)(*(long *)local_70 + 0xb8))(local_70,p_Stack_68);
          lVar9 = plVar7[3];
                    /* try { // try from 009a7704 to 00aa770f has its CatchHandler @ 009a78ac */
          std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>>>
          ::remove(&local_50,this + 0x80,plVar7);
          pvVar5 = local_50;
                    /* try { // try from 009a7710 to 00aa7837 has its CatchHandler @ 009a78c4 */
          local_50 = (void *)0x0;
          if (pvVar5 != (void *)0x0) {
            operator_delete(pvVar5);
          }
          local_48 = (void *)0x0;
          uStack_40 = 0;
          local_50 = (void *)0x0;
          uVar8 = *(undefined8 *)(lVar9 + 0x10);
          local_90[0] = 0;
          local_90[1] = 0;
          local_80 = (char *)0x0;
          local_80 = operator_new(0x20);
          builtin_strncpy(local_80,"downloadFile:fail abort",0x18);
          local_58 = 0xfffffffc;
          uStack_54 = 0xfffffffc;
          local_90[1] = 0x17;
          local_90[0] = 0x21;
          plVar7 = *(long **)(this + 0x60);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_008589d0();
          }
          (**(code **)(*plVar7 + 0x30))(plVar7,uVar8,&uStack_54,&local_58,local_90,&local_50);
          if ((local_90[0] & 1) != 0) {
            operator_delete(local_80);
          }
          this_00 = *(__shared_weak_count **)(lVar9 + 0x18);
          *(undefined8 *)(lVar9 + 0x10) = 0;
          *(undefined8 *)(lVar9 + 0x18) = 0;
          if (this_00 != (__shared_weak_count *)0x0) {
            p_Var1 = this_00 + 8;
            do {
              lVar9 = *(long *)p_Var1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
              if (bVar3) {
                *(long *)p_Var1 = lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*(long *)this_00 + 0x10))(this_00);
              std::__ndk1::__shared_weak_count::__release_weak(this_00);
            }
          }
          if (local_50 != (void *)0x0) {
            local_48 = local_50;
            operator_delete(local_50);
          }
        }
        break;
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

