
/* v8::internal::Runtime_FunctionGetSourceCode(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_FunctionGetSourceCode(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  int iVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar9 = FUN_01560eec(param_1,param_2,param_3);
    return uVar9;
  }
  pIVar1 = param_3 + 0x95a0;
  iVar4 = *(int *)(param_3 + 0x95b0);
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = iVar4 + 1;
  uVar7 = *param_2;
  if ((uVar7 & 1) != 0) {
    uVar8 = uVar7 & 0xffffffff00000000 | 7;
    if (0xa8 < *(ushort *)(uVar8 + *(uint *)(uVar7 - 1))) {
      if (*(short *)(uVar8 + *(uint *)(uVar7 - 1)) == 0x439) {
        uVar7 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xb);
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar5 = puVar2;
          if (puVar3 == puVar2) {
            puVar5 = (ulong *)HandleScope::Extend(param_3);
          }
          *(ulong **)pIVar1 = puVar5 + 1;
          *puVar5 = uVar7;
        }
        else {
          CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
        }
        puVar6 = (undefined8 *)SharedFunctionInfo::GetSourceCode();
        uVar9 = *puVar6;
        *(ulong **)pIVar1 = puVar2;
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
        if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
          *(ulong **)(param_3 + 0x95a8) = puVar3;
          HandleScope::DeleteExtensions(param_3);
        }
      }
      else {
        uVar9 = *(undefined8 *)(param_3 + 0xa0);
        *(ulong **)pIVar1 = puVar2;
        *(int *)(param_3 + 0x95b0) = iVar4;
      }
      return uVar9;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
}

