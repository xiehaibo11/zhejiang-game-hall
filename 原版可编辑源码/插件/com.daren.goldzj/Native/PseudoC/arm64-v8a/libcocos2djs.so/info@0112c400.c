
/* v8::internal::SourceTextModule::info() const */

ulong __thiscall v8::internal::SourceTextModule::info(SourceTextModule *this)

{
  Isolate *pIVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong local_18;
  
  uVar2 = *(ulong *)this;
  if ((*(uint *)(uVar2 + 0xb) & 0xfffffffe) == 0xc) {
    return uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0x17);
  }
  switch((int)*(uint *)(uVar2 + 0xb) >> 1) {
  case 0:
  case 1:
    uVar4 = *(uint *)(uVar2 + 0x17);
    goto LAB_0112c488;
  case 2:
    uVar3 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0x17);
    break;
  case 3:
  case 4:
  case 5:
    uVar3 = uVar2 & 0xffffffff00000000 |
            (ulong)*(uint *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0x17)) + 0xb);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  uVar4 = *(uint *)(uVar3 + 0xb);
LAB_0112c488:
  pIVar1 = (Isolate *)(uVar2 & 0xffffffff00000000);
  uVar4 = *(uint *)(((ulong)pIVar1 | (ulong)uVar4) + 7);
  if (((uVar4 & 1) == 0) ||
     (local_18 = (ulong)pIVar1 | (ulong)uVar4,
     *(short *)(((ulong)pIVar1 | 7) + (ulong)*(uint *)(local_18 - 1)) != 0x83)) {
    local_18 = ScopeInfo::Empty(pIVar1);
  }
  uVar2 = ScopeInfo::ModuleDescriptorInfo((ScopeInfo *)&local_18);
  return uVar2;
}

