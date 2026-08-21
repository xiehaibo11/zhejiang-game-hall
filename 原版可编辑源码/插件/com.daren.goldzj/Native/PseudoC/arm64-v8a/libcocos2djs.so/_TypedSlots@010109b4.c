
/* v8::internal::TypedSlots::~TypedSlots() */

void __thiscall v8::internal::TypedSlots::~TypedSlots(TypedSlots *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this = &PTR__TypedSlots_01ca94d0;
  puVar3 = *(undefined8 **)(this + 8);
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    pvVar2 = (void *)puVar3[1];
    if (pvVar2 != (void *)0x0) {
      puVar3[2] = pvVar2;
      operator_delete(pvVar2);
    }
    operator_delete(puVar3);
    puVar3 = puVar1;
  }
  operator_delete(this);
  return;
}

