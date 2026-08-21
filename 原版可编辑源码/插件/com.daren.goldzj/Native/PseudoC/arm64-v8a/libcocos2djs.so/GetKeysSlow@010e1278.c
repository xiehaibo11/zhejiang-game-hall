
/* v8::internal::FastKeyAccumulator::GetKeysSlow(v8::internal::GetKeysConversion) */

long * __thiscall
v8::internal::FastKeyAccumulator::GetKeysSlow(FastKeyAccumulator *this,undefined4 param_2)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long local_58;
  long *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  FastKeyAccumulator local_30;
  FastKeyAccumulator local_2f;
  undefined1 local_2e;
  FastKeyAccumulator local_2d;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_58 = *(long *)this;
  local_38 = *(undefined8 *)(this + 0x18);
  uStack_40 = 0;
  local_50 = (long *)0x0;
  local_2e = 1;
  local_30 = this[0x20];
  local_2f = this[0x21];
  local_48 = *(undefined8 *)(this + 0x10);
  local_2d = this[0x24];
  cVar2 = KeyAccumulator::CollectKeys((KeyAccumulator *)&local_58,*(undefined8 *)(this + 8));
  if (cVar2 == '\0') {
    plVar3 = (long *)0x0;
  }
  else if (local_50 == (long *)0x0) {
    plVar3 = (long *)(local_58 + 0x168);
  }
  else if (((int)local_38 != 0) ||
          (plVar3 = local_50, *(int *)(*local_50 + -1) != *(int *)(local_58 + 0xe0))) {
    plVar3 = (long *)OrderedHashSet::ConvertToKeysArray(local_58,local_50,param_2);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar3;
}

