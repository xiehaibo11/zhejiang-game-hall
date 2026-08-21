
/* fairygui::Relations::remove(fairygui::GObject*, fairygui::RelationType) */

void __thiscall fairygui::Relations::remove(Relations *this,long param_1,undefined4 param_3)

{
  size_t __n;
  long lVar1;
  ulong uVar2;
  long *__dest;
  RelationItem *this_00;
  
  __dest = *(long **)(this + 0x10);
  if (*(long **)(this + 0x18) != __dest) {
    do {
      lVar1 = WeakPtr::ptr((WeakPtr *)(*__dest + 8));
      if (lVar1 == param_1) {
        RelationItem::remove((RelationItem *)*__dest,param_3);
        uVar2 = RelationItem::isEmpty((RelationItem *)*__dest);
        if ((uVar2 & 1) == 0) goto LAB_00a912e0;
        this_00 = (RelationItem *)*__dest;
        if (this_00 != (RelationItem *)0x0) {
          RelationItem::~RelationItem(this_00);
          operator_delete(this_00);
        }
        __n = *(long *)(this + 0x18) - (long)(__dest + 1);
        if (__n != 0) {
          memmove(__dest,__dest + 1,__n);
        }
        *(long **)(this + 0x18) = __dest + ((long)__n >> 3);
      }
      else {
LAB_00a912e0:
        __dest = __dest + 1;
      }
    } while (*(long **)(this + 0x18) != __dest);
  }
  return;
}

