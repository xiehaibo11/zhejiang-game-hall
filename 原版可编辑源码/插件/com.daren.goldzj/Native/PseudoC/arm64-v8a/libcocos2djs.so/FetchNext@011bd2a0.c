
/* v8::internal::RegExpGlobalCache::FetchNext() */

long __thiscall v8::internal::RegExpGlobalCache::FetchNext(RegExpGlobalCache *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  iVar2 = *(int *)(this + 8);
  iVar4 = iVar2 + 1;
  *(int *)(this + 8) = iVar4;
  if (iVar4 < *(int *)this) {
    return *(long *)(this + 0x10) + (long)(*(int *)(this + 0xc) * iVar4) * 4;
  }
  if (*(int *)this < *(int *)(this + 4)) {
LAB_011bd370:
    lVar5 = 0;
    *(undefined4 *)this = 0;
  }
  else {
    uVar6 = **(ulong **)(this + 0x20);
    piVar1 = (int *)(*(long *)(this + 0x10) + (long)(*(int *)(this + 0xc) * iVar2) * 4);
    iVar4 = piVar1[1];
    uVar3 = *(uint *)(uVar6 + 0xb);
    uVar6 = uVar6 & 0xffffffff00000000;
    if ((((uVar3 & 1) == 0) || (uVar3 != *(uint *)(uVar6 + 0xa0))) &&
       ((*(uint *)((uVar6 | uVar3) + 7) & 0xfffffffe) == 2)) {
      iVar4 = RegExpImpl::AtomExecRaw
                        (*(undefined8 *)(this + 0x30),*(ulong **)(this + 0x20),
                         *(undefined8 *)(this + 0x28),iVar4,*(long *)(this + 0x10),
                         *(undefined4 *)(this + 0x18));
    }
    else {
      if (*piVar1 == iVar4) {
        iVar4 = AdvanceZeroLength(this,iVar4);
      }
      if (*(int *)(**(long **)(this + 0x28) + 7) < iVar4) goto LAB_011bd370;
      iVar4 = RegExpImpl::IrregexpExecRaw
                        (*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x20),
                         *(long **)(this + 0x28),iVar4,*(undefined8 *)(this + 0x10),
                         *(undefined4 *)(this + 0x18));
    }
    *(int *)this = iVar4;
    if (iVar4 < 1) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(this + 0x10);
      *(undefined4 *)(this + 8) = 0;
    }
  }
  return lVar5;
}

