
/* v8::internal::Sweeper::GetSweptPageSafe(v8::internal::PagedSpace*) */

undefined8 __thiscall v8::internal::Sweeper::GetSweptPageSafe(Sweeper *this,PagedSpace *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  base::Mutex::Lock((Mutex *)(this + 0x40));
  lVar1 = *(long *)(this + (long)*(int *)(param_1 + 0x48) * 0x18 + 0x40);
  if (*(long *)(this + (long)*(int *)(param_1 + 0x48) * 0x18 + 0x38) == lVar1) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(lVar1 + -8);
    uVar3 = *puVar2;
    *(undefined8 **)(this + (long)*(int *)(param_1 + 0x48) * 0x18 + 0x40) = puVar2;
  }
  base::Mutex::Unlock((Mutex *)(this + 0x40));
  return uVar3;
}

