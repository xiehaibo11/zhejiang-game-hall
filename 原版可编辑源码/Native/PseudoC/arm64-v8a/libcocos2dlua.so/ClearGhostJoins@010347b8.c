
/* ClipperLib::Clipper::ClearGhostJoins() */

void __thiscall ClipperLib::Clipper::ClearGhostJoins(Clipper *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar2 = *(undefined8 **)(this + 0x38);
  puVar3 = *(undefined8 **)(this + 0x40);
  if (puVar3 != puVar2) {
    uVar4 = 0;
    pvVar1 = (void *)*puVar2;
    while( true ) {
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        puVar2 = *(undefined8 **)(this + 0x38);
        puVar3 = *(undefined8 **)(this + 0x40);
      }
      uVar4 = uVar4 + 1;
      if ((ulong)((long)puVar3 - (long)puVar2 >> 3) <= uVar4) break;
      pvVar1 = (void *)puVar2[uVar4];
    }
    if ((long)puVar3 - (long)puVar2 != 0) {
      *(undefined8 **)(this + 0x40) = puVar2;
    }
  }
  return;
}

