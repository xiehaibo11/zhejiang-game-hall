
/* v8::internal::SourceTextModule::ResolveExportUsingStarExports(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SourceTextModule>, v8::internal::Handle<v8::internal::String>,
   v8::internal::Handle<v8::internal::String>, v8::internal::MessageLocation, bool,
   v8::internal::Module::ResolveSet*) */

int * v8::internal::SourceTextModule::ResolveExportUsingStarExports
                (Isolate *param_1,ulong *param_2,undefined8 param_3,ulong *param_4,
                undefined8 param_5,ulong param_6,undefined8 param_7)

{
  Isolate *pIVar1;
  int *piVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  local_80 = *param_4;
  uVar10 = *(ulong *)(param_1 + 0x5e8);
  if (((int)uVar10 != (int)local_80) &&
     (((*(ushort *)((local_80 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_80 - 1)) < 0x20 &&
       (*(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) < 0x20)) ||
      (uVar10 = String::SlowEquals((String *)&local_80,uVar10), (uVar10 & 1) == 0)))) {
    local_80 = *param_2;
    pIVar1 = param_1 + 0x95a0;
    uVar10 = info((SourceTextModule *)&local_80);
    uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + 0xb);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)pIVar1;
      if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar4 + 1;
      *puVar4 = uVar10;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
    }
    uVar10 = *puVar4;
    uVar3 = *(uint *)(uVar10 + 3);
    if (1 < (int)uVar3) {
      iVar14 = 0;
      piVar13 = (int *)0x0;
      uVar12 = 1;
      while( true ) {
        uVar10 = uVar10 & 0xffffffff00000000 | (ulong)*(uint *)(uVar10 + (long)iVar14 + 7);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = *(ulong **)pIVar1;
          if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
            puVar5 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar5 + 1;
          *puVar5 = uVar10;
        }
        else {
          puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
          uVar10 = *puVar5;
        }
        if (*(int *)(uVar10 + 3) == *(int *)(param_1 + 0xa0)) {
          uVar10 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x27);
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar6 = *(ulong **)pIVar1;
            if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
              puVar6 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar1 = puVar6 + 1;
            *puVar6 = uVar10;
          }
          else {
            puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
          }
          MessageLocation::MessageLocation
                    ((MessageLocation *)&local_80,puVar6,*(int *)(*puVar5 + 0x17) >> 1,
                     *(int *)(*puVar5 + 0x1b) >> 1);
          uStack_98 = uStack_78;
          local_a0 = local_80;
          uStack_88 = uStack_68;
          uStack_90 = uStack_70;
          piVar7 = (int *)ResolveImport(param_1,param_2,param_4,*(int *)(*puVar5 + 0xf) >> 1,
                                        &local_a0,0,param_7);
          if (piVar7 == (int *)0x0) {
            if ((*(ulong *)(param_1 + 0x2bd8) & 1) == 0) {
              return (int *)0x0;
            }
            if ((int)*(ulong *)(param_1 + 0x2bd8) != *(int *)(param_1 + 0xa8)) {
              return (int *)0x0;
            }
          }
          else {
            piVar2 = piVar7;
            if (piVar13 != (int *)0x0) {
              piVar2 = piVar13;
            }
            piVar13 = piVar2;
            if (*piVar2 != *piVar7) {
              puVar8 = (undefined8 *)
                       Factory::NewSyntaxError((Factory *)param_1,0xdf,param_3,param_4,0);
              uVar9 = *puVar8;
              goto LAB_0112c31c;
            }
          }
        }
        if (uVar3 >> 1 <= uVar12) break;
        uVar10 = *puVar4;
        iVar14 = iVar14 + 4;
        uVar12 = uVar12 + 1;
      }
      if (piVar13 != (int *)0x0) {
        uVar10 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 3);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar4 = *(ulong **)pIVar1;
          if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
            puVar4 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar4 + 1;
          *puVar4 = uVar10;
        }
        else {
          puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar10);
        }
        puVar4 = (ulong *)ObjectHashTableBase<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>
                          ::Put(puVar4,param_4,piVar13);
        uVar12 = *param_2;
        uVar10 = *puVar4;
        *(int *)(uVar12 + 3) = (int)uVar10;
        if ((uVar10 & 1) != 0) {
          uVar11 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar11 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar12,uVar12 + 3,uVar10);
            uVar11 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
          }
          if ((uVar11 & 0x18) != 0) {
            if ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0) {
              Heap_GenerationalBarrierSlow(uVar12,uVar12 + 3,uVar10);
              return piVar13;
            }
            return piVar13;
          }
          return piVar13;
        }
        return piVar13;
      }
    }
  }
  if ((param_6 & 1) != 0) {
    puVar8 = (undefined8 *)Factory::NewSyntaxError((Factory *)param_1,0x148,param_3,param_4,0);
    uVar9 = *puVar8;
LAB_0112c31c:
    Isolate::Throw(param_1,uVar9,param_5);
  }
  return (int *)0x0;
}

