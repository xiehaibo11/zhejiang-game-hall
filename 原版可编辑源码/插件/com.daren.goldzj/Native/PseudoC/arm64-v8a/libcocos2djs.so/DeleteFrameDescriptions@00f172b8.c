
/* v8::internal::Deoptimizer::DeleteFrameDescriptions() */

void __thiscall v8::internal::Deoptimizer::DeleteFrameDescriptions(Deoptimizer *this)

{
  undefined8 *puVar1;
  void *__ptr;
  int iVar2;
  long lVar3;
  
  if (*(void **)(this + 0x38) != (void *)0x0) {
    free(*(void **)(this + 0x38));
  }
  iVar2 = *(int *)(this + 0x40);
  puVar1 = *(undefined8 **)(this + 0x48);
  if (0 < iVar2) {
    lVar3 = 0;
    __ptr = (void *)*puVar1;
    while( true ) {
      if ((__ptr != (void *)0x0) && (__ptr != *(void **)(this + 0x38))) {
        free(__ptr);
        iVar2 = *(int *)(this + 0x40);
        puVar1 = *(undefined8 **)(this + 0x48);
      }
      lVar3 = lVar3 + 1;
      if (iVar2 <= lVar3) break;
      __ptr = (void *)puVar1[lVar3];
    }
  }
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete__(puVar1);
  }
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  return;
}

