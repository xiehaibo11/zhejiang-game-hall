
/* ClipperLib::ClipperBase::Clear() */

void __thiscall ClipperLib::ClipperBase::Clear(ClipperBase *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  ulong uVar6;
  
  pvVar2 = *(void **)(this + 0x10);
  while (pvVar2 != (void *)0x0) {
    pvVar5 = *(void **)((long)pvVar2 + 0x18);
    operator_delete(pvVar2);
    *(void **)(this + 0x10) = pvVar5;
    pvVar2 = pvVar5;
  }
  puVar1 = *(undefined8 **)(this + 0x20);
  puVar3 = *(undefined8 **)(this + 0x28);
                    /* try { // try from 01032c40 to 01132c4f has its CatchHandler @ 010331dc */
  *(undefined8 *)(this + 8) = 0;
  if (puVar3 != puVar1) {
    uVar6 = 0;
    pvVar2 = (void *)*puVar1;
    puVar4 = puVar3;
    while( true ) {
      puVar3 = puVar1;
      if (pvVar2 != (void *)0x0) {
        operator_delete__(pvVar2);
        puVar3 = *(undefined8 **)(this + 0x20);
        puVar4 = *(undefined8 **)(this + 0x28);
      }
      uVar6 = uVar6 + 1;
      if ((ulong)((long)puVar4 - (long)puVar3 >> 3) <= uVar6) break;
      pvVar2 = (void *)puVar3[uVar6];
      puVar1 = puVar3;
    }
  }
  *(undefined8 **)(this + 0x28) = puVar3;
  this[0x18] = (ClipperBase)0x0;
  this[0x39] = (ClipperBase)0x0;
  return;
}

