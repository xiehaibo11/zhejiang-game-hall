
/* ClipperLib::PolyTree::Clear() */

void __thiscall ClipperLib::PolyTree::Clear(PolyTree *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  puVar2 = *(undefined8 **)(this + 0x48);
  puVar3 = *(undefined8 **)(this + 0x50);
  if (puVar3 != puVar2) {
    uVar5 = 0;
    puVar4 = (undefined8 *)*puVar2;
    while( true ) {
      if (puVar4 != (undefined8 *)0x0) {
        pvVar1 = (void *)puVar4[3];
        if (pvVar1 != (void *)0x0) {
          puVar4[4] = pvVar1;
          operator_delete(pvVar1);
        }
        pvVar1 = (void *)*puVar4;
        if (pvVar1 != (void *)0x0) {
          puVar4[1] = pvVar1;
          operator_delete(pvVar1);
        }
        operator_delete(puVar4);
        puVar2 = *(undefined8 **)(this + 0x48);
        puVar3 = *(undefined8 **)(this + 0x50);
      }
      uVar5 = uVar5 + 1;
      if ((ulong)((long)puVar3 - (long)puVar2 >> 3) <= uVar5) break;
      puVar4 = (undefined8 *)puVar2[uVar5];
    }
    if ((long)puVar3 - (long)puVar2 != 0) {
      *(undefined8 **)(this + 0x50) = puVar2;
    }
  }
  if (*(long *)(this + 0x20) != *(long *)(this + 0x18)) {
    *(long *)(this + 0x20) = *(long *)(this + 0x18);
  }
  return;
}

