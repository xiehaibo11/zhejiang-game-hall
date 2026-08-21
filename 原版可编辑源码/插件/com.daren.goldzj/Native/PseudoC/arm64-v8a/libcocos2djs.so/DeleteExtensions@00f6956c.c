
/* v8::internal::HandleScope::DeleteExtensions(v8::internal::Isolate*) */

void v8::internal::HandleScope::DeleteExtensions(Isolate *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 0x95c0);
  lVar1 = *(long *)(lVar2 + 0x18);
  if (lVar1 != 0) {
    uVar3 = *(ulong *)(param_1 + 0x95a8);
    do {
      lVar1 = lVar1 + -1;
      uVar4 = *(ulong *)(*(long *)(lVar2 + 8) + lVar1 * 8);
      if ((uVar4 <= uVar3) && (uVar3 <= uVar4 + 0x1ff0)) {
        return;
      }
      *(long *)(lVar2 + 0x18) = lVar1;
      if (*(void **)(lVar2 + 0x68) != (void *)0x0) {
        operator_delete__(*(void **)(lVar2 + 0x68));
        lVar1 = *(long *)(lVar2 + 0x18);
      }
      *(ulong *)(lVar2 + 0x68) = uVar4;
    } while (lVar1 != 0);
  }
  return;
}

