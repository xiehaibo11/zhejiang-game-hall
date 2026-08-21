
/* v8::base::TemplateHashMapImpl<void*, void*, v8::base::HashEqualityThenKeyMatcher<void*, bool
   (*)(void*, void*)>, v8::base::DefaultAllocationPolicy>::Resize(v8::base::DefaultAllocationPolicy)
    */

void v8::base::
     TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
     ::Resize(long *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long *__ptr;
  int iVar11;
  
  iVar11 = *(int *)((long)param_1 + 0xc);
  __ptr = (long *)*param_1;
  uVar3 = (int)param_1[1] << 1;
  puVar4 = malloc((ulong)uVar3 * 0x18);
  *param_1 = (long)puVar4;
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Out of memory: HashMap::Initialize");
  }
  *(uint *)(param_1 + 1) = uVar3;
  if (uVar3 != 0) {
    *puVar4 = 0;
    puVar4[3] = 0;
    if (2 < *(uint *)(param_1 + 1)) {
      uVar7 = 2;
      lVar10 = 0x30;
      do {
        uVar7 = uVar7 + 1;
        *(undefined8 *)(*param_1 + lVar10) = 0;
        lVar10 = lVar10 + 0x18;
      } while (uVar7 < *(uint *)(param_1 + 1));
    }
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  if (iVar11 == 0) {
LAB_011ac5a8:
    free(__ptr);
    return;
  }
  lVar10 = *__ptr;
  plVar1 = __ptr;
  do {
    if (lVar10 != 0) {
      iVar9 = (int)param_1[1];
      uVar3 = *(uint *)(plVar1 + 2);
      lVar10 = *param_1;
      uVar7 = (ulong)(iVar9 - 1U & uVar3);
      lVar6 = *(long *)(lVar10 + uVar7 * 0x18);
      while (lVar6 != 0) {
        if (*(uint *)(lVar10 + uVar7 * 0x18 + 0x10) == uVar3) {
          uVar5 = (*(code *)param_1[2])(*plVar1);
          if ((uVar5 & 1) != 0) {
            lVar10 = *param_1;
            break;
          }
          iVar9 = (int)param_1[1];
          lVar10 = *param_1;
        }
        uVar7 = (ulong)((int)uVar7 + 1U & iVar9 - 1U);
        lVar6 = *(long *)(lVar10 + uVar7 * 0x18);
      }
      lVar6 = *plVar1;
      uVar2 = *(uint *)(plVar1 + 2);
      plVar8 = (long *)(lVar10 + uVar7 * 0x18);
      plVar8[1] = plVar1[1];
      *plVar8 = lVar6;
      *(uint *)(plVar8 + 2) = uVar2;
      uVar3 = *(int *)((long)param_1 + 0xc) + 1;
      *(uint *)((long)param_1 + 0xc) = uVar3;
      if (*(uint *)(param_1 + 1) <= uVar3 + (uVar3 >> 2)) {
        Resize(param_1);
        iVar9 = (int)param_1[1];
        lVar10 = *param_1;
        uVar3 = iVar9 - 1U & uVar2;
        while (*(long *)(lVar10 + (ulong)uVar3 * 0x18) != 0) {
          if (*(uint *)(lVar10 + (ulong)uVar3 * 0x18 + 0x10) == uVar2) {
            uVar7 = (*(code *)param_1[2])(*plVar1);
            if ((uVar7 & 1) != 0) break;
            iVar9 = (int)param_1[1];
            lVar10 = *param_1;
          }
          uVar3 = uVar3 + 1 & iVar9 - 1U;
        }
      }
      iVar11 = iVar11 + -1;
    }
    plVar1 = plVar1 + 3;
    if (iVar11 == 0) goto LAB_011ac5a8;
    lVar10 = *plVar1;
  } while( true );
}

