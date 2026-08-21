
/* cocos2d::EventDispatcher::removeAllEventListeners() */

void __thiscall cocos2d::EventDispatcher::removeAllEventListeners(EventDispatcher *this)

{
  basic_string bVar1;
  long lVar2;
  byte bVar3;
  basic_string *pbVar4;
  basic_string *pbVar5;
  basic_string *pbVar6;
  undefined8 *puVar7;
  basic_string *pbVar8;
  EventDispatcher *pEVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  long *plVar13;
  basic_string *local_70;
  basic_string *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_68 = (basic_string *)0x0;
  pbStack_60 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0
  ;
  local_70 = (basic_string *)0x0;
                    /* try { // try from 00f9d70c to 0109d713 has its CatchHandler @ 00f9d8b8 */
  std::__ndk1::
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::reserve((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)&local_70,*(ulong *)(this + 0x40));
  plVar13 = *(long **)(this + 0x38);
                    /* try { // try from 00f9d714 to 0109d75f has its CatchHandler @ 00f9d5d0 */
  if (plVar13 == (long *)0x0) {
    bVar3 = 1;
    pbVar4 = local_70;
    pbVar5 = local_68;
  }
  else {
    bVar3 = 1;
    do {
      pbVar4 = (basic_string *)(plVar13 + 2);
      pEVar9 = (EventDispatcher *)
               std::__ndk1::
               __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
               ::
               find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                         ((__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                           *)(this + 0x148),pbVar4);
      pbVar5 = local_68;
      if (this + 0x150 == pEVar9) {
        if (local_68 == (basic_string *)pbStack_60) {
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                    ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)&local_70,pbVar4);
        }
        else {
                    /* try { // try from 00f9d760 to 0109d773 has its CatchHandler @ 00f9d8c0 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)local_68,pbVar4);
          local_68 = pbVar5 + 0x18;
        }
      }
      else {
        bVar3 = 0;
      }
      plVar13 = (long *)*plVar13;
      pbVar4 = local_70;
      pbVar5 = local_68;
    } while (plVar13 != (long *)0x0);
  }
  for (; pbVar8 = local_68, pbVar4 != local_68; pbVar4 = pbVar4 + 0x18) {
    local_68 = pbVar5;
    removeEventListenersForListenerID(this,pbVar4);
    pbVar5 = local_68;
    local_68 = pbVar8;
  }
  local_68 = pbVar5;
  if (((*(int *)(this + 0x138) == 0) && (!(bool)(bVar3 ^ 1))) && (*(long *)(this + 0x40) != 0)) {
    puVar7 = *(void **)(this + 0x38);
    while (puVar7 != (void *)0x0) {
      pvVar12 = (void *)*puVar7;
      if ((*(byte *)(puVar7 + 2) & 1) != 0) {
        operator_delete((void *)puVar7[4]);
      }
      operator_delete(puVar7);
      puVar7 = pvVar12;
    }
    lVar10 = *(long *)(this + 0x30);
    *(undefined8 *)(this + 0x38) = 0;
    if (lVar10 != 0) {
      lVar11 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x28) + lVar11 * 8) = 0;
        lVar11 = lVar11 + 1;
      } while (lVar10 != lVar11);
    }
    *(undefined8 *)(this + 0x40) = 0;
  }
  pbVar4 = local_70;
  if (local_70 != (basic_string *)0x0) {
    if (local_68 != local_70) {
      bVar1 = local_68[-0x18];
      pbVar8 = local_68 + -0x18;
      pbVar5 = local_68;
      while( true ) {
        pbVar6 = pbVar8;
        if (((byte)bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -8));
        }
                    /* try { // try from 00f9d844 to 0109d863 has its CatchHandler @ 00f9d8cc */
        if (pbVar4 == pbVar6) break;
        bVar1 = pbVar6[-0x18];
        pbVar8 = pbVar6 + -0x18;
        pbVar5 = pbVar6;
      }
    }
    local_68 = pbVar4;
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

