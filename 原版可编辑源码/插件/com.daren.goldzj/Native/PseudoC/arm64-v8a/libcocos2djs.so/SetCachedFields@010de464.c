
/* v8::internal::JSDate::SetCachedFields(long, v8::internal::DateCache*) */

void __thiscall v8::internal::JSDate::SetCachedFields(JSDate *this,long param_1,DateCache *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int local_54;
  int local_38;
  int local_34;
  
  lVar5 = param_1;
  if (param_1 < 0) {
    lVar5 = param_1 + -86399999;
  }
  iVar1 = (int)(SUB168(SEXT816(lVar5) * SEXT816(0x636ba875fd33dc87),8) >> 0x19) -
          (SUB164(SEXT816(lVar5) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f);
  iVar3 = (int)param_1 + iVar1 * -86400000;
  DateCache::YearMonthDayFromDays(param_2,iVar1,&local_34,&local_38,&local_54);
  uVar7 = *(ulong *)(param_2 + 8);
  *(int *)(*(long *)this + 0x2b) = (int)uVar7;
  uVar4 = *(ulong *)this;
  iVar1 = (iVar1 + 4) % 7;
  if ((uVar7 & 1) != 0) {
    uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    lVar5 = uVar4 + 0x2b;
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,lVar5,uVar7);
      uVar4 = *(ulong *)this;
      uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      lVar5 = uVar4 + 0x2b;
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,lVar5,uVar7);
      uVar4 = *(ulong *)this;
    }
  }
  *(int *)(uVar4 + 0xf) = local_34 << 1;
  *(int *)(*(long *)this + 0x13) = local_38 << 1;
  *(int *)(*(long *)this + 0x17) = local_54 << 1;
  iVar2 = iVar1 * 2;
  if (iVar1 < 0) {
    iVar2 = iVar2 + 0xe;
  }
  *(int *)(*(long *)this + 0x1b) = iVar2;
  *(int *)(*(long *)this + 0x1f) = (iVar3 / 3600000) * 2;
  *(int *)(*(long *)this + 0x23) = ((iVar3 / 60000) % 0x3c) * 2;
  *(int *)(*(long *)this + 0x27) = ((iVar3 / 1000) % 0x3c) * 2;
  return;
}

