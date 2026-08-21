
/* v8::internal::SharedFunctionInfo::SharedFunctionInfoVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::SharedFunctionInfo::SharedFunctionInfoVerify
          (SharedFunctionInfo *this,Isolate *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  Isolate *pIVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong local_38;
  
  TorqueGeneratedClassVerifiers::SharedFunctionInfoVerify(*(undefined8 *)this);
  uVar10 = *(ulong *)this;
  uVar2 = *(uint *)(uVar10 + 7);
  uVar8 = uVar10 & 0xffffffff00000000;
  if (((uVar2 & 1) != 0) &&
     (*(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar2) - 1)) == 0x83)) {
    if (*(int *)((uVar8 | uVar2) + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","0 < ScopeInfo::cast(value).length()");
    }
    if (uVar2 == *(uint *)(param_1 + 0x160)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","value != ReadOnlyRoots(isolate).empty_scope_info()");
    }
  }
  if (((*(uint *)(uVar10 + 3) & 1) == 0) ||
     (*(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | *(uint *)(uVar10 + 3)) - 1)) != 0x73)) {
    uVar2 = *(uint *)(*(ulong *)this + 3);
    if (((uVar2 & 1) == 0) ||
       (uVar8 = *(ulong *)this & 0xffffffff00000000,
       *(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar2) - 1)) != 0x4e)) {
      uVar2 = *(uint *)(*(ulong *)this + 3);
      if (((uVar2 & 1) == 0) ||
         (uVar8 = *(ulong *)this & 0xffffffff00000000,
         *(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar2) - 1)) != 0x86)) {
        uVar2 = *(uint *)(*(ulong *)this + 3);
        if (((uVar2 & 1) == 0) ||
           (uVar8 = *(ulong *)this & 0xffffffff00000000,
           *(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar2) - 1)) != 0x61)) {
          uVar2 = *(uint *)(*(ulong *)this + 3);
          if ((((uVar2 & 1) == 0) ||
              (uVar8 = *(ulong *)this & 0xffffffff00000000,
              *(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar2) - 1)) != 0x57)) &&
             ((*(uint *)(*(long *)this + 3) & 1) != 0)) {
            uVar2 = *(uint *)(*(ulong *)this + 3);
            if (((uVar2 & 1) == 0) ||
               (uVar8 = *(ulong *)this & 0xffffffff00000000,
               *(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar2) - 1)) != 0x95)) {
              uVar2 = *(uint *)(*(ulong *)this + 3);
              if (((uVar2 & 1) == 0) ||
                 (uVar8 = *(ulong *)this & 0xffffffff00000000,
                 *(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar2) - 1)) != 0x96)) {
                uVar2 = *(uint *)(*(ulong *)this + 3);
                if (((uVar2 & 1) == 0) ||
                   (uVar8 = *(ulong *)this & 0xffffffff00000000,
                   *(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar2) - 1)) != 0x75)) {
                  uVar2 = *(uint *)(*(ulong *)this + 3);
                  if (((uVar2 & 1) == 0) ||
                     (uVar8 = *(ulong *)this & 0xffffffff00000000,
                     *(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar2) - 1)) != 0x70)) {
                    /* WARNING: Subroutine does not return */
                    V8_Fatal("Check failed: %s.",
                             "HasWasmExportedFunctionData() || IsApiFunction() || HasBytecodeArray() || HasAsmWasmData() || HasBuiltinId() || HasUncompiledDataWithPreparseData() || HasUncompiledDataWithoutPreparseData() || HasWasmJSFunctionData() || HasWasmCapiFunctionData()"
                            );
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar10 = *(ulong *)this;
  uVar8 = uVar10 & 0xffffffff00000000;
  if (*(uint *)(uVar10 + 0xf) != *(uint *)(param_1 + 0xa0)) {
    uVar11 = uVar8 | *(uint *)(uVar10 + 0xf);
    if ((*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x65) &&
       (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar11 - 1)) != 0x5b)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "script_or_debug_info().IsUndefined(isolate) || script_or_debug_info().IsScript() || HasDebugInfo()"
              );
    }
  }
  uVar2 = *(uint *)(uVar10 + 3);
  if ((uVar2 == 0x84) ||
     (((uVar2 & 1) != 0 &&
      (*(ushort *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar2) - 1)) - 0x95 < 2)))) {
    uVar2 = *(uint *)(*(ulong *)this + 0xb);
    uVar10 = *(ulong *)this & 0xffffffff00000000;
    uVar8 = uVar10 | uVar2;
    uVar10 = uVar10 | 7;
    if (*(short *)(uVar10 + *(uint *)(uVar8 - 1)) == 0x9e) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!HasFeedbackMetadata()");
    }
    if ((*(short *)(uVar10 + *(uint *)(uVar8 - 1)) != 0x83) && (uVar2 != *(uint *)(param_1 + 0xa8)))
    {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "outer_scope_info().IsScopeInfo() || outer_scope_info().IsTheHole(isolate)");
    }
  }
  else {
    uVar2 = *(uint *)(*(ulong *)this + 3);
    if (((uVar2 & 1) == 0) ||
       (uVar8 = *(ulong *)this & 0xffffffff00000000,
       *(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar2) - 1)) != 0x86)) {
      uVar2 = *(uint *)(*(ulong *)this + 3);
      if (((uVar2 & 1) == 0) ||
         (uVar8 = *(ulong *)this & 0xffffffff00000000,
         *(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar2) - 1)) != 0x61))
      goto LAB_00f2cfe4;
    }
    uVar10 = *(ulong *)this & 0xffffffff00000000;
    uVar8 = uVar10 | *(uint *)(*(ulong *)this + 0xb);
    uVar10 = uVar10 | 7;
    if ((*(short *)(uVar10 + *(uint *)(uVar8 - 1)) == 0x9e) &&
       (*(short *)(uVar10 + *(uint *)(uVar8 - 1)) != 0x9e)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","feedback_metadata().IsFeedbackMetadata()");
    }
  }
