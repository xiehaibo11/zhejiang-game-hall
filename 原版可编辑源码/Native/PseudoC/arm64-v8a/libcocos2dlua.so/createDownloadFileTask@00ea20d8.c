
/* cocos2d::network::Downloader::createDownloadFileTask(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void cocos2d::network::Downloader::createDownloadFileTask
               (basic_string *param_1,basic_string *param_2,basic_string *param_3)

{
  __shared_weak_count *p_Var1;
  ulong uVar2;
  basic_string *pbVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x3;
  undefined8 *in_x8;
  long lVar11;
  __shared_weak_count *this;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  puVar8 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[2] = 0;
    puVar8[1] = 0;
    puVar8[4] = 0;
    puVar8[3] = 0;
    puVar8[6] = 0;
    puVar8[5] = 0;
    puVar8[8] = 0;
    puVar8[7] = 0;
    *puVar8 = &PTR__DownloadTask_016f4ad8;
    puVar8[10] = 0;
    puVar8[9] = 0;
  }
  std::__ndk1::shared_ptr<cocos2d::network::DownloadTask_const>::
  shared_ptr<cocos2d::network::DownloadTask>();
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)(puVar8 + 4)
      != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2)
  {
    uVar2 = *(ulong *)(param_2 + 8);
    pbVar3 = *(basic_string **)(param_2 + 0x10);
    if (((byte)*param_2 & 1) == 0) {
      pbVar3 = param_2 + 1;
      uVar2 = (ulong)((byte)*param_2 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (puVar8 + 4),(char *)pbVar3,uVar2);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)(puVar8 + 7)
      != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_3)
  {
    uVar2 = *(ulong *)(param_3 + 8);
    pbVar3 = *(basic_string **)(param_3 + 0x10);
    if (((byte)*param_3 & 1) == 0) {
      pbVar3 = param_3 + 1;
      uVar2 = (ulong)((byte)*param_3 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (puVar8 + 7),(char *)pbVar3,uVar2);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)(puVar8 + 1)
      != in_x3) {
    uVar2 = *(ulong *)(in_x3 + 8);
    pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (in_x3 + 0x10);
    if (((byte)*in_x3 & 1) == 0) {
      pbVar4 = in_x3 + 1;
      uVar2 = (ulong)((byte)*in_x3 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (puVar8 + 1),(char *)pbVar4,uVar2);
  }
  uVar2 = (ulong)((byte)*param_2 >> 1);
  if (((byte)*param_2 & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
  }
  if (uVar2 != 0) {
    uVar2 = (ulong)((byte)*param_3 >> 1);
    if (((byte)*param_3 & 1) != 0) {
      uVar2 = *(ulong *)(param_3 + 8);
    }
    if (uVar2 != 0) {
      uVar9 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x10))();
      plVar10 = (long *)puVar8[10];
      puVar8[10] = uVar9;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 8))();
      }
      goto LAB_00ea22d4;
    }
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    uVar9 = *in_x8;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_78,"URL or storage path is empty.");
    local_60 = 0;
    uStack_5c = 0xffffffff;
    plVar10 = *(long **)(param_1 + 0xb0);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_009d64e4();
    }
    (**(code **)(*plVar10 + 0x30))(plVar10,uVar9,&uStack_5c,&local_60,local_78);
    if (((byte)local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
  }
  this = (__shared_weak_count *)in_x8[1];
  *in_x8 = 0;
  in_x8[1] = 0;
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar11 = *(long *)p_Var1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar6) {
        *(long *)p_Var1 = lVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
    }
  }
LAB_00ea22d4:
  if (*(long *)(lVar7 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

