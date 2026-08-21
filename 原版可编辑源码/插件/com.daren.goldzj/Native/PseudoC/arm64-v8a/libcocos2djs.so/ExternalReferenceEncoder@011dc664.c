
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x011dc748 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::ExternalReferenceEncoder::ExternalReferenceEncoder(v8::internal::Isolate*) */

void __thiscall
v8::internal::ExternalReferenceEncoder::ExternalReferenceEncoder
          (ExternalReferenceEncoder *this,Isolate *param_1)

{
  uint uVar1;
  long *plVar2;
  void *pvVar3;
  TemplateHashMapEntry *pTVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long local_48;
  undefined1 auStack_28 [8];
  
  lVar6 = *(long *)(param_1 + 0xb7b0);
  *(long *)this = lVar6;
  if (lVar6 == 0) {
    plVar2 = operator_new(0x18);
    plVar2[1] = 0;
    plVar2[2] = 0;
    *plVar2 = 0;
    pvVar3 = malloc(0xc0);
    *plVar2 = (long)pvVar3;
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Out of memory: HashMap::Initialize");
    }
    *(undefined4 *)(plVar2 + 1) = 8;
    *(undefined1 *)((long)pvVar3 + 0x10) = 0;
    *(undefined1 *)((long)pvVar3 + 0x28) = 0;
    *(undefined1 *)((long)pvVar3 + 0x40) = 0;
    *(undefined1 *)((long)pvVar3 + 0x58) = 0;
    *(undefined1 *)((long)pvVar3 + 0x70) = 0;
    uVar7 = 5;
    lVar6 = 0x88;
    do {
      uVar7 = uVar7 + 1;
      *(undefined1 *)(*plVar2 + lVar6) = 0;
      lVar6 = lVar6 + 0x18;
    } while (uVar7 < *(uint *)(plVar2 + 1));
    lVar6 = 0;
    *(undefined4 *)((long)plVar2 + 0xc) = 0;
    *(long **)this = plVar2;
    *(long **)(param_1 + 0xb7b0) = plVar2;
    do {
      plVar2 = *(long **)this;
      local_48 = *(long *)(param_1 + lVar6 * 8 + 0x1010);
      lVar8 = *plVar2;
      uVar1 = (int)plVar2[1] - 1;
      uVar7 = (ulong)(uVar1 & (uint)local_48);
      lVar10 = lVar8 + uVar7 * 0x18;
      if ((*(char *)(lVar10 + 0x10) != '\0') && (*(long *)(lVar8 + uVar7 * 0x18) != local_48)) {
        do {
          uVar7 = (ulong)((int)uVar7 + 1U & uVar1);
          if (*(char *)(lVar8 + uVar7 * 0x18 + 0x10) == '\0') break;
        } while (*(long *)(lVar8 + uVar7 * 0x18) != local_48);
        lVar10 = lVar8 + uVar7 * 0x18;
      }
      if ((lVar10 == 0) || (*(char *)(lVar10 + 0x10) == '\0')) {
        pTVar4 = base::
                 TemplateHashMapImpl<unsigned_long,unsigned_int,v8::base::KeyEqualityMatcher<long>,v8::base::DefaultAllocationPolicy>
                 ::
                 LookupOrInsert<v8::base::TemplateHashMapImpl<unsigned_long,unsigned_int,v8::base::KeyEqualityMatcher<long>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(unsigned_long_const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
                           (plVar2,&local_48,local_48,auStack_28);
        *(int *)(pTVar4 + 8) = (int)lVar6;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x374);
    plVar2 = *(long **)(param_1 + 0xb7a8);
    if ((plVar2 != (long *)0x0) && (local_48 = *plVar2, local_48 != 0)) {
      uVar7 = 0;
      do {
        plVar5 = *(long **)this;
        lVar6 = *plVar5;
        uVar1 = (int)plVar5[1] - 1;
        uVar9 = (ulong)(uVar1 & (uint)local_48);
        lVar8 = lVar6 + uVar9 * 0x18;
        if ((*(char *)(lVar8 + 0x10) != '\0') && (*(long *)(lVar6 + uVar9 * 0x18) != local_48)) {
          do {
            uVar9 = (ulong)((int)uVar9 + 1U & uVar1);
            if (*(char *)(lVar6 + uVar9 * 0x18 + 0x10) == '\0') break;
          } while (*(long *)(lVar6 + uVar9 * 0x18) != local_48);
          lVar8 = lVar6 + uVar9 * 0x18;
        }
        if ((lVar8 == 0) || (*(char *)(lVar8 + 0x10) == '\0')) {
          pTVar4 = base::
                   TemplateHashMapImpl<unsigned_long,unsigned_int,v8::base::KeyEqualityMatcher<long>,v8::base::DefaultAllocationPolicy>
                   ::
                   LookupOrInsert<v8::base::TemplateHashMapImpl<unsigned_long,unsigned_int,v8::base::KeyEqualityMatcher<long>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(unsigned_long_const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
                             (plVar5,&local_48,local_48,auStack_28);
          *(uint *)(pTVar4 + 8) = (uint)uVar7 | 0x80000000;
        }
        uVar7 = (ulong)((uint)uVar7 + 1);
        local_48 = plVar2[uVar7];
      } while (local_48 != 0);
    }
  }
  return;
}

