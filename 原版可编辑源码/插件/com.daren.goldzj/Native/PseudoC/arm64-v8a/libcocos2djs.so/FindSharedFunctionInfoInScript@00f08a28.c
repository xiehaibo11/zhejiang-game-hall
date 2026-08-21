
/* v8::internal::Debug::FindSharedFunctionInfoInScript(v8::internal::Handle<v8::internal::Script>,
   int) */

ulong * __thiscall
v8::internal::Debug::FindSharedFunctionInfoInScript
          (Debug *this,undefined8 *param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  ulong uVar6;
  int iVar7;
  ulong *unaff_x22;
  Isolate *pIVar8;
  uint uVar9;
  undefined8 local_b8;
  char local_b0;
  ScriptIterator aSStack_a8 [16];
  ulong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_78;
  char local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar9 = 0;
  while( true ) {
    local_70 = '\0';
    local_78 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0xffffffff;
    uStack_84 = param_3;
    SharedFunctionInfo::ScriptIterator::ScriptIterator
              (aSStack_a8,*(undefined8 *)(this + 0x88),*param_2);
    while (uVar3 = SharedFunctionInfo::ScriptIterator::Next(aSStack_a8), uVar6 = local_98,
          (int)uVar3 != 0) {
      SharedFunctionInfoFinder::NewCandidate((SharedFunctionInfoFinder *)&local_98,uVar3,0);
    }
    if ((int)local_98 == 0) break;
    IsCompiledScope::IsCompiledScope
              ((IsCompiledScope *)&local_b8,local_98,local_98 & 0xffffffff00000000);
    local_78 = local_b8;
    local_70 = local_b0;
    if (local_b0 != '\0') {
      pIVar4 = *(Isolate **)(this + 0x88);
      if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        unaff_x22 = *(ulong **)(pIVar4 + 0x95a0);
        if (unaff_x22 == *(ulong **)(pIVar4 + 0x95a8)) {
          unaff_x22 = (ulong *)HandleScope::Extend(pIVar4);
        }
        *(ulong **)(pIVar4 + 0x95a0) = unaff_x22 + 1;
        *unaff_x22 = uVar6;
      }
      else {
        unaff_x22 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar6);
      }
      if (1 < uVar9) {
        CreateBreakInfo(this,unaff_x22);
      }
      iVar7 = 1;
LAB_00f08c14:
      if (iVar7 == 2) {
        unaff_x22 = (ulong *)(*(long *)(this + 0x88) + 0xa0);
      }
      if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return unaff_x22;
    }
    pIVar8 = *(Isolate **)(this + 0x88);
    uVar3 = *(undefined8 *)(pIVar8 + 0x95a0);
    lVar1 = *(long *)(pIVar8 + 0x95a8);
    *(int *)(pIVar8 + 0x95b0) = *(int *)(pIVar8 + 0x95b0) + 1;
    pIVar4 = *(Isolate **)(this + 0x88);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar6;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar6);
    }
    uVar6 = Compiler::Compile(puVar5,1,&local_78);
    iVar7 = 0;
    if ((uVar6 & 1) == 0) {
      iVar7 = 2;
    }
    if (pIVar8 != (Isolate *)0x0) {
      *(undefined8 *)(pIVar8 + 0x95a0) = uVar3;
      *(int *)(pIVar8 + 0x95b0) = *(int *)(pIVar8 + 0x95b0) + -1;
      if (*(long *)(pIVar8 + 0x95a8) != lVar1) {
        *(long *)(pIVar8 + 0x95a8) = lVar1;
        HandleScope::DeleteExtensions(pIVar8);
      }
    }
    if (iVar7 != 0) goto LAB_00f08c14;
    uVar9 = uVar9 + 1;
  }
  iVar7 = 2;
  goto LAB_00f08c14;
}

