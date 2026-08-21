
/* v8::base::TemplateHashMapImpl<unsigned long, v8::internal::SerializerReference,
   v8::base::KeyEqualityMatcher<long>,
   v8::base::DefaultAllocationPolicy>::Resize(v8::base::DefaultAllocationPolicy) */

void v8::base::
     TemplateHashMapImpl<unsigned_long,v8::internal::SerializerReference,v8::base::KeyEqualityMatcher<long>,v8::base::DefaultAllocationPolicy>
     ::Resize(long *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  void *pvVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *__ptr;
  int iVar12;
  
  iVar12 = *(int *)((long)param_1 + 0xc);
  __ptr = (long *)*param_1;
  uVar3 = (int)param_1[1] << 1;
  pvVar5 = malloc((ulong)uVar3 * 0x18);
  *param_1 = (long)pvVar5;
  if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Out of memory: HashMap::Initialize");
  }
  *(uint *)(param_1 + 1) = uVar3;
  if (uVar3 == 0) {
    uVar7 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  else {
    *(undefined1 *)((long)pvVar5 + 0x14) = 0;
    *(undefined1 *)((long)pvVar5 + 0x2c) = 0;
    uVar7 = (ulong)*(uint *)(param_1 + 1);
    if (2 < *(uint *)(param_1 + 1)) {
      uVar8 = 2;
      lVar10 = 0x44;
      do {
        uVar8 = uVar8 + 1;
        *(undefined1 *)(*param_1 + lVar10) = 0;
        uVar7 = (ulong)*(uint *)(param_1 + 1);
        lVar10 = lVar10 + 0x18;
      } while (uVar8 < uVar7);
    }
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  if (iVar12 != 0) {
    iVar6 = (int)uVar7;
    cVar2 = *(char *)((long)__ptr + 0x14);
    plVar4 = __ptr;
    do {
      if (cVar2 != '\0') {
        uVar3 = *(uint *)(plVar4 + 2);
        lVar9 = *param_1;
        lVar10 = *plVar4;
        uVar7 = (ulong)(iVar6 - 1U & uVar3);
        plVar11 = (long *)(lVar9 + uVar7 * 0x18);
        if ((*(char *)((long)plVar11 + 0x14) != '\0') && (lVar10 != *(long *)(lVar9 + uVar7 * 0x18))
           ) {
          do {
            uVar7 = (ulong)((int)uVar7 + 1U & iVar6 - 1U);
            if (*(char *)(lVar9 + uVar7 * 0x18 + 0x14) == '\0') break;
          } while (lVar10 != *(long *)(lVar9 + uVar7 * 0x18));
          plVar11 = (long *)(lVar9 + uVar7 * 0x18);
        }
        lVar9 = plVar4[1];
        *(uint *)(plVar11 + 2) = uVar3;
        *(undefined1 *)((long)plVar11 + 0x14) = 1;
        *plVar11 = lVar10;
        plVar11[1] = lVar9;
        uVar7 = (ulong)*(uint *)(param_1 + 1);
        uVar1 = *(int *)((long)param_1 + 0xc) + 1;
        *(uint *)((long)param_1 + 0xc) = uVar1;
        if (*(uint *)(param_1 + 1) <= uVar1 + (uVar1 >> 2)) {
          Resize(param_1);
          uVar7 = (ulong)*(uint *)(param_1 + 1);
          lVar10 = *param_1;
          uVar1 = *(uint *)(param_1 + 1) - 1;
          uVar8 = (ulong)(uVar1 & uVar3);
          if (*(char *)(lVar10 + uVar8 * 0x18 + 0x14) != '\0') {
            do {
              if (*plVar4 == *(long *)(lVar10 + uVar8 * 0x18)) break;
              uVar8 = (ulong)((int)uVar8 + 1U & uVar1);
            } while (*(char *)(lVar10 + uVar8 * 0x18 + 0x14) != '\0');
          }
        }
        iVar12 = iVar12 + -1;
      }
      iVar6 = (int)uVar7;
      if (iVar12 == 0) break;
      cVar2 = *(char *)((long)plVar4 + 0x2c);
      plVar4 = plVar4 + 3;
    } while( true );
  }
  free(__ptr);
  return;
}

