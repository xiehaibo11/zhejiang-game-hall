
/* fairygui::Relations::~Relations() */

void __thiscall fairygui::Relations::~Relations(Relations *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  RelationItem *this_00;
  
  puVar2 = *(undefined8 **)(this + 0x10);
  puVar1 = *(undefined8 **)(this + 0x18);
  if (puVar2 == puVar1) {
    *(undefined8 **)(this + 0x18) = puVar2;
  }
  else {
    do {
      this_00 = (RelationItem *)*puVar2;
      if (this_00 != (RelationItem *)0x0) {
        RelationItem::~RelationItem(this_00);
        operator_delete(this_00);
        puVar1 = *(undefined8 **)(this + 0x18);
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
    puVar2 = *(undefined8 **)(this + 0x10);
    *(undefined8 **)(this + 0x18) = puVar2;
  }
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar2;
    operator_delete(puVar2);
    return;
  }
  return;
}

