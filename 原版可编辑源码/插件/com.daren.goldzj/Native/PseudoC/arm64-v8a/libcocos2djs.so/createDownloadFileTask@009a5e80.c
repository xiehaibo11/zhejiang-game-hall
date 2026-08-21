
/* cocos2d::network::Downloader::createDownloadFileTask(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >
   > > const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void cocos2d::network::Downloader::createDownloadFileTask
               (basic_string *param_1,basic_string *param_2,map *param_3,basic_string *param_4)

{
  __shared_weak_count *p_Var1;
  ulong uVar2;
  basic_string *pbVar3;
  map *pmVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x4;
  undefined8 *in_x8;
  long lVar13;
  __shared_weak_count *this;
  ulong local_80 [2];
  char *local_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar8 = tpidr_el0;
  local_58 = *(long *)(lVar8 + 0x28);
  puVar9 = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[0xc] = 0;
    puVar9[0xd] = 0;
    *puVar9 = &PTR__DownloadTask_01c6a740;
    puVar9[0xb] = 0;
                    /* try { // try from 009a5ef8 to 00aa5f3b has its CatchHandler @ 009a5f58 */
    puVar9[8] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    puVar9[1] = 0;
    puVar9[9] = 0;
    puVar9[10] = puVar9 + 0xb;
  }
  *in_x8 = puVar9;
  puVar10 = operator_new(0x20);
  puVar10[2] = 0;
  puVar10[3] = puVar9;
  *puVar10 = &PTR____shared_weak_count_01c6a890;
  puVar10[1] = 0;
  in_x8[1] = puVar10;
                    /* try { // try from 009a5f3c to 00aa5f4f has its CatchHandler @ 009a5c6c */
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)(puVar9 + 4)
      != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_2)
  {
    uVar2 = *(ulong *)(param_2 + 8);
    pbVar3 = *(basic_string **)(param_2 + 0x10);
                    /* try { // try from 009a5f50 to 00aa5f57 has its CatchHandler @ 009a5f88 */
    if (((byte)*param_2 & 1) == 0) {
      pbVar3 = param_2 + 1;
      uVar2 = (ulong)((byte)*param_2 >> 1);
    }
                    /* catch() { ... } // from try @ 009a5e18 with catch @ 009a5f58
                       catch() { ... } // from try @ 009a5ef8 with catch @ 009a5f58
                       try { // try from 009a5f58 to 00aa5fdf has its CatchHandler @ 009a5c6c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (puVar9 + 4),(char *)pbVar3,uVar2);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)(puVar9 + 7)
      != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_3)
  {
    uVar2 = *(ulong *)(param_3 + 8);
    pmVar4 = *(map **)(param_3 + 0x10);
                    /* catch() { ... } // from try @ 009a5cf0 with catch @ 009a5f70 */
                    /* catch() { ... } // from try @ 009a5ce4 with catch @ 009a5f74 */
                    /* catch() { ... } // from try @ 009a5cc4 with catch @ 009a5f78 */
    if (((byte)*param_3 & 1) == 0) {
      pmVar4 = param_3 + 1;
      uVar2 = (ulong)((byte)*param_3 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (puVar9 + 7),(char *)pmVar4,uVar2);
  }
                    /* catch() { ... } // from try @ 009a5cfc with catch @ 009a5f88
                       catch() { ... } // from try @ 009a5e48 with catch @ 009a5f88
                       catch() { ... } // from try @ 009a5f50 with catch @ 009a5f88 */
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)(puVar9 + 1)
      != in_x4) {
    uVar2 = *(ulong *)(in_x4 + 8);
    pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (in_x4 + 0x10);
    if (((byte)*in_x4 & 1) == 0) {
      pbVar5 = in_x4 + 1;
      uVar2 = (ulong)((byte)*in_x4 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (puVar9 + 1),(char *)pbVar5,uVar2);
  }
  if ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
       *)(puVar9 + 10) !=
      (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
       *)param_4) {
    std::__ndk1::
    __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
    ::
    __assign_multi<std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__tree_node<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,void*>*,long>>
              ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>>
                *)(puVar9 + 10),*(undefined8 *)param_4,param_4 + 8);
  }
  uVar2 = (ulong)((byte)*param_2 >> 1);
  if (((byte)*param_2 & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
  }
  if (uVar2 != 0) {
                    /* try { // try from 009a5fe0 to 00aa6033 has its CatchHandler @ 009a5fe0
                       catch() { ... } // from try @ 009a5fe0 with catch @ 009a5fe0
                       catch() { ... } // from try @ 009a6198 with catch @ 009a5fe0 */
    uVar2 = (ulong)((byte)*param_3 >> 1);
    if (((byte)*param_3 & 1) != 0) {
      uVar2 = *(ulong *)(param_3 + 8);
    }
    if (uVar2 != 0) {
      uVar11 = (**(code **)(**(long **)(param_1 + 0xc0) + 0x10))();
      plVar12 = (long *)puVar9[0xd];
      puVar9[0xd] = uVar11;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 8))();
      }
      goto LAB_009a60e4;
    }
  }
  plVar12 = *(long **)(param_1 + 0xb0);
  if (plVar12 != (long *)0x0) {
    uVar11 = *in_x8;
                    /* try { // try from 009a6034 to 00aa604b has its CatchHandler @ 009a6214 */
    local_80[0] = 0;
    local_80[1] = 0;
    local_70 = (char *)0x0;
    local_70 = operator_new(0x20);
                    /* try { // try from 009a6054 to 00aa605f has its CatchHandler @ 009a6210 */
    local_80[1] = 0x1d;
    local_80[0] = 0x21;
                    /* try { // try from 009a6060 to 00aa606b has its CatchHandler @ 009a620c */
    builtin_strncpy(local_70,"URL or storage path is empty.",0x1e);
                    /* try { // try from 009a606c to 00aa6197 has its CatchHandler @ 009a6224 */
    local_60 = 0;
    uStack_5c = 0xffffffff;
    (**(code **)(*plVar12 + 0x30))(plVar12,uVar11,&uStack_5c,&local_60,local_80);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
  }
  this = (__shared_weak_count *)in_x8[1];
  *in_x8 = 0;
  in_x8[1] = 0;
  if (this != (__shared_weak_count *)0x0) {
    p_Var1 = this + 8;
    do {
      lVar13 = *(long *)p_Var1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar7) {
        *(long *)p_Var1 = lVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (lVar13 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
    }
  }
LAB_009a60e4:
  if (*(long *)(lVar8 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

