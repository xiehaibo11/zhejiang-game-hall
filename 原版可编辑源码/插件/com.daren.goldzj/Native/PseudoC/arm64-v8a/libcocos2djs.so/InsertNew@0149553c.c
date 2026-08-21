
/* v8::base::TemplateHashMapImpl<void*, void*, v8::base::HashEqualityThenKeyMatcher<void*, bool
   (*)(void*, void*)>, v8::base::DefaultAllocationPolicy>::InsertNew(void* const&, unsigned int,
   v8::base::DefaultAllocationPolicy) */

undefined8 *
v8::base::
TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
::InsertNew(long *param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  
  iVar7 = (int)param_1[1];
  lVar6 = *param_1;
  uVar8 = (ulong)(iVar7 - 1U & param_3);
  lVar4 = *(long *)(lVar6 + uVar8 * 0x18);
  while (lVar4 != 0) {
    if (*(uint *)(lVar6 + uVar8 * 0x18 + 0x10) == param_3) {
      uVar2 = (*(code *)param_1[2])(*param_2,lVar4);
      if ((uVar2 & 1) != 0) {
        lVar6 = *param_1;
        break;
      }
      iVar7 = (int)param_1[1];
      lVar6 = *param_1;
    }
    uVar8 = (ulong)((int)uVar8 + 1U & iVar7 - 1U);
    lVar4 = *(long *)(lVar6 + uVar8 * 0x18);
  }
  uVar5 = *param_2;
  puVar3 = (undefined8 *)(lVar6 + uVar8 * 0x18);
  *(uint *)(puVar3 + 2) = param_3;
  *puVar3 = uVar5;
  puVar3[1] = 0;
  uVar1 = *(int *)((long)param_1 + 0xc) + 1;
  *(uint *)((long)param_1 + 0xc) = uVar1;
  if (*(uint *)(param_1 + 1) <= uVar1 + (uVar1 >> 2)) {
    Resize(param_1);
    iVar7 = (int)param_1[1];
    lVar6 = *param_1;
    uVar8 = (ulong)(iVar7 - 1U & param_3);
    lVar4 = *(long *)(lVar6 + uVar8 * 0x18);
    while (lVar4 != 0) {
      if (*(uint *)(lVar6 + uVar8 * 0x18 + 0x10) == param_3) {
        uVar2 = (*(code *)param_1[2])(*param_2);
        if ((uVar2 & 1) != 0) {
          lVar6 = *param_1;
          break;
        }
        iVar7 = (int)param_1[1];
        lVar6 = *param_1;
      }
      uVar8 = (ulong)((int)uVar8 + 1U & iVar7 - 1U);
      lVar4 = *(long *)(lVar6 + uVar8 * 0x18);
    }
    puVar3 = (undefined8 *)(lVar6 + uVar8 * 0x18);
  }
  return puVar3;
}

