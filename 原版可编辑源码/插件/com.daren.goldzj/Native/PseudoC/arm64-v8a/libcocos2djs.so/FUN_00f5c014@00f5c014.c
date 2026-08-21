
bool FUN_00f5c014(void)

{
  long *plVar1;
  ulong *puVar2;
  long *in_x3;
  ulong uVar3;
  LookupIterator aLStack_78 [4];
  int local_74;
  
  v8::internal::LookupIterator::PropertyOrElement(aLStack_78);
  if (local_74 == 5) {
    puVar2 = (ulong *)v8::internal::LookupIterator::GetAccessors();
    uVar3 = *puVar2;
    if ((uVar3 & 1) == 0) {
      return false;
    }
    if (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x52) {
      return false;
    }
    if (*(int *)(uVar3 + 3) != (int)*in_x3) {
      return *(int *)(uVar3 + 7) == (int)*in_x3;
    }
  }
  else {
    if (local_74 != 6) {
      return false;
    }
    plVar1 = (long *)v8::internal::LookupIterator::GetDataValue();
    if (plVar1 != in_x3) {
      if (in_x3 == (long *)0x0) {
        return false;
      }
      if (plVar1 != (long *)0x0) {
        return *plVar1 == *in_x3;
      }
      return false;
    }
  }
  return true;
}

