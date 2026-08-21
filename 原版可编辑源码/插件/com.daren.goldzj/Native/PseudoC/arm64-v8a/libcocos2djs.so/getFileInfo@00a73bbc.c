
/* cocos2d::AudioPlayerProvider::getFileInfo(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::AudioPlayerProvider::getFileInfo(basic_string *param_1)

{
  __shared_weak_count *p_Var1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  char cVar4;
  bool bVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__n;
  long lVar6;
  int iVar7;
  FILE *__stream;
  long lVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  long *plVar10;
  undefined8 *puVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar13;
  long lVar14;
  __shared_weak_count *p_Var15;
  bool bVar16;
  void *__dest;
  undefined8 *local_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbStack_b0;
  void *local_a8;
  undefined8 *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbStack_98;
  void *local_90;
  long local_80;
  undefined8 local_78;
  long *local_70;
  long local_68;
  
                    /* catch() { ... } // from try @ 00a73a48 with catch @ 00a73bc8 */
                    /* catch() { ... } // from try @ 00a73a3c with catch @ 00a73bcc */
                    /* catch() { ... } // from try @ 00a73a94 with catch @ 00a73bd0
                       catch() { ... } // from try @ 00a73b70 with catch @ 00a73bd0 */
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
                    /* catch() { ... } // from try @ 00a73a1c with catch @ 00a73be8 */
                    /* catch() { ... } // from try @ 00a73a54 with catch @ 00a73bf8
                       catch() { ... } // from try @ 00a73ac4 with catch @ 00a73bf8 */
  *(undefined8 *)(in_x8 + 0x30) = 0;
  *(undefined8 *)(in_x8 + 0x18) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  *(undefined8 *)(in_x8 + 0x28) = 0;
  *(undefined8 *)(in_x8 + 0x20) = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)in_x8 = 0;
  local_80 = 0;
  local_78 = 0;
  bVar3 = *in_x1;
  pbVar13 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (in_x1 + 0x10);
  if (((byte)bVar3 & 1) == 0) {
    pbVar13 = in_x1 + 1;
  }
  if (*pbVar13 ==
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x2f) {
    __stream = fopen((char *)pbVar13,"rb");
    if (__stream == (FILE *)0x0) goto LAB_00a73e3c;
    fseek(__stream,0,2);
    lVar8 = ftell(__stream);
                    /* try { // try from 00a73c50 to 00b73ca3 has its CatchHandler @ 00a73c50
                       catch() { ... } // from try @ 00a73c50 with catch @ 00a73c50
                       catch() { ... } // from try @ 00a73dbc with catch @ 00a73c50 */
    fclose(__stream);
    iVar7 = -1;
  }
  else {
    local_a0 = (undefined8 *)0x0;
    pbStack_98 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 0x0;
    local_90 = (void *)0x0;
    pbVar2 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (ulong)((byte)bVar3 >> 1);
    if (((byte)bVar3 & 1) != 0) {
      pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (in_x1 + 8);
    }
    __n = pbVar2 + -8;
    if (7 < (long)pbVar2) {
                    /* try { // try from 00a73ca4 to 00b73cbb has its CatchHandler @ 00a73e38 */
      pbVar9 = pbVar13;
      pbVar12 = pbVar2;
      do {
        if ((pbVar12 + -7 ==
             (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0)
           || (pbVar9 = memchr(pbVar9,0x40,(size_t)(pbVar12 + -7)),
              pbVar9 == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)0x0)) break;
                    /* try { // try from 00a73cc4 to 00b73ccf has its CatchHandler @ 00a73e34 */
        if (*(long *)pbVar9 == 0x2f73746573736140) {
          if ((pbVar9 != pbVar13 + (long)pbVar2) && (pbVar9 == pbVar13)) {
            local_b8 = (undefined8 *)0x0;
            pbStack_b0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)0x0;
            local_a8 = (void *)0x0;
            if ((pbVar2 < (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           *)0x8) ||
               ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                0xffffffffffffffef < __n)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (__n < (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)0x17) {
              __dest = (void *)((ulong)&local_b8 | 1);
              local_b8 = (undefined8 *)(ulong)(byte)((int)__n << 1);
              if (__n != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)0x0) goto LAB_00a73f1c;
            }
            else {
              __dest = operator_new((ulong)(pbVar2 + 8) & 0xfffffffffffffff0);
              local_b8 = (undefined8 *)((ulong)(pbVar2 + 8) & 0xfffffffffffffff0 | 1);
                    /* try { // try from 00a73f14 to 00b73f1f has its CatchHandler @ 00a740a4 */
              pbStack_b0 = __n;
              local_a8 = __dest;
LAB_00a73f1c:
                    /* try { // try from 00a73f20 to 00b73f2b has its CatchHandler @ 00a740a0 */
              memcpy(__dest,pbVar13 + 8,(size_t)__n);
            }
                    /* try { // try from 00a73f2c to 00b73f6b has its CatchHandler @ 00a740d0 */
            *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             ((long)__dest + (long)__n) =
                 (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0
            ;
            local_90 = local_a8;
            pbStack_98 = pbStack_b0;
            local_a0 = local_b8;
            goto LAB_00a73d44;
          }
          break;
        }
        pbVar9 = pbVar9 + 1;
                    /* try { // try from 00a73cd0 to 00b73cdb has its CatchHandler @ 00a73e30 */
        pbVar12 = pbVar13 + (long)pbVar2 + -(long)pbVar9;
      } while (7 < (long)pbVar12);
    }
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_a0
        != in_x1) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_a0,(char *)pbVar13,(ulong)pbVar2);
    }
