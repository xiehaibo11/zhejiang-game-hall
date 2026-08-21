
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessCallOrConstructRecursive(v8::internal::compiler::Hints
   const&, v8::base::Optional<v8::internal::compiler::Hints>,
   v8::internal::ZoneVector<v8::internal::compiler::Hints> const&, v8::internal::SpeculationMode,
   v8::internal::compiler::MissingArgumentsPolicy, v8::internal::compiler::Hints*) */

void v8::internal::compiler::SerializerForBackgroundCompilation::ProcessCallOrConstructRecursive
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *local_b0;
  undefined8 *puStack_a8;
  undefined8 *local_a0;
  Zone *pZStack_98;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  Zone *local_68;
  
  puVar3 = (undefined8 *)*param_2;
  if (puVar3 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*puVar3;
    if (puVar5 != (undefined8 *)0x0) {
      do {
        ProcessCalleeForCallOrConstruct
                  (param_1,*puVar5,param_3,param_4,param_5,param_6,param_7,param_8);
        puVar5 = (undefined8 *)puVar5[1];
      } while (puVar5 != (undefined8 *)0x0);
      puVar3 = (undefined8 *)*param_2;
      if (puVar3 == (undefined8 *)0x0) {
        return;
      }
    }
    plVar6 = (long *)puVar3[2];
    if (plVar6 != (long *)0x0) {
      do {
        local_a0 = (undefined8 *)plVar6[2];
        puStack_a8 = (undefined8 *)plVar6[1];
        local_b0 = (undefined8 *)*plVar6;
        local_88 = 0;
        local_80 = (undefined8 *)CONCAT71(local_80._1_7_,1);
        local_78 = local_b0;
        puStack_70 = puStack_a8;
        local_68 = (Zone *)local_a0;
        ProcessCalleeForCallOrConstruct
                  (param_1,&local_88,param_3,param_4,param_5,param_6,param_7,param_8);
        plVar6 = (long *)plVar6[3];
      } while (plVar6 != (long *)0x0);
      puVar3 = (undefined8 *)*param_2;
      if (puVar3 == (undefined8 *)0x0) {
        return;
      }
    }
    for (puVar3 = (undefined8 *)puVar3[4]; puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)puVar3[5]) {
      local_88 = *puVar3;
      local_68 = (Zone *)puVar3[4];
      local_80 = (undefined8 *)0x0;
      local_78 = (undefined8 *)0x0;
      puStack_70 = (undefined8 *)0x0;
      uVar1 = puVar3[2] - puVar3[1];
      if (uVar1 != 0) {
        if ((ulong)((long)uVar1 >> 3) >> 0x1c != 0) goto LAB_012cbb44;
        puVar5 = *(undefined8 **)(local_68 + 0x10);
        if ((ulong)(*(long *)(local_68 + 0x18) - (long)puVar5) < uVar1) {
          puVar5 = (undefined8 *)Zone::NewExpand(local_68,uVar1);
        }
        else {
          *(ulong *)(local_68 + 0x10) = (long)puVar5 + uVar1;
        }
        puStack_70 = puVar5 + ((long)uVar1 >> 3);
        puVar2 = (undefined8 *)puVar3[2];
        local_78 = puVar5;
        for (puVar4 = (undefined8 *)puVar3[1]; local_80 = puVar5, puVar4 != puVar2;
            puVar4 = puVar4 + 1) {
          *local_78 = *puVar4;
          local_78 = local_78 + 1;
        }
      }
      puVar4 = local_78;
      puVar5 = local_80;
      uVar1 = (long)local_78 - (long)local_80;
      local_b0 = (undefined8 *)0x0;
      puStack_a8 = (undefined8 *)0x0;
      local_a0 = (undefined8 *)0x0;
      pZStack_98 = local_68;
      if (uVar1 != 0) {
        if ((ulong)((long)uVar1 >> 3) >> 0x1c != 0) {
LAB_012cbb44:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        puVar2 = *(undefined8 **)(local_68 + 0x10);
        if ((ulong)(*(long *)(local_68 + 0x18) - (long)puVar2) < uVar1) {
          puVar2 = (undefined8 *)Zone::NewExpand(local_68,uVar1);
        }
        else {
          *(ulong *)(local_68 + 0x10) = (long)puVar2 + uVar1;
        }
        local_a0 = puVar2 + ((long)uVar1 >> 3);
        puStack_a8 = puVar2;
        for (; local_b0 = puVar2, puVar5 != puVar4; puVar5 = puVar5 + 1) {
          *puStack_a8 = *puVar5;
          puStack_a8 = puStack_a8 + 1;
        }
      }
      std::__ndk1::
      vector<v8::internal::compiler::Hints,v8::internal::ZoneAllocator<v8::internal::compiler::Hints>>
      ::insert<std::__ndk1::__wrap_iter<v8::internal::compiler::Hints_const*>>
                ((vector<v8::internal::compiler::Hints,v8::internal::ZoneAllocator<v8::internal::compiler::Hints>>
                  *)&local_b0,puStack_a8,*param_5,param_5[1]);
      ProcessCallOrConstructRecursive
                (param_1,&local_88,param_3,param_4,&local_b0,param_6,param_7,param_8);
      if (local_b0 != (undefined8 *)0x0) {
        puStack_a8 = local_b0;
      }
    }
  }
  return;
}

