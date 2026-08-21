
/* cocos2d::ui::RelativeLayoutManager::doLayout(cocos2d::ui::LayoutProtocol*) */

void __thiscall
cocos2d::ui::RelativeLayoutManager::doLayout(RelativeLayoutManager *this,LayoutProtocol *param_1)

{
  RelativeLayoutManager *pRVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  getAllWidgets((LayoutProtocol *)this);
  pRVar1 = this + 0x30;
  puVar6 = local_80;
  puVar8 = puStack_78;
  if (pRVar1 == (RelativeLayoutManager *)&local_80) {
    for (; puVar6 != puStack_78; puVar6 = puVar6 + 1) {
      Ref::release((Ref *)*puVar6);
      puVar8 = local_80;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db41fc with catch @ 00db4344
                        */
    puStack_78 = local_80;
    if (puVar8 != (undefined8 *)0x0) {
      puStack_78 = puVar8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db425c with catch @ 00db4348
                        */
      operator_delete(puVar8);
    }
  }
  else {
    puVar6 = *(undefined8 **)(this + 0x30);
    puVar8 = *(undefined8 **)(this + 0x38);
    if (puVar6 != puVar8) {
      do {
        Ref::release((Ref *)*puVar6);
        puVar6 = puVar6 + 1;
      } while (puVar8 != puVar6);
      puVar6 = *(undefined8 **)pRVar1;
    }
    *(undefined8 **)(this + 0x38) = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined8 **)(this + 0x38) = puVar6;
      operator_delete(puVar6);
      *(long *)pRVar1 = 0;
      *(undefined8 *)(this + 0x38) = 0;
      *(undefined8 *)(this + 0x40) = 0;
    }
    *(undefined8 **)(this + 0x38) = puStack_78;
    *(undefined8 **)(this + 0x30) = local_80;
    *(undefined8 *)(this + 0x40) = local_70;
    puStack_78 = (undefined8 *)0x0;
    local_70 = 0;
    local_80 = (undefined8 *)0x0;
  }
  lVar5 = *(long *)(this + 0x28);
  puVar6 = *(undefined8 **)(this + 0x30);
  while (0 < lVar5) {
    puVar8 = *(undefined8 **)(this + 0x38);
    if (puVar6 != puVar8) {
      do {
        plVar3 = (long *)*puVar6;
        *(long **)(this + 0x48) = plVar3;
        lVar5 = (**(code **)(*plVar3 + 0x5f8))();
        if ((((lVar5 != 0) &&
             (lVar5 = __dynamic_cast(lVar5,&LayoutParameter::typeinfo,
                                     &RelativeLayoutParameter::typeinfo,0), lVar5 != 0)) &&
            (*(char *)(lVar5 + 0x70) == '\0')) &&
           (uVar4 = calculateFinalPositionWithRelativeWidget(this,param_1), (uVar4 & 1) != 0)) {
          calculateFinalPositionWithRelativeAlign(this);
          local_80 = *(undefined8 **)(this + 0x50);
          (**(code **)(**(long **)(this + 0x48) + 0x98))(*(long **)(this + 0x48),&local_80);
          *(undefined1 *)(lVar5 + 0x70) = 1;
        }
        puVar6 = puVar6 + 1;
      } while (puVar8 != puVar6);
      lVar5 = *(long *)(this + 0x28);
      puVar6 = *(undefined8 **)(this + 0x30);
    }
    lVar5 = lVar5 + -1;
    *(long *)(this + 0x28) = lVar5;
  }
  puVar8 = *(undefined8 **)(this + 0x38);
  if (puVar6 != puVar8) {
    do {
      puVar7 = puVar6 + 1;
      Ref::release((Ref *)*puVar6);
      puVar6 = puVar7;
    } while (puVar8 != puVar7);
    puVar6 = *(undefined8 **)pRVar1;
  }
  *(undefined8 **)(this + 0x38) = puVar6;
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