LAB_00a73d44:
    local_b8 = &local_78;
    local_70 = &local_80;
    plVar10 = *(long **)(param_1 + 0x40);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    iVar7 = (**(code **)(*plVar10 + 0x30))(plVar10,&local_a0,&local_b8,&local_70);
    if (iVar7 < 1) {
      pbVar13 = in_x1 + 1;
      if (((byte)*in_x1 & 1) != 0) {
        pbVar13 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    **)(in_x1 + 0x10);
      }
      __android_log_print(6,"AudioPlayerProvider","Failed to open file descriptor for \'%s\'",
                          pbVar13);
      bVar16 = false;
      bVar5 = true;
      lVar8 = 0;
    }
    else {
      bVar5 = false;
      bVar16 = true;
      lVar8 = local_80;
    }
                    /* try { // try from 00a73ef4 to 00b73f0b has its CatchHandler @ 00a740c0 */
    if (((ulong)local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if (!bVar16) {
      if (!bVar5) {
        p_Var15 = *(__shared_weak_count **)(in_x8 + 0x20);
        if (p_Var15 != (__shared_weak_count *)0x0) {
          p_Var1 = p_Var15 + 8;
          do {
            lVar8 = *(long *)p_Var1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
            if (bVar5) {
              *(long *)p_Var1 = lVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*(long *)p_Var15 + 0x10))(p_Var15);
                    /* try { // try from 00a73ea0 to 00b73ef3 has its CatchHandler @ 00a73ea0
                       catch() { ... } // from try @ 00a73ea0 with catch @ 00a73ea0
                       catch() { ... } // from try @ 00a7408c with catch @ 00a73ea0 */
            std::__ndk1::__shared_weak_count::__release_weak(p_Var15);
          }
        }
        if (((byte)*in_x8 & 1) != 0) {
          operator_delete(*(void **)(in_x8 + 0x10));
        }
      }
      goto LAB_00a73e3c;
    }
  }
  if (in_x8 != in_x1) {
    puVar11 = (undefined8 *)(ulong)((byte)*in_x1 >> 1);
    pbVar13 = in_x1 + 1;
                    /* try { // try from 00a73dbc to 00b73e9f has its CatchHandler @ 00a73c50 */
    if (((byte)*in_x1 & 1) != 0) {
      puVar11 = *(undefined8 **)(in_x1 + 8);
      pbVar13 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (in_x1 + 0x10);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(in_x8,(char *)pbVar13,(ulong)puVar11);
  }
  puVar11 = operator_new(0x20);
  puVar11[2] = 0;
  *puVar11 = &PTR____shared_ptr_emplace_01c6f0d0;
  puVar11[1] = 0;
  AssetFd::AssetFd((AssetFd *)(puVar11 + 3),iVar7);
  p_Var15 = *(__shared_weak_count **)(in_x8 + 0x20);
  *(AssetFd **)(in_x8 + 0x18) = (AssetFd *)(puVar11 + 3);
  *(undefined8 **)(in_x8 + 0x20) = puVar11;
  if (p_Var15 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var15 + 8;
    do {
      lVar14 = *(long *)p_Var1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar5) {
        *(long *)p_Var1 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*(long *)p_Var15 + 0x10))(p_Var15);
                    /* catch() { ... } // from try @ 00a73cd0 with catch @ 00a73e30 */
      std::__ndk1::__shared_weak_count::__release_weak(p_Var15);
    }
  }
                    /* catch() { ... } // from try @ 00a73cc4 with catch @ 00a73e34 */
                    /* catch() { ... } // from try @ 00a73ca4 with catch @ 00a73e38 */
  *(undefined8 *)(in_x8 + 0x28) = local_78;
  *(long *)(in_x8 + 0x30) = lVar8;
LAB_00a73e3c:
                    /* catch() { ... } // from try @ 00a73cdc with catch @ 00a73e48 */
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

