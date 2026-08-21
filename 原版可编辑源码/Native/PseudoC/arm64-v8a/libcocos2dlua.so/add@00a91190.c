
/* fairygui::Relations::add(fairygui::GObject*, fairygui::RelationType, bool) */

void __thiscall
fairygui::Relations::add(Relations *this,GObject *param_1,undefined4 param_3,uint param_4)

{
  undefined8 *puVar1;
  long lVar2;
  GObject *pGVar3;
  RelationItem *this_00;
  long *plVar4;
  RelationItem *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar4 = *(long **)(this + 0x10);
  if (plVar4 != *(long **)(this + 0x18)) {
    do {
      pGVar3 = (GObject *)WeakPtr::ptr((WeakPtr *)(*plVar4 + 8));
      if (pGVar3 == param_1) {
        RelationItem::add((RelationItem *)*plVar4,param_3,param_4 & 1);
        goto LAB_00a9126c;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != *(long **)(this + 0x18));
  }
  this_00 = operator_new(0x38);
  RelationItem::RelationItem(this_00,*(GObject **)(this + 8));
  local_60 = this_00;
  RelationItem::setTarget(this_00,param_1);
  RelationItem::add(this_00,param_3,param_4 & 1);
  puVar1 = *(undefined8 **)(this + 0x18);
  if (puVar1 == *(undefined8 **)(this + 0x20)) {
    std::__ndk1::vector<fairygui::RelationItem*,std::__ndk1::allocator<fairygui::RelationItem*>>::
    __push_back_slow_path<fairygui::RelationItem*const&>
              ((vector<fairygui::RelationItem*,std::__ndk1::allocator<fairygui::RelationItem*>> *)
               (this + 0x10),&local_60);
  }
  else {
    *puVar1 = this_00;
    *(undefined8 **)(this + 0x18) = puVar1 + 1;
  }
LAB_00a9126c:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

