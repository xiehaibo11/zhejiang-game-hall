
/* v8::internal::ValueSerializer::WriteUint64(unsigned long) */

void __thiscall v8::internal::ValueSerializer::WriteUint64(ValueSerializer *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte *pbVar5;
  void *pvVar6;
  byte *pbVar7;
  ulong uVar8;
  size_t __n;
  size_t local_60;
  byte local_54 [12];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pbVar5 = local_54;
  do {
    pbVar7 = pbVar5;
    bVar4 = (byte)param_1;
    param_1 = param_1 >> 7;
    *pbVar7 = bVar4 | 0x80;
    pbVar5 = pbVar7 + 1;
  } while (param_1 != 0);
  *pbVar7 = bVar4 & 0x7f;
  lVar2 = *(long *)(this + 0x18);
  __n = (long)(pbVar7 + 1) - (long)local_54;
  uVar1 = lVar2 + __n;
  if (*(ulong *)(this + 0x20) < uVar1) {
    local_60 = 0;
    uVar8 = *(ulong *)(this + 0x20) * 2;
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      uVar8 = uVar1;
    }
    if (*(long **)(this + 8) == (long *)0x0) {
      pvVar6 = realloc(*(void **)(this + 0x10),uVar8 + 0x40);
      local_60 = uVar8 + 0x40;
    }
    else {
      pvVar6 = (void *)(**(code **)(**(long **)(this + 8) + 0x30))();
    }
    if (pvVar6 == (void *)0x0) {
      this[0x29] = (ValueSerializer)0x1;
      goto LAB_0113f66c;
    }
    *(void **)(this + 0x10) = pvVar6;
    *(size_t *)(this + 0x20) = local_60;
    *(ulong *)(this + 0x18) = uVar1;
  }
  else {
    pvVar6 = *(void **)(this + 0x10);
    *(ulong *)(this + 0x18) = uVar1;
  }
  if (__n != 0) {
    memcpy((void *)((long)pvVar6 + lVar2),local_54,__n);
  }
LAB_0113f66c:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

