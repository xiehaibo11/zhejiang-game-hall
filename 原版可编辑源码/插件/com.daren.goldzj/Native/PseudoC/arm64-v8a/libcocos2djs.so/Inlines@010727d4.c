
/* v8::internal::Code::Inlines(v8::internal::SharedFunctionInfo) */

undefined8 __thiscall v8::internal::Code::Inlines(Code *this,int param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)this & 0xffffffff00000000;
  uVar2 = uVar4 | *(uint *)(*(ulong *)this + 7);
  if (1 < *(uint *)(uVar2 + 3)) {
    if (*(int *)(uVar2 + 0x1f) == param_2) {
      return 1;
    }
    if (1 < (int)*(uint *)(uVar2 + 0xb)) {
      iVar1 = 0;
      uVar3 = 0;
      do {
        if (*(int *)((uVar4 | *(uint *)(uVar2 + 0xf)) + 7 + (long)iVar1) == param_2) {
          return 1;
        }
        uVar3 = uVar3 + 1;
        iVar1 = iVar1 + 4;
      } while (uVar3 < *(uint *)(uVar2 + 0xb) >> 1);
    }
  }
  return 0;
}

