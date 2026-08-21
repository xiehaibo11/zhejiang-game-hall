
/* v8::internal::DebugInfo::GetBreakPointCount(v8::internal::Isolate*) */

int __thiscall v8::internal::DebugInfo::GetBreakPointCount(DebugInfo *this,Isolate *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  
  uVar3 = *(ulong *)this & 0xffffffff00000000;
  uVar4 = uVar3 | *(uint *)(*(ulong *)this + 0x17);
  if ((int)*(uint *)(uVar4 + 3) < 2) {
    iVar2 = 0;
  }
  else {
    iVar5 = 0;
    uVar6 = 0;
    iVar2 = 0;
    do {
      uVar1 = *(uint *)((long)iVar5 + 7 + uVar4);
      if (((uVar1 & 1) == 0) || (uVar1 != *(uint *)(param_1 + 0xa0))) {
        uVar1 = *(uint *)((uVar3 | *(uint *)(uVar4 + (long)iVar5 + 7)) + 7);
        if ((uVar1 & 1) == 0) {
LAB_01078094:
          iVar7 = 1;
        }
        else if (uVar1 == *(uint *)(param_1 + 0xa0)) {
          iVar7 = 0;
        }
        else {
          if (0xe < *(ushort *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | uVar1) - 1)) - 0x76)
          goto LAB_01078094;
          iVar7 = *(int *)((uVar3 | uVar1) + 3) >> 1;
        }
        iVar2 = iVar7 + iVar2;
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar6 < *(uint *)(uVar4 + 3) >> 1);
  }
  return iVar2;
}

