
/* ClipperLib::Clipper::ClearJoins() */

void __thiscall ClipperLib::Clipper::ClearJoins(Clipper *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  puVar2 = *(undefined8 **)(this + 0x20);
  puVar3 = *(undefined8 **)(this + 0x28);
  if (puVar3 != puVar2) {
                    /* try { // try from 0103587c to 011358c7 has its CatchHandler @ 0103587c
                       catch() { ... } // from try @ 0103587c with catch @ 0103587c
                       catch() { ... } // from try @ 010358cc with catch @ 0103587c */
    uVar4 = 0;
    pvVar1 = (void *)*puVar2;
    while( true ) {
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        puVar2 = *(undefined8 **)(this + 0x20);
        puVar3 = *(undefined8 **)(this + 0x28);
      }
      uVar4 = uVar4 + 1;
      if ((ulong)((long)puVar3 - (long)puVar2 >> 3) <= uVar4) break;
      pvVar1 = (void *)puVar2[uVar4];
    }
    if ((long)puVar3 - (long)puVar2 != 0) {
      *(undefined8 **)(this + 0x28) = puVar2;
    }
  }
  return;
}

