
void FUN_011d61ec(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  int iVar12;
  long lVar13;
  uchar *__s;
  
  plVar4 = operator_new(0x18);
  plVar4[2] = (long)FUN_011d6498;
  puVar5 = malloc(0xc0);
  *plVar4 = (long)puVar5;
  if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Out of memory: HashMap::Initialize");
  }
  *(undefined4 *)(plVar4 + 1) = 8;
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  uVar9 = 4;
  lVar13 = 0x60;
  do {
    uVar9 = uVar9 + 1;
    *(undefined8 *)(*plVar4 + lVar13) = 0;
    lVar13 = lVar13 + 0x18;
  } while (uVar9 < *(uint *)(plVar4 + 1));
  lVar13 = 0;
  *(undefined4 *)((long)plVar4 + 0xc) = 0;
  do {
    lVar1 = lVar13 * 0x20;
    puVar5 = operator_new(0x10);
    __s = (&PTR_s_DebugBreakOnBytecode_01a430f8_9_01cb7928)[lVar13 * 4];
    sVar6 = strlen((char *)__s);
    *puVar5 = __s;
    *(int *)(puVar5 + 1) = (int)sVar6;
    uVar3 = v8::internal::StringHasher::HashSequentialString<unsigned_char>(__s,(int)sVar6,0);
    iVar12 = (int)plVar4[1];
    lVar10 = *plVar4;
    uVar9 = (ulong)(iVar12 - 1U & uVar3);
    lVar8 = *(long *)(lVar10 + uVar9 * 0x18);
    while (lVar8 != 0) {
      if (*(uint *)(lVar10 + uVar9 * 0x18 + 0x10) == uVar3) {
        uVar7 = (*(code *)plVar4[2])(puVar5);
        if ((uVar7 & 1) != 0) {
          lVar10 = *plVar4;
          break;
        }
        iVar12 = (int)plVar4[1];
        lVar10 = *plVar4;
      }
      uVar9 = (ulong)((int)uVar9 + 1U & iVar12 - 1U);
      lVar8 = *(long *)(lVar10 + uVar9 * 0x18);
    }
    puVar11 = (undefined8 *)(lVar10 + uVar9 * 0x18);
    *puVar11 = puVar5;
    puVar11[1] = 0;
    *(uint *)(puVar11 + 2) = uVar3;
    uVar2 = *(int *)((long)plVar4 + 0xc) + 1;
    *(uint *)((long)plVar4 + 0xc) = uVar2;
    if (*(uint *)(plVar4 + 1) <= uVar2 + (uVar2 >> 2)) {
      v8::base::
      TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
      ::Resize(plVar4);
      iVar12 = (int)plVar4[1];
      lVar10 = *plVar4;
      uVar9 = (ulong)(iVar12 - 1U & uVar3);
      lVar8 = *(long *)(lVar10 + uVar9 * 0x18);
      while (lVar8 != 0) {
        if (*(uint *)(lVar10 + uVar9 * 0x18 + 0x10) == uVar3) {
          uVar7 = (*(code *)plVar4[2])(puVar5);
          if ((uVar7 & 1) != 0) {
            lVar10 = *plVar4;
            break;
          }
          iVar12 = (int)plVar4[1];
          lVar10 = *plVar4;
        }
        uVar9 = (ulong)((int)uVar9 + 1U & iVar12 - 1U);
        lVar8 = *(long *)(lVar10 + uVar9 * 0x18);
      }
      puVar11 = (undefined8 *)(lVar10 + uVar9 * 0x18);
    }
    lVar13 = lVar13 + 1;
    puVar11[1] = &DAT_01cb7920 + lVar1;
    if (lVar13 == 0x1f9) {
      DAT_01d3fc08 = plVar4;
      return;
    }
  } while( true );
}

