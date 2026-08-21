
/* universe::network::GuoPengFei::dispatchMessage() */

void __thiscall universe::network::GuoPengFei::dispatchMessage(GuoPengFei *this)

{
  long lVar1;
  deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>> *pdVar2
  ;
  char *pcVar3;
  Everywhere *this_00;
  OStream *this_01;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ZhouLuJun *pZVar9;
  undefined4 local_74;
  OStream *local_70;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (this[0x4a0] != (GuoPengFei)0x0) {
    pcVar3 = (char *)Translated::getInstance();
    Translated::log(pcVar3,"GuoPengFei: delete 17");
  }
  this_00 = (Everywhere *)Everywhere::getInstance();
  this_01 = (OStream *)Everywhere::getOStream(this_00);
  lVar5 = *(long *)(this + 0x318);
  if (lVar5 != 0) {
    do {
      uVar8 = *(ulong *)(this + 0x310);
      pZVar9 = *(ZhouLuJun **)
                (*(long *)((long)*(undefined8 **)(this + 0x2f8) + (uVar8 >> 6 & 0x3fffffffffffff8))
                + (uVar8 & 0x1ff) * 8);
      *(long *)(this + 0x318) = lVar5 + -1;
      *(ulong *)(this + 0x310) = uVar8 + 1;
      if (0x3ff < uVar8 + 1) {
        operator_delete((void *)**(undefined8 **)(this + 0x2f8));
        *(long *)(this + 0x2f8) = *(long *)(this + 0x2f8) + 8;
        *(long *)(this + 0x310) = *(long *)(this + 0x310) + -0x200;
      }
      if (pZVar9 == (ZhouLuJun *)0x0) break;
      pcVar3 = (char *)Translated::getInstance();
      Translated::log(pcVar3,"GuoPengFei dispatchMessage: appid=%d, processid=%d, msgid=%d",
                      (ulong)*(uint *)(pZVar9 + 0x14),(ulong)*(uint *)(pZVar9 + 0x10),
                      (ulong)*(uint *)(pZVar9 + 0x18));
                    /* try { // try from 00a096bc to 00b096ef has its CatchHandler @ 00a097bc */
      if (((this[0x459] == (GuoPengFei)0x0) ||
          (uVar8 = ShowLineNumbers::dispatch((ShowLineNumbers *)(this + 0x3b8),pZVar9),
          (uVar8 & 1) == 0)) && (*(long *)(this + 0xa0) != 0)) {
        OStream::fastSet(this_01,(char *)(pZVar9 + 0x30),*(ulong *)(pZVar9 + 0x20));
        local_60 = *(undefined4 *)(pZVar9 + 0x10);
        uStack_5c = *(undefined4 *)(pZVar9 + 0x14);
        local_64 = *(undefined4 *)(pZVar9 + 0x18);
        local_74 = *(undefined4 *)(pZVar9 + 0x2c);
                    /* try { // try from 00a096f0 to 00b09703 has its CatchHandler @ 00a09788 */
        plVar4 = *(long **)(this + 0xa0);
        local_70 = this_01;
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
                    /* try { // try from 00a09708 to 00b0973b has its CatchHandler @ 00a0978c */
        (**(code **)(*plVar4 + 0x30))(plVar4,&uStack_5c,&local_60,&local_64,&local_70,&local_74);
        OStream::fastSet(this_01,(char *)0x0,0);
      }
                    /* try { // try from 00a0973c to 00b097d7 has its CatchHandler @ 00a0940c */
      if (IncludeSymbols::getInstance()::s_MessagePool ==
          (deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>>
           *)0x0) {
        IncludeSymbols::getInstance()::s_MessagePool = operator_new(0x30);
        *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 8) = 0;
        *(undefined8 *)IncludeSymbols::getInstance()::s_MessagePool = 0;
        *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x18) = 0;
        *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x10) = 0;
        *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x28) = 0;
        *(undefined8 *)(IncludeSymbols::getInstance()::s_MessagePool + 0x20) = 0;
      }
      pdVar2 = IncludeSymbols::getInstance()::s_MessagePool;
      lVar5 = *(long *)(IncludeSymbols::getInstance()::s_MessagePool + 8);
      lVar6 = *(long *)(IncludeSymbols::getInstance()::s_MessagePool + 0x28);
      uVar8 = 0;
      if (*(long *)(IncludeSymbols::getInstance()::s_MessagePool + 0x10) - lVar5 != 0) {
        uVar8 = (*(long *)(IncludeSymbols::getInstance()::s_MessagePool + 0x10) - lVar5) * 0x40 - 1;
      }
      uVar7 = lVar6 + *(long *)(IncludeSymbols::getInstance()::s_MessagePool + 0x20);
      if (uVar8 == uVar7) {
        std::__ndk1::
        deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>>::
        __add_back_capacity(IncludeSymbols::getInstance()::s_MessagePool);
                    /* catch() { ... } // from try @ 00a096f0 with catch @ 00a09788 */
        lVar6 = *(long *)(pdVar2 + 0x28);
                    /* catch() { ... } // from try @ 00a09708 with catch @ 00a0978c */
        lVar5 = *(long *)(pdVar2 + 8);
        uVar7 = *(long *)(pdVar2 + 0x20) + lVar6;
      }
      *(ZhouLuJun **)(*(long *)(lVar5 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) =
           pZVar9;
      *(long *)(pdVar2 + 0x28) = lVar6 + 1;
      lVar5 = *(long *)(this + 0x318);
    } while (lVar5 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 00a096bc with catch @ 00a097bc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

