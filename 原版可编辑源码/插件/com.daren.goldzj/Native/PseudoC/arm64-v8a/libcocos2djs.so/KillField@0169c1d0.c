
/* v8::internal::compiler::CsaLoadElimination::AbstractState::KillField(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::MachineRepresentation, v8::internal::Zone*) const */

long * __thiscall
v8::internal::compiler::CsaLoadElimination::AbstractState::KillField
          (AbstractState *this,long *param_1,undefined8 param_2,undefined4 param_4,Zone *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  short sVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined4 local_180 [2];
  long local_178;
  undefined8 *local_170;
  long local_68;
  long lStack_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  plVar7 = *(long **)(param_5 + 0x10);
  if ((ulong)(*(long *)(param_5 + 0x18) - (long)plVar7) < 0x20) {
    plVar7 = (long *)Zone::NewExpand(param_5,0x20);
  }
  else {
    *(long **)(param_5 + 0x10) = plVar7 + 4;
  }
  lVar10 = *(long *)this;
  lVar12 = *(long *)(this + 0x18);
  lVar11 = *(long *)(this + 0x10);
  plVar7[1] = *(long *)(this + 8);
  *plVar7 = lVar10;
  plVar7[3] = lVar12;
  plVar7[2] = lVar11;
  if (*plVar7 == 0) {
    local_180[0] = 0;
    local_178 = 0;
    local_170 = (undefined8 *)0x0;
    local_68 = plVar7[1];
    lStack_60 = plVar7[2];
  }
  else {
    PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
    ::iterator::begin(local_180);
    while (local_170 != (undefined8 *)0x0) {
      puVar1 = local_170 + 3;
      puVar2 = local_170 + 1;
      if (local_170[5] != 0) {
        puVar1 = (undefined8 *)(local_178 + 0x38);
        puVar2 = (undefined8 *)(local_178 + 0x28);
      }
      uVar9 = *puVar2;
      puVar2 = local_170;
      if (local_170[5] != 0) {
        puVar2 = (undefined8 *)(local_178 + 0x20);
      }
      plVar8 = (long *)*puVar2;
      uVar6 = CsaLoadEliminationHelpers::OffsetMayAlias(param_2,param_4,uVar9,*(undefined1 *)puVar1)
      ;
      if ((uVar6 & 1) != 0) {
        if (plVar8 != param_1) {
          plVar3 = plVar8;
          if (*(short *)(*plVar8 + 0x10) != 0xe7) {
            plVar3 = param_1;
          }
          if (*(short *)(*plVar3 + 0x10) == 0xe7) {
            plVar3 = param_1;
            if (*(short *)(*plVar8 + 0x10) != 0xe7) {
              plVar3 = plVar8;
            }
            sVar4 = *(short *)(*plVar3 + 0x10);
            if (((sVar4 == 0x1e) || (sVar4 == 0x32)) || (sVar4 == 0xe7)) goto LAB_0169c260;
          }
        }
        PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
        ::Set(plVar7,plVar8,uVar9,0,0);
      }
LAB_0169c260:
      PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
      ::iterator::operator++((iterator *)local_180);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar7;
}

