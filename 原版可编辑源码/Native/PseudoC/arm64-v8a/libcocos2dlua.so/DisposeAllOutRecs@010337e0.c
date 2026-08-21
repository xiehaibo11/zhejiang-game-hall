
/* ClipperLib::Clipper::DisposeAllOutRecs() */

void __thiscall ClipperLib::Clipper::DisposeAllOutRecs(Clipper *this)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(this + 0x10);
  if (lVar2 != *(long *)(this + 8)) {
    uVar4 = 0;
    lVar2 = *(long *)(this + 8);
    do {
      pvVar3 = *(void **)(lVar2 + uVar4 * 8);
      if (*(long *)((long)pvVar3 + 0x18) == 0) {
        if (pvVar3 != (void *)0x0) goto LAB_01033810;
      }
      else {
        *(undefined8 *)(*(long *)(*(long *)((long)pvVar3 + 0x18) + 0x20) + 0x18) = 0;
        pvVar1 = *(void **)((long)pvVar3 + 0x18);
        while (pvVar1 != (void *)0x0) {
          *(undefined8 *)((long)pvVar3 + 0x18) = *(undefined8 *)((long)pvVar1 + 0x18);
          operator_delete(pvVar1);
          pvVar1 = *(void **)((long)pvVar3 + 0x18);
        }
LAB_01033810:
        operator_delete(pvVar3);
        lVar2 = *(long *)(this + 8);
      }
      *(undefined8 *)(lVar2 + uVar4 * 8) = 0;
      lVar2 = *(long *)(this + 8);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)(*(long *)(this + 0x10) - lVar2 >> 3));
  }
  *(long *)(this + 0x10) = lVar2;
  return;
}

