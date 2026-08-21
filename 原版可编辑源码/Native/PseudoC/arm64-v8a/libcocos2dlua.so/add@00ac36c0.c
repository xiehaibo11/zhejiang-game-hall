
/* fairygui::RelationItem::add(fairygui::RelationType, bool) */

void __thiscall fairygui::RelationItem::add(RelationItem *this,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x10);
  lVar3 = *(long *)(this + 0x18);
  lVar2 = lVar1;
  if ((int)param_2 == 0x18) {
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0xc) {
      if (*(int *)(lVar2 + 4) == 0xe) goto joined_r0x00ac371c;
    }
    internalAdd(this,0xe,param_3 & 1);
    lVar1 = *(long *)(this + 0x10);
    lVar3 = *(long *)(this + 0x18);
joined_r0x00ac371c:
    for (; lVar1 != lVar3; lVar1 = lVar1 + 0xc) {
      if (*(int *)(lVar1 + 4) == 0xf) {
        return;
      }
    }
    param_2 = 0xf;
  }
  else {
    for (; lVar1 != lVar3; lVar1 = lVar1 + 0xc) {
      if (*(int *)(lVar1 + 4) == (int)param_2) {
        return;
      }
    }
  }
  internalAdd(this,param_2,param_3 & 1);
  return;
}

