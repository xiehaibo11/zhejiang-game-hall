
/* v8::base::TemplateHashMapImpl<void*, void*, v8::base::KeyEqualityMatcher<void*>,
   v8::internal::ZoneAllocationPolicy>::Resize(v8::internal::ZoneAllocationPolicy) */

void __thiscall
v8::base::
TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::internal::ZoneAllocationPolicy>
::Resize(TemplateHashMapImpl<void*,void*,v8::base::KeyEqualityMatcher<void*>,v8::internal::ZoneAllocationPolicy>
         *this,Zone *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  
  iVar11 = *(int *)(this + 0xc);
  plVar10 = *(long **)this;
  puVar3 = *(undefined8 **)(param_2 + 0x10);
  uVar2 = *(int *)(this + 8) << 1;
  uVar4 = (ulong)uVar2 * 0x18;
  if (uVar4 < (ulong)(*(long *)(param_2 + 0x18) - (long)puVar3) ||
      uVar4 - (*(long *)(param_2 + 0x18) - (long)puVar3) == 0) {
    *(undefined8 **)(param_2 + 0x10) = puVar3 + (ulong)uVar2 * 3;
    *(undefined8 **)this = puVar3;
  }
  else {
    puVar3 = (undefined8 *)internal::Zone::NewExpand(param_2,uVar4);
    *(undefined8 **)this = puVar3;
  }
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Out of memory: HashMap::Initialize");
  }
  *(uint *)(this + 8) = uVar2;
  if (uVar2 == 0) {
    uVar4 = 0;
    *(undefined4 *)(this + 0xc) = 0;
  }
  else {
    *puVar3 = 0;
    uVar4 = (ulong)*(uint *)(this + 8);
    if (1 < *(uint *)(this + 8)) {
      uVar7 = 1;
      lVar8 = 0x18;
      do {
        uVar7 = uVar7 + 1;
        *(undefined8 *)(*(long *)this + lVar8) = 0;
        uVar4 = (ulong)*(uint *)(this + 8);
        lVar8 = lVar8 + 0x18;
      } while (uVar7 < uVar4);
    }
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (iVar11 == 0) {
    return;
  }
  iVar5 = (int)uVar4;
  lVar8 = *plVar10;
  do {
    if (lVar8 != 0) {
      uVar2 = *(uint *)(plVar10 + 2);
      uVar4 = (ulong)(iVar5 - 1U & uVar2);
      plVar6 = (long *)(*(long *)this + uVar4 * 0x18);
      lVar9 = *plVar6;
      while ((lVar9 != 0 && (lVar8 != lVar9))) {
        uVar4 = (ulong)((int)uVar4 + 1U & iVar5 - 1U);
        plVar6 = (long *)(*(long *)this + uVar4 * 0x18);
        lVar9 = *plVar6;
      }
      lVar9 = plVar10[1];
      *(uint *)(plVar6 + 2) = uVar2;
      *plVar6 = lVar8;
      plVar6[1] = lVar9;
      uVar4 = (ulong)*(uint *)(this + 8);
      uVar1 = *(int *)(this + 0xc) + 1;
      *(uint *)(this + 0xc) = uVar1;
      if (*(uint *)(this + 8) <= uVar1 + (uVar1 >> 2)) {
        Resize(this,param_2);
        uVar4 = (ulong)*(uint *)(this + 8);
        uVar1 = *(uint *)(this + 8) - 1;
        uVar7 = (ulong)(uVar1 & uVar2);
        lVar8 = *(long *)(*(long *)this + uVar7 * 0x18);
        if (lVar8 != 0) {
          do {
            if (*plVar10 == lVar8) break;
            uVar7 = (ulong)((int)uVar7 + 1U & uVar1);
            lVar8 = *(long *)(*(long *)this + uVar7 * 0x18);
          } while (lVar8 != 0);
        }
      }
      iVar11 = iVar11 + -1;
    }
    iVar5 = (int)uVar4;
    plVar10 = plVar10 + 3;
    if (iVar11 == 0) {
      return;
    }
    lVar8 = *plVar10;
  } while( true );
}

