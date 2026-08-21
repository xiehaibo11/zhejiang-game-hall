
/* std::__ndk1::vector<cocos2d::ui::TabControl::CellContainer*,
   std::__ndk1::allocator<cocos2d::ui::TabControl::CellContainer*>
   >::insert(std::__ndk1::__wrap_iter<cocos2d::ui::TabControl::CellContainer* const*>,
   cocos2d::ui::TabControl::CellContainer*&&) */

undefined8 * __thiscall
std::__ndk1::
vector<cocos2d::ui::TabControl::CellContainer*,std::__ndk1::allocator<cocos2d::ui::TabControl::CellContainer*>>
::insert(vector<cocos2d::ui::TabControl::CellContainer*,std::__ndk1::allocator<cocos2d::ui::TabControl::CellContainer*>>
         *this,undefined8 *param_2,CellContainer **param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  size_t sVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  void *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  void *local_68;
  vector<cocos2d::ui::TabControl::CellContainer*,std::__ndk1::allocator<cocos2d::ui::TabControl::CellContainer*>>
  *pvStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 < *(undefined8 **)(this + 0x10)) {
    puVar9 = param_2;
    if (param_2 == puVar1) {
      *param_2 = *param_3;
      *(undefined8 **)(this + 8) = param_2 + 1;
    }
    else {
      sVar4 = (long)puVar1 + (-8 - (long)param_2);
      puVar3 = puVar1;
      for (puVar5 = puVar1 + -1; puVar5 < puVar1; puVar5 = puVar5 + 1) {
        *puVar3 = *puVar5;
        puVar3 = puVar3 + 1;
      }
      *(undefined8 **)(this + 8) = puVar3;
      if (sVar4 != 0) {
        memmove(puVar1 + -((long)sVar4 >> 3),param_2,sVar4);
      }
      *param_2 = *param_3;
                    /* try { // try from 00df1714 to 00ef175b has its CatchHandler @ 00df1714
                       catch(type#1 @ 00000000) { ... } // from try @ 00df1714 with catch @ 00df1714
                       catch(type#1 @ 00000000) { ... } // from try @ 00df1798 with catch @ 00df1714
                        */
    }
    goto LAB_00df1868;
  }
  lVar10 = *(long *)this;
  uVar11 = ((long)puVar1 - lVar10 >> 3) + 1;
  if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    __vector_base_common<true>::__throw_length_error();
  }
  lVar6 = (long)*(undefined8 **)(this + 0x10) - lVar10;
  pvStack_60 = this + 0x10;
  if ((ulong)(lVar6 >> 3) < 0xfffffffffffffff) {
    uVar7 = lVar6 >> 2;
    if (uVar11 <= uVar7) {
      uVar11 = uVar7;
    }
    local_68 = (void *)0x0;
                    /* try { // try from 00df175c to 00ef1763 has its CatchHandler @ 00df17cc */
    if (uVar11 != 0) {
      if (uVar11 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      goto LAB_00df1784;
    }
    local_80 = (void *)0x0;
  }
  else {
    uVar11 = 0x1fffffffffffffff;
LAB_00df1784:
    local_68 = (void *)0x0;
    local_80 = operator_new(uVar11 << 3);
  }
                    /* try { // try from 00df1790 to 00ef1797 has its CatchHandler @ 00df17c8 */
  local_68 = (void *)((long)local_80 + uVar11 * 8);
                    /* try { // try from 00df1798 to 00ef17e3 has its CatchHandler @ 00df1714 */
  local_78 = (undefined8 *)((long)local_80 + ((long)param_2 - lVar10 >> 3) * 8);
  local_70 = local_78;
  __split_buffer<cocos2d::ui::TabControl::CellContainer*,std::__ndk1::allocator<cocos2d::ui::TabControl::CellContainer*>&>
  ::push_back((__split_buffer<cocos2d::ui::TabControl::CellContainer*,std::__ndk1::allocator<cocos2d::ui::TabControl::CellContainer*>&>
               *)&local_80,param_3);
  puVar9 = local_78;
  sVar4 = (long)param_2 - (long)*(void **)this;
  local_78 = (undefined8 *)((long)local_78 - sVar4);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df1790 with catch @ 00df17c8
                        */
  if (0 < (long)sVar4) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df175c with catch @ 00df17cc
                        */
    memcpy(local_78,*(void **)this,sVar4);
  }
  lVar10 = *(long *)(this + 8);
  sVar4 = lVar10 - (long)param_2;
  if (0 < (long)sVar4) {
    memcpy(local_70,param_2,sVar4);
    local_70 = (undefined8 *)((long)local_70 + sVar4);
    lVar10 = *(long *)(this + 8);
  }
  local_80 = *(void **)this;
  *(undefined8 **)this = local_78;
  *(undefined8 **)(this + 8) = local_70;
  uVar8 = *(undefined8 *)(this + 0x10);
  *(void **)(this + 0x10) = local_68;
  local_70 = (undefined8 *)lVar10;
  if (lVar10 - (long)local_80 != 0) {
    local_70 = (undefined8 *)
               (lVar10 + ((lVar10 - (long)local_80) - 8U >> 3 ^ 0xffffffffffffffff) * 8);
  }
  local_78 = local_80;
  local_68 = (void *)uVar8;
  if (local_80 != (void *)0x0) {
    operator_delete(local_80);
  }
LAB_00df1868:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return puVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

