
/* v8::internal::ParseInfo::~ParseInfo() */

void __thiscall v8::internal::ParseInfo::~ParseInfo(ParseInfo *this)

{
  long *plVar1;
  void *pvVar2;
  undefined8 *puVar3;
  Zone *this_00;
  void *pvVar4;
  
  puVar3 = *(void **)(this + 0xd8);
  while (puVar3 != (void *)0x0) {
    pvVar2 = (void *)*puVar3;
    operator_delete(puVar3);
    puVar3 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0xa0);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  if (pvVar2 != (void *)0x0) {
    puVar3 = *(void **)((long)pvVar2 + 8);
    while (puVar3 != (void *)0x0) {
      pvVar4 = (void *)*puVar3;
      operator_delete(puVar3);
      puVar3 = pvVar4;
    }
    operator_delete(pvVar2);
  }
  puVar3 = *(undefined8 **)(this + 0x70);
  *(undefined8 *)(this + 0x70) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    free((void *)*puVar3);
    operator_delete(puVar3);
  }
  plVar1 = *(long **)(this + 0x68);
  *(undefined8 *)(this + 0x68) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = *(long **)(this + 0x60);
  *(undefined8 *)(this + 0x60) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  this_00 = *(Zone **)this;
  *(undefined8 *)this = 0;
  if (this_00 == (Zone *)0x0) {
    return;
  }
  Zone::~Zone(this_00);
  operator_delete(this_00);
  return;
}

