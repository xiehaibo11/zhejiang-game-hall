
/* v8::internal::WasmInstanceObject::CopyTableEntries(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmInstanceObject>, unsigned int, unsigned int, unsigned int,
   unsigned int, unsigned int) */

undefined8
v8::internal::WasmInstanceObject::CopyTableEntries
          (Isolate *param_1,ulong *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
          uint param_7)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  
  uVar6 = *param_2 & 0xffffffff00000000;
  uVar7 = uVar6 | *(uint *)(*param_2 + 0x8f);
  iVar9 = *(int *)(uVar7 + 3);
  uVar8 = iVar9 >> 1;
  if (iVar9 < 2 || uVar8 <= param_3) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","table_dst_index < instance->tables().length()");
  }
  if (param_4 < uVar8) {
    pIVar1 = param_1 + 0x95a0;
    uVar6 = uVar6 | *(uint *)(uVar7 + (long)(int)(param_3 << 2) + 7);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pIVar1;
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar3 + 1;
      *puVar3 = uVar6;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
    }
    uVar6 = *param_2 & 0xffffffff00000000;
    uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)(*param_2 + 0x8f)) + (long)(int)(param_4 << 2) + 7);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)pIVar1;
      if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar4 + 1;
      *puVar4 = uVar6;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
    }
    uVar5 = 0;
    uVar8 = *(int *)(*puVar3 + 0xf) >> 1;
    if ((param_7 <= uVar8) && ((ulong)param_5 <= (ulong)uVar8 - (ulong)param_7)) {
      uVar5 = 0;
      uVar8 = *(int *)(*puVar4 + 0xf) >> 1;
      if ((param_7 <= uVar8) && ((ulong)param_6 <= (ulong)uVar8 - (ulong)param_7)) {
        uVar5 = 1;
        if (((param_7 != 0) && (param_3 != param_4 || param_5 != param_6)) && (param_7 != 0)) {
          uVar8 = 0;
          iVar9 = -1;
          do {
            uVar2 = param_7 + iVar9;
            if (param_5 <= param_6) {
              uVar2 = uVar8;
            }
            uVar5 = WasmTableObject::Get(param_1,puVar4,uVar2 + param_6);
            WasmTableObject::Set(param_1,puVar3,uVar2 + param_5,uVar5);
            uVar8 = uVar8 + 1;
            iVar9 = iVar9 + -1;
          } while (param_7 != uVar8);
          uVar5 = 1;
        }
      }
    }
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","table_src_index < instance->tables().length()");
}

