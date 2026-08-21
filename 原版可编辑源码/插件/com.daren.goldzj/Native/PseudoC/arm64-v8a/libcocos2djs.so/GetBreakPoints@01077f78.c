
/* v8::internal::DebugInfo::GetBreakPoints(v8::internal::Isolate*, int) */

void __thiscall
v8::internal::DebugInfo::GetBreakPoints(DebugInfo *this,Isolate *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  
  uVar5 = *(ulong *)this & 0xffffffff00000000;
  uVar7 = uVar5 | *(uint *)(*(ulong *)this + 0x17);
  uVar2 = *(uint *)(uVar7 + 3);
  if (1 < (int)uVar2) {
    iVar8 = 0;
    uVar6 = 0;
    lVar1 = uVar7 + 7;
    do {
      uVar3 = *(uint *)(lVar1 + iVar8);
      if ((((uVar3 & 1) == 0) || (uVar3 != *(uint *)(param_1 + 0xa0))) &&
         (uVar7 = uVar5 | *(uint *)(iVar8 + lVar1), param_2 == *(int *)(uVar7 + 3) >> 1))
      goto LAB_01077ff8;
      uVar6 = uVar6 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar6 < uVar2 >> 1);
  }
  uVar7 = *(ulong *)(param_1 + 0xa0);
LAB_01077ff8:
  if (((uVar7 & 1) == 0) || ((int)uVar7 != *(int *)(param_1 + 0xa0))) {
    uVar5 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 7);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(param_1 + 0x95a0);
      if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar5;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    }
  }
  return;
}

