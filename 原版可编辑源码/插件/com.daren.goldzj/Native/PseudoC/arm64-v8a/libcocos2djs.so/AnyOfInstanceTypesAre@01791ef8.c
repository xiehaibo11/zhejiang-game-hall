
/* v8::internal::compiler::MapInference::AnyOfInstanceTypesAre(v8::internal::InstanceType) const */

uint __thiscall
v8::internal::compiler::MapInference::AnyOfInstanceTypesAre(MapInference *this,ushort param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  undefined **local_60;
  ushort local_58;
  long *local_40;
  long local_28;
  
  local_40 = (long *)&local_60;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 < 0x40) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!InstanceTypeChecker::IsString(type)");
  }
  local_60 = &PTR_FUN_01cd9530;
  local_58 = param_2;
  uVar2 = AnyOfInstanceTypesUnsafe(this,&local_60);
  if (&local_60 == (undefined ***)local_40) {
    pcVar3 = *(code **)(*local_40 + 0x20);
  }
  else {
    if (local_40 == (long *)0x0) goto LAB_01791f70;
    pcVar3 = *(code **)(*local_40 + 0x28);
  }
  (*pcVar3)(local_40);
LAB_01791f70:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

