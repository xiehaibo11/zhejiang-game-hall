
/* v8::internal::FrameArrayBuilder::IsVisibleInStackTrace(v8::internal::Handle<v8::internal::JSFunction>)
    */

bool __thiscall
v8::internal::FrameArrayBuilder::IsVisibleInStackTrace(FrameArrayBuilder *this,ulong *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      if (this[0x18] != (FrameArrayBuilder)0x0) {
        if ((int)*param_2 != **(int **)(this + 0x10)) {
          return false;
        }
LAB_00f57998:
        this[0x18] = (FrameArrayBuilder)0x0;
        return false;
      }
    }
    else {
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      if (this[0x18] != (FrameArrayBuilder)0x0) goto LAB_00f57998;
    }
  }
  uVar2 = IsNotHidden(this,param_2);
  if ((uVar2 & 1) == 0) {
    return false;
  }
  if (this[0x1a] == (FrameArrayBuilder)0x0) {
    return true;
  }
  uVar3 = *param_2 & 0xffffffff00000000;
  uVar2 = *(ulong *)(*(long *)this + 0x2bc8) & 0xffffffff00000000;
  return *(int *)((uVar2 | *(uint *)((uVar2 | *(uint *)(*(ulong *)(*(long *)this + 0x2bc8) - 1)) +
                                    0x13)) + 0x27b) ==
         *(int *)((uVar3 | *(uint *)((uVar3 | *(uint *)((uVar3 | *(uint *)(*param_2 + 0xf)) - 1)) +
                                    0x13)) + 0x27b);
}

