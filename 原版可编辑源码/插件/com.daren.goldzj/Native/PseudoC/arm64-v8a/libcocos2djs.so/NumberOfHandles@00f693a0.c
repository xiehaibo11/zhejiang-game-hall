
/* v8::internal::HandleScope::NumberOfHandles(v8::internal::Isolate*) */

int v8::internal::HandleScope::NumberOfHandles(Isolate *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x95c0) + 0x18);
  iVar1 = (int)lVar2;
  if (iVar1 != 0) {
    return (int)((ulong)(*(long *)(param_1 + 0x95a0) -
                        *(long *)(*(long *)(*(long *)(param_1 + 0x95c0) + 8) + lVar2 * 8 + -8)) >> 3
                ) + iVar1 * 0x3fe + -0x3fe;
  }
  return 0;
}

