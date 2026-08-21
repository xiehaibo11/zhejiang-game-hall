
/* v8::internal::ExternalReferenceTable::GetStatsCounterAddress(v8::internal::StatsCounter*) */

ExternalReferenceTable * __thiscall
v8::internal::ExternalReferenceTable::GetStatsCounterAddress
          (ExternalReferenceTable *this,StatsCounter *param_1)

{
  ExternalReferenceTable *pEVar1;
  
  if (param_1[0x18] == (StatsCounter)0x0) {
    param_1[0x18] = (StatsCounter)0x1;
    pEVar1 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)param_1);
    *(ExternalReferenceTable **)(param_1 + 0x10) = pEVar1;
  }
  else {
    pEVar1 = *(ExternalReferenceTable **)(param_1 + 0x10);
  }
  if (pEVar1 == (ExternalReferenceTable *)0x0) {
    pEVar1 = this + 0x1ba4;
  }
  else if (param_1[0x18] == (StatsCounter)0x0) {
    param_1[0x18] = (StatsCounter)0x1;
    pEVar1 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)param_1);
    *(ExternalReferenceTable **)(param_1 + 0x10) = pEVar1;
  }
  return pEVar1;
}

