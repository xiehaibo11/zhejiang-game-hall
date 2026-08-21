
/* v8::internal::compiler::CsaLoadElimination::AbstractState::Merge(v8::internal::compiler::CsaLoadElimination::AbstractState
   const*, v8::internal::Zone*) */

void v8::internal::compiler::CsaLoadElimination::AbstractState::Merge
               (AbstractState *param_1,Zone *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 local_190;
  undefined8 uStack_188;
  long local_180;
  undefined8 uStack_178;
  undefined4 local_170 [2];
  long local_168;
  undefined8 *local_160;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)param_1 == 0) {
    local_170[0] = 0;
    local_168 = 0;
    local_160 = (undefined8 *)0x0;
    local_58 = *(undefined8 *)(param_1 + 8);
    uStack_50 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
    ::iterator::begin(local_170,*(long *)param_1,*(undefined8 *)(param_1 + 8));
    if (local_160 != (undefined8 *)0x0) {
      if (local_160[5] != 0) goto LAB_0169b9e8;
      do {
        uStack_188 = local_160[1];
        local_190 = *local_160;
        uStack_178 = local_160[3];
        local_180 = local_160[2];
        while( true ) {
          plVar2 = (long *)PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
                           ::Get((PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
                                  *)param_2,(pair *)&local_190);
          if ((*plVar2 != local_180) || ((char)plVar2[1] != (char)uStack_178)) {
            PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
            ::Set(param_1,local_190,uStack_188,0,0);
          }
          PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
          ::iterator::operator++((iterator *)local_170);
          if (local_160 == (undefined8 *)0x0) goto LAB_0169ba44;
          if (local_160[5] == 0) break;
LAB_0169b9e8:
          uStack_188 = *(undefined8 *)(local_168 + 0x28);
          local_190 = *(undefined8 *)(local_168 + 0x20);
          uStack_178 = *(undefined8 *)(local_168 + 0x38);
          local_180 = *(long *)(local_168 + 0x30);
        }
      } while( true );
    }
  }
LAB_0169ba44:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

