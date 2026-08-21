
/* v8::internal::AsmJsScanner::ResetLocals() */

void __thiscall v8::internal::AsmJsScanner::ResetLocals(AsmJsScanner *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  
  if (*(long *)(this + 0x70) != 0) {
    puVar1 = *(void **)(this + 0x68);
    while (puVar1 != (void *)0x0) {
      pvVar4 = (void *)*puVar1;
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar4;
    }
    lVar2 = *(long *)(this + 0x60);
    *(undefined8 *)(this + 0x68) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x58) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x70) = 0;
  }
  return;
}

