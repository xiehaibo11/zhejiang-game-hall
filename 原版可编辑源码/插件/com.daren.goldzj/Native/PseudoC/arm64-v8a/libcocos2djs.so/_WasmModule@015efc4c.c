
/* v8::internal::wasm::WasmModule::~WasmModule() */

void __thiscall v8::internal::wasm::WasmModule::~WasmModule(WasmModule *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 *puVar4;
  Zone *this_00;
  void *pvVar5;
  void *pvVar6;
  
  if (((byte)this[0x188] & 1) != 0) {
    operator_delete(*(void **)(this + 0x198));
  }
  puVar4 = *(undefined8 **)(this + 0x180);
  *(undefined8 *)(this + 0x180) = 0;
  if (puVar4 != (undefined8 *)0x0) {
    puVar1 = (void *)puVar4[2];
    while (puVar1 != (void *)0x0) {
      pvVar5 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar5;
    }
    pvVar5 = (void *)*puVar4;
    *puVar4 = 0;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
    operator_delete(puVar4);
  }
  puVar4 = *(void **)(this + 0x160);
  while (puVar4 != (void *)0x0) {
    pvVar5 = (void *)*puVar4;
    operator_delete(puVar4);
    puVar4 = pvVar5;
  }
  pvVar5 = *(void **)(this + 0x150);
  *(undefined8 *)(this + 0x150) = 0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(this + 0x130);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0x138) = pvVar5;
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(this + 0x118);
  if (pvVar5 != (void *)0x0) {
    pvVar2 = pvVar5;
    pvVar3 = *(void **)(this + 0x120);
    if (*(void **)(this + 0x120) != pvVar5) {
      do {
        pvVar2 = *(void **)((long)pvVar3 + -0x20);
        pvVar6 = (void *)((long)pvVar3 + -0x38);
        if (pvVar2 != (void *)0x0) {
          *(void **)((long)pvVar3 + -0x18) = pvVar2;
          operator_delete(pvVar2);
        }
        pvVar3 = pvVar6;
      } while (pvVar5 != pvVar6);
      pvVar2 = *(void **)(this + 0x118);
    }
    *(void **)(this + 0x120) = pvVar5;
    operator_delete(pvVar2);
  }
  pvVar5 = *(void **)(this + 0x100);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0x108) = pvVar5;
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(this + 0xe8);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0xf0) = pvVar5;
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(this + 0xd0);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0xd8) = pvVar5;
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(this + 0xb8);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0xc0) = pvVar5;
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(this + 0xa0);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0xa8) = pvVar5;
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(this + 0x88);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0x90) = pvVar5;
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(this + 0x70);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0x78) = pvVar5;
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(this + 0x58);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0x60) = pvVar5;
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(this + 0x18);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0x20) = pvVar5;
    operator_delete(pvVar5);
  }
  this_00 = *(Zone **)this;
  *(undefined8 *)this = 0;
  if (this_00 != (Zone *)0x0) {
    Zone::~Zone(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}

