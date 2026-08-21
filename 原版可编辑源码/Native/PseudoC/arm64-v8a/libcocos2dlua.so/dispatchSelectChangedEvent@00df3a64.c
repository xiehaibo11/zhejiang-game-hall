
/* cocos2d::ui::TabHeader::dispatchSelectChangedEvent(bool) */

void __thiscall cocos2d::ui::TabHeader::dispatchSelectChangedEvent(TabHeader *this,bool param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  TabHeader *local_48;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(this + 0x5d0);
  if (lVar3 != 0) {
    plVar2 = *(long **)(this + 0x600);
    if (plVar2 != (long *)0x0) {
      uVar6 = *(long *)(lVar3 + 0x558) - *(long *)(lVar3 + 0x550);
      uVar5 = (long)uVar6 >> 3;
      if (0 < (int)uVar5) {
        uVar4 = 0;
        do {
          if (uVar5 == uVar4) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
          }
          if ((TabHeader *)**(undefined8 **)(*(long *)(lVar3 + 0x550) + uVar4 * 8) == this) {
            if ((int)uVar4 != -1) {
              local_48 = (TabHeader *)CONCAT44(local_48._4_4_,(int)uVar4);
              local_3c = ~(uint)param_1 & 1;
              (**(code **)(*plVar2 + 0x30))(plVar2,&local_48,&local_3c);
            }
            break;
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df3b30 with catch @ 00df3adc
                        */
          uVar4 = uVar4 + 1;
        } while ((uVar6 >> 3 & 0xffffffff) != uVar4);
      }
    }
    plVar2 = *(long **)(this + 0x4b0);
    if (plVar2 != (long *)0x0) {
                    /* try { // try from 00df3b28 to 00ef3b2f has its CatchHandler @ 00df3ca4 */
      local_48 = this;
      local_3c = ~(uint)param_1 & 1;
                    /* try { // try from 00df3b30 to 00ef3ca7 has its CatchHandler @ 00df3adc */
      (**(code **)(*plVar2 + 0x30))(plVar2,&local_48,&local_3c);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

