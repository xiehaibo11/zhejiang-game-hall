
/* fairygui::GComponent::handleGrayedChanged() */

void __thiscall fairygui::GComponent::handleGrayedChanged(GComponent *this)

{
  ulong uVar1;
  size_t __n;
  undefined8 *puVar2;
  long lVar3;
  void *__s2;
  int iVar4;
  GController *pGVar5;
  GController *pGVar6;
  undefined8 *puVar7;
  GController *pGVar8;
  ulong uVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  ulong local_78;
  void *local_70;
  long local_68;
  
                    /* catch() { ... } // from try @ 00a72e50 with catch @ 00a72e88 */
                    /* try { // try from 00a72e9c to 00b7305b has its CatchHandler @ 00a72e9c
                       catch() { ... } // from try @ 00a72e9c with catch @ 00a72e9c
                       catch() { ... } // from try @ 00a730dc with catch @ 00a72e9c */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  GObject::handleGrayedChanged((GObject *)this);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"grayed");
  puVar7 = *(undefined8 **)(this + 0x1f8);
  puVar2 = *(undefined8 **)(this + 0x200);
  if (puVar7 != puVar2) {
    pGVar5 = (GController *)local_80;
    __s2 = (void *)((ulong)local_80 | 1);
    uVar1 = (ulong)((byte)local_80[0] >> 1);
    if (((byte)local_80[0] & 1) != 0) {
      pGVar5 = (GController *)local_80;
      __s2 = local_70;
      uVar1 = local_78;
    }
    do {
      pGVar8 = (GController *)*puVar7;
      if (((byte)pGVar8[0x48] & 1) == 0) {
        uVar9 = (ulong)((byte)pGVar8[0x48] >> 1);
        pGVar6 = pGVar8 + 0x49;
      }
      else {
        uVar9 = *(ulong *)(pGVar8 + 0x50);
        pGVar6 = *(GController **)(pGVar8 + 0x58);
      }
      __n = uVar1;
      if (uVar9 <= uVar1) {
        __n = uVar9;
      }
      if ((__n == 0) || (iVar4 = memcmp(pGVar6,__s2,__n), pGVar6 = pGVar5, iVar4 == 0)) {
        pGVar6 = pGVar8;
        if (uVar9 != uVar1) {
          pGVar6 = pGVar5;
        }
        if (uVar1 == uVar9) goto LAB_00a72f50;
      }
      puVar7 = puVar7 + 1;
      pGVar5 = pGVar6;
    } while (puVar2 != puVar7);
  }
  pGVar6 = (GController *)0x0;
LAB_00a72f50:
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (pGVar6 == (GController *)0x0) {
    puVar2 = *(undefined8 **)(this + 0x1e8);
    for (puVar7 = *(undefined8 **)(this + 0x1e0); puVar7 != puVar2; puVar7 = puVar7 + 1) {
      (**(code **)(*(long *)*puVar7 + 0x68))();
    }
  }
  else {
    GController::setSelectedIndex(pGVar6,(uint)(byte)this[0xf6],true);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

