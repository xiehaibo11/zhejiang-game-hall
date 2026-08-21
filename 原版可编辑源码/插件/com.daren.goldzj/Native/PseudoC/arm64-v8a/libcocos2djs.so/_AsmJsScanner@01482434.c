
/* v8::internal::AsmJsScanner::~AsmJsScanner() */

void __thiscall v8::internal::AsmJsScanner::~AsmJsScanner(AsmJsScanner *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = *(void **)(this + 0xb8);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0xa8);
  *(undefined8 *)(this + 0xa8) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = *(void **)(this + 0x90);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x80);
  *(undefined8 *)(this + 0x80) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = *(void **)(this + 0x68);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x58);
  *(undefined8 *)(this + 0x58) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  if (((byte)this[0x38] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x48));
  return;
}

