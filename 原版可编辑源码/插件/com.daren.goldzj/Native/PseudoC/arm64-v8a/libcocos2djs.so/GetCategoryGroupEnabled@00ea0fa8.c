
/* v8::platform::tracing::TracingController::GetCategoryGroupEnabled(char const*) */

byte * __thiscall
v8::platform::tracing::TracingController::GetCategoryGroupEnabled
          (TracingController *this,char *param_1)

{
  TracingController *pTVar1;
  TracingController TVar2;
  byte bVar3;
  int iVar4;
  char *__s1;
  ulong uVar5;
  Mutex *this_00;
  byte *pbVar6;
  undefined **ppuVar7;
  ulong uVar8;
  
  if (g_category_index != 0) {
    pbVar6 = &g_category_group_enabled;
    ppuVar7 = &g_category_groups;
    uVar5 = g_category_index;
    do {
      iVar4 = strcmp(*ppuVar7,param_1);
      if (iVar4 == 0) {
        return pbVar6;
      }
      pbVar6 = pbVar6 + 1;
      uVar5 = uVar5 - 1;
      ppuVar7 = ppuVar7 + 1;
    } while (uVar5 != 0);
  }
  this_00 = *(Mutex **)(this + 0x18);
  base::Mutex::Lock(this_00);
  uVar5 = g_category_index;
  if (g_category_index != 0) {
    uVar8 = 0;
    do {
      iVar4 = strcmp((&g_category_groups)[uVar8],param_1);
      if (iVar4 == 0) {
        pbVar6 = &g_category_group_enabled + uVar8;
        goto LAB_00ea10e0;
      }
      uVar8 = uVar8 + 1;
    } while (uVar5 != uVar8);
    if (199 < uVar5) {
      pbVar6 = &DAT_01d3ea52;
      goto LAB_00ea10e0;
    }
  }
  __s1 = strdup(param_1);
  (&g_category_groups)[uVar5] = __s1;
  pTVar1 = this + 0x48;
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
  g_category_index = uVar5 + 1;
  pbVar6 = &g_category_group_enabled + uVar5;
  *pbVar6 = bVar3;
LAB_00ea10e0:
  base::Mutex::Unlock(this_00);
  return pbVar6;
}

