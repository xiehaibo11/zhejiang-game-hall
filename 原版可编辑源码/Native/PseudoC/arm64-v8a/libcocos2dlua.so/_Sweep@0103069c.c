
/* p2t::Sweep::~Sweep() */

void __thiscall p2t::Sweep::~Sweep(Sweep *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  puVar1 = *(undefined8 **)this;
  puVar3 = *(undefined8 **)(this + 8);
  if (puVar3 != puVar1) {
    uVar5 = 0;
    pvVar2 = (void *)*puVar1;
    puVar4 = puVar3;
    while( true ) {
      puVar3 = puVar1;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        puVar3 = *(undefined8 **)this;
        puVar4 = *(undefined8 **)(this + 8);
      }
      uVar5 = uVar5 + 1;
      if ((ulong)((long)puVar4 - (long)puVar3 >> 3) <= uVar5) break;
      pvVar2 = (void *)puVar3[uVar5];
      puVar1 = puVar3;
    }
  }
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 8) = puVar3;
    operator_delete(puVar3);
    return;
  }
  return;
}

