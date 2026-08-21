
/* ClipperLib::Clipper::DisposeIntersectNodes() */

void __thiscall ClipperLib::Clipper::DisposeIntersectNodes(Clipper *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  puVar1 = *(undefined8 **)(this + 0x50);
  puVar3 = *(undefined8 **)(this + 0x58);
  if (puVar3 != puVar1) {
    uVar5 = 0;
    pvVar2 = (void *)*puVar1;
    puVar4 = puVar3;
    while( true ) {
      puVar3 = puVar1;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        puVar3 = *(undefined8 **)(this + 0x50);
        puVar4 = *(undefined8 **)(this + 0x58);
      }
      uVar5 = uVar5 + 1;
      if ((ulong)((long)puVar4 - (long)puVar3 >> 3) <= uVar5) break;
      pvVar2 = (void *)puVar3[uVar5];
      puVar1 = puVar3;
    }
  }
  *(undefined8 **)(this + 0x58) = puVar3;
  return;
}

