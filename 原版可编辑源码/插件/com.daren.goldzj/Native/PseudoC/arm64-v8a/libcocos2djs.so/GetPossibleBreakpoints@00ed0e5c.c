
/* v8::debug::Script::GetPossibleBreakpoints(v8::debug::Location const&, v8::debug::Location const&,
   bool, std::__ndk1::vector<v8::debug::BreakLocation,
   std::__ndk1::allocator<v8::debug::BreakLocation> >*) const */

ulong __thiscall
v8::debug::Script::GetPossibleBreakpoints
          (Script *this,Location *param_1,Location *param_2,bool param_3,vector *param_4)

{
  long lVar1;
  undefined4 *puVar2;
  BreakLocation *pBVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong *puVar7;
  uint uVar8;
  BreakLocation *this_00;
  Isolate *pIVar9;
  ulong uVar10;
  undefined4 local_80;
  int local_7c;
  BreakLocation *local_78;
  BreakLocation *local_70;
  undefined8 uStack_68;
  code *local_48;
  
  if (param_1[8] != (Location)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!start.IsEmpty()");
  }
  if (((*(uint *)(*(long *)this + 0x17) & 0xfffffffe) == 6) &&
     (lVar6 = SourceMappingURL(this), lVar6 == 0)) {
    uVar10 = internal::WasmScript::GetPossibleBreakpoints
                       ((NativeModule *)
                        **(undefined8 **)
                          (*(long *)((*(ulong *)this & 0xffffffff00000000 |
                                     (ulong)*(uint *)(*(ulong *)this + 0x27)) + 3) + 0x18),param_1,
                        param_2,param_4);
    return uVar10;
  }
  internal::Script::InitLineEnds(this);
  uVar8 = *(uint *)(*(ulong *)this + 0x1b);
  if ((uVar8 & 1) != 0) {
    pIVar9 = (Isolate *)(*(ulong *)this & 0xffffffff00000000);
    uVar10 = (ulong)pIVar9 | (ulong)uVar8;
    if (*(ushort *)(((ulong)pIVar9 | 7) + (ulong)*(uint *)(uVar10 - 1)) - 0x76 < 0xf) {
      if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(pIVar9 + 0x95a0);
        if (puVar7 == *(ulong **)(pIVar9 + 0x95a8)) {
          puVar7 = (ulong *)internal::HandleScope::Extend(pIVar9);
        }
        *(ulong **)(pIVar9 + 0x95a0) = puVar7 + 1;
        *puVar7 = uVar10;
      }
      else {
        puVar7 = (ulong *)internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar10);
        uVar10 = *puVar7;
      }
      if (1 < *(uint *)(uVar10 + 3)) {
        iVar4 = GetSourceOffset(this,param_1);
        if (param_2[8] == (Location)0x0) {
          iVar5 = GetSourceOffset(this,param_2);
        }
        else {
          iVar5 = (*(int *)(*puVar7 + (long)(int)((*(uint *)(*puVar7 + 3) & 0x7ffffffe) * 2 + -4) +
                           7) >> 1) + 1;
        }
        if (iVar4 < iVar5) {
          local_70 = (BreakLocation *)0x0;
          uStack_68 = 0;
          local_78 = (BreakLocation *)0x0;
          uVar10 = internal::Debug::GetPossibleBreakpoints
                             (*(Debug **)(pIVar9 + 0xb6c8),this,iVar4,iVar5,param_3,&local_78);
          if ((uVar10 & 1) == 0) {
            uVar8 = 0;
          }
          else {
            local_48 = FUN_00ed1348;
            std::__ndk1::
            __sort<bool(*&)(v8::internal::BreakLocation_const&,v8::internal::BreakLocation_const&),v8::internal::BreakLocation*>
                      (local_78,local_70,(_func_bool_BreakLocation_ptr_BreakLocation_ptr *)&local_48
                      );
            pBVar3 = local_70;
            if (local_78 != local_70) {
              lVar6 = 0;
              this_00 = local_78;
              do {
                iVar4 = (int)lVar6;
                lVar6 = (long)iVar4;
                iVar5 = -iVar4;
                lVar1 = *puVar7 + 7;
                iVar4 = iVar4 << 2;
                while (*(int *)(lVar1 + iVar4) >> 1 < *(int *)(this_00 + 0x10)) {
                  lVar6 = lVar6 + 1;
                  iVar5 = iVar5 + -1;
                  iVar4 = iVar4 + 4;
                  if (*(int *)(*puVar7 + 3) >> 1 <= lVar6) {
                    /* WARNING: Subroutine does not return */
                    V8_Fatal("Check failed: %s.","current_line_end_index < line_ends->length()");
                  }
                }
                if (-iVar5 < 1) {
                  iVar4 = 0;
                }
                else {
                  iVar4 = (*(int *)(lVar1 + (iVar4 + -4)) >> 1) + 1;
                }
                local_48 = (code *)CONCAT44(local_48._4_4_,
                                            (*(int *)(*(long *)this + 0xb) >> 1) - iVar5);
                if (iVar5 == 0) {
                  local_7c = *(int *)(*(long *)this + 0xf) >> 1;
                }
                else {
                  local_7c = 0;
                }
                local_7c = (*(int *)(this_00 + 0x10) - iVar4) + local_7c;
                local_80 = internal::BreakLocation::type(this_00);
                puVar2 = *(undefined4 **)(param_4 + 8);
                if (puVar2 < *(undefined4 **)(param_4 + 0x10)) {
                  *(undefined1 *)(puVar2 + 2) = 0;
                  puVar2[3] = local_80;
                  *puVar2 = local_48._0_4_;
                  puVar2[1] = local_7c;
                  *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + 0x10;
                }
                else {
                  std::__ndk1::
                  vector<v8::debug::BreakLocation,std::__ndk1::allocator<v8::debug::BreakLocation>>
                  ::__emplace_back_slow_path<int,int,v8::debug::BreakLocationType>
                            ((vector<v8::debug::BreakLocation,std::__ndk1::allocator<v8::debug::BreakLocation>>
                              *)param_4,(int *)&local_48,&local_7c,(BreakLocationType *)&local_80);
                }
                this_00 = this_00 + 0x18;
              } while (this_00 != pBVar3);
            }
            uVar8 = 1;
          }
          if (local_78 != (BreakLocation *)0x0) {
            local_70 = local_78;
            operator_delete(local_78);
          }
        }
        else {
          uVar8 = 1;
        }
        return (ulong)uVar8;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","line_ends->length()");
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","script->line_ends().IsFixedArray()");
}

