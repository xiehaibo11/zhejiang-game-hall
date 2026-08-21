
/* v8::internal::Compiler::GetSharedFunctionInfo(v8::internal::FunctionLiteral*,
   v8::internal::Handle<v8::internal::Script>, v8::internal::Isolate*) */

ulong * v8::internal::Compiler::GetSharedFunctionInfo
                  (FunctionLiteral *param_1,undefined8 *param_2,Isolate *param_3)

{
  undefined4 *puVar1;
  Isolate *pIVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 local_38;
  
  local_38 = *param_2;
  puVar4 = (ulong *)Script::FindSharedFunctionInfo((Script *)&local_38,param_3,param_1);
  if (puVar4 == (ulong *)0x0) {
    puVar4 = (ulong *)Factory::NewSharedFunctionInfoForLiteral((Factory *)param_3,param_1,param_2,0)
    ;
  }
  else if (*(long *)(param_1 + 0x50) != 0) {
    uVar3 = *(uint *)(*puVar4 + 3);
    if (((uVar3 & 1) != 0) &&
       (uVar8 = *puVar4 & 0xffffffff00000000,
       *(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar3) - 1)) == 0x96)) {
      pIVar2 = param_3 + 0x95a0;
      uVar8 = *puVar4 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar4 + 3);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)pIVar2;
        if (puVar5 == *(ulong **)(param_3 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar2 = puVar5 + 1;
        *puVar5 = uVar8;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar8);
        uVar8 = *puVar5;
      }
      uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 3);
      if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)pIVar2;
        if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
          puVar6 = (ulong *)HandleScope::Extend(param_3);
        }
        *(ulong **)pIVar2 = puVar6 + 1;
        *puVar6 = uVar8;
      }
      else {
        puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar8);
      }
      uVar7 = (**(code **)**(undefined8 **)(param_1 + 0x50))
                        (*(undefined8 **)(param_1 + 0x50),param_3);
      puVar5 = (ulong *)Factory::NewUncompiledDataWithPreparseData
                                  ((Factory *)param_3,puVar6,*(undefined4 *)(*puVar5 + 7),
                                   *(undefined4 *)(*puVar5 + 0xb),uVar7);
      uVar10 = *puVar4;
      uVar8 = *puVar5;
      puVar1 = (undefined4 *)(uVar10 + 3);
      *puVar1 = (int)uVar8;
      if ((uVar8 & 1) != 0) {
        uVar9 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar9 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar10,puVar1,uVar8);
          uVar9 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar10,puVar1,uVar8);
        }
      }
    }
  }
  return puVar4;
}

