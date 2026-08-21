
/* v8::internal::compiler::Scheduler::ComputeSpecialRPO(v8::internal::Zone*,
   v8::internal::compiler::Schedule*) */

Schedule * v8::internal::compiler::Scheduler::ComputeSpecialRPO(Zone *param_1,Schedule *param_2)

{
  Zone *local_c8;
  Schedule *pSStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  Zone *pZStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  Zone *pZStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  Zone *pZStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  Zone *local_28;
  
  local_98 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_30 = 0;
  local_38 = 0;
  uStack_40 = 0;
  local_48 = 0;
  local_c8 = param_1;
  pSStack_c0 = param_2;
  pZStack_90 = param_1;
  pZStack_70 = param_1;
  pZStack_50 = param_1;
  local_28 = param_1;
  SpecialRPONumberer::ComputeAndInsertSpecialRPO
            ((SpecialRPONumberer *)&local_c8,*(BasicBlock **)(param_2 + 0x68),
             *(BasicBlock **)(param_2 + 0x70));
  SpecialRPONumberer::SerializeRPOIntoSchedule((SpecialRPONumberer *)&local_c8);
  return param_2 + 0x48;
}

