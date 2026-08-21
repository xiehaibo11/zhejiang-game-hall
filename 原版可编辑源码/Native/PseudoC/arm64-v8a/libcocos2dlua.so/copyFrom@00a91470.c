
/* fairygui::Relations::copyFrom(fairygui::Relations const&) */

void __thiscall fairygui::Relations::copyFrom(Relations *this,Relations *param_1)

{
  long lVar1;
  RelationItem *pRVar2;
  undefined8 *puVar3;
  vector<fairygui::RelationItem*,std::__ndk1::allocator<fairygui::RelationItem*>> *this_00;
  undefined8 *puVar4;
  RelationItem *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_00 = (vector<fairygui::RelationItem*,std::__ndk1::allocator<fairygui::RelationItem*>> *)
            (this + 0x10);
  puVar4 = *(undefined8 **)this_00;
  puVar3 = *(undefined8 **)(this + 0x18);
  if (puVar4 != puVar3) {
    do {
      pRVar2 = (RelationItem *)*puVar4;
      if (pRVar2 != (RelationItem *)0x0) {
        RelationItem::~RelationItem(pRVar2);
        operator_delete(pRVar2);
        puVar3 = *(undefined8 **)(this + 0x18);
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar3);
    puVar4 = *(undefined8 **)this_00;
  }
  *(undefined8 **)(this + 0x18) = puVar4;
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 != *(undefined8 **)(param_1 + 0x18)) {
    do {
      pRVar2 = operator_new(0x38);
      RelationItem::RelationItem(pRVar2,*(GObject **)(this + 8));
      local_50 = pRVar2;
      RelationItem::copyFrom(pRVar2,(RelationItem *)*puVar4);
      puVar3 = *(undefined8 **)(this + 0x18);
      if (puVar3 == *(undefined8 **)(this + 0x20)) {
        std::__ndk1::vector<fairygui::RelationItem*,std::__ndk1::allocator<fairygui::RelationItem*>>
        ::__push_back_slow_path<fairygui::RelationItem*const&>(this_00,&local_50);
      }
      else {
        *puVar3 = local_50;
        *(undefined8 **)(this + 0x18) = puVar3 + 1;
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != *(undefined8 **)(param_1 + 0x18));
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

