
/* cocos2d::network::DownloaderAndroid::createCoTask(std::__ndk1::shared_ptr<cocos2d::network::DownloadTask
   const>&) */

undefined8 * __thiscall
cocos2d::network::DownloaderAndroid::createCoTask(DownloaderAndroid *this,shared_ptr *param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  long lVar3;
  _jclass *p_Var4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  __shared_weak_count *this_00;
  long *plVar16;
  uint uVar17;
  uint uVar18;
  ulong local_90;
  undefined8 *puStack_88;
  _jclass *local_80;
  _jmethodID *local_78;
  undefined8 uStack_70;
  long local_68;
  
                    /* catch() { ... } // from try @ 009a7104 with catch @ 009a72a8 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar6 = operator_new(0x20);
  puVar6[2] = 0;
  puVar6[3] = 0;
                    /* catch() { ... } // from try @ 009a71f0 with catch @ 009a72e8 */
                    /* catch() { ... } // from try @ 009a7148 with catch @ 009a72ec */
  DAT_01d38004 = DAT_01d38004 + 1;
                    /* catch() { ... } // from try @ 009a70c0 with catch @ 009a72f0 */
                    /* catch() { ... } // from try @ 009a7048 with catch @ 009a72f4 */
  *puVar6 = &PTR__DownloadTaskAndroid_01c6a968;
                    /* catch() { ... } // from try @ 009a7058 with catch @ 009a72f8
                       catch() { ... } // from try @ 009a71c4 with catch @ 009a72f8 */
  *(int *)(puVar6 + 1) = DAT_01d38004;
                    /* catch() { ... } // from try @ 009a71f8 with catch @ 009a7300 */
  uVar8 = *(undefined8 *)param_1;
  lVar14 = *(long *)(param_1 + 8);
  if (lVar14 == 0) {
    puVar6[2] = uVar8;
    puVar6[3] = 0;
  }
  else {
    plVar16 = (long *)(lVar14 + 8);
    do {
                    /* catch() { ... } // from try @ 009a7034 with catch @ 009a7310 */
                    /* catch() { ... } // from try @ 009a7008 with catch @ 009a7314 */
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *plVar16 = *plVar16 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    this_00 = (__shared_weak_count *)puVar6[3];
    puVar6[2] = uVar8;
    puVar6[3] = lVar14;
                    /* catch() { ... } // from try @ 009a7070 with catch @ 009a7324
                       catch() { ... } // from try @ 009a7168 with catch @ 009a7324 */
    if (this_00 != (__shared_weak_count *)0x0) {
      p_Var1 = this_00 + 8;
      do {
        lVar14 = *(long *)p_Var1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar5) {
          *(long *)p_Var1 = lVar14 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*(long *)this_00 + 0x10))(this_00);
        std::__ndk1::__shared_weak_count::__release_weak(this_00);
      }
    }
  }
  uVar7 = JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_80,"org/cocos2dx/lib/Cocos2dxDownloader","createTask",
                     "(Lorg/cocos2dx/lib/Cocos2dxDownloader;ILjava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V"
                    );
  if ((uVar7 & 1) != 0) {
                    /* try { // try from 009a738c to 00aa73cf has its CatchHandler @ 009a738c
                       catch() { ... } // from try @ 009a738c with catch @ 009a738c
                       catch() { ... } // from try @ 009a73e8 with catch @ 009a738c */
    uVar8 = (**(code **)(*(long *)local_80 + 0x30))(local_80,"java/lang/String");
    lVar14 = *(long *)param_1;
    if ((*(byte *)(lVar14 + 0x20) & 1) == 0) {
      lVar14 = lVar14 + 0x21;
    }
    else {
      lVar14 = *(long *)(lVar14 + 0x30);
    }
    uVar9 = (**(code **)(*(long *)local_80 + 0x538))(local_80,lVar14);
                    /* try { // try from 009a73d0 to 00aa73e7 has its CatchHandler @ 009a7418 */
    lVar14 = *(long *)param_1;
    if ((*(byte *)(lVar14 + 0x38) & 1) == 0) {
                    /* try { // try from 009a73e8 to 00aa742b has its CatchHandler @ 009a738c */
      lVar14 = lVar14 + 0x39;
    }
    else {
      lVar14 = *(long *)(lVar14 + 0x48);
    }
    uVar10 = (**(code **)(*(long *)local_80 + 0x538))(local_80,lVar14);
                    /* catch() { ... } // from try @ 009a73d0 with catch @ 009a7418 */
                    /* catch() { ... } // from try @ 009a748c with catch @ 009a742c */
    uVar11 = (**(code **)(*(long *)local_80 + 0x560))
                       (local_80,*(int *)(*(long *)param_1 + 0x60) << 1,uVar8,0);
    lVar14 = *(long *)param_1;
    uVar17 = 0;
    plVar16 = *(long **)(lVar14 + 0x50);
    p_Var4 = local_80;
    while (local_80 = p_Var4, plVar16 != (long *)(lVar14 + 0x58)) {
      uVar18 = uVar17 | 1;
      if ((*(byte *)(plVar16 + 4) & 1) == 0) {
        lVar15 = (long)plVar16 + 0x21;
      }
      else {
        lVar15 = plVar16[6];
      }
                    /* try { // try from 009a7478 to 00aa748b has its CatchHandler @ 009a7668 */
      uVar12 = (**(code **)(*(long *)p_Var4 + 0x538))(p_Var4,lVar15);
                    /* try { // try from 009a748c to 00aa7683 has its CatchHandler @ 009a742c */
      (**(code **)(*(long *)p_Var4 + 0x570))(p_Var4,uVar11,uVar17,uVar12);
      p_Var4 = local_80;
      if ((*(byte *)(plVar16 + 7) & 1) == 0) {
        lVar15 = (long)plVar16 + 0x39;
      }
      else {
        lVar15 = plVar16[9];
      }
      uVar17 = uVar17 + 2;
      uVar12 = (**(code **)(*(long *)local_80 + 0x538))(local_80,lVar15);
      (**(code **)(*(long *)p_Var4 + 0x570))(p_Var4,uVar11,uVar18,uVar12);
      plVar13 = (long *)plVar16[1];
      p_Var4 = local_80;
      if ((long *)plVar16[1] == (long *)0x0) {
        plVar13 = plVar16 + 2;
        bVar5 = *(long **)*plVar13 != plVar16;
        plVar16 = (long *)*plVar13;
        if (bVar5) {
          do {
            lVar15 = *plVar13;
            plVar13 = (long *)(lVar15 + 0x10);
            plVar16 = (long *)*plVar13;
          } while (*plVar16 != lVar15);
        }
      }
      else {
        do {
          plVar16 = plVar13;
          plVar13 = (long *)*plVar16;
        } while ((long *)*plVar16 != (long *)0x0);
      }
    }
    _JNIEnv::CallStaticVoidMethod
              (p_Var4,local_78,uStack_70,*(undefined8 *)(this + 0x78),(ulong)*(uint *)(puVar6 + 1),
               uVar9,uVar10,uVar11);
    if (uVar17 != 0) {
      uVar18 = 0;
      do {
        p_Var4 = local_80;
        uVar12 = (**(code **)(*(long *)local_80 + 0x568))(local_80,uVar11,uVar18);
        (**(code **)(*(long *)p_Var4 + 0xb8))(p_Var4,uVar12);
        uVar18 = uVar18 + 1;
      } while (uVar17 != uVar18);
    }
    (**(code **)(*(long *)local_80 + 0xb8))(local_80,uVar8);
    (**(code **)(*(long *)local_80 + 0xb8))(local_80,uVar9);
    (**(code **)(*(long *)local_80 + 0xb8))(local_80,uVar10);
    (**(code **)(*(long *)local_80 + 0xb8))(local_80,uVar11);
    (**(code **)(*(long *)local_80 + 0xb8))(local_80,local_78);
  }
  local_90 = (ulong)*(uint *)(puVar6 + 1);
  puStack_88 = puVar6;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>>>
  ::__emplace_unique_key_args<int,std::__ndk1::pair<int,cocos2d::network::DownloadTaskAndroid*>>
            ((__hash_table<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::network::DownloadTaskAndroid*>>>
              *)(this + 0x80),(int *)&local_90,(pair *)&local_90);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

