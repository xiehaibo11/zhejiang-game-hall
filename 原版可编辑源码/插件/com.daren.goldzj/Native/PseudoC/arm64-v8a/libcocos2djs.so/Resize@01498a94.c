
/* v8::base::TemplateHashMapImpl<void*, void*, v8::base::HashEqualityThenKeyMatcher<void*, bool
   (*)(void*, void*)>,
   v8::internal::ZoneAllocationPolicy>::Resize(v8::internal::ZoneAllocationPolicy) */

void __thiscall
v8::base::
TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::internal::ZoneAllocationPolicy>
::Resize(TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::internal::ZoneAllocationPolicy>
         *this,Zone *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  
  iVar11 = *(int *)(this + 0xc);
  plVar10 = *(long **)this;
  puVar4 = *(undefined8 **)(param_2 + 0x10);
  uVar2 = *(int *)(this + 8) << 1;
  uVar5 = (ulong)uVar2 * 0x18;
  if (uVar5 < (ulong)(*(long *)(param_2 + 0x18) - (long)puVar4) ||
      uVar5 - (*(long *)(param_2 + 0x18) - (long)puVar4) == 0) {
    *(undefined8 **)(param_2 + 0x10) = puVar4 + (ulong)uVar2 * 3;
    *(undefined8 **)this = puVar4;
  }
  else {
    puVar4 = (undefined8 *)internal::Zone::NewExpand(param_2,uVar5);
    *(undefined8 **)this = puVar4;
  }
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Out of memory: HashMap::Initialize");
  }
  *(uint *)(this + 8) = uVar2;
  if ((uVar2 != 0) && (*puVar4 = 0, 1 < *(uint *)(this + 8))) {
    uVar5 = 1;
    lVar9 = 0x18;
    do {
      uVar5 = uVar5 + 1;
      *(undefined8 *)(*(long *)this + lVar9) = 0;
      lVar9 = lVar9 + 0x18;
    } while (uVar5 < *(uint *)(this + 8));
  }
  *(undefined4 *)(this + 0xc) = 0;
  if (iVar11 == 0) {
    return;
  }
  lVar9 = *plVar10;
  do {
    if (lVar9 != 0) {
      iVar8 = *(int *)(this + 8);
      uVar2 = *(uint *)(plVar10 + 2);
      lVar9 = *(long *)this;
      uVar5 = (ulong)(iVar8 - 1U & uVar2);
      lVar6 = *(long *)(lVar9 + uVar5 * 0x18);
      while (lVar6 != 0) {
        if (*(uint *)(lVar9 + uVar5 * 0x18 + 0x10) == uVar2) {
          uVar3 = (**(code **)(this + 0x10))(*plVar10);
          if ((uVar3 & 1) != 0) {
            lVar9 = *(long *)this;
            break;
          }
          iVar8 = *(int *)(this + 8);
          lVar9 = *(long *)this;
        }
        uVar5 = (ulong)((int)uVar5 + 1U & iVar8 - 1U);
        lVar6 = *(long *)(lVar9 + uVar5 * 0x18);
      }
      lVar6 = *plVar10;
      uVar1 = *(uint *)(plVar10 + 2);
      plVar7 = (long *)(lVar9 + uVar5 * 0x18);
      plVar7[1] = plVar10[1];
      *plVar7 = lVar6;
      *(uint *)(plVar7 + 2) = uVar1;
      uVar2 = *(int *)(this + 0xc) + 1;
      *(uint *)(this + 0xc) = uVar2;
      if (*(uint *)(this + 8) <= uVar2 + (uVar2 >> 2)) {
        Resize(this,param_2);
        iVar8 = *(int *)(this + 8);
        lVar9 = *(long *)this;
        uVar2 = iVar8 - 1U & uVar1;
        while (*(long *)(lVar9 + (ulong)uVar2 * 0x18) != 0) {
          if (*(uint *)(lVar9 + (ulong)uVar2 * 0x18 + 0x10) == uVar1) {
            uVar5 = (**(code **)(this + 0x10))(*plVar10);
            if ((uVar5 & 1) != 0) break;
            iVar8 = *(int *)(this + 8);
            lVar9 = *(long *)this;
          }
          uVar2 = uVar2 + 1 & iVar8 - 1U;
        }
      }
      iVar11 = iVar11 + -1;
    }
    plVar10 = plVar10 + 3;
    if (iVar11 == 0) {
      return;
    }
    lVar9 = *plVar10;
  } while( true );
}

