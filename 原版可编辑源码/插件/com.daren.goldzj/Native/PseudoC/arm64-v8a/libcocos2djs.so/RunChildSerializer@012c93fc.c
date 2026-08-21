
/* v8::internal::compiler::SerializerForBackgroundCompilation::RunChildSerializer(v8::internal::compiler::CompilationSubject,
   v8::base::Optional<v8::internal::compiler::Hints>,
   v8::internal::ZoneVector<v8::internal::compiler::Hints> const&,
   v8::internal::compiler::MissingArgumentsPolicy) */

undefined8
v8::internal::compiler::SerializerForBackgroundCompilation::RunChildSerializer
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined4 param_6)

{
  long lVar1;
  undefined8 uVar2;
  Zone *pZVar3;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  SerializerForBackgroundCompilation aSStack_c0 [24];
  Zone *local_a8;
  long local_a0;
  undefined8 local_90;
  long *local_78;
  long local_50;
  long local_48;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_d8 = param_2[1];
  local_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  SerializerForBackgroundCompilation
            (aSStack_c0,param_1[3],*param_1,param_1[1],&local_e0,param_3,param_4,param_5,param_6,
             *(undefined4 *)(param_1 + 0xd));
  local_e8 = Run(aSStack_c0);
  pZVar3 = (Zone *)param_1[4];
  if (pZVar3 == (Zone *)0x0) {
    pZVar3 = (Zone *)ZoneStats::NewEmptyZone((ZoneStats *)param_1[3],(char *)param_1[2]);
    param_1[4] = pZVar3;
  }
  uVar2 = Hints::CopyToParentZone((Hints *)&local_e8,pZVar3);
  if (local_50 != 0) {
    local_48 = local_50;
  }
  for (; local_78 != (long *)0x0; local_78 = (long *)*local_78) {
  }
  local_90 = 0;
  if (local_a0 != 0) {
    ZoneStats::ReturnZone(local_a8);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

