
/* cocos2d::ui::TabControl::removeTab(int) */

void __thiscall cocos2d::ui::TabControl::removeTab(TabControl *this,int param_1)

{
  void *__dest;
  long lVar1;
  long lVar2;
  size_t __n;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar4 = *(long *)(this + 0x558);
  lVar6 = *(long *)(this + 0x550);
  uVar8 = lVar4 - lVar6 >> 3;
  iVar7 = (int)uVar8;
  if ((iVar7 == 0) || (iVar7 <= param_1)) {
    return;
  }
  uVar9 = (ulong)param_1;
  if (uVar8 <= uVar9) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
  }
  plVar3 = *(long **)(lVar6 + uVar9 * 8);
  if (plVar3 == *(long **)(this + 0x520)) {
    *(undefined8 *)(this + 0x520) = 0;
  }
  lVar1 = *plVar3;
  lVar2 = plVar3[1];
  if (plVar3 != (long *)0x0) {
    operator_delete(plVar3);
    lVar6 = *(long *)(this + 0x550);
    lVar4 = *(long *)(this + 0x558);
  }
  __dest = (void *)(lVar6 + uVar9 * 8);
  __n = lVar4 - ((long)__dest + 8);
                    /* try { // try from 00df21fc to 00ef2387 has its CatchHandler @ 00df21fc
                       catch() { ... } // from try @ 00df21fc with catch @ 00df21fc
                       catch() { ... } // from try @ 00df2390 with catch @ 00df21fc */
  if (__n != 0) {
    memmove(__dest,(void *)((long)__dest + 8),__n);
  }
  *(void **)(this + 0x558) = (void *)((long)__dest + ((long)__n >> 3) * 8);
  if (lVar1 == 0) goto LAB_00df2290;
  plVar3 = *(long **)(lVar1 + 0x600);
  *(undefined8 *)(lVar1 + 0x600) = 0;
  if ((long *)(lVar1 + 0x5e0) == plVar3) {
    pcVar5 = *(code **)(*plVar3 + 0x20);
LAB_00df2258:
    (*pcVar5)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar5 = *(code **)(*plVar3 + 0x28);
    goto LAB_00df2258;
  }
  *(undefined8 *)(lVar1 + 0x5d0) = 0;
  (**(code **)(*(long *)this + 0x550))(this,lVar1,1);
  (**(code **)(*(long *)this + 0x550))(this,lVar2,1);
LAB_00df2290:
  initTabHeadersPos(this,param_1);
  return;
}

