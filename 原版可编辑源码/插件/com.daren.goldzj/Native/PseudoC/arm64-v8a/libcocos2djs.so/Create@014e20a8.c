
/* v8::internal::ExternalReference::Create(v8::internal::StatsCounter*) */

undefined8 v8::internal::ExternalReference::Create(StatsCounter *param_1)

{
  undefined8 uVar1;
  
  if (param_1[0x18] == (StatsCounter)0x0) {
    param_1[0x18] = (StatsCounter)0x1;
    uVar1 = StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)param_1);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}

