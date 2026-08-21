
/* v8::internal::SourceTextModule::SourceTextModuleVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::SourceTextModule::SourceTextModuleVerify(SourceTextModule *this,Isolate *param_1)

{
  uint uVar1;
  Isolate *pIVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_28;
  
  TorqueGeneratedClassVerifiers::SourceTextModuleVerify(*(undefined8 *)this);
  uVar3 = *(ulong *)this;
  switch((int)*(uint *)(uVar3 + 0xb) >> 1) {
  case 0:
  case 1:
    if (*(short *)((uVar3 & 0xffffffff00000000 | 7) +
                  (ulong)*(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0x17)) - 1
                                  )) != 0xa6) goto switchD_00f2b9cc_default;
    break;
  case 2:
    if (*(short *)((uVar3 & 0xffffffff00000000 | 7) +
                  (ulong)*(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0x17)) - 1
                                  )) != 0x439) goto switchD_00f2b9cc_default;
    break;
  case 3:
    if (2 < *(ushort *)
             ((uVar3 & 0xffffffff00000000 | 7) +
             (ulong)*(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0x17)) - 1)) -
            0x417) goto switchD_00f2b9cc_default;
    break;
  case 4:
  case 5:
    if (2 < *(ushort *)
             ((uVar3 & 0xffffffff00000000 | 7) +
             (ulong)*(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0x17)) - 1)) -
            0x417) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","code().IsJSGeneratorObject()");
    }
    goto LAB_00f2baf8;
  case 6:
    if (*(int *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0x17)) - 1) !=
        *(int *)((uVar3 & 0xffffffff00000000) + 0x200)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","code().IsSourceTextModuleInfo()");
    }
    goto LAB_00f2baf8;
  default:
switchD_00f2b9cc_default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "(status() == kInstantiated && code().IsJSGeneratorObject()) || (status() == kInstantiating && code().IsJSFunction()) || (status() == kPreInstantiating && code().IsSharedFunctionInfo()) || (status() == kUninstantiated && code().IsSharedFunctionInfo())"
            );
  }
  if (((*(int *)(uVar3 + 0x33) != *(int *)((uVar3 & 0xffffffff00000000) + 0xa0)) ||
      (((uVar4 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0x2f),
        1 < *(uint *)(uVar4 + 3) && (1 < *(uint *)(uVar4 + 7))) || (1 < *(uint *)(uVar3 + 0x3f)))))
     || ((*(byte *)(uVar3 + 0x43) >> 2 & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "top_level_capability().IsUndefined() && !AsyncParentModuleCount() && !pending_async_dependencies() && !async_evaluating()"
            );
  }
LAB_00f2baf8:
  uVar1 = *(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0x23)) + 3);
  if ((*(uint *)(uVar3 + 0xb) & 0xfffffffe) == 0xc) {
    uVar3 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0x17);
  }
  else {
    uVar3 = GetSharedFunctionInfo(this);
    pIVar2 = (Isolate *)(uVar3 & 0xffffffff00000000);
    if (((*(uint *)(uVar3 + 7) & 1) == 0) ||
       (local_28 = (ulong)pIVar2 | (ulong)*(uint *)(uVar3 + 7),
       *(short *)(((ulong)pIVar2 | 7) + (ulong)*(uint *)(local_28 - 1)) != 0x83)) {
      local_28 = ScopeInfo::Empty(pIVar2);
    }
    uVar3 = ScopeInfo::ModuleDescriptorInfo((ScopeInfo *)&local_28);
  }
  if (1 < (*(uint *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 7)) + 3) ^ uVar1)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","requested_modules().length() == info().module_requests().length()"
            );
  }
  return;
}

