
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessCalleeForCallOrConstruct(v8::internal::compiler::Callee
   const&, v8::base::Optional<v8::internal::compiler::Hints>,
   v8::internal::ZoneVector<v8::internal::compiler::Hints> const&, v8::internal::SpeculationMode,
   v8::internal::compiler::MissingArgumentsPolicy, v8::internal::compiler::Hints*) */

void v8::internal::compiler::SerializerForBackgroundCompilation::ProcessCalleeForCallOrConstruct
               (SerializerForBackgroundCompilation *param_1,Isolate *param_2,undefined8 param_3,
               undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined4 param_7,
               Hints *param_8)

{
  uint uVar1;
  int iVar2;
  Isolate *pIVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  Zone *pZVar8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_2[8] == (Isolate)0x0) {
    if (*(ulong **)param_2 == (ulong *)0x0) goto LAB_012c9760;
    pIVar3 = (Isolate *)**(undefined8 **)param_1;
    uVar6 = **(ulong **)param_2;
    uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0xb);
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar6;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar6);
    }
  }
  else {
    puVar5 = *(ulong **)(param_2 + 0x10);
  }
  uVar1 = *(uint *)(*puVar5 + 3);
  if (((uVar1 & 1) != 0) &&
     (uVar6 = *puVar5 & 0xffffffff00000000,
     *(short *)((uVar6 | 7) + (ulong)*(uint *)((uVar6 | uVar1) - 1)) == 0x4e)) {
    ProcessApiCall(param_1,puVar5,param_5);
    return;
  }
  if ((*(uint *)(*puVar5 + 3) & 1) == 0) {
    ProcessBuiltinCall(param_1);
    return;
  }
  if ((*(uint *)(param_1 + 0x68) >> 3 & 1) != 0) {
    local_80 = *puVar5;
    iVar2 = SharedFunctionInfo::GetInlineability((SharedFunctionInfo *)&local_80);
    if (iVar2 == 0) {
      if (param_2[8] == (Isolate)0x0) {
        if (*(ulong **)param_2 == (ulong *)0x0) {
LAB_012c9760:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(location_) != nullptr");
        }
        uVar7 = **(ulong **)param_2;
        uVar6 = uVar7 & 0xffffffff00000000;
        uVar1 = *(uint *)((uVar6 | *(uint *)(uVar7 + 0xb)) + 3);
        if (uVar1 == 0x84) {
          return;
        }
        if (((uVar1 & 1) != 0) &&
           (*(ushort *)((uVar6 | 7) + (ulong)*(uint *)((uVar6 | uVar1) - 1)) - 0x95 < 2)) {
          return;
        }
        if (*(short *)((uVar6 | 7) +
                      (ulong)*(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(uVar7 + 0x13)) + 3)) -
                                      1)) != 0x9f) {
          return;
        }
      }
      pZVar8 = (Zone *)**(undefined8 **)param_1;
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar4 = ZoneStats::NewEmptyZone(*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10));
        *(undefined8 *)(param_1 + 0x20) = uVar4;
      }
      Callee::ToCompilationSubject(param_2,pZVar8);
      uStack_a8 = uStack_78;
      local_b0 = local_80;
      uStack_98 = uStack_68;
      uStack_a0 = uStack_70;
      local_88 = RunChildSerializer(param_1,&local_b0,param_3,param_4,param_5,param_7);
      pZVar8 = *(Zone **)(param_1 + 0x20);
      if (pZVar8 == (Zone *)0x0) {
        pZVar8 = (Zone *)ZoneStats::NewEmptyZone
                                   (*(ZoneStats **)(param_1 + 0x18),*(char **)(param_1 + 0x10));
        *(Zone **)(param_1 + 0x20) = pZVar8;
      }
      Hints::Add(param_8,(Hints *)&local_88,pZVar8);
    }
  }
  return;
}

