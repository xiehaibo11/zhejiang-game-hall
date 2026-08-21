
/* v8::internal::StubCache::Set(v8::internal::Name, v8::internal::Map, v8::internal::MaybeObject) */

void __thiscall v8::internal::StubCache::Set(StubCache *this,long param_2,uint param_3,uint param_4)

{
  StubCache *pSVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(this + 0x7800);
  pSVar1 = this + (*(int *)(param_2 + 3) + (param_3 ^ param_3 >> 0xd) & 0x1ffc) * 3;
  uVar2 = *(uint *)(pSVar1 + 4);
  iVar3 = Builtins::builtin((Builtins *)(lVar6 + 0x9e00),0x97);
  if ((uVar2 + (int)lVar6 != iVar3) && ((*(uint *)(pSVar1 + 8) & 1) != 0)) {
    uVar2 = (int)*(long *)(this + 0x7800) + *(uint *)(pSVar1 + 8);
    lVar6 = *(long *)(this + 0x7800) + (ulong)*(uint *)pSVar1;
    uVar5 = *(undefined8 *)pSVar1;
    uVar2 = ((*(int *)(lVar6 + 3) + (uVar2 ^ uVar2 >> 0xd) & 0x7fc) - (int)lVar6) + 0x6e5 & 0x7fc;
    *(uint *)(this + (ulong)(uVar2 * 3) + 0x6008) = *(uint *)(pSVar1 + 8);
    *(undefined8 *)(this + (ulong)(uVar2 * 3) + 0x6000) = uVar5;
  }
  *(uint *)pSVar1 = (uint)param_2;
  *(uint *)(pSVar1 + 4) = param_4;
  *(uint *)(pSVar1 + 8) = param_3;
  lVar6 = *(long *)(*(long *)(this + 0x7800) + 0x9520);
  if (*(char *)(lVar6 + 0x1b98) == '\0') {
    *(char *)(lVar6 + 0x1b98) = '\x01';
    piVar4 = (int *)StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar6 + 0x1b80))
    ;
    *(int **)(lVar6 + 0x1b90) = piVar4;
  }
  else {
    piVar4 = *(int **)(lVar6 + 0x1b90);
  }
  if (piVar4 != (int *)0x0) {
    *piVar4 = *piVar4 + 1;
  }
  return;
}

