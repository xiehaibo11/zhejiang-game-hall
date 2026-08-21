
/* ClipperLib::ClipperOffset::Clear() */

void __thiscall ClipperLib::ClipperOffset::Clear(ClipperOffset *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar2 = *(undefined8 **)(this + 200);
  lVar3 = *(long *)(this + 0xd0);
  if (0 < (int)((ulong)(lVar3 - (long)puVar2) >> 3)) {
    lVar5 = 0;
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
        puVar2 = *(undefined8 **)(this + 200);
        lVar3 = *(long *)(this + 0xd0);
      }
      lVar5 = lVar5 + 1;
      if ((int)((ulong)(lVar3 - (long)puVar2) >> 3) <= lVar5) break;
      puVar4 = (undefined8 *)puVar2[lVar5];
    }
  }
  *(undefined8 **)(this + 0xd0) = puVar2;
  *(undefined8 *)(this + 0xa0) = 0xffffffffffffffff;
  return;
}

