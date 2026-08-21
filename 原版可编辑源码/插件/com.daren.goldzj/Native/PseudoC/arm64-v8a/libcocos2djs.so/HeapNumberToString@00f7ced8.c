
/* v8::internal::Factory::HeapNumberToString(v8::internal::Handle<v8::internal::HeapNumber>, double,
   bool) */

void __thiscall
v8::internal::Factory::HeapNumberToString
          (internal *param_1,Factory *this,undefined8 *param_3,uint param_4)

{
  long lVar1;
  ulong *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((param_4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(*(long *)(this + 0xf38) + 3) >> 2) - 1U &
            ((uint)((ulong)param_1 >> 0x20) ^ (uint)param_1);
    puVar2 = (ulong *)NumberToStringCacheGet(this,*param_3,uVar4);
    if (((*puVar2 & 1) == 0) || ((int)*puVar2 != *(int *)(this + 0xa0))) goto LAB_00f7cf88;
  }
  uVar3 = DoubleToCString(param_1,auStack_68,0x20);
  NumberToStringCacheSet(this,param_3,uVar4,uVar3,param_4 & 1);
LAB_00f7cf88:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

