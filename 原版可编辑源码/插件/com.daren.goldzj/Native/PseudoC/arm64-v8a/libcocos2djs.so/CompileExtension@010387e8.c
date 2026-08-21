
/* v8::internal::Genesis::CompileExtension(v8::internal::Isolate*, v8::Extension*) */

bool v8::internal::Genesis::CompileExtension(Isolate *param_1,Extension *param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  size_t sVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  char *__s;
  ulong uVar11;
  char *local_a8;
  size_t sStack_a0;
  long local_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar9 = *(undefined8 *)(param_1 + 0x95a0);
  lVar10 = *(long *)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  local_98 = 0;
  lVar3 = Factory::NewExternalStringFromOneByte
                    ((Factory *)param_1,*(ExternalOneByteStringResource **)(param_2 + 0x18));
  if (lVar3 == 0) {
LAB_01038a54:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  __s = *(char **)(param_2 + 8);
  sVar4 = strlen(__s);
  lVar8 = *(long *)(param_1 + 0x9508);
  uVar11 = *(ulong *)(param_1 + 0x2bc8);
  local_a8 = __s;
  sStack_a0 = sVar4;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(param_1 + 0x95a0);
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar11;
    __s = local_a8;
    sVar4 = sStack_a0;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
  }
  uVar11 = SourceCodeCache::Lookup(lVar8 + 0x10,param_1,__s,sVar4,&local_98);
  lVar6 = local_98;
  if ((uVar11 & 1) == 0) {
    lStack_88 = Factory::NewStringFromUtf8((Factory *)param_1,&local_a8,0);
    if (lStack_88 == 0) goto LAB_01038a54;
    local_90 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 1;
    lVar6 = Compiler::GetSharedFunctionInfoForScript(param_1,lVar3,&local_90,0,param_2,0,0,9,1);
    if (lVar6 == 0) {
      local_98 = 0;
      bVar2 = false;
      goto LAB_010389e8;
    }
    local_98 = lVar6;
    SourceCodeCache::Add(lVar8 + 0x10,param_1,local_a8,sStack_a0,lVar6);
  }
  uVar7 = Factory::NewFunctionFromSharedFunctionInfo((Factory *)param_1,lVar6,puVar5,1);
  local_90 = *(undefined8 *)(param_1 + 0x2bc8);
  uVar11 = Context::global_object((Context *)&local_90);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(param_1 + 0x95a0);
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar11;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
  }
  lVar3 = Execution::TryCall(param_1,uVar7,puVar5,0,0,1,0);
  bVar2 = lVar3 != 0;
LAB_010389e8:
  *(undefined8 *)(param_1 + 0x95a0) = uVar9;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
  if (*(long *)(param_1 + 0x95a8) != lVar10) {
    *(long *)(param_1 + 0x95a8) = lVar10;
    HandleScope::DeleteExtensions(param_1);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}

