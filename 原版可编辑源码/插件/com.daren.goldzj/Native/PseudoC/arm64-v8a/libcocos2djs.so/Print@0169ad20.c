
/* v8::internal::compiler::CsaLoadElimination::AbstractState::Print() const */

void __thiscall
v8::internal::compiler::CsaLoadElimination::AbstractState::Print(AbstractState *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 local_180 [2];
  long local_178;
  long *local_170;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (*(long *)this == 0) {
    local_180[0] = 0;
    local_178 = 0;
    local_170 = (long *)0x0;
    local_68 = *(undefined8 *)(this + 8);
    uStack_60 = *(undefined8 *)(this + 0x10);
  }
  else {
    PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
    ::iterator::begin(local_180);
    if (local_170 != (long *)0x0) {
      if (local_170[5] != 0) goto LAB_0169adf8;
      do {
        plVar8 = local_170 + 1;
        plVar9 = local_170 + 2;
        plVar7 = local_170 + 3;
        plVar6 = local_170;
        while( true ) {
          uVar1 = *(uint *)(*plVar6 + 0x14);
          uVar2 = *(uint *)(*plVar8 + 0x14);
          uVar3 = *(uint *)(*plVar9 + 0x14);
          uVar10 = *(undefined8 *)(*(long *)*plVar6 + 8);
          uVar11 = *(undefined8 *)(*(long *)*plVar9 + 8);
          uVar5 = MachineReprToString((char)*plVar7);
          PrintF("    #%d+#%d:%s -> #%d:%s [repr=%s]\n",(ulong)(uVar1 & 0xffffff),
                 (ulong)(uVar2 & 0xffffff),uVar10,(ulong)(uVar3 & 0xffffff),uVar11,uVar5);
          PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
          ::iterator::operator++((iterator *)local_180);
          if (local_170 == (long *)0x0) goto LAB_0169ae1c;
          if (local_170[5] == 0) break;
LAB_0169adf8:
          plVar6 = (long *)(local_178 + 0x20);
          plVar8 = (long *)(local_178 + 0x28);
          plVar9 = (long *)(local_178 + 0x30);
          plVar7 = (long *)(local_178 + 0x38);
        }
      } while( true );
    }
  }
LAB_0169ae1c:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

