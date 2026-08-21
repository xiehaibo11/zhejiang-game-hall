
void spUnsignedShortArray_ensureCapacity(long param_1,ulong param_2)

{
  void *pvVar1;
  
  if (*(int *)(param_1 + 4) < (int)param_2) {
    *(int *)(param_1 + 4) = (int)param_2;
    pvVar1 = _spRealloc(*(void **)(param_1 + 8),
                        -(param_2 >> 0x1f & 1) & 0xfffffffe00000000 | (param_2 & 0xffffffff) << 1);
    *(void **)(param_1 + 8) = pvVar1;
  }
  return;
}

