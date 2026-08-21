
/* v8::internal::ExternalReferenceTable::AddNativeCodeStatsCounters(v8::internal::Isolate*, int*) */

void __thiscall
v8::internal::ExternalReferenceTable::AddNativeCodeStatsCounters
          (ExternalReferenceTable *this,Isolate *param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  ExternalReferenceTable *pEVar3;
  long lVar4;
  
  if (*param_2 != 0x369) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "kSpecialReferenceCount + kExternalReferenceCount + kBuiltinsReferenceCount + kRuntimeReferenceCount + kIsolateAddressReferenceCount + kAccessorReferenceCount + kStubCacheReferenceCount == *index"
            );
  }
  lVar4 = *(long *)(param_1 + 0x9520);
  pcVar1 = (char *)(lVar4 + 0x1ed8);
  if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
    pEVar3 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 0x1ec0));
    *(ExternalReferenceTable **)(lVar4 + 0x1ed0) = pEVar3;
  }
  else {
    pEVar3 = *(ExternalReferenceTable **)(lVar4 + 0x1ed0);
  }
  if (pEVar3 == (ExternalReferenceTable *)0x0) {
    pEVar3 = this + 0x1ba4;
  }
  else if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
    pEVar3 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 0x1ec0));
    *(ExternalReferenceTable **)(lVar4 + 0x1ed0) = pEVar3;
  }
  iVar2 = *param_2;
  *param_2 = iVar2 + 1;
  *(ExternalReferenceTable **)(this + (long)iVar2 * 8) = pEVar3;
  if (*(char *)(lVar4 + 0x1ef8) == '\0') {
    *(undefined1 *)(lVar4 + 0x1ef8) = 1;
    pEVar3 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 0x1ee0));
    *(ExternalReferenceTable **)(lVar4 + 0x1ef0) = pEVar3;
  }
  else {
    pEVar3 = *(ExternalReferenceTable **)(lVar4 + 0x1ef0);
  }
  if (pEVar3 == (ExternalReferenceTable *)0x0) {
    pEVar3 = this + 0x1ba4;
  }
  else if (*(char *)(lVar4 + 0x1ef8) == '\0') {
    *(undefined1 *)(lVar4 + 0x1ef8) = 1;
    pEVar3 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 0x1ee0));
    *(ExternalReferenceTable **)(lVar4 + 0x1ef0) = pEVar3;
  }
  iVar2 = *param_2;
  *param_2 = iVar2 + 1;
  *(ExternalReferenceTable **)(this + (long)iVar2 * 8) = pEVar3;
  if (*(char *)(lVar4 + 0x1f18) == '\0') {
    *(undefined1 *)(lVar4 + 0x1f18) = 1;
    pEVar3 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 0x1f00));
    *(ExternalReferenceTable **)(lVar4 + 0x1f10) = pEVar3;
  }
  else {
    pEVar3 = *(ExternalReferenceTable **)(lVar4 + 0x1f10);
  }
  if (pEVar3 == (ExternalReferenceTable *)0x0) {
    pEVar3 = this + 0x1ba4;
  }
  else if (*(char *)(lVar4 + 0x1f18) == '\0') {
    *(undefined1 *)(lVar4 + 0x1f18) = 1;
    pEVar3 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 0x1f00));
    *(ExternalReferenceTable **)(lVar4 + 0x1f10) = pEVar3;
  }
  iVar2 = *param_2;
  *param_2 = iVar2 + 1;
  *(ExternalReferenceTable **)(this + (long)iVar2 * 8) = pEVar3;
  if (*(char *)(lVar4 + 0x1f38) == '\0') {
    *(undefined1 *)(lVar4 + 0x1f38) = 1;
    pEVar3 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 0x1f20));
    *(ExternalReferenceTable **)(lVar4 + 0x1f30) = pEVar3;
  }
  else {
    pEVar3 = *(ExternalReferenceTable **)(lVar4 + 0x1f30);
  }
  if (pEVar3 == (ExternalReferenceTable *)0x0) {
    pEVar3 = this + 0x1ba4;
  }
  else if (*(char *)(lVar4 + 0x1f38) == '\0') {
    *(undefined1 *)(lVar4 + 0x1f38) = 1;
    pEVar3 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 0x1f20));
    *(ExternalReferenceTable **)(lVar4 + 0x1f30) = pEVar3;
  }
  iVar2 = *param_2;
  *param_2 = iVar2 + 1;
  *(ExternalReferenceTable **)(this + (long)iVar2 * 8) = pEVar3;
  if (*(char *)(lVar4 + 0x1f58) == '\0') {
    *(undefined1 *)(lVar4 + 0x1f58) = 1;
    pEVar3 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 8000));
    *(ExternalReferenceTable **)(lVar4 + 0x1f50) = pEVar3;
  }
  else {
    pEVar3 = *(ExternalReferenceTable **)(lVar4 + 0x1f50);
  }
  if (pEVar3 == (ExternalReferenceTable *)0x0) {
    pEVar3 = this + 0x1ba4;
  }
  else if (*(char *)(lVar4 + 0x1f58) == '\0') {
    *(undefined1 *)(lVar4 + 0x1f58) = 1;
    pEVar3 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 8000));
    *(ExternalReferenceTable **)(lVar4 + 0x1f50) = pEVar3;
  }
  iVar2 = *param_2;
  *param_2 = iVar2 + 1;
  *(ExternalReferenceTable **)(this + (long)iVar2 * 8) = pEVar3;
  if (*(char *)(lVar4 + 0x1f78) == '\0') {
    *(undefined1 *)(lVar4 + 0x1f78) = 1;
    pEVar3 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 0x1f60));
    *(ExternalReferenceTable **)(lVar4 + 0x1f70) = pEVar3;
  }
  else {
    pEVar3 = *(ExternalReferenceTable **)(lVar4 + 0x1f70);
  }
  if (pEVar3 == (ExternalReferenceTable *)0x0) {
    pEVar3 = this + 0x1ba4;
  }
  else if (*(char *)(lVar4 + 0x1f78) == '\0') {
    *(undefined1 *)(lVar4 + 0x1f78) = 1;
    pEVar3 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 0x1f60));
    *(ExternalReferenceTable **)(lVar4 + 0x1f70) = pEVar3;
  }
  iVar2 = *param_2;
  *param_2 = iVar2 + 1;
  *(ExternalReferenceTable **)(this + (long)iVar2 * 8) = pEVar3;
  if (*(char *)(lVar4 + 0x1f98) == '\0') {
    *(undefined1 *)(lVar4 + 0x1f98) = 1;
    pEVar3 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 0x1f80));
    *(ExternalReferenceTable **)(lVar4 + 0x1f90) = pEVar3;
  }
  else {
    pEVar3 = *(ExternalReferenceTable **)(lVar4 + 0x1f90);
  }
  if (pEVar3 == (ExternalReferenceTable *)0x0) {
    pEVar3 = this + 0x1ba4;
  }
  else if (*(char *)(lVar4 + 0x1f98) == '\0') {
    *(undefined1 *)(lVar4 + 0x1f98) = 1;
    pEVar3 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 0x1f80));
    *(ExternalReferenceTable **)(lVar4 + 0x1f90) = pEVar3;
  }
  iVar2 = *param_2;
  *param_2 = iVar2 + 1;
  *(ExternalReferenceTable **)(this + (long)iVar2 * 8) = pEVar3;
  if (*(char *)(lVar4 + 0x1fb8) == '\0') {
    *(undefined1 *)(lVar4 + 0x1fb8) = 1;
    pEVar3 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 0x1fa0));
    *(ExternalReferenceTable **)(lVar4 + 0x1fb0) = pEVar3;
  }
  else {
    pEVar3 = *(ExternalReferenceTable **)(lVar4 + 0x1fb0);
  }
  if (pEVar3 == (ExternalReferenceTable *)0x0) {
    pEVar3 = this + 0x1ba4;
  }
  else if (*(char *)(lVar4 + 0x1fb8) == '\0') {
    *(undefined1 *)(lVar4 + 0x1fb8) = 1;
    pEVar3 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 0x1fa0));
    *(ExternalReferenceTable **)(lVar4 + 0x1fb0) = pEVar3;
  }
  iVar2 = *param_2;
  *param_2 = iVar2 + 1;
  *(ExternalReferenceTable **)(this + (long)iVar2 * 8) = pEVar3;
  if (*(char *)(lVar4 + 0x1fd8) == '\0') {
    *(undefined1 *)(lVar4 + 0x1fd8) = 1;
    pEVar3 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 0x1fc0));
    *(ExternalReferenceTable **)(lVar4 + 0x1fd0) = pEVar3;
  }
  else {
    pEVar3 = *(ExternalReferenceTable **)(lVar4 + 0x1fd0);
  }
  if (pEVar3 == (ExternalReferenceTable *)0x0) {
    pEVar3 = this + 0x1ba4;
  }
  else if (*(char *)(lVar4 + 0x1fd8) == '\0') {
    *(undefined1 *)(lVar4 + 0x1fd8) = 1;
    pEVar3 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 0x1fc0));
    *(ExternalReferenceTable **)(lVar4 + 0x1fd0) = pEVar3;
  }
  iVar2 = *param_2;
  *param_2 = iVar2 + 1;
  *(ExternalReferenceTable **)(this + (long)iVar2 * 8) = pEVar3;
  if (*(char *)(lVar4 + 0x1ff8) == '\0') {
    *(undefined1 *)(lVar4 + 0x1ff8) = 1;
    pEVar3 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 0x1fe0));
    *(ExternalReferenceTable **)(lVar4 + 0x1ff0) = pEVar3;
  }
  else {
    pEVar3 = *(ExternalReferenceTable **)(lVar4 + 0x1ff0);
  }
  if (pEVar3 == (ExternalReferenceTable *)0x0) {
    pEVar3 = this + 0x1ba4;
  }
  else if (*(char *)(lVar4 + 0x1ff8) == '\0') {
    *(undefined1 *)(lVar4 + 0x1ff8) = 1;
    pEVar3 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 0x1fe0));
    *(ExternalReferenceTable **)(lVar4 + 0x1ff0) = pEVar3;
  }
  iVar2 = *param_2;
  *param_2 = iVar2 + 1;
  *(ExternalReferenceTable **)(this + (long)iVar2 * 8) = pEVar3;
  if (*(char *)(lVar4 + 0x2018) == '\0') {
    *(undefined1 *)(lVar4 + 0x2018) = 1;
    pEVar3 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 0x2000));
    *(ExternalReferenceTable **)(lVar4 + 0x2010) = pEVar3;
  }
  else {
    pEVar3 = *(ExternalReferenceTable **)(lVar4 + 0x2010);
  }
  if (pEVar3 == (ExternalReferenceTable *)0x0) {
    pEVar3 = this + 0x1ba4;
  }
  else if (*(char *)(lVar4 + 0x2018) == '\0') {
    *(undefined1 *)(lVar4 + 0x2018) = 1;
    pEVar3 = (ExternalReferenceTable *)
             StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar4 + 0x2000));
    *(ExternalReferenceTable **)(lVar4 + 0x2010) = pEVar3;
  }
  iVar2 = *param_2;
  *param_2 = iVar2 + 1;
  *(ExternalReferenceTable **)(this + (long)iVar2 * 8) = pEVar3;
  if (*param_2 != 0x374) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "kSpecialReferenceCount + kExternalReferenceCount + kBuiltinsReferenceCount + kRuntimeReferenceCount + kIsolateAddressReferenceCount + kAccessorReferenceCount + kStubCacheReferenceCount + kStatsCountersReferenceCount == *index"
            );
  }
  return;
}

