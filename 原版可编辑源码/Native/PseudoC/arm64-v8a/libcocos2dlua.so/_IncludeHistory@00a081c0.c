
/* universe::network::IncludeHistory::~IncludeHistory() */

void __thiscall universe::network::IncludeHistory::~IncludeHistory(IncludeHistory *this)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  IncludeHistory *pIVar5;
  IncludeHistory *pIVar6;
  IncludeHistory *pIVar7;
  
  lVar4 = 0;
  do {
    pIVar5 = this + lVar4 * 0x30 + 0x28;
    lVar2 = *(long *)pIVar5;
    if (lVar2 != 0) {
      pIVar6 = this + lVar4 * 0x30 + 0x20;
      uVar3 = *(ulong *)pIVar6;
      pIVar7 = this + lVar4 * 0x30 + 8;
      do {
        pvVar1 = *(void **)(*(long *)(*(long *)pIVar7 + (uVar3 >> 6 & 0x3fffffffffffff8)) +
                           (uVar3 & 0x1ff) * 8);
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1);
          uVar3 = *(ulong *)pIVar6;
          lVar2 = *(long *)pIVar5;
        }
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + -1;
        *(long *)pIVar5 = lVar2;
        *(ulong *)pIVar6 = uVar3;
        if (0x3ff < uVar3) {
          operator_delete((void *)**(undefined8 **)pIVar7);
          *(long *)pIVar7 = *(long *)pIVar7 + 8;
                    /* try { // try from 00a08268 to 00b082db has its CatchHandler @ 00a08268
                       catch() { ... } // from try @ 00a08268 with catch @ 00a08268
                       catch() { ... } // from try @ 00a082e8 with catch @ 00a08268 */
          uVar3 = *(ulong *)pIVar6 - 0x200;
          *(ulong *)pIVar6 = uVar3;
          lVar2 = *(long *)pIVar5;
        }
      } while (lVar2 != 0);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 4);
  std::__ndk1::
  queue<universe::network::ZhouLuJun*,std::__ndk1::deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>>>
  ::~queue((queue<universe::network::ZhouLuJun*,std::__ndk1::deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>>>
            *)(this + 0x90));
  std::__ndk1::
  queue<universe::network::ZhouLuJun*,std::__ndk1::deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>>>
  ::~queue((queue<universe::network::ZhouLuJun*,std::__ndk1::deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>>>
            *)(this + 0x60));
  std::__ndk1::
  queue<universe::network::ZhouLuJun*,std::__ndk1::deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>>>
  ::~queue((queue<universe::network::ZhouLuJun*,std::__ndk1::deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>>>
            *)(this + 0x30));
  std::__ndk1::
  queue<universe::network::ZhouLuJun*,std::__ndk1::deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>>>
  ::~queue((queue<universe::network::ZhouLuJun*,std::__ndk1::deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>>>
            *)this);
  return;
}

