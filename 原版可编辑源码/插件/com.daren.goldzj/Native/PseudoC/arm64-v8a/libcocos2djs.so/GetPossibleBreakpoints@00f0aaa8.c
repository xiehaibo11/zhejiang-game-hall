
/* v8::internal::Debug::GetPossibleBreakpoints(v8::internal::Handle<v8::internal::Script>, int, int,
   bool, std::__ndk1::vector<v8::internal::BreakLocation,
   std::__ndk1::allocator<v8::internal::BreakLocation> >*) */

uint __thiscall
v8::internal::Debug::GetPossibleBreakpoints
          (Debug *this,undefined8 *param_2,int param_3,int param_4,uint param_5,undefined8 param_6)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  ulong *puVar6;
  int iVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  Isolate *pIVar11;
  Isolate *pIVar12;
  ulong *puVar13;
  uint local_e4;
  ulong *local_c8;
  ulong uStack_c0;
  ulong *local_b8;
  ulong *local_b0;
  ulong *puStack_a8;
  ulong *local_a0;
  ulong *local_98;
  ulong *puStack_90;
  ulong *local_88;
  ulong uStack_80;
  ScriptIterator aSStack_78 [16];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((param_5 & 1) == 0) {
    do {
      pIVar11 = *(Isolate **)(this + 0x88);
      uVar2 = *(undefined8 *)(pIVar11 + 0x95a0);
      lVar3 = *(long *)(pIVar11 + 0x95a8);
      *(int *)(pIVar11 + 0x95b0) = *(int *)(pIVar11 + 0x95b0) + 1;
      local_98 = (ulong *)0x0;
      puStack_90 = (ulong *)0x0;
      local_a0 = (ulong *)0x0;
      local_b0 = (ulong *)0x0;
      puStack_a8 = (ulong *)0x0;
      local_b8 = (ulong *)0x0;
      SharedFunctionInfo::ScriptIterator::ScriptIterator
                (aSStack_78,*(undefined8 *)(this + 0x88),*param_2);
      while (local_c8 = (ulong *)SharedFunctionInfo::ScriptIterator::Next(aSStack_78),
            puVar8 = local_98, (int)local_c8 != 0) {
        iVar7 = SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_c8);
        if ((param_3 <= iVar7) &&
           (iVar7 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_c8),
           iVar7 < param_4)) {
          uVar9 = (ulong)local_c8 & 0xffffffff00000000;
          puVar8 = (ulong *)(uVar9 | *(uint *)((long)local_c8 + 0xf));
          if (*(short *)((uVar9 | 7) + (ulong)*(uint *)((long)puVar8 - 1)) == 0x5b) {
            puVar8 = (ulong *)(uVar9 | *(uint *)((long)puVar8 + 0xb));
          }
          if ((((((ulong)puVar8 & 1) == 0) ||
               ((int)puVar8 != *(int *)(((ulong)puVar8 & 0xffffffff00000000) + 0xa0))) &&
              (local_88 = puVar8, uVar9 = Script::IsUserJavaScript((Script *)&local_88),
              puVar8 = local_c8, (uVar9 & 1) != 0)) &&
             (((*(uint *)((long)local_c8 + 3) & 1) == 0 ||
              (*(short *)(((ulong)local_c8 & 0xffffffff00000000 | 7) +
                         (ulong)*(uint *)(((ulong)local_c8 & 0xffffffff00000000 |
                                          (ulong)*(uint *)((long)local_c8 + 3)) - 1)) != 0x57)))) {
            uVar1 = *(uint *)((long)local_c8 + 3);
            if (((uVar1 != 0x84) &&
                (((uVar1 & 1) == 0 ||
                 (1 < *(ushort *)
                       (((ulong)local_c8 & 0xffffffff00000000 | 7) +
                       (ulong)*(uint *)(((ulong)local_c8 & 0xffffffff00000000 | (ulong)uVar1) - 1))
                      - 0x95)))) || ((*(uint *)((long)local_c8 + 0x1b) >> 0xc & 1) != 0)) {
              pIVar12 = *(Isolate **)(this + 0x88);
              if (*(CanonicalHandleScope **)(pIVar12 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar10 = *(ulong **)(pIVar12 + 0x95a0);
                if (puVar10 == *(ulong **)(pIVar12 + 0x95a8)) {
                  puVar10 = (ulong *)HandleScope::Extend(pIVar12);
                }
                *(ulong **)(pIVar12 + 0x95a0) = puVar10 + 1;
                *puVar10 = (ulong)puVar8;
              }
              else {
                puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                             (*(CanonicalHandleScope **)(pIVar12 + 0x95b8),
                                              (ulong)local_c8);
              }
              local_88 = puVar10;
              if (local_98 < puStack_90) {
                *local_98 = (ulong)puVar10;
                local_98 = local_98 + 1;
              }
              else {
                std::__ndk1::
                vector<v8::internal::Handle<v8::internal::SharedFunctionInfo>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::SharedFunctionInfo>>>
                ::__push_back_slow_path<v8::internal::Handle<v8::internal::SharedFunctionInfo>>
                          ((vector<v8::internal::Handle<v8::internal::SharedFunctionInfo>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::SharedFunctionInfo>>>
                            *)&local_a0,(Handle *)&local_88);
              }
            }
          }
        }
      }
      if (local_a0 == local_98) {
        iVar7 = 1;
        local_e4 = 1;
      }
      else {
        bVar5 = false;
        puVar10 = local_a0;
        do {
          IsCompiledScope::IsCompiledScope
                    ((IsCompiledScope *)&local_88,*(ulong *)*puVar10,
                     *(ulong *)*puVar10 & 0xffffffff00000000);
          local_c8 = local_88;
          uStack_c0 = uStack_80;
          if ((uStack_80 & 0xff) == 0) {
            bVar5 = true;
            uVar9 = Compiler::Compile(*puVar10,1,&local_c8);
            if ((uVar9 & 1) != 0) goto LAB_00f0ad70;
LAB_00f0ade8:
            local_e4 = 0;
            iVar7 = 1;
            goto joined_r0x00f0ade0;
          }
LAB_00f0ad70:
          if (local_b0 == puStack_a8) {
            std::__ndk1::
            vector<v8::internal::IsCompiledScope,std::__ndk1::allocator<v8::internal::IsCompiledScope>>
            ::__push_back_slow_path<v8::internal::IsCompiledScope_const&>
                      ((vector<v8::internal::IsCompiledScope,std::__ndk1::allocator<v8::internal::IsCompiledScope>>
                        *)&local_b8,(IsCompiledScope *)&local_c8);
          }
          else {
            local_b0[1] = uStack_c0;
            *local_b0 = (ulong)local_c8;
            local_b0 = local_b0 + 2;
          }
          uVar9 = EnsureBreakInfo(this,*puVar10);
          if ((uVar9 & 1) == 0) goto LAB_00f0ade8;
          puVar13 = puVar10 + 1;
          PrepareFunctionForDebugExecution(this,*puVar10);
          puVar6 = local_98;
          puVar10 = puVar13;
        } while (puVar8 != puVar13);
        puVar8 = local_a0;
        if (bVar5) {
          iVar7 = 2;
        }
        else {
          for (; puVar8 != puVar6; puVar8 = puVar8 + 1) {
            local_88 = *(ulong **)*puVar8;
            uVar9 = SharedFunctionInfo::HasBreakInfo((SharedFunctionInfo *)&local_88);
            if ((uVar9 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","candidate->HasBreakInfo()");
            }
            pIVar12 = *(Isolate **)(this + 0x88);
            uVar9 = *(ulong *)*puVar8 & 0xffffffff00000000 |
                    (ulong)*(uint *)(*(ulong *)*puVar8 + 0xf);
            if (*(CanonicalHandleScope **)(pIVar12 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar10 = *(ulong **)(pIVar12 + 0x95a0);
              if (puVar10 == *(ulong **)(pIVar12 + 0x95a8)) {
                puVar10 = (ulong *)HandleScope::Extend(pIVar12);
              }
              *(ulong **)(pIVar12 + 0x95a0) = puVar10 + 1;
              *puVar10 = uVar9;
            }
            else {
              puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(pIVar12 + 0x95b8),uVar9);
            }
            FUN_00f0af90(puVar10,param_3,param_4,param_6);
          }
          iVar7 = 1;
          local_e4 = 1;
        }
      }
joined_r0x00f0ade0:
      if (local_b8 != (ulong *)0x0) {
        local_b0 = local_b8;
        operator_delete(local_b8);
      }
      if (local_a0 != (ulong *)0x0) {
        local_98 = local_a0;
        operator_delete(local_a0);
      }
      if (pIVar11 != (Isolate *)0x0) {
        *(undefined8 *)(pIVar11 + 0x95a0) = uVar2;
        *(int *)(pIVar11 + 0x95b0) = *(int *)(pIVar11 + 0x95b0) + -1;
        if (*(long *)(pIVar11 + 0x95a8) != lVar3) {
          *(long *)(pIVar11 + 0x95a8) = lVar3;
          HandleScope::DeleteExtensions(pIVar11);
        }
      }
    } while (iVar7 != 1);
  }
  else {
    puVar8 = (ulong *)FindSharedFunctionInfoInScript(this,param_2,param_3);
    if ((((*puVar8 & 1) == 0) || ((int)*puVar8 != *(int *)(*(long *)(this + 0x88) + 0xa0))) &&
       (uVar9 = EnsureBreakInfo(this,puVar8), (uVar9 & 1) != 0)) {
      PrepareFunctionForDebugExecution(this,puVar8);
      pIVar11 = *(Isolate **)(this + 0x88);
      uVar9 = *puVar8 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar8 + 0xf);
      if (*(CanonicalHandleScope **)(pIVar11 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)(pIVar11 + 0x95a0);
        if (puVar8 == *(ulong **)(pIVar11 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(pIVar11);
        }
        *(ulong **)(pIVar11 + 0x95a0) = puVar8 + 1;
        *puVar8 = uVar9;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar11 + 0x95b8),uVar9);
      }
      FUN_00f0af90(puVar8,param_3,param_4,param_6);
      local_e4 = 1;
    }
    else {
      local_e4 = 0;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_e4 & 1;
}

