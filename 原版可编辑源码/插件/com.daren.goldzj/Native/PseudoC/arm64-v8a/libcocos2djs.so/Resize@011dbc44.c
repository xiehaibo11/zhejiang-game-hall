
/* v8::base::TemplateHashMapImpl<unsigned long, unsigned int, v8::base::KeyEqualityMatcher<long>,
   v8::base::DefaultAllocationPolicy>::Resize(v8::base::DefaultAllocationPolicy) */

void v8::base::
     TemplateHashMapImpl<unsigned_long,unsigned_int,v8::base::KeyEqualityMatcher<long>,v8::base::DefaultAllocationPolicy>
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
    *(undefined1 *)((long)pvVar5 + 0x10) = 0;
    *(undefined1 *)((long)pvVar5 + 0x28) = 0;
    uVar7 = (ulong)*(uint *)(param_1 + 1);
    if (2 < *(uint *)(param_1 + 1)) {
      uVar8 = 2;
      lVar10 = 0x40;
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
    cVar2 = (char)__ptr[2];
    plVar4 = __ptr;
    do {
      if (cVar2 != '\0') {
        uVar3 = *(uint *)((long)plVar4 + 0xc);
        lVar9 = *param_1;
        lVar10 = *plVar4;
        uVar7 = (ulong)(iVar6 - 1U & uVar3);
        plVar11 = (long *)(lVar9 + uVar7 * 0x18);
        if (((char)plVar11[2] != '\0') && (lVar10 != *(long *)(lVar9 + uVar7 * 0x18))) {
          do {
            uVar7 = (ulong)((int)uVar7 + 1U & iVar6 - 1U);
            if (*(char *)(lVar9 + uVar7 * 0x18 + 0x10) == '\0') break;
          } while (lVar10 != *(long *)(lVar9 + uVar7 * 0x18));
          plVar11 = (long *)(lVar9 + uVar7 * 0x18);
        }
        lVar9 = plVar4[1];
        *plVar11 = lVar10;
        *(undefined1 *)(plVar11 + 2) = 1;
        *(int *)(plVar11 + 1) = (int)lVar9;
        *(uint *)((long)plVar11 + 0xc) = uVar3;
        uVar7 = (ulong)*(uint *)(param_1 + 1);
        uVar1 = *(int *)((long)param_1 + 0xc) + 1;
        *(uint *)((long)param_1 + 0xc) = uVar1;
        if (*(uint *)(param_1 + 1) <= uVar1 + (uVar1 >> 2)) {
          Resize(param_1);
          uVar7 = (ulong)*(uint *)(param_1 + 1);
          lVar10 = *param_1;
          uVar1 = *(uint *)(param_1 + 1) - 1;
          uVar8 = (ulong)(uVar1 & uVar3);
          if (*(char *)(lVar10 + uVar8 * 0x18 + 0x10) != '\0') {
            do {
              if (*plVar4 == *(long *)(lVar10 + uVar8 * 0x18)) break;
              uVar8 = (ulong)((int)uVar8 + 1U & uVar1);
            } while (*(char *)(lVar10 + uVar8 * 0x18 + 0x10) != '\0');
          }
        }
        iVar12 = iVar12 + -1;
      }
      iVar6 = (int)uVar7;
      if (iVar12 == 0) break;
      cVar2 = (char)plVar4[5];
      plVar4 = plVar4 + 3;
    } while( true );
  }
  free(__ptr);
  return;
}

