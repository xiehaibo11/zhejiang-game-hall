
/* v8::internal::SourceTextModule::GetSharedFunctionInfo() const */

ulong __thiscall v8::internal::SourceTextModule::GetSharedFunctionInfo(SourceTextModule *this)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)this;
  switch(*(int *)(uVar1 + 0xb) >> 1) {
  case 0:
  case 1:
    uVar2 = *(uint *)(uVar1 + 0x17);
    goto LAB_0112b57c;
  case 2:
    uVar2 = *(uint *)(uVar1 + 0x17);
    break;
  case 3:
  case 4:
  case 5:
    uVar2 = *(uint *)((uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0x17)) + 0xb);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  uVar2 = *(uint *)((uVar1 & 0xffffffff00000000 | (ulong)uVar2) + 0xb);
LAB_0112b57c:
  return uVar1 & 0xffffffff00000000 | (ulong)uVar2;
}

