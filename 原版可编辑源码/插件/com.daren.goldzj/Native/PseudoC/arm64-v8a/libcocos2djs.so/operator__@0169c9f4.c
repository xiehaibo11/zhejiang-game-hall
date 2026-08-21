
/* v8::internal::compiler::PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>, v8::internal::compiler::CsaLoadElimination::FieldInfo,
   v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*, v8::internal::compiler::Node*> >
   >::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,
   v8::internal::compiler::Node*>, v8::internal::compiler::CsaLoadElimination::FieldInfo,
   v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*, v8::internal::compiler::Node*> >
   > const&) const */

void __thiscall
v8::internal::compiler::
PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
::operator==(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
             *this,PersistentMap *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 local_9b0 [2];
  long local_9a8;
  long *local_9a0;
  long local_898;
  undefined8 uStack_890;
  long local_880;
  long *local_878;
  double_iterator adStack_758 [8];
  long local_750;
  long *local_748;
  long local_640;
  char local_638;
  iterator aiStack_630 [8];
  long local_628;
  long *local_620;
  long local_518;
  char local_510;
  char local_508;
  char local_507;
  undefined1 auStack_500 [296];
  undefined4 local_3d8 [2];
  undefined8 local_3d0;
  undefined8 local_3c8;
  long local_2c0;
  undefined8 local_2b8;
  undefined4 local_180 [2];
  undefined8 local_178;
  undefined8 local_170;
  long local_68;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar7 = *(long *)this;
  lVar12 = *(long *)param_1;
  if (lVar7 == lVar12) {
LAB_0169cd4c:
    uVar10 = 1;
  }
  else {
    lVar9 = *(long *)(this + 8);
    lVar8 = *(long *)(param_1 + 8);
    if ((lVar9 == lVar8) &&
       (this[0x10] ==
        *(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
          *)(param_1 + 0x10))) {
      uVar11 = *(undefined8 *)(this + 0x10);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      if (lVar7 == 0) {
        local_3d8[0] = 0;
        local_3c8 = 0;
        local_3d0 = 0;
        local_2c0 = lVar9;
        local_2b8 = uVar11;
      }
      else {
        iterator::begin(local_3d8,lVar7,lVar9,uVar11);
      }
      if (lVar12 == 0) {
        local_9b0[0] = 0;
        local_9a8 = 0;
        local_9a0 = (long *)0x0;
        local_898 = lVar8;
        uStack_890 = uVar10;
      }
      else {
        iterator::begin(local_9b0,lVar12,lVar8,uVar10);
      }
      double_iterator::double_iterator(adStack_758,local_3d8,local_9b0);
      local_3d8[0] = 0;
      local_3c8 = 0;
      local_3d0 = 0;
      local_180[0] = 0;
      local_170 = 0;
      local_178 = 0;
      local_2c0 = lVar9;
      local_2b8 = uVar11;
      local_68 = lVar8;
      local_60 = uVar10;
      double_iterator::double_iterator((double_iterator *)local_9b0,local_3d8,local_180);
      do {
        if ((local_748 == (long *)0x0) || (local_9a0 == (long *)0x0)) {
          if (local_748 == (long *)0x0 && local_9a0 == (long *)0x0) {
LAB_0169cbcc:
            if ((local_620 == (long *)0x0) || (local_878 == (long *)0x0)) {
              if (local_620 == (long *)0x0 && local_878 == (long *)0x0) goto LAB_0169cd4c;
            }
            else if (*(int *)((long)local_620 + 0x24) == *(int *)((long)local_878 + 0x24)) {
              plVar1 = local_620;
              plVar5 = local_620 + 1;
              if (local_620[5] != 0) {
                plVar1 = (long *)(local_628 + 0x20);
                plVar5 = (long *)(local_628 + 0x28);
              }
              plVar2 = local_878;
              if (local_878[5] != 0) {
                plVar2 = (long *)(local_880 + 0x20);
              }
              plVar3 = local_878 + 1;
              if (local_878[5] != 0) {
                plVar3 = (long *)(local_880 + 0x28);
              }
              if ((*plVar1 == *plVar2) && (*plVar5 == *plVar3)) goto LAB_0169cd4c;
            }
          }
        }
        else if (*(int *)((long)local_748 + 0x24) == *(int *)((long)local_9a0 + 0x24)) {
          plVar1 = local_748;
          plVar5 = local_748 + 1;
          if (local_748[5] != 0) {
            plVar1 = (long *)(local_750 + 0x20);
            plVar5 = (long *)(local_750 + 0x28);
          }
          plVar2 = local_9a0;
          if (local_9a0[5] != 0) {
            plVar2 = (long *)(local_9a8 + 0x20);
          }
          plVar3 = local_9a0 + 1;
          if (local_9a0[5] != 0) {
            plVar3 = (long *)(local_9a8 + 0x28);
          }
          if ((*plVar1 == *plVar2) && (*plVar5 == *plVar3)) goto LAB_0169cbcc;
        }
        if (local_508 == '\0') {
          plVar1 = local_620 + 3;
          plVar5 = local_620 + 2;
          if (local_620[5] != 0) {
            plVar1 = (long *)(local_628 + 0x38);
            plVar5 = (long *)(local_628 + 0x30);
          }
          lVar7 = *plVar5;
          lVar12 = local_640;
          if (local_638 != (char)*plVar1) break;
        }
        else {
          plVar1 = local_748 + 3;
          plVar5 = local_748 + 2;
          if (local_748[5] != 0) {
            plVar1 = (long *)(local_750 + 0x38);
            plVar5 = (long *)(local_750 + 0x30);
          }
          lVar7 = local_518;
          cVar6 = local_510;
          lVar12 = *plVar5;
          if (local_507 != '\0') {
            if (local_620[5] == 0) {
              lVar7 = local_620[2];
              if ((char)*plVar1 == (char)local_620[3]) goto LAB_0169ccf8;
              break;
            }
            lVar7 = *(long *)(local_628 + 0x30);
            cVar6 = *(char *)(local_628 + 0x38);
          }
          if ((char)*plVar1 != cVar6) break;
        }
LAB_0169ccf8:
        if (lVar12 != lVar7) break;
        if (local_508 != '\0') {
          iterator::operator++((iterator *)adStack_758);
        }
        if (local_507 != '\0') {
          iterator::operator++(aiStack_630);
        }
        memcpy(local_180,adStack_758,0x128);
        memcpy(auStack_500,aiStack_630,0x128);
        double_iterator::double_iterator((double_iterator *)local_3d8,local_180,auStack_500);
        memcpy(adStack_758,local_3d8,0x252);
      } while( true );
    }
    uVar10 = 0;
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}

