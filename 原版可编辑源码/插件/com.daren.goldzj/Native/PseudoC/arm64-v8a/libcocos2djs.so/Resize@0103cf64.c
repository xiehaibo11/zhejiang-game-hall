
/* v8::base::TemplateHashMapImpl<void*, void*, v8::base::KeyEqualityMatcher<void*>,
   v8::base::DefaultAllocationPolicy>::Resize(v8::base::DefaultAllocationPolicy) */

void v8::base::
     TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::base::DefaultAllocationPolicy>
     ::Resize(long *param_1)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
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
  if (uVar3 == 0) {
    uVar6 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  else {
    *puVar4 = 0;
    puVar4[3] = 0;
    uVar6 = (ulong)*(uint *)(param_1 + 1);
    if (2 < *(uint *)(param_1 + 1)) {
      uVar8 = 2;
      lVar9 = 0x30;
      do {
        uVar8 = uVar8 + 1;
        *(undefined8 *)(*param_1 + lVar9) = 0;
        uVar6 = (ulong)*(uint *)(param_1 + 1);
        lVar9 = lVar9 + 0x18;
      } while (uVar8 < uVar6);
    }
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  if (iVar11 != 0) {
    iVar5 = (int)uVar6;
    lVar9 = *__ptr;
    plVar2 = __ptr;
    do {
      if (lVar9 != 0) {
        uVar3 = *(uint *)(plVar2 + 2);
        uVar6 = (ulong)(iVar5 - 1U & uVar3);
        plVar7 = (long *)(*param_1 + uVar6 * 0x18);
        lVar10 = *plVar7;
        while ((lVar10 != 0 && (lVar9 != lVar10))) {
          uVar6 = (ulong)((int)uVar6 + 1U & iVar5 - 1U);
          plVar7 = (long *)(*param_1 + uVar6 * 0x18);
          lVar10 = *plVar7;
        }
        lVar10 = plVar2[1];
        *(uint *)(plVar7 + 2) = uVar3;
        *plVar7 = lVar9;
        plVar7[1] = lVar10;
        uVar6 = (ulong)*(uint *)(param_1 + 1);
        uVar1 = *(int *)((long)param_1 + 0xc) + 1;
        *(uint *)((long)param_1 + 0xc) = uVar1;
        if (*(uint *)(param_1 + 1) <= uVar1 + (uVar1 >> 2)) {
          Resize(param_1);
          uVar6 = (ulong)*(uint *)(param_1 + 1);
          uVar1 = *(uint *)(param_1 + 1) - 1;
          uVar8 = (ulong)(uVar1 & uVar3);
          lVar9 = *(long *)(*param_1 + uVar8 * 0x18);
          if (lVar9 != 0) {
            do {
              if (*plVar2 == lVar9) break;
              uVar8 = (ulong)((int)uVar8 + 1U & uVar1);
              lVar9 = *(long *)(*param_1 + uVar8 * 0x18);
            } while (lVar9 != 0);
          }
        }
        iVar11 = iVar11 + -1;
      }
      iVar5 = (int)uVar6;
      plVar2 = plVar2 + 3;
      if (iVar11 == 0) break;
      lVar9 = *plVar2;
    } while( true );
  }
  free(__ptr);
  return;
}

