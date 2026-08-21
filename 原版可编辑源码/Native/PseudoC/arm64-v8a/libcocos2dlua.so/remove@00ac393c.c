
/* fairygui::RelationItem::remove(fairygui::RelationType) */

void __thiscall fairygui::RelationItem::remove(RelationItem *this,int param_2)

{
  int *piVar1;
  int iVar2;
  size_t sVar3;
  void *__dest;
  void *pvVar4;
  void *__dest_00;
  
  __dest_00 = *(void **)(this + 0x10);
  pvVar4 = *(void **)(this + 0x18);
  if (param_2 == 0x18) {
    if (__dest_00 != pvVar4) {
      iVar2 = *(int *)((long)__dest_00 + 4);
      __dest = __dest_00;
      while (iVar2 != 0xe) {
        if (pvVar4 == (void *)((long)__dest + 0xc)) goto LAB_00ac39c4;
        iVar2 = *(int *)((long)__dest + 0x10);
        __dest = (void *)((long)__dest + 0xc);
      }
      sVar3 = (long)pvVar4 - ((long)__dest + 0xc);
      if (sVar3 != 0) {
        memmove(__dest,(void *)((long)__dest + 0xc),sVar3);
      }
      pvVar4 = (void *)((long)__dest + ((long)sVar3 >> 2) * 4);
      __dest_00 = *(void **)(this + 0x10);
      *(void **)(this + 0x18) = pvVar4;
    }
LAB_00ac39c4:
    if (__dest_00 == pvVar4) {
      return;
    }
    if (*(int *)((long)__dest_00 + 4) != 0xf) {
      do {
        if ((void *)((long)pvVar4 + -0xc) == __dest_00) {
          return;
        }
        piVar1 = (int *)((long)__dest_00 + 0x10);
        __dest_00 = (void *)((long)__dest_00 + 0xc);
      } while (*piVar1 != 0xf);
    }
  }
  else {
    if (__dest_00 == pvVar4) {
      return;
    }
    if (*(int *)((long)__dest_00 + 4) != param_2) {
      do {
        if ((void *)((long)pvVar4 + -0xc) == __dest_00) {
          return;
        }
        piVar1 = (int *)((long)__dest_00 + 0x10);
        __dest_00 = (void *)((long)__dest_00 + 0xc);
      } while (*piVar1 != param_2);
    }
  }
  sVar3 = (long)pvVar4 - ((long)__dest_00 + 0xc);
  if (sVar3 != 0) {
    memmove(__dest_00,(void *)((long)__dest_00 + 0xc),sVar3);
  }
  *(void **)(this + 0x18) = (void *)((long)__dest_00 + ((long)sVar3 >> 2) * 4);
  return;
}

