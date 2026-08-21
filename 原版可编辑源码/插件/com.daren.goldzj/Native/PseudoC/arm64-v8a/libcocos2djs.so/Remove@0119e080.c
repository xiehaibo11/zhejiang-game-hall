
/* v8::base::TemplateHashMapImpl<void*, void*, v8::base::KeyEqualityMatcher<void*>,
   v8::base::DefaultAllocationPolicy>::Remove(void* const&, unsigned int) */

long __thiscall
v8::base::
TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::base::DefaultAllocationPolicy>
::Remove(TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::base::DefaultAllocationPolicy>
         *this,void **param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  uVar5 = (ulong)*(uint *)(this + 8);
  plVar6 = *(long **)this;
  uVar2 = *(uint *)(this + 8) - 1;
  uVar3 = (ulong)(uVar2 & param_2);
  plVar7 = plVar6 + uVar3 * 3;
  pvVar8 = (void *)*plVar7;
  if (pvVar8 != (void *)0x0) {
    do {
      if (*param_1 == pvVar8) {
        plVar1 = plVar6;
        if (plVar7 + 3 != plVar6 + uVar5 * 3) {
          plVar1 = plVar7 + 3;
        }
        lVar4 = plVar7[1];
        lVar9 = *plVar1;
        while (lVar9 != 0) {
          plVar10 = plVar6 + (ulong)(*(uint *)(plVar1 + 2) & (int)uVar5 - 1U) * 3;
          if (((plVar7 < plVar1) && ((plVar10 <= plVar7 || (plVar1 < plVar10)))) ||
             ((plVar1 < plVar10 && ((plVar1 < plVar7 && (plVar10 <= plVar7)))))) {
            lVar11 = plVar1[1];
            lVar9 = *plVar1;
            *(int *)(plVar7 + 2) = (int)plVar1[2];
            plVar7[1] = lVar11;
            *plVar7 = lVar9;
            plVar6 = *(long **)this;
            uVar5 = (ulong)*(uint *)(this + 8);
            plVar7 = plVar1;
          }
          plVar10 = plVar1 + 3;
          plVar1 = plVar6;
          if (plVar10 != plVar6 + uVar5 * 3) {
            plVar1 = plVar10;
          }
          lVar9 = *plVar1;
        }
        *plVar7 = 0;
        *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
        return lVar4;
      }
      uVar3 = (ulong)((int)uVar3 + 1U & uVar2);
      plVar7 = plVar6 + uVar3 * 3;
      pvVar8 = (void *)*plVar7;
    } while (pvVar8 != (void *)0x0);
  }
  return 0;
}

