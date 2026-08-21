
/* cocos2d::network::Downloader::createDownloadDataTask(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void cocos2d::network::Downloader::createDownloadDataTask
               (basic_string *param_1,basic_string *param_2)

{
  __shared_weak_count *p_Var1;
  ulong uVar2;
  basic_string *pbVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x2;
  undefined8 *in_x8;
  long lVar12;
  __shared_weak_count *this;
  byte local_68 [18];
  undefined6 uStack_56;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
                    /* catch() { ... } // from try @ 009a5a50 with catch @ 009a5bfc */
                    /* catch() { ... } // from try @ 009a5a44 with catch @ 009a5c00 */
                    /* catch() { ... } // from try @ 009a5a24 with catch @ 009a5c04 */
  lVar7 = tpidr_el0;
  local_48 = *(long *)(lVar7 + 0x28);
                    /* catch() { ... } // from try @ 009a5a5c with catch @ 009a5c14 */
  puVar8 = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[0xc] = 0;
    puVar8[0xd] = 0;
    *puVar8 = &PTR__DownloadTask_01c6a740;
    puVar8[0xb] = 0;
    puVar8[8] = 0;
    puVar8[7] = 0;
    puVar8[6] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[1] = 0;
                    /* try { // try from 009a5c6c to 00aa5cc3 has its CatchHandler @ 009a5c6c
                       catch() { ... } // from try @ 009a5c6c with catch @ 009a5c6c
                       catch() { ... } // from try @ 009a5df4 with catch @ 009a5c6c
                       catch() { ... } // from try @ 009a5f3c with catch @ 009a5c6c
                       catch() { ... } // from try @ 009a5f58 with catch @ 009a5c6c */
    puVar8[9] = 0;
    puVar8[10] = puVar8 + 0xb;
  }
  *in_x8 = puVar8;
  puVar9 = operator_new(0x20);
  puVar9[2] = 0;
  puVar9[3] = puVar8;
  *puVar9 = &PTR____shared_weak_count_01c6a890;
  puVar9[1] = 0;
  in_x8[1] = puVar9;
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
                    /* try { // try from 009a5cc4 to 00aa5cdb has its CatchHandler @ 009a5f78 */
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)(puVar8 + 1)
      != in_x2) {
    uVar2 = *(ulong *)(in_x2 + 8);
    pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (in_x2 + 0x10);
    if (((byte)*in_x2 & 1) == 0) {
      pbVar4 = in_x2 + 1;
      uVar2 = (ulong)((byte)*in_x2 >> 1);
    }
                    /* try { // try from 009a5ce4 to 00aa5cef has its CatchHandler @ 009a5f74 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (puVar8 + 1),(char *)pbVar4,uVar2);
  }
                    /* try { // try from 009a5cf0 to 00aa5cfb has its CatchHandler @ 009a5f70 */
  uVar2 = (ulong)((byte)*param_2 >> 1);
  if (((byte)*param_2 & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
  }
                    /* try { // try from 009a5cfc to 00aa5df3 has its CatchHandler @ 009a5f88 */
  if (uVar2 == 0) {
    plVar11 = *(long **)(param_1 + 0xb0);
    if (plVar11 != (long *)0x0) {
      uStack_56 = 0;
      local_68[0] = 0x20;
      local_50 = 0;
      uStack_4c = 0xffffffff;
      local_68[9] = 0x73;
      local_68[10] = 0x20;
      local_68[0xb] = 0x65;
      local_68[0xc] = 0x6d;
      local_68[0xd] = 0x70;
      local_68[0xe] = 0x74;
      local_68[0xf] = 0x79;
      local_68[0x10] = 0x2e;
      local_68[1] = 0x55;
      local_68[2] = 0x52;
      local_68[3] = 0x4c;
      local_68[4] = 0x20;
      local_68[5] = 0x6f;
      local_68[6] = 0x72;
      local_68[7] = 0x20;
      local_68[8] = 0x69;
      local_68[0x11] = 0;
      (**(code **)(*plVar11 + 0x30))(plVar11,*in_x8,&uStack_4c,&local_50,local_68);
      if ((local_68[0] & 1) != 0) {
        operator_delete((void *)CONCAT62(uStack_56,CONCAT11(local_68[0x11],local_68[0x10])));
      }
    }
    this = (__shared_weak_count *)in_x8[1];
    *in_x8 = 0;
    in_x8[1] = 0;
    if (this != (__shared_weak_count *)0x0) {
      p_Var1 = this + 8;
      do {
        lVar12 = *(long *)p_Var1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar6) {
          *(long *)p_Var1 = lVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*(long *)this + 0x10))(this);
        std::__ndk1::__shared_weak_count::__release_weak(this);
      }
    }
  }
  else {
    uVar10 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x10))();
    plVar11 = (long *)puVar8[0xd];
    puVar8[0xd] = uVar10;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 8))();
    }
  }
  if (*(long *)(lVar7 + 0x28) == local_48) {
                    /* try { // try from 009a5df4 to 00aa5e17 has its CatchHandler @ 009a5c6c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

