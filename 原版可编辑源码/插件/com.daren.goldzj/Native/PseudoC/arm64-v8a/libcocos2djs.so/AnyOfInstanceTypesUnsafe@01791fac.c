
/* v8::internal::compiler::MapInference::AnyOfInstanceTypesUnsafe(std::__ndk1::function<bool
   (v8::internal::InstanceType)>) const */

undefined4 __thiscall
v8::internal::compiler::MapInference::AnyOfInstanceTypesUnsafe(MapInference *this,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  code *pcVar6;
  undefined4 uVar7;
  ObjectRef aOStack_d8 [20];
  undefined2 local_c4 [2];
  MapInference *local_c0;
  long alStack_b0 [4];
  long *local_90;
  MapInference *local_80;
  long local_70 [4];
  long *local_50;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (*(long *)(this + 0x10) == *(long *)(this + 0x18)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","HaveMaps()");
  }
  plVar4 = (long *)param_2[4];
  local_c0 = this;
  local_80 = this;
  if (plVar4 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (param_2 == plVar4) {
    local_50 = local_70;
    (**(code **)(*plVar4 + 0x18))();
    local_c0 = local_80;
  }
  else {
    local_50 = (long *)(**(code **)(*plVar4 + 0x10))();
  }
  puVar1 = *(undefined8 **)(this + 0x10);
  puVar2 = *(undefined8 **)(this + 0x18);
  if (local_50 == (long *)0x0) {
    local_90 = (long *)0x0;
  }
  else if (local_70 == local_50) {
    local_90 = alStack_b0;
    (**(code **)(*local_50 + 0x18))();
  }
  else {
    local_90 = (long *)(**(code **)(*local_50 + 0x10))();
  }
  for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    ObjectRef::ObjectRef(aOStack_d8,*(undefined8 *)local_c0,*puVar1,0);
    uVar5 = ObjectRef::IsMap(aOStack_d8);
    if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsMap()");
    }
    local_c4[0] = MapRef::instance_type((MapRef *)aOStack_d8);
    if (local_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_008589d0();
    }
    uVar5 = (**(code **)(*local_90 + 0x30))(local_90,local_c4);
    if ((uVar5 & 1) != 0) {
      uVar7 = 1;
      goto LAB_017920dc;
    }
  }
  uVar7 = 0;
LAB_017920dc:
  if (alStack_b0 == local_90) {
    pcVar6 = *(code **)(*local_90 + 0x20);
LAB_01792108:
    (*pcVar6)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar6 = *(code **)(*local_90 + 0x28);
    goto LAB_01792108;
  }
  if (local_70 == local_50) {
    pcVar6 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_0179213c;
    pcVar6 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar6)();
LAB_0179213c:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

