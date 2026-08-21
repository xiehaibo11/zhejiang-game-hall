
/* v8::internal::SourceTextModule::Evaluate(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SourceTextModule>) */

long v8::internal::SourceTextModule::Evaluate(Isolate *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long **pplVar5;
  long local_98;
  undefined4 local_8c;
  long *local_88;
  Zone *pZStack_80;
  Zone aZStack_78 [64];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(*param_2 + 0xb) >> 1;
  if ((iVar1 != 3) && (iVar1 != 5)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "module->status() == kInstantiated || module->status() == kEvaluated");
  }
  Zone::Zone(aZStack_78,*(AccountingAllocator **)(param_1 + 0x95d0),
             "../../src/objects/source-text-module.cc:665");
  local_88 = (long *)0x0;
  local_8c = 0;
  pZStack_80 = aZStack_78;
  lVar4 = InnerModuleEvaluation(param_1,param_2,&local_88,&local_8c);
  plVar3 = local_88;
  if (lVar4 == 0) {
    for (; lVar4 = 0, plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if ((*(uint *)(*(long *)plVar3[1] + 0xb) & 0xfffffffe) != 8) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","descendant->status() == kEvaluating");
      }
      local_98 = *(long *)plVar3[1];
      Module::RecordErrorUsingPendingException((Module *)&local_98,param_1);
    }
  }
  pplVar5 = &local_88;
  do {
    pplVar5 = (long **)*pplVar5;
  } while (pplVar5 != (long **)0x0);
  Zone::~Zone(aZStack_78);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

