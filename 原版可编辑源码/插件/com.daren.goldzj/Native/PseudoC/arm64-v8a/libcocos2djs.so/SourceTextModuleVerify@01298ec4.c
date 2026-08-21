
/* v8::internal::TorqueGeneratedClassVerifiers::SourceTextModuleVerify(v8::internal::SourceTextModule,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::SourceTextModuleVerify
               (ulong param_1,Isolate *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  Module::ModuleVerify((Module *)&local_38,param_2);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x44) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsSourceTextModule()");
  }
  uVar1 = *(uint *)(local_38 + 0x17);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) ||
     ((((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x439 &&
        (2 < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) - 0x417)) &&
       (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0xa6)) &&
      (0xe < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) - 0x76)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "code__value.IsJSFunction() || code__value.IsJSGeneratorObject() || code__value.IsSharedFunctionInfo() || code__value.IsFixedArray()"
            );
  }
  uVar1 = *(uint *)(local_38 + 0x1b);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) == 0) || (0xe < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) - 0x76)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","regular_exports__value.IsFixedArray()");
  }
  uVar1 = *(uint *)(local_38 + 0x1f);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) == 0) || (0xe < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) - 0x76)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","regular_imports__value.IsFixedArray()");
  }
  uVar1 = *(uint *)(local_38 + 0x23);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) == 0) || (0xe < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) - 0x76)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","requested_modules__value.IsFixedArray()");
  }
  uVar1 = *(uint *)(local_38 + 0x27);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) == 0) || (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x65)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","script__value.IsScript()");
  }
  uVar1 = *(uint *)(local_38 + 0x2b);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) ||
     ((uVar3 = uVar3 | 7, *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0xaa &&
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","import_meta__value.IsJSObject() || import_meta__value.IsOddball()"
            );
  }
  uVar1 = *(uint *)(local_38 + 0x2f);
  uVar3 = local_38 & 0xffffffff00000000;
  Object::VerifyPointer(param_2,uVar3 | uVar1);
  if (((uVar1 & 1) != 0) &&
     ((uVar1 == *(uint *)(uVar3 + 0x168) ||
      (*(int *)((uVar3 | uVar1) - 1) == *(int *)(uVar3 + 0x1b8))))) {
    uVar1 = *(uint *)(local_38 + 0x33);
    uVar3 = local_38 & 0xffffffff00000000;
    uVar2 = uVar3 | uVar1;
    Object::VerifyPointer(param_2,uVar2);
    if (((uVar1 & 1) == 0) ||
       ((uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43 &&
        (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x42d)))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "top_level_capability__value.IsOddball() || top_level_capability__value.IsJSPromise()"
              );
    }
    uVar1 = *(uint *)(local_38 + 0x37);
    Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
    if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","dfs_index__value.IsSmi()");
    }
    uVar1 = *(uint *)(local_38 + 0x3b);
    Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
    if ((uVar1 & 1) == 0) {
      uVar1 = *(uint *)(local_38 + 0x3f);
      Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
      if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","pending_async_dependencies__value.IsSmi()");
      }
      uVar1 = *(uint *)(local_38 + 0x43);
      Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
      if ((uVar1 & 1) == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","flags__value.IsSmi()");
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","dfs_ancestor_index__value.IsSmi()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","async_parent_modules__value.IsArrayList()");
}

