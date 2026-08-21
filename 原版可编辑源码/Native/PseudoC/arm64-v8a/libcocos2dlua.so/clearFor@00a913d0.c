
/* fairygui::Relations::clearFor(fairygui::GObject*) */

void __thiscall fairygui::Relations::clearFor(Relations *this,GObject *param_1)

{
  size_t __n;
  GObject *pGVar1;
  long *__dest;
  RelationItem *this_00;
  
  __dest = *(long **)(this + 0x10);
  if (*(long **)(this + 0x18) != __dest) {
    do {
      while (pGVar1 = (GObject *)WeakPtr::ptr((WeakPtr *)(*__dest + 8)), pGVar1 != param_1) {
        __dest = __dest + 1;
        if (*(long **)(this + 0x18) == __dest) {
          return;
        }
      }
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
    } while (__dest + ((long)__n >> 3) != __dest);
  }
  return;
}

