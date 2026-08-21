
/* v8::internal::Deoptimizer::Grab(v8::internal::Isolate*) */

long v8::internal::Deoptimizer::Grab(Isolate *param_1)

{
  undefined8 *puVar1;
  void *__ptr;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x9570) + 0x20);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(result) != nullptr");
  }
  if (*(void **)(lVar3 + 0x38) != (void *)0x0) {
    free(*(void **)(lVar3 + 0x38));
  }
  iVar2 = *(int *)(lVar3 + 0x40);
  puVar1 = *(undefined8 **)(lVar3 + 0x48);
  if (0 < iVar2) {
    lVar4 = 0;
    __ptr = (void *)*puVar1;
    while( true ) {
      if ((__ptr != (void *)0x0) && (__ptr != *(void **)(lVar3 + 0x38))) {
        free(__ptr);
        iVar2 = *(int *)(lVar3 + 0x40);
        puVar1 = *(undefined8 **)(lVar3 + 0x48);
      }
      lVar4 = lVar4 + 1;
      if (iVar2 <= lVar4) break;
      __ptr = (void *)puVar1[lVar4];
    }
  }
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete__(puVar1);
  }
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined8 *)(*(long *)(param_1 + 0x9570) + 0x20) = 0;
  return lVar3;
}

