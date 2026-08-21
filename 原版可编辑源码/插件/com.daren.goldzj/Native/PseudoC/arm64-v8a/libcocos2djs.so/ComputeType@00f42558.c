
/* v8::internal::StackFrame::ComputeType(v8::internal::StackFrameIteratorBase const*,
   v8::internal::StackFrame::State*) */

undefined4 v8::internal::StackFrame::ComputeType(StackFrameIteratorBase *param_1,State *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  WasmCodeRefScope aWStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar6 = *(ulong *)(*(long *)(param_2 + 8) + -8);
  if (param_1[0x598] == (StackFrameIteratorBase)0x0) {
    if ((uVar6 & 1) == 0) {
LAB_00f425e0:
      uVar1 = (int)(uVar6 >> 1) - 1;
      if (uVar1 < 0x15) {
        if (*(long *)(lVar2 + 0x28) == local_38) {
          return *(undefined4 *)(&DAT_019b0418 + (long)(int)uVar1 * 4);
        }
        goto LAB_00f4272c;
      }
    }
    else if ((*(byte *)(*(long *)(param_2 + 8) + -0x10) & 1) != 0) {
      uVar6 = FUN_00f42354(*(undefined8 *)param_1,**(undefined8 **)(param_2 + 0x10));
      uVar4 = 0xc;
      if ((uVar6 & 1) == 0) {
        uVar4 = 4;
      }
      goto LAB_00f42698;
    }
    uVar4 = 0x16;
  }
  else {
    uVar5 = **(ulong **)(param_2 + 0x10);
    wasm::WasmCodeRefScope::WasmCodeRefScope(aWStack_68);
    lVar3 = wasm::WasmCodeManager::LookupCode
                      (*(WasmCodeManager **)(*(long *)param_1 + 0xc770),uVar5);
    if (lVar3 == 0) {
      lVar3 = InnerPointerToCodeCache::GetCacheEntry
                        (*(InnerPointerToCodeCache **)(*(long *)param_1 + 0x95d8),uVar5);
      lVar3 = *(long *)(lVar3 + 8);
      if ((int)lVar3 == 0) {
        uVar4 = 0x16;
      }
      else {
        uVar4 = 4;
        switch(*(uint *)(lVar3 + 0x17) >> 1 & 0x1f) {
        case 0:
          break;
        default:
switchD_00f42654_caseD_1:
          wasm::WasmCodeRefScope::~WasmCodeRefScope(aWStack_68);
          goto LAB_00f425e0;
        case 3:
          if ((uVar6 & 1) == 0) goto switchD_00f42654_caseD_1;
          uVar1 = *(int *)(lVar3 + 0x27) - 0x38;
          if ((uVar1 < 9) && ((1 << (ulong)(uVar1 & 0x1f) & 0x181U) != 0)) {
            uVar4 = 0xc;
          }
          else {
            uVar4 = 0x14;
            if ((*(uint *)(lVar3 + 0x17) & 0x40) != 0) {
              uVar4 = 4;
            }
          }
          break;
        case 5:
        case 6:
        case 7:
        case 10:
          goto switchD_00f42654_caseD_5;
        case 8:
          uVar4 = 7;
          break;
        case 9:
          uVar4 = 0xd;
          break;
        case 0xb:
          uVar4 = 9;
        }
      }
    }
    else {
      if (3 < *(uint *)(lVar3 + 0x3c)) {
switchD_00f42654_caseD_5:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      uVar4 = *(undefined4 *)(&DAT_019b0408 + (long)(int)*(uint *)(lVar3 + 0x3c) * 4);
    }
    wasm::WasmCodeRefScope::~WasmCodeRefScope(aWStack_68);
  }
LAB_00f42698:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar4;
  }
LAB_00f4272c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

