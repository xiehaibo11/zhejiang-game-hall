
/* v8::internal::DebugInfo::ClearBreakPoint(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::DebugInfo>, v8::internal::Handle<v8::internal::BreakPoint>) */

undefined8 v8::internal::DebugInfo::ClearBreakPoint(Isolate *param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar4 = *param_2 & 0xffffffff00000000;
  uVar6 = uVar4 | *(uint *)(*param_2 + 0x17);
  if (1 < *(int *)(uVar6 + 3)) {
    lVar8 = 0;
    do {
      lVar1 = (long)((int)lVar8 << 2) + 7;
      uVar2 = *(uint *)(lVar1 + uVar6);
      if (((uVar2 & 1) == 0) || (uVar2 != *(uint *)(param_1 + 0xa0))) {
        uVar4 = uVar4 | *(uint *)(uVar6 + lVar1);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar3 = *(ulong **)(param_1 + 0x95a0);
          if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
            puVar3 = (ulong *)HandleScope::Extend(param_1);
          }
          *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
          *puVar3 = uVar4;
        }
        else {
          puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
          uVar4 = *puVar3;
        }
        uVar2 = *(uint *)(uVar4 + 7);
        uVar4 = uVar4 & 0xffffffff00000000;
        uVar6 = uVar4 | uVar2;
        if ((uVar2 & 1) == 0) {
LAB_01077328:
          if ((*(uint *)(*param_3 + 3) ^ *(uint *)(uVar6 + 3)) < 2) {
LAB_01077458:
            BreakPointInfo::ClearBreakPoint(param_1,puVar3,param_3);
            return 1;
          }
        }
        else if (uVar2 != *(uint *)(param_1 + 0xa0)) {
          if (0xe < *(ushort *)((uVar4 | 7) + (ulong)*(uint *)(uVar6 - 1)) - 0x76)
          goto LAB_01077328;
          if (1 < (int)*(uint *)(uVar6 + 3)) {
            iVar5 = 0;
            uVar7 = 0;
            do {
              if ((*(uint *)((uVar4 | *(uint *)(uVar6 + 7 + (long)iVar5)) + 3) ^
                  *(uint *)(*param_3 + 3)) < 2) goto LAB_01077458;
              uVar7 = uVar7 + 1;
              iVar5 = iVar5 + 4;
            } while (uVar7 < *(uint *)(uVar6 + 3) >> 1);
          }
        }
      }
      lVar8 = lVar8 + 1;
      uVar4 = *param_2 & 0xffffffff00000000;
      uVar6 = uVar4 | *(uint *)(*param_2 + 0x17);
    } while (lVar8 < *(int *)(uVar6 + 3) >> 1);
  }
  return 0;
}

