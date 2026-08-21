
/* v8::internal::compiler::MapInference::AllOfInstanceTypesAreJSReceiver() const */

uint __thiscall
v8::internal::compiler::MapInference::AllOfInstanceTypesAreJSReceiver(MapInference *this)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  undefined **local_60;
  code *pcStack_58;
  long *local_40;
  long local_28;
  
  local_40 = (long *)&local_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = &PTR_FUN_01cd94a0;
  pcStack_58 = InstanceTypeChecker::IsJSReceiver;
  uVar2 = AllOfInstanceTypesUnsafe(this,&local_60);
  if (&local_60 == (undefined ***)local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_01791c00;
    pcVar3 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar3)(local_40);
LAB_01791c00:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

