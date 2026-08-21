
/* v8::internal::BreakPointInfo::HasBreakPoint(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::BreakPointInfo>,
   v8::internal::Handle<v8::internal::BreakPoint>) */

bool v8::internal::BreakPointInfo::HasBreakPoint(long param_1,ulong *param_2,long *param_3)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(*param_2 + 7);
  uVar2 = *param_2 & 0xffffffff00000000;
  uVar5 = uVar2 | uVar1;
  if ((uVar1 & 1) != 0) {
    if (uVar1 != *(uint *)(param_1 + 0xa0)) {
      if (0xe < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar5 - 1)) - 0x76) goto LAB_01077490;
      if (1 < (int)*(uint *)(uVar5 + 3)) {
        iVar3 = 0;
        lVar4 = 0;
        do {
          if ((*(uint *)(*param_3 + 3) ^ *(uint *)((uVar2 | *(uint *)(uVar5 + 7 + (long)iVar3)) + 3)
              ) < 2) {
            return true;
          }
          lVar4 = lVar4 + 1;
          iVar3 = iVar3 + 4;
        } while (lVar4 < (long)((ulong)*(uint *)(uVar5 + 3) << 0x20) >> 0x21);
      }
    }
    return false;
  }
LAB_01077490:
  return (*(uint *)(*param_3 + 3) ^ *(uint *)(uVar5 + 3)) < 2;
}

