
/* v8::internal::Isolate::StackOverflow() */

undefined8 __thiscall v8::internal::Isolate::StackOverflow(Isolate *this)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  char *__s;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  char *local_78;
  size_t sStack_70;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> aPStack_68 [16];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (FLAG_correctness_fuzzer_suppressions != '\0') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Aborting on stack overflow");
  }
  pIVar1 = this + 0x95a0;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::PerIsolateAssertScope
            (aPStack_68,this);
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(this + 0x95a8);
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  uVar8 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
  uVar8 = uVar8 | *(uint *)((uVar8 | *(uint *)((uVar8 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) +
                                              0x13)) + 0x397);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = puVar2;
    if (puVar3 == puVar2) {
      puVar5 = (ulong *)HandleScope::Extend(this);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar8;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar8);
  }
  __s = (char *)MessageFormatter::TemplateString(0xd9);
  sStack_70 = strlen(__s);
  local_78 = __s;
  lVar6 = Factory::NewStringFromOneByte(this,&local_78,0);
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)ErrorUtils::Construct(this,puVar5,puVar5,lVar6,2,0,1);
    if (((puVar7 != (undefined8 *)0x0) && (Throw(this,*puVar7,0), FLAG_verify_heap != '\0')) &&
       (FLAG_stress_compaction != '\0')) {
      Heap::CollectAllGarbage(this + 0x8850,0,0x15,0);
    }
    uVar9 = *(undefined8 *)(this + 0x180);
    *(ulong **)pIVar1 = puVar2;
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
    if (*(ulong **)(this + 0x95a8) != puVar3) {
      *(ulong **)(this + 0x95a8) = puVar3;
      HandleScope::DeleteExtensions(this);
    }
    PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::~PerIsolateAssertScope
              (aPStack_68);
    if (*(long *)(lVar4 + 0x28) == local_58) {
      return uVar9;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

