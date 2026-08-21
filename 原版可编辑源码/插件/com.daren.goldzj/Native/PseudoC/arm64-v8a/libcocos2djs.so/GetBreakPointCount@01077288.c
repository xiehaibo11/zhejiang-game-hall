
/* v8::internal::BreakPointInfo::GetBreakPointCount(v8::internal::Isolate*) */

int __thiscall
v8::internal::BreakPointInfo::GetBreakPointCount(BreakPointInfo *this,Isolate *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(*(ulong *)this + 7);
  if ((uVar1 & 1) != 0) {
    if (uVar1 == *(uint *)(param_1 + 0xa0)) {
      return 0;
    }
    uVar3 = *(ulong *)this & 0xffffffff00000000;
    uVar2 = uVar3 | uVar1;
    if (*(ushort *)((uVar3 | 7) + (ulong)*(uint *)(uVar2 - 1)) - 0x76 < 0xf) {
      return *(int *)(uVar2 + 3) >> 1;
    }
  }
  return 1;
}

