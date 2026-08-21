
/* cocos2d::ui::LayoutComponent::refreshLayout() */

void __thiscall cocos2d::ui::LayoutComponent::refreshLayout(LayoutComponent *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  float *pfVar6;
  float *pfVar7;
  Size *pSVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  Node *this_00;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((this[0x89] == (LayoutComponent)0x0) ||
     (plVar5 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))(), plVar5 == (long *)0x0))
  goto LAB_00df0f58;
  pfVar6 = (float *)(**(code **)(*plVar5 + 0x168))();
  pfVar7 = (float *)(**(code **)(**(long **)(this + 0x28) + 0x150))(*(long **)(this + 0x28));
  pSVar8 = (Size *)(**(code **)(**(long **)(this + 0x28) + 0x168))(*(long **)(this + 0x28));
  Size::Size((Size *)&local_40,pSVar8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df0c00 with catch @ 00df0b50
                       catch(type#1 @ 00000000) { ... } // from try @ 00df0c90 with catch @ 00df0b50
                        */
  puVar9 = (undefined8 *)(**(code **)(**(long **)(this + 0x28) + 0xb0))();
  uVar10 = *puVar9;
  local_48._4_4_ = (undefined4)((ulong)uVar10 >> 0x20);
  switch(*(undefined4 *)(this + 0x50)) {
  case 0:
    if ((this[0x78] == (LayoutComponent)0x0) || (this[0x8a] != (LayoutComponent)0x0)) {
      if (this[0x68] != (LayoutComponent)0x0) {
        local_48 = CONCAT44(local_48._4_4_,*pfVar6 * *(float *)(this + 0x6c));
        uVar10 = local_48;
      }
      local_48 = uVar10;
      uVar10 = local_48;
      if (this[0x80] != (LayoutComponent)0x0) {
                    /* try { // try from 00df0bb8 to 00ef0bd7 has its CatchHandler @ 00df0c60 */
        local_40 = *pfVar6 * *(float *)(this + 0x7c);
      }
    }
    else {
                    /* try { // try from 00df0c8c to 00ef0c8f has its CatchHandler @ 00df0c98 */
                    /* try { // try from 00df0c90 to 00ef0c9b has its CatchHandler @ 00df0b50 */
      local_40 = *pfVar6 * *(float *)(this + 0x7c);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df0c8c with catch @ 00df0c98
                        */
      fVar12 = *(float *)(this + 0x58) + local_40 * *pfVar7;
LAB_00df0cd4:
      local_48 = CONCAT44(local_48._4_4_,fVar12);
      uVar10 = local_48;
    }
    break;
  case 1:
    if (this[0x8a] == (LayoutComponent)0x0) {
      if ((this[0x80] != (LayoutComponent)0x0) || (this[0x78] != (LayoutComponent)0x0)) {
        local_40 = *pfVar6 * *(float *)(this + 0x7c);
      }
      fVar12 = *(float *)(this + 0x58) + *pfVar7 * local_40;
      goto LAB_00df0cd4;
    }
    break;
  case 2:
    if (this[0x8a] == (LayoutComponent)0x0) {
      if ((this[0x80] != (LayoutComponent)0x0) || (this[0x78] != (LayoutComponent)0x0)) {
                    /* try { // try from 00df0be4 to 00ef0be7 has its CatchHandler @ 00df0c64 */
        local_40 = *pfVar6 * *(float *)(this + 0x7c);
      }
                    /* try { // try from 00df0bf4 to 00ef0bff has its CatchHandler @ 00df0c5c */
                    /* try { // try from 00df0c00 to 00ef0c83 has its CatchHandler @ 00df0b50 */
      fVar12 = *pfVar6 - (*(float *)(this + 0x5c) + (1.0 - *pfVar7) * local_40);
      goto LAB_00df0cd4;
    }
    break;
  case 3:
    if (this[0x8a] == (LayoutComponent)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df0bf4 with catch @ 00df0c5c
                        */
      if (this[0x78] == (LayoutComponent)0x0) {
        if (this[0x80] != (LayoutComponent)0x0) {
          local_40 = *pfVar6 * *(float *)(this + 0x7c);
        }
        fVar12 = *pfVar6 * *(float *)(this + 0x6c);
      }
      else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df0bb8 with catch @ 00df0c60
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df0be4 with catch @ 00df0c64
                        */
        local_40 = (*pfVar6 - *(float *)(this + 0x58)) - *(float *)(this + 0x5c);
        if (local_40 <= 0.0) {
          local_40 = 0.0;
        }
                    /* try { // try from 00df0c84 to 00ef0c87 has its CatchHandler @ 00df0c88 */
        fVar12 = *(float *)(this + 0x58) + *pfVar7 * local_40;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df0c84 with catch @ 00df0c88
                        */
      }
      goto LAB_00df0cd4;
    }
  }
  local_48 = uVar10;
  switch(*(undefined4 *)(this + 0x54)) {
  case 0:
    if ((this[0x79] == (LayoutComponent)0x0) || (this[0x8a] != (LayoutComponent)0x0)) {
      if (this[0x70] != (LayoutComponent)0x0) {
        local_48 = CONCAT44(pfVar6[1] * *(float *)(this + 0x74),(undefined4)local_48);
      }
      if (this[0x88] != (LayoutComponent)0x0) {
        local_3c = pfVar6[1] * *(float *)(this + 0x84);
      }
    }
    else {
      local_3c = pfVar6[1] * *(float *)(this + 0x84);
      fVar12 = *(float *)(this + 0x60) + local_3c * pfVar7[1];
LAB_00df0e40:
      local_48 = CONCAT44(fVar12,(undefined4)local_48);
    }
    break;
  case 1:
    if (this[0x8a] == (LayoutComponent)0x0) {
      if ((this[0x88] != (LayoutComponent)0x0) || (this[0x79] != (LayoutComponent)0x0)) {
        local_3c = pfVar6[1] * *(float *)(this + 0x84);
      }
      fVar13 = pfVar7[1];
      fVar12 = *(float *)(this + 0x60);
LAB_00df0dec:
      fVar12 = fVar12 + fVar13 * local_3c;
      goto LAB_00df0e40;
    }
    break;
  case 2:
    if (this[0x8a] == (LayoutComponent)0x0) {
      if ((this[0x88] != (LayoutComponent)0x0) || (this[0x79] != (LayoutComponent)0x0)) {
        local_3c = pfVar6[1] * *(float *)(this + 0x84);
      }
      fVar12 = pfVar6[1] - (*(float *)(this + 100) + (1.0 - pfVar7[1]) * local_3c);
      goto LAB_00df0e40;
    }
    break;
  case 3:
    if (this[0x8a] == (LayoutComponent)0x0) {
      if (this[0x79] != (LayoutComponent)0x0) {
        fVar12 = *(float *)(this + 0x60);
        local_3c = (pfVar6[1] - *(float *)(this + 100)) - fVar12;
        if (local_3c <= 0.0) {
          local_3c = 0.0;
        }
        fVar13 = pfVar7[1];
        goto LAB_00df0dec;
      }
      if (this[0x88] != (LayoutComponent)0x0) {
        local_3c = pfVar6[1] * *(float *)(this + 0x84);
      }
      fVar12 = pfVar6[1] * *(float *)(this + 0x74);
      goto LAB_00df0e40;
    }
  }
  (**(code **)(**(long **)(this + 0x28) + 0x98))(*(long **)(this + 0x28),&local_48);
  (**(code **)(**(long **)(this + 0x28) + 0x160))(*(long **)(this + 0x28),&local_40);
  this_00 = *(Node **)(this + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df0f18 with catch @ 00df0e70
                       catch(type#1 @ 00000000) { ... } // from try @ 00df0f78 with catch @ 00df0e70
                       catch(type#1 @ 00000000) { ... } // from try @ 00df0fe8 with catch @ 00df0e70
                        */
  if (this_00 == (Node *)0x0) {
    uVar10 = __cxa_bad_typeid();
                    /* try { // try from 00df0fe8 to 00ef102f has its CatchHandler @ 00df0e70 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df0fe4 with catch @ 00df0fec
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df0f70 with catch @ 00df0ff0
                        */
    if (local_60 != (undefined8 *)0x0) {
      local_58 = local_60;
      operator_delete(local_60);
    }
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar10);
  }
  if (*(char **)(*(long *)(*(long *)this_00 + -8) + 8) == "N7cocos2d2ui8PageViewE") {
    (**(code **)(*(long *)this_00 + 0x6a0))(this_00);
    puVar9 = (undefined8 *)ListView::getItems((ListView *)this_00);
    local_60 = (undefined8 *)0x0;
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    if (&local_60 == (undefined8 **)puVar9) {
      puVar9 = (undefined8 *)0x0;
      puVar11 = puVar9;
      puVar3 = local_58;
    }
    else {
      std::__ndk1::vector<cocos2d::ui::Widget*,std::__ndk1::allocator<cocos2d::ui::Widget*>>::
      assign<cocos2d::ui::Widget**>
                ((vector<cocos2d::ui::Widget*,std::__ndk1::allocator<cocos2d::ui::Widget*>> *)
                 &local_60,(Widget **)*puVar9,(Widget **)puVar9[1]);
      puVar3 = local_58;
      puVar11 = local_60;
      puVar9 = local_60;
      if (local_60 != local_58) {
        do {
          Ref::retain((Ref *)*puVar11);
          puVar4 = local_58;
          puVar11 = puVar11 + 1;
          puVar2 = local_60;
          puVar9 = local_58;
        } while (puVar3 != puVar11);
                    /* try { // try from 00df0efc to 00ef0eff has its CatchHandler @ 00df0fa8 */
        for (; puVar11 = puVar9, puVar3 = local_58, puVar2 != puVar4; puVar2 = puVar2 + 1) {
          Helper::doLayout((Node *)*puVar2);
          puVar9 = local_60;
                    /* try { // try from 00df0f0c to 00ef0f17 has its CatchHandler @ 00df0fac */
        }
      }
    }
    for (; puVar2 = local_58, puVar9 != local_58; puVar9 = puVar9 + 1) {
      local_58 = puVar3;
      Ref::release((Ref *)*puVar9);
      puVar11 = local_60;
      puVar3 = local_58;
      local_58 = puVar2;
    }
    local_58 = puVar11;
    if (puVar11 != (undefined8 *)0x0) {
      operator_delete(puVar11);
    }
  }
  else {
    Helper::doLayout(this_00);
  }
LAB_00df0f58:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00df0f70 to 00ef0f77 has its CatchHandler @ 00df0ff0 */
                    /* try { // try from 00df0f78 to 00ef0fdb has its CatchHandler @ 00df0e70 */
  return;
}

