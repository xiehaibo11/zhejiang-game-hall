
/* v8::base::TemplateHashMapImpl<v8::internal::SharedFunctionInfo, unsigned int,
   v8::base::KeyEqualityMatcher<v8::internal::Object>,
   v8::base::DefaultAllocationPolicy>::Resize(v8::base::DefaultAllocationPolicy) */

void v8::base::
     TemplateHashMapImpl<v8::internal::SharedFunctionInfo,unsigned_int,v8::base::KeyEqualityMatcher<v8::internal::Object>,v8::base::DefaultAllocationPolicy>
     ::Resize(long *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  int *__ptr;
  int iVar12;
  
  iVar12 = *(int *)((long)param_1 + 0xc);
  __ptr = (int *)*param_1;
  uVar3 = (int)param_1[1] << 1;
  pvVar5 = malloc((ulong)uVar3 * 0x18);
  *param_1 = (long)pvVar5;
  if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Out of memory: HashMap::Initialize");
  }
  *(uint *)(param_1 + 1) = uVar3;
  if (uVar3 == 0) {
    uVar8 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  else {
    *(undefined1 *)((long)pvVar5 + 0x10) = 0;
    *(undefined1 *)((long)pvVar5 + 0x28) = 0;
    uVar8 = (ulong)*(uint *)(param_1 + 1);
    if (2 < *(uint *)(param_1 + 1)) {
      uVar9 = 2;
      lVar10 = 0x40;
      do {
        uVar9 = uVar9 + 1;
        *(undefined1 *)(*param_1 + lVar10) = 0;
        uVar8 = (ulong)*(uint *)(param_1 + 1);
        lVar10 = lVar10 + 0x18;
      } while (uVar9 < uVar8);
    }
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  if (iVar12 != 0) {
    iVar6 = (int)uVar8;
    cVar2 = (char)__ptr[4];
    piVar4 = __ptr;
    do {
      if (cVar2 != '\0') {
        uVar3 = piVar4[3];
        lVar10 = *param_1;
        uVar8 = (ulong)(iVar6 - 1U & uVar3);
        puVar11 = (undefined8 *)(lVar10 + uVar8 * 0x18);
        if ((*(char *)(puVar11 + 2) != '\0') &&
           (iVar7 = (int)*(undefined8 *)piVar4, iVar7 != *(int *)(lVar10 + uVar8 * 0x18))) {
          do {
            uVar8 = (ulong)((int)uVar8 + 1U & iVar6 - 1U);
            if (*(char *)(lVar10 + uVar8 * 0x18 + 0x10) == '\0') break;
          } while (iVar7 != *(int *)(lVar10 + uVar8 * 0x18));
          puVar11 = (undefined8 *)(lVar10 + uVar8 * 0x18);
        }
        iVar6 = piVar4[2];
        *puVar11 = *(undefined8 *)piVar4;
        *(undefined1 *)(puVar11 + 2) = 1;
        *(int *)(puVar11 + 1) = iVar6;
        *(uint *)((long)puVar11 + 0xc) = uVar3;
        uVar8 = (ulong)*(uint *)(param_1 + 1);
        uVar1 = *(int *)((long)param_1 + 0xc) + 1;
        *(uint *)((long)param_1 + 0xc) = uVar1;
        if (*(uint *)(param_1 + 1) <= uVar1 + (uVar1 >> 2)) {
          Resize(param_1);
          uVar8 = (ulong)*(uint *)(param_1 + 1);
          lVar10 = *param_1;
          uVar1 = *(uint *)(param_1 + 1) - 1;
          uVar9 = (ulong)(uVar1 & uVar3);
          if (*(char *)(lVar10 + uVar9 * 0x18 + 0x10) != '\0') {
            do {
              if (*piVar4 == *(int *)(lVar10 + uVar9 * 0x18)) break;
              uVar9 = (ulong)((int)uVar9 + 1U & uVar1);
            } while (*(char *)(lVar10 + uVar9 * 0x18 + 0x10) != '\0');
          }
        }
        iVar12 = iVar12 + -1;
      }
      iVar6 = (int)uVar8;
      if (iVar12 == 0) break;
      cVar2 = (char)piVar4[10];
      piVar4 = piVar4 + 6;
    } while( true );
  }
  free(__ptr);
  return;
}

