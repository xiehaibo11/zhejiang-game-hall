
/* v8::internal::Parser::UpdateStatistics(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Script>) */

void __thiscall v8::internal::Parser::UpdateStatistics(Parser *this,long param_1,long *param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = 0;
  do {
    if (0 < *(int *)(this + uVar4 * 4 + 0x310)) {
      Isolate::CountUsage(param_1,uVar4 & 0xffffffff);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x5c);
  if (this[600] != (Parser)0x0) {
    Isolate::CountUsage(param_1,0x15);
    if ((*(uint *)(*param_3 + 0xb) < 2) && (*(uint *)(*param_3 + 0xf) < 2)) {
      Isolate::CountUsage(param_1,0x14);
    }
  }
  lVar3 = *(long *)(param_1 + 0x9520);
  iVar1 = *(int *)(this + 0x480);
  if (*(char *)(lVar3 + 0x19b8) == '\0') {
    *(char *)(lVar3 + 0x19b8) = '\x01';
    piVar2 = (int *)StatsCounterBase::FindLocationInStatsTable((StatsCounterBase *)(lVar3 + 0x19a0))
    ;
    *(int **)(lVar3 + 0x19b0) = piVar2;
  }
  else {
    piVar2 = *(int **)(lVar3 + 0x19b0);
  }
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + iVar1;
  }
  return;
}

