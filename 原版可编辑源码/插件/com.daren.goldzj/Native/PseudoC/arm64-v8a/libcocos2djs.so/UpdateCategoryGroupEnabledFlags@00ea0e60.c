
/* v8::platform::tracing::TracingController::UpdateCategoryGroupEnabledFlags() */

void __thiscall
v8::platform::tracing::TracingController::UpdateCategoryGroupEnabledFlags(TracingController *this)

{
  TracingController *pTVar1;
  TracingController TVar2;
  byte bVar3;
  int iVar4;
  char *__s1;
  long lVar5;
  undefined **ppuVar6;
  byte *pbVar7;
  
  if (g_category_index != 0) {
    ppuVar6 = &g_category_groups;
    lVar5 = g_category_index;
    pbVar7 = &g_category_group_enabled;
    do {
      pTVar1 = this + 0x48;
      __s1 = *ppuVar6;
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
      *pbVar7 = bVar3;
      lVar5 = lVar5 + -1;
      ppuVar6 = ppuVar6 + 1;
      pbVar7 = pbVar7 + 1;
    } while (lVar5 != 0);
  }
  return;
}

