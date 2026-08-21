
/* v8::internal::SourceTextModule::InnerModuleEvaluation(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SourceTextModule>,
   v8::internal::ZoneForwardList<v8::internal::Handle<v8::internal::SourceTextModule> >*, unsigned
   int*) */

Isolate * v8::internal::SourceTextModule::InnerModuleEvaluation
                    (Isolate *param_1,ulong *param_2,long *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  Isolate *pIVar11;
  long *plVar12;
  ulong uVar13;
  Zone *this;
  ulong uVar14;
  int iVar15;
  ulong local_68;
  
  uVar7 = GetCurrentStackPosition();
  if (uVar7 < *(ulong *)(param_1 + 0x58)) {
    Isolate::StackOverflow(param_1);
  }
  else {
    uVar7 = *param_2;
    iVar15 = *(int *)(uVar7 + 0xb) >> 1;
    if (iVar15 - 4U < 2) {
      return param_1 + 0xa0;
    }
    if (iVar15 != 6) {
      if (iVar15 != 3) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","module->status() == kInstantiated");
      }
      pIVar11 = param_1 + 0x95a0;
      local_68 = uVar7;
      Module::SetStatus((Module *)&local_68,4);
      *(int *)(*param_2 + 0x37) = *param_4 << 1;
      *(int *)(*param_2 + 0x3b) = *param_4 << 1;
      puVar8 = (ulong *)ArrayList::New(param_1,0);
      uVar14 = *param_2;
      uVar7 = *puVar8;
      *(int *)(uVar14 + 0x2f) = (int)uVar7;
      if ((uVar7 & 1) != 0) {
        uVar13 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar13 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar14,uVar14 + 0x2f,uVar7);
          uVar13 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0x2f,uVar7);
        }
      }
      *param_4 = *param_4 + 1;
      this = (Zone *)param_3[1];
      plVar12 = *(long **)(this + 0x10);
      if ((ulong)(*(long *)(this + 0x18) - (long)plVar12) < 0x10) {
        plVar12 = (long *)Zone::NewExpand(this,0x10);
      }
      else {
        *(long **)(this + 0x10) = plVar12 + 2;
      }
      plVar12[1] = (long)param_2;
      *plVar12 = *param_3;
      *param_3 = (long)plVar12;
      uVar7 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0x23);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)pIVar11;
        if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar11 = puVar8 + 1;
        *puVar8 = uVar7;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
        uVar7 = *puVar8;
      }
      uVar4 = *(uint *)(uVar7 + 3);
      if (1 < (int)uVar4) {
        iVar15 = 0;
        uVar14 = 1;
        while( true ) {
          uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + (long)iVar15 + 7);
          if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar9 = *(ulong **)pIVar11;
            if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
              puVar9 = (ulong *)HandleScope::Extend(param_1);
            }
            *(ulong **)pIVar11 = puVar9 + 1;
            *puVar9 = uVar7;
          }
          else {
            puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
            uVar7 = *puVar9;
          }
          if (*(short *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) == 0x44) {
            if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar9 = *(ulong **)pIVar11;
              if (puVar9 == *(ulong **)(param_1 + 0x95a8)) {
                puVar9 = (ulong *)HandleScope::Extend(param_1);
              }
              *(ulong **)pIVar11 = puVar9 + 1;
              *puVar9 = uVar7;
            }
            else {
              puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
            }
            lVar10 = InnerModuleEvaluation(param_1,puVar9,param_3,param_4);
            if (lVar10 == 0) {
              return (Isolate *)0x0;
            }
            iVar5 = *(int *)(*puVar9 + 0xb);
            if ((iVar5 < 0) || (uVar1 = iVar5 >> 1, uVar1 < 4)) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","required_module->status() >= kEvaluating");
            }
            if (uVar1 == 4) {
              iVar5 = *(int *)(*param_2 + 0x3b) >> 1;
              iVar2 = *(int *)(*puVar9 + 0x3b) >> 1;
              if (iVar5 <= iVar2) {
                iVar2 = iVar5;
              }
              *(int *)(*param_2 + 0x3b) = iVar2 << 1;
              bVar6 = *(byte *)(*puVar9 + 0x43);
            }
            else {
              if (uVar1 == 6) {
                    /* WARNING: Subroutine does not return */
                V8_Fatal("Check failed: %s.","required_module->status() != kErrored");
              }
              puVar9 = (ulong *)GetAsyncCycleRoot(param_1,puVar9);
              uVar7 = *puVar9;
              if ((*(int *)(uVar7 + 0xb) < 0) || (uVar1 = *(int *)(uVar7 + 0xb) >> 1, uVar1 < 5)) {
                    /* WARNING: Subroutine does not return */
                V8_Fatal("Check failed: %s.","required_module->status() >= kEvaluated");
              }
              if (uVar1 == 6) goto LAB_0112def0;
              bVar6 = *(byte *)(uVar7 + 0x43);
            }
            if ((bVar6 >> 2 & 1) != 0) {
              *(uint *)(*param_2 + 0x3f) = *(uint *)(*param_2 + 0x3f) + 2 & 0xfffffffe;
              local_68 = *puVar9;
              AddAsyncParentModule((SourceTextModule *)&local_68,param_1,param_2);
            }
          }
          else {
            lVar10 = Module::Evaluate(param_1,puVar9);
            if (lVar10 == 0) {
              return (Isolate *)0x0;
            }
          }
          if (uVar4 >> 1 <= uVar14) break;
          uVar7 = *puVar8;
          iVar15 = iVar15 + 4;
          uVar14 = uVar14 + 1;
        }
      }
      uVar7 = *param_2;
      pIVar11 = param_1 + 0xa0;
      if (*(int *)(uVar7 + 0x3f) < 2) {
        if ((*(uint *)(uVar7 + 0x43) >> 1 & 1) == 0) {
          pIVar11 = (Isolate *)ExecuteModule();
          if (pIVar11 == (Isolate *)0x0) {
            return (Isolate *)0x0;
          }
        }
        else {
          ExecuteAsyncModule(param_1,param_2);
        }
      }
      else {
        *(uint *)(uVar7 + 0x43) = *(uint *)(uVar7 + 0x43) & 0xfffffffe | 4;
      }
      if ((*(uint *)(*param_2 + 0x37) ^ *(uint *)(*param_2 + 0x3b)) < 2) {
        do {
          piVar3 = (int *)((long *)*param_3)[1];
          *param_3 = *(long *)*param_3;
          local_68 = *(ulong *)piVar3;
          Module::SetStatus((Module *)&local_68,5);
        } while (*piVar3 != (int)*param_2);
        return pIVar11;
      }
      return pIVar11;
    }
LAB_0112def0:
    Isolate::Throw(param_1,uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0x13),0);
  }
  return (Isolate *)0x0;
}

