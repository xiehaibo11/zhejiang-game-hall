
/* ClipperLib::ClipperOffset::~ClipperOffset() */

void __thiscall ClipperLib::ClipperOffset::~ClipperOffset(ClipperOffset *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar1 = *(undefined8 **)(this + 200);
  lVar4 = *(long *)(this + 0xd0);
  if (0 < (int)((ulong)(lVar4 - (long)puVar1) >> 3)) {
    lVar6 = 0;
    puVar5 = (undefined8 *)*puVar1;
    while( true ) {
      if (puVar5 != (undefined8 *)0x0) {
        pvVar2 = (void *)puVar5[3];
        if (pvVar2 != (void *)0x0) {
          puVar5[4] = pvVar2;
          operator_delete(pvVar2);
        }
        pvVar2 = (void *)*puVar5;
        if (pvVar2 != (void *)0x0) {
          puVar5[1] = pvVar2;
          operator_delete(pvVar2);
        }
        operator_delete(puVar5);
        puVar1 = *(undefined8 **)(this + 200);
        lVar4 = *(long *)(this + 0xd0);
      }
      lVar6 = lVar6 + 1;
      if ((int)((ulong)(lVar4 - (long)puVar1) >> 3) <= lVar6) break;
      puVar5 = (undefined8 *)puVar1[lVar6];
    }
  }
  *(undefined8 **)(this + 0xd0) = puVar1;
  *(undefined8 *)(this + 0xa0) = 0xffffffffffffffff;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0xd0) = puVar1;
    operator_delete(puVar1);
  }
  pvVar2 = *(void **)(this + 0xb0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xb8) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x58);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x60) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x40);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x28);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar2;
    operator_delete(pvVar2);
  }
  puVar1 = *(undefined8 **)(this + 0x10);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  puVar5 = *(undefined8 **)(this + 0x18);
  puVar3 = puVar1;
  if (puVar5 != puVar1) {
    pvVar2 = (void *)puVar5[-3];
    puVar3 = puVar5 + -3;
    while( true ) {
      if (pvVar2 != (void *)0x0) {
        puVar5[-2] = pvVar2;
        operator_delete(pvVar2);
      }
      if (puVar1 == puVar3) break;
      pvVar2 = (void *)puVar3[-3];
      puVar5 = puVar3;
      puVar3 = puVar3 + -3;
    }
    puVar3 = *(undefined8 **)(this + 0x10);
  }
  *(undefined8 **)(this + 0x18) = puVar1;
  operator_delete(puVar3);
  return;
}

