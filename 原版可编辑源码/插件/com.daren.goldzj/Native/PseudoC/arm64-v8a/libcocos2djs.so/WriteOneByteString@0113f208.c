
/* v8::internal::ValueSerializer::WriteOneByteString(v8::internal::Vector<unsigned char const>) */

void v8::internal::ValueSerializer::WriteOneByteString
               (ValueSerializer *param_1,void *param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  size_t local_38;
  
  WriteVarint<unsigned_int>(param_1,param_3);
  lVar2 = *(long *)(param_1 + 0x18);
  uVar1 = lVar2 + (int)param_3;
  if (*(ulong *)(param_1 + 0x20) < uVar1) {
    local_38 = 0;
    uVar4 = *(ulong *)(param_1 + 0x20) * 2;
    if (uVar4 < uVar1 || uVar4 - uVar1 == 0) {
      uVar4 = uVar1;
    }
    if (*(long **)(param_1 + 8) == (long *)0x0) {
      pvVar3 = realloc(*(void **)(param_1 + 0x10),uVar4 + 0x40);
      local_38 = uVar4 + 0x40;
    }
    else {
      pvVar3 = (void *)(**(code **)(**(long **)(param_1 + 8) + 0x30))();
    }
    if (pvVar3 == (void *)0x0) {
      param_1[0x29] = (ValueSerializer)0x1;
      return;
    }
    *(void **)(param_1 + 0x10) = pvVar3;
    *(size_t *)(param_1 + 0x20) = local_38;
  }
  else {
    pvVar3 = *(void **)(param_1 + 0x10);
  }
  *(ulong *)(param_1 + 0x18) = uVar1;
  if (param_3 != 0) {
    memcpy((void *)((long)pvVar3 + lVar2),param_2,(long)(int)param_3);
  }
  return;
}