LAB_00f2cfe4:
  uVar8 = *(ulong *)this;
  uVar3 = *(uint *)(uVar8 + 0x1b);
  uVar6 = *(uint *)(uVar8 + 0x1b);
  uVar5 = *(uint *)(uVar8 + 7);
  uVar2 = uVar6 & 0x1f;
  if (((uVar5 & 1) == 0) ||
     (uVar10 = uVar8 & 0xffffffff00000000 | (ulong)uVar5,
     *(short *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x83)) {
    uVar5 = (uint)(uVar5 != 0);
  }
  else {
    local_38 = uVar10;
    uVar5 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_38);
    uVar8 = *(ulong *)this;
  }
  if ((uVar2 - 3 & 0xff) < 4) {
    iVar12 = 0xc0;
  }
  else {
    if ((uVar2 - 0xd & 0xff) < 4) {
      iVar12 = 0xbc;
      if (4 < (uVar2 - 10 & 0xff)) {
        iVar12 = 0xb8;
      }
    }
    else {
      uVar6 = uVar6 & 0x1f;
      if (uVar6 < 0x13) {
        uVar2 = 1 << (ulong)uVar6;
        if ((uVar2 & 0x7c04) == 0) {
          if ((uVar2 & 0x70380) == 0) goto LAB_00f2d278;
          iVar12 = 0xb0;
        }
        else {
          iVar12 = 0xb4;
        }
      }
      else {
LAB_00f2d278:
        iVar12 = 0xa9;
        if ((uVar3 & 0x40) != 0) {
          iVar12 = 0xad;
        }
      }
    }
    iVar12 = iVar12 + (*(uint *)(uVar8 + 0x1b) >> 0xc & 2 | ~uVar5 & 1);
  }
  if (iVar12 != (*(uint *)(uVar8 + 0x1b) >> 0xf & 0x1f) + 0xa9) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","expected_map_index == function_map_index()");
  }
  pIVar7 = (Isolate *)(uVar8 & 0xffffffff00000000);
  if (((*(uint *)(uVar8 + 7) & 1) == 0) ||
     (uVar8 = (ulong)pIVar7 | (ulong)*(uint *)(uVar8 + 7),
     *(short *)(((ulong)pIVar7 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x83)) {
    uVar8 = ScopeInfo::Empty(pIVar7);
  }
  if (1 < *(int *)(uVar8 + 3)) {
    uVar8 = *(ulong *)this;
    pIVar7 = (Isolate *)(uVar8 & 0xffffffff00000000);
    if (((*(uint *)(uVar8 + 7) & 1) == 0) ||
       (uVar10 = (ulong)pIVar7 | (ulong)*(uint *)(uVar8 + 7),
       *(short *)(((ulong)pIVar7 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x83)) {
      uVar10 = ScopeInfo::Empty(pIVar7);
      uVar8 = *(ulong *)this;
    }
    uVar2 = *(uint *)(uVar8 + 0x1b);
    local_38 = uVar10;
    uVar6 = ScopeInfo::function_kind((ScopeInfo *)&local_38);
    if ((uVar2 & 0x1f) != (uVar6 & 0xff)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kind() == info.function_kind()");
    }
    uVar2 = *(uint *)(*(long *)this + 0x1b);
    cVar4 = ScopeInfo::scope_type((ScopeInfo *)&local_38);
    if ((cVar4 == '\x03') == 1 < ((uVar2 & 0x1f) - 1 & 0xff)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","internal::IsModule(kind()) == info.scope_type() == MODULE_SCOPE"
              );
    }
  }
  uVar2 = *(uint *)(*(ulong *)this + 3);
  if (((uVar2 & 1) == 0) ||
     (uVar8 = *(ulong *)this & 0xffffffff00000000,
     *(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar2) - 1)) != 0x4e)) {
    lVar9 = *(long *)this;
    if ((*(uint *)(*(long *)this + 3) & 1) == 0) {
      iVar12 = *(int *)(lVar9 + 3) >> 1;
      uVar2 = *(uint *)(*(long *)this + 0x1b);
      puVar1 = (uint *)(*(long *)this + 0x1b);
      if ((iVar12 == 0x42) || (iVar12 == 0x96)) {
        if ((uVar2 >> 0x19 & 1) != 0) goto LAB_00f2d2b4;
      }
      else if ((uVar2 >> 0x19 & 1) == 0) goto LAB_00f2d2f0;
      uVar2 = *puVar1;
      goto joined_r0x00f2d260;
    }
    if ((*(uint *)(lVar9 + 0x1b) >> 0x19 & 1) != 0) {
LAB_00f2d2b4:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!construct_as_builtin()");
    }
  }
  else {
    lVar9 = *(long *)this;
    if ((*(uint *)(lVar9 + 0x1b) >> 0x19 & 1) == 0) {
LAB_00f2d2f0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","construct_as_builtin()");
    }
  }
  puVar1 = (uint *)(lVar9 + 0x1b);
  uVar2 = *puVar1;
joined_r0x00f2d260:
  if (((uVar2 >> 0x1e & 1) != 0) && ((*puVar1 >> 6 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "is_safe_to_skip_arguments_adaptor() implies language_mode() == LanguageMode::kStrict")
    ;
  }
  return;
}

