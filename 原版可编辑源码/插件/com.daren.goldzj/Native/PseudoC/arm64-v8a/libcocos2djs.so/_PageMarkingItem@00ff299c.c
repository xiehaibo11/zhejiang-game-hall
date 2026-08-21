
/* v8::internal::PageMarkingItem::~PageMarkingItem() */

void __thiscall v8::internal::PageMarkingItem::~PageMarkingItem(PageMarkingItem *this)

{
  *(undefined ***)this = &PTR__PageMarkingItem_01ca9008;
  **(int **)(this + 0x18) = *(int *)(this + 0x20) + **(int **)(this + 0x18);
  operator_delete(this);
  return;
}

