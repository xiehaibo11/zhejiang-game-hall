
/* v8::internal::DebugInfo::HasBreakPoint(v8::internal::Isolate*, int) */

bool __thiscall v8::internal::DebugInfo::HasBreakPoint(DebugInfo *this,Isolate *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  
  uVar4 = *(ulong *)this & 0xffffffff00000000;
  uVar6 = uVar4 | *(uint *)(*(ulong *)this + 0x17);
  uVar2 = *(uint *)(uVar6 + 3);
  if (1 < (int)uVar2) {
    iVar7 = 0;
    uVar5 = 0;
    lVar1 = uVar6 + 7;
    do {
      uVar3 = *(uint *)(lVar1 + iVar7);
      if ((((uVar3 & 1) == 0) || (uVar3 != *(uint *)(param_1 + 0xa0))) &&
         (uVar6 = uVar4 | *(uint *)(iVar7 + lVar1), param_2 == *(int *)(uVar6 + 3) >> 1))
      goto LAB_010771ac;
      uVar5 = uVar5 + 1;
      iVar7 = iVar7 + 4;
    } while (uVar5 < uVar2 >> 1);
  }
  uVar6 = *(ulong *)(param_1 + 0xa0);
LAB_010771ac:
  if (((uVar6 & 1) != 0) && ((int)uVar6 == *(int *)(param_1 + 0xa0))) {
    return false;
  }
  uVar2 = *(uint *)(uVar6 + 7);
  if ((uVar2 & 1) != 0) {
    if (uVar2 == *(uint *)(param_1 + 0xa0)) {
      return false;
    }
    uVar4 = uVar6 & 0xffffffff00000000 | (ulong)uVar2;
    if (*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) - 0x76 < 0xf) {
      return 1 < *(int *)(uVar4 + 3);
    }
  }
  return true;
}

