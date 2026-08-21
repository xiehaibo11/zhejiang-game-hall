
/* v8::internal::Runtime_GetTemplateObject(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_GetTemplateObject(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar8 = FUN_0156da28(param_1,param_2,param_3);
    return uVar8;
  }
  pIVar1 = param_3 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) != 0) &&
     (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x6d)) {
    uVar6 = param_2[-1];
    if (((uVar6 & 1) != 0) &&
       (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0xa6)) {
      uVar6 = param_2[-2];
      if ((uVar6 & 1) == 0) {
        uVar7 = *(ulong *)(param_3 + 0x2bc8) & 0xffffffff00000000;
        uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(param_3 + 0x2bc8) - 1)) + 0x13);
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar4 = puVar2;
          if (puVar3 == puVar2) {
            puVar4 = (ulong *)HandleScope::Extend(param_3);
          }
          *(ulong **)pIVar1 = puVar4 + 1;
          *puVar4 = uVar7;
        }
        else {
          puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
        }
        puVar5 = (undefined8 *)
                 TemplateObjectDescription::GetTemplateObject
                           (param_3,puVar4,param_2,param_2 + -1,(int)uVar6 >> 1);
        uVar8 = *puVar5;
        *(ulong **)pIVar1 = puVar2;
        *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
        if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
          *(ulong **)(param_3 + 0x95a8) = puVar3;
          HandleScope::DeleteExtensions(param_3);
        }
        return uVar8;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","args[2].IsSmi()");
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsSharedFunctionInfo()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsTemplateObjectDescription()");
}

