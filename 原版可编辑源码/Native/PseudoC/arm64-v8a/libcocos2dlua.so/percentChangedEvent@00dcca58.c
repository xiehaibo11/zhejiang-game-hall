
/* cocos2d::ui::Slider::percentChangedEvent(cocos2d::ui::Slider::EventType) */

void __thiscall cocos2d::ui::Slider::percentChangedEvent(Slider *this,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  undefined4 local_44;
  Slider *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00dcb2ac with catch @ 00dcca5c */
                    /* catch() { ... } // from try @ 00dcb29c with catch @ 00dcca6c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00dcb28c with catch @ 00dcca7c */
  Ref::retain((Ref *)this);
  if (*(long *)(this + 0x590) != 0) {
                    /* catch() { ... } // from try @ 00dcb27c with catch @ 00dcca8c */
    pcVar3 = *(code **)(this + 0x598);
    uVar4 = *(ulong *)(this + 0x5a0) & 1;
                    /* catch() { ... } // from try @ 00dcb26c with catch @ 00dcca9c */
    if (uVar4 != 0 || pcVar3 != (code *)0x0) {
      plVar2 = (long *)(*(long *)(this + 0x590) + ((long)*(ulong *)(this + 0x5a0) >> 1));
      if (uVar4 != 0) {
                    /* catch() { ... } // from try @ 00dcb25c with catch @ 00dccaac */
        pcVar3 = *(code **)(pcVar3 + *plVar2);
      }
      (*pcVar3)(plVar2,this,0);
    }
  }
                    /* catch() { ... } // from try @ 00dcb24c with catch @ 00dccabc */
  plVar2 = *(long **)(this + 0x5d0);
  if (plVar2 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00dcb23c with catch @ 00dccacc */
    local_44 = param_2;
    local_40 = this;
                    /* catch() { ... } // from try @ 00dcb22c with catch @ 00dccadc */
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_40,&local_44);
  }
                    /* catch() { ... } // from try @ 00dcb214 with catch @ 00dccae0 */
  plVar2 = *(long **)(this + 0x4b0);
  if (plVar2 != (long *)0x0) {
    local_44 = 0;
                    /* catch() { ... } // from try @ 00dcbf74 with catch @ 00dccaf0 */
                    /* catch() { ... } // from try @ 00dcbd2c with catch @ 00dccaf4 */
                    /* catch() { ... } // from try @ 00dcc334 with catch @ 00dccaf8 */
    local_40 = this;
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_40,&local_44);
  }
  Ref::release((Ref *)this);
                    /* catch() { ... } // from try @ 00dcb870 with catch @ 00dccb0c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00dcbf34 with catch @ 00dccb20 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00dcbf28 with catch @ 00dccb30 */
  __stack_chk_fail();
}

