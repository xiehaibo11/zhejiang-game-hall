
/* v8::internal::Factory::SmiToString(v8::internal::Smi, bool) */

ulong * __thiscall v8::internal::Factory::SmiToString(Factory *this,ulong param_2,uint param_3)

{
  internal *piVar6;
  long lVar1;
  undefined4 uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auStack_78 [32];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  piVar6._0_4_ = (internal *)((int)param_2 >> 1);
  if ((param_3 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)(*(long *)(this + 0xf38) + 3) >> 2) - 1U & (uint)piVar6._0_4_;
    puVar3 = (ulong *)NumberToStringCacheGet(this,param_2,uVar5);
    if (((*puVar3 & 1) == 0) || ((int)*puVar3 != *(int *)(this + 0xa0))) goto LAB_00f7cea4;
  }
  uVar4 = IntToCString(piVar6._0_4_,auStack_78,0x20);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(this + 0x95a0);
    if (puVar3 == *(ulong **)(this + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar3 + 1;
    *puVar3 = param_2;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(this + 0x95b8),param_2);
  }
  puVar3 = (ulong *)NumberToStringCacheSet(this,puVar3,uVar5,uVar4,param_3 & 1);
  if ((-1 < (int)param_2) && (*(int *)(*puVar3 + 3) == 7)) {
    uVar2 = StringHasher::MakeArrayIndexHash((uint)piVar6._0_4_,*(int *)(*puVar3 + 7));
    *(undefined4 *)(*puVar3 + 3) = uVar2;
  }
LAB_00f7cea4:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar3;
}

