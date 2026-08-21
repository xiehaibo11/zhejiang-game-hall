
/* v8::internal::LargePage::GetAddressToShrink(unsigned long, unsigned long) */

LargePage * __thiscall
v8::internal::LargePage::GetAddressToShrink(LargePage *this,ulong param_1,ulong param_2)

{
  long lVar1;
  LargePage *pLVar2;
  ulong uVar3;
  LargePage *pLVar4;
  ulong uVar5;
  
  if (((byte)this[8] & 1) == 0) {
    if (FLAG_v8_os_page_size == 0) {
      lVar1 = CommitPageSize();
    }
    else {
      lVar1 = (long)FLAG_v8_os_page_size << 10;
    }
    uVar5 = ~(ulong)this + param_1 + param_2 + lVar1 & -lVar1;
    uVar3 = base::OS::HasLazyCommits();
    pLVar4 = this;
    if (((uVar3 & 1) != 0) &&
       ((((byte)this[10] >> 5 & 1) != 0 || (*(int *)(*(long *)(this + 0x58) + 0x48) != 5)))) {
      pLVar4 = this + 0x98;
    }
    pLVar2 = this + uVar5;
    if (*(ulong *)pLVar4 <= uVar5) {
      pLVar2 = (LargePage *)0x0;
    }
  }
  else {
    pLVar2 = (LargePage *)0x0;
  }
  return pLVar2;
}

