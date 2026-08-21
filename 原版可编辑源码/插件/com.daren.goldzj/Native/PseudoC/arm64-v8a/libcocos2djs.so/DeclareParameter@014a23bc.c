
/* v8::internal::DeclarationScope::DeclareParameter(v8::internal::AstRawString const*,
   v8::internal::VariableMode, bool, bool, v8::internal::AstValueFactory*, int) */

Variable * __thiscall
v8::internal::DeclarationScope::DeclareParameter
          (DeclarationScope *this,long param_1,char param_3,undefined8 param_4,uint param_5,
          long param_6,undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  Zone *pZVar3;
  Variable *this_00;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  ushort uVar7;
  long lVar8;
  void *pvVar9;
  DeclarationScope *pDVar10;
  
  if (param_3 == '\x03') {
    pDVar10 = this;
    if (((byte)this[0x82] & 1) != 0) goto LAB_014a240c;
    do {
      do {
        pDVar10 = *(DeclarationScope **)(pDVar10 + 8);
      } while (((byte)pDVar10[0x82] & 1) == 0);
LAB_014a240c:
    } while ((pDVar10[0x80] == (DeclarationScope)0x6) || (pDVar10[0x80] == (DeclarationScope)0x0));
    pZVar3 = *(Zone **)this;
    this_00 = *(Variable **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)this_00) < 0x30) {
      this_00 = (Variable *)Zone::NewExpand(pZVar3,0x30);
    }
    else {
      *(Variable **)(pZVar3 + 0x10) = this_00 + 0x30;
    }
    *(DeclarationScope **)this_00 = pDVar10;
    *(long *)(this_00 + 8) = param_1;
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(undefined8 *)(this_00 + 0x20) = 0xffffffffffffffff;
    *(undefined2 *)(this_00 + 0x28) = 0x1003;
    **(undefined8 **)(pDVar10 + 0x40) = this_00;
    *(Variable **)(pDVar10 + 0x40) = this_00 + 0x18;
    Variable::SetMaybeAssigned(this_00);
  }
  else {
    uVar4 = (ulong)(*(int *)(this + 0x28) - 1U & *(uint *)(param_1 + 0x18) >> 3);
    plVar6 = (long *)(*(long *)(this + 0x20) + uVar4 * 0x18);
    lVar8 = *plVar6;
    while (lVar8 != 0) {
      if (lVar8 == param_1) {
        this_00 = (Variable *)0x0;
        if ((param_1 != 0) && (plVar6 != (long *)0x0)) {
          this_00 = (Variable *)plVar6[1];
        }
        goto LAB_014a24d8;
      }
      uVar4 = (ulong)((int)uVar4 + 1U & *(int *)(this + 0x28) - 1U);
      plVar6 = (long *)(*(long *)(this + 0x20) + uVar4 * 0x18);
      lVar8 = *plVar6;
    }
    this_00 = (Variable *)0x0;
  }
LAB_014a24d8:
  uVar7 = 8;
  if ((param_5 & 1) == 0) {
    uVar7 = 0;
  }
  *(ushort *)(this + 0x83) = *(ushort *)(this + 0x83) & 0xfff7 | uVar7;
  *(undefined4 *)(this_00 + 0x24) = param_7;
  uVar2 = *(uint *)(this + 0x98);
  uVar5 = *(uint *)(this + 0x9c);
  if ((int)uVar5 < (int)uVar2) {
    pvVar9 = *(void **)(this + 0x90);
  }
  else {
    pZVar3 = *(Zone **)this;
    uVar1 = uVar2 << 1 | 1;
    uVar4 = -(ulong)((uVar2 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    pvVar9 = *(void **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pvVar9) < uVar4) {
      pvVar9 = (void *)Zone::NewExpand(pZVar3,uVar4);
    }
    else {
      *(ulong *)(pZVar3 + 0x10) = (long)pvVar9 + uVar4;
    }
    uVar5 = *(uint *)(this + 0x9c);
    if (0 < (int)uVar5) {
      MemCopy(pvVar9,*(void **)(this + 0x90),(ulong)uVar5 << 3);
      uVar5 = *(uint *)(this + 0x9c);
    }
    *(void **)(this + 0x90) = pvVar9;
    *(uint *)(this + 0x98) = uVar1;
  }
  *(uint *)(this + 0x9c) = uVar5 + 1;
  *(Variable **)((long)pvVar9 + (long)(int)uVar5 * 8) = this_00;
  if ((param_5 & 1) == 0) {
    *(int *)(this + 0x88) = *(int *)(this + 0x88) + 1;
  }
  if (*(long *)(*(long *)(param_6 + 0x38) + 0x70) == param_1) {
    *(ushort *)(this + 0x83) = *(ushort *)(this + 0x83) | 0x10;
  }
  *(ushort *)(this_00 + 0x28) = *(ushort *)(this_00 + 0x28) | 0x800;
  return this_00;
}

