
/* v8::internal::DebugInfo::GetBreakPointInfo(v8::internal::Isolate*, int) */

ulong __thiscall
v8::internal::DebugInfo::GetBreakPointInfo(DebugInfo *this,Isolate *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  
  uVar3 = *(ulong *)this & 0xffffffff00000000;
  uVar4 = uVar3 | *(uint *)(*(ulong *)this + 0x17);
  if (1 < (int)*(uint *)(uVar4 + 3)) {
    iVar5 = 0;
    lVar6 = 0;
    do {
      uVar1 = *(uint *)((long)iVar5 + 7 + uVar4);
      if ((((uVar1 & 1) == 0) || (uVar1 != *(uint *)(param_1 + 0xa0))) &&
         (uVar2 = uVar3 | *(uint *)(uVar4 + (long)iVar5 + 7), param_2 == *(int *)(uVar2 + 3) >> 1))
      {
        return uVar2;
      }
      lVar6 = lVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (lVar6 < (long)((ulong)*(uint *)(uVar4 + 3) << 0x20) >> 0x21);
  }
  return *(ulong *)(param_1 + 0xa0);
}

