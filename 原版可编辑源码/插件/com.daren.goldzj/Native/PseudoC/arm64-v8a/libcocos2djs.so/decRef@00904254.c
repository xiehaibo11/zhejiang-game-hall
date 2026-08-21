
/* se::RefCounter::decRef() */

void __thiscall se::RefCounter::decRef(RefCounter *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  *(int *)(this + 8) = iVar1 + -1;
  if ((this != (RefCounter *)0x0) && (iVar1 + -1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00904270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}

