
/* v8::platform::tracing::TracingController::UpdateCategoryGroupEnabledFlag(unsigned long) */

void __thiscall
v8::platform::tracing::TracingController::UpdateCategoryGroupEnabledFlag
          (TracingController *this,ulong param_1)

{
  TracingController *pTVar1;
  TracingController TVar2;
  byte bVar3;
  int iVar4;
  char *__s1;
  
  pTVar1 = this + 0x48;
  __s1 = (&g_category_groups)[param_1];
  if (((byte)*pTVar1 & 1) == 0) {
    bVar3 = 0;
    TVar2 = *pTVar1;
  }
  else {
    bVar3 = TraceConfig::IsCategoryGroupEnabled(*(TraceConfig **)(this + 0x10),__s1);
    bVar3 = bVar3 & 1;
    TVar2 = *pTVar1;
  }
  if ((((byte)TVar2 & 1) != 0) && (iVar4 = strcmp(__s1,"__metadata"), iVar4 == 0)) {
    bVar3 = 1;
  }
  (&g_category_group_enabled)[param_1] = bVar3;
  return;
}

