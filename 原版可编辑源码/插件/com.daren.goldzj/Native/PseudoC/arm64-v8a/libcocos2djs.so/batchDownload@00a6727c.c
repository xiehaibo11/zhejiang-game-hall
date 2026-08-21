
/* cocos2d::extension::AssetsManagerEx::batchDownload() */

void __thiscall cocos2d::extension::AssetsManagerEx::batchDownload(AssetsManagerEx *this)

{
  byte *pbVar1;
  ulong *puVar2;
  long lVar3;
  byte *pbVar4;
  ulong __n;
  void *__src;
  byte *pbVar5;
  void *__dest;
  ulong uVar6;
  long *plVar7;
  pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::extension::DownloadUnit>
  local_c0;
  undefined7 uStack_bf;
  ulong uStack_b8;
  void *local_b0;
  byte local_a8;
  void *local_98;
  byte local_90;
  void *local_80;
  byte local_78;
  void *local_68;
  float local_60;
  long local_58;
  
                    /* try { // try from 00a67290 to 00b672a7 has its CatchHandler @ 00a674e0 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pbVar1 = *(byte **)(this + 0x150);
  pbVar5 = *(byte **)(this + 0x158);
                    /* try { // try from 00a672b0 to 00b672bb has its CatchHandler @ 00a674dc */
  while (pbVar4 = pbVar5, pbVar4 != pbVar1) {
    pbVar5 = pbVar4 + -0x18;
                    /* try { // try from 00a672bc to 00b672c7 has its CatchHandler @ 00a674d8 */
    if ((*pbVar5 & 1) != 0) {
      operator_delete(*(void **)(pbVar4 + -8));
    }
  }
  plVar7 = *(long **)(this + 0x110);
  *(byte **)(this + 0x158) = pbVar1;
  if (plVar7 != (long *)0x0) {
    do {
      while( true ) {
        std::__ndk1::
        pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::extension::DownloadUnit>
        ::pair(&local_c0,(pair *)(plVar7 + 2));
        __src = local_b0;
        __n = uStack_b8;
        if (0.0 < local_60) {
          *(double *)(this + 0x188) = *(double *)(this + 0x188) + (double)local_60;
          *(int *)(this + 0x180) = *(int *)(this + 0x180) + 1;
        }
        puVar2 = *(ulong **)(this + 0x158);
        if (puVar2 == *(ulong **)(this + 0x160)) break;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        if (((byte)local_c0 & 1) == 0) {
          puVar2[2] = (ulong)local_b0;
          puVar2[1] = uStack_b8;
          *puVar2 = CONCAT71(uStack_bf,local_c0);
        }
        else {
          if (0xffffffffffffffef < uStack_b8) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uStack_b8 < 0x17) {
            __dest = (void *)((long)puVar2 + 1);
            *(char *)puVar2 = (char)((int)uStack_b8 << 1);
            if (uStack_b8 != 0) goto LAB_00a673c8;
          }
          else {
            uVar6 = uStack_b8 + 0x10 & 0xfffffffffffffff0;
            __dest = operator_new(uVar6);
            puVar2[1] = __n;
            puVar2[2] = (ulong)__dest;
            *puVar2 = uVar6 | 1;
LAB_00a673c8:
            memcpy(__dest,__src,__n);
          }
          *(undefined1 *)((long)__dest + __n) = 0;
        }
        *(long *)(this + 0x158) = *(long *)(this + 0x158) + 0x18;
        if ((local_78 & 1) == 0) goto LAB_00a6735c;
LAB_00a673f0:
        operator_delete(local_68);
        if ((local_90 & 1) == 0) goto LAB_00a67364;
LAB_00a67400:
        operator_delete(local_80);
        if ((local_a8 & 1) == 0) goto LAB_00a6736c;
LAB_00a67410:
        operator_delete(local_98);
        if (((byte)local_c0 & 1) == 0) goto LAB_00a67374;
LAB_00a67420:
        operator_delete(local_b0);
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_00a67430;
      }
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::
      __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  *)(this + 0x150),(basic_string *)&local_c0);
      if ((local_78 & 1) != 0) goto LAB_00a673f0;
LAB_00a6735c:
      if ((local_90 & 1) != 0) goto LAB_00a67400;
LAB_00a67364:
      if ((local_a8 & 1) != 0) goto LAB_00a67410;
LAB_00a6736c:
      if (((byte)local_c0 & 1) != 0) goto LAB_00a67420;
LAB_00a67374:
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
LAB_00a67430:
  if (*(int *)(this + 0x180) == *(int *)(this + 0x1c0)) {
    *(undefined4 *)(this + 0x17c) = 1;
  }
  queueDowload(this);
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00a67464 to 00b67547 has its CatchHandler @ 00a6723c */
  return;
}

