
/* v8::internal::CallOptimization::LookupHolderOfExpectedType(v8::internal::Handle<v8::internal::Map>,
   v8::internal::CallOptimization::HolderLookup*) const */

ulong * __thiscall
v8::internal::CallOptimization::LookupHolderOfExpectedType
          (CallOptimization *this,ulong *param_2,undefined4 *param_3)

{
  ulong uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  undefined4 uVar4;
  ulong *puVar5;
  undefined8 local_28;
  
  if (*(ushort *)(*param_2 + 7) < 0xaa) {
LAB_017b0544:
    uVar4 = 0;
    puVar5 = (ulong *)0x0;
  }
  else {
    if (*(undefined8 **)(this + 0x10) != (undefined8 *)0x0) {
      local_28 = **(undefined8 **)(this + 0x10);
      uVar1 = FunctionTemplateInfo::IsTemplateFor((FunctionTemplateInfo *)&local_28,*param_2);
      if ((uVar1 & 1) == 0) {
        uVar1 = *param_2;
        if (*(short *)(uVar1 + 7) == 0xab) {
          pIVar2 = (Isolate *)(uVar1 & 0xffffffff00000000);
          if (*(uint *)(uVar1 + 0xf) != *(uint *)(pIVar2 + 0xb0)) {
            uVar1 = (ulong)pIVar2 | (ulong)*(uint *)(uVar1 + 0xf);
            if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar5 = *(ulong **)(pIVar2 + 0x95a0);
              if (puVar5 == *(ulong **)(pIVar2 + 0x95a8)) {
                puVar5 = (ulong *)HandleScope::Extend(pIVar2);
              }
              *(ulong **)(pIVar2 + 0x95a0) = puVar5 + 1;
              *puVar5 = uVar1;
            }
            else {
              puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar1);
              uVar1 = *puVar5;
            }
            pIVar2 = (Isolate *)(uVar1 & 0xffffffff00000000);
            uVar1 = (ulong)pIVar2 | (ulong)*(uint *)(uVar1 - 1);
            if (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar3 = *(ulong **)(pIVar2 + 0x95a0);
              if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
                puVar3 = (ulong *)HandleScope::Extend(pIVar2);
              }
              *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
              *puVar3 = uVar1;
            }
            else {
              puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8),uVar1)
              ;
            }
            local_28 = **(undefined8 **)(this + 0x10);
            uVar1 = FunctionTemplateInfo::IsTemplateFor((FunctionTemplateInfo *)&local_28,*puVar3);
            if ((uVar1 & 1) != 0) {
              uVar4 = 2;
              goto LAB_017b054c;
            }
          }
        }
        goto LAB_017b0544;
      }
    }
    puVar5 = (ulong *)0x0;
    uVar4 = 1;
  }
LAB_017b054c:
  *param_3 = uVar4;
  return puVar5;
}

