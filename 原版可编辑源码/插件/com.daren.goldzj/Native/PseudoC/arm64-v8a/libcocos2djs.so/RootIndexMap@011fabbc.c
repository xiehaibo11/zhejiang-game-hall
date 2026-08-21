
/* WARNING: Removing unreachable block (ram,0x011fac78) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x011fac88 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::RootIndexMap::RootIndexMap(v8::internal::Isolate*) */

void __thiscall v8::internal::RootIndexMap::RootIndexMap(RootIndexMap *this,Isolate *param_1)

{
  uint uVar1;
  long *plVar2;
  void *pvVar3;
  TemplateHashMapEntry *pTVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong local_48;
  undefined1 auStack_28 [8];
  
  lVar5 = *(long *)(param_1 + 0xb7b8);
  *(long *)this = lVar5;
  if (lVar5 != 0) {
    return;
  }
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
  uVar6 = 5;
  lVar5 = 0x88;
  do {
    uVar6 = uVar6 + 1;
    *(undefined1 *)(*plVar2 + lVar5) = 0;
    lVar5 = lVar5 + 0x18;
  } while (uVar6 < *(uint *)(plVar2 + 1));
  uVar6 = 0;
  *(undefined4 *)((long)plVar2 + 0xc) = 0;
  *(long **)this = plVar2;
  do {
    local_48 = *(ulong *)(param_1 + uVar6 * 8 + 0x80);
    if ((local_48 & 1) != 0) {
      plVar2 = *(long **)this;
      lVar5 = *plVar2;
      uVar1 = (int)plVar2[1] - 1;
      uVar7 = (ulong)(uVar1 & (uint)local_48);
      lVar8 = lVar5 + uVar7 * 0x18;
      if ((*(char *)(lVar8 + 0x10) != '\0') && (*(ulong *)(lVar5 + uVar7 * 0x18) != local_48)) {
        do {
          uVar7 = (ulong)((int)uVar7 + 1U & uVar1);
          if (*(char *)(lVar5 + uVar7 * 0x18 + 0x10) == '\0') break;
        } while (*(ulong *)(lVar5 + uVar7 * 0x18) != local_48);
        lVar8 = lVar5 + uVar7 * 0x18;
      }
      if ((lVar8 == 0) || (*(char *)(lVar8 + 0x10) == '\0')) {
        pTVar4 = base::
                 TemplateHashMapImpl<unsigned_long,unsigned_int,v8::base::KeyEqualityMatcher<long>,v8::base::DefaultAllocationPolicy>
                 ::
                 LookupOrInsert<v8::base::TemplateHashMapImpl<unsigned_long,unsigned_int,v8::base::KeyEqualityMatcher<long>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(unsigned_long_const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
                           (plVar2,&local_48,local_48,auStack_28);
        *(int *)(pTVar4 + 8) = (int)uVar6;
      }
    }
    do {
      uVar6 = uVar6 + 1;
      if (uVar6 == 0x1ea) {
        *(undefined8 *)(param_1 + 0xb7b8) = *(undefined8 *)this;
        return;
      }
    } while (0x1d6 < uVar6);
  } while( true );
}

