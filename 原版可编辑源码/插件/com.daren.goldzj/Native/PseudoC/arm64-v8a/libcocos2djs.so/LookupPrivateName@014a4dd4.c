
/* WARNING: Removing unreachable block (ram,0x014a4f6c) */
/* v8::internal::ClassScope::LookupPrivateName(v8::internal::VariableProxy*) */

long __thiscall v8::internal::ClassScope::LookupPrivateName(ClassScope *this,VariableProxy *param_1)

{
  VariableProxy *pVVar1;
  ulong uVar2;
  uint uVar3;
  ClassScope *pCVar4;
  ClassScope *pCVar5;
  int iVar6;
  VariableProxy *pVVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined1 auStack_54 [4];
  undefined1 local_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 local_44 [4];
  
  if ((this[0x80] != (ClassScope)0x0) || (((byte)this[0x88] & 7) != 0)) {
    pCVar5 = *(ClassScope **)(this + 8);
    pCVar4 = this;
    while( true ) {
      this = pCVar5;
      if (this == (ClassScope *)0x0) {
        return 0;
      }
      if ((this[0x80] == (ClassScope)0x0) && (((byte)pCVar4[0x82] >> 1 & 1) == 0)) break;
      pCVar5 = *(ClassScope **)(this + 8);
      pCVar4 = this;
    }
  }
  pVVar1 = param_1 + 8;
  do {
    pVVar7 = pVVar1;
    if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
      pVVar7 = (VariableProxy *)(*(long *)pVVar1 + 8);
    }
    uVar2 = *(ulong *)(this + 0x88) & 0xfffffffffffffff8;
    if (uVar2 != 0) {
      lVar8 = *(long *)pVVar7;
      uVar3 = *(int *)(uVar2 + 0x18) - 1;
      uVar10 = (ulong)(uVar3 & *(uint *)(lVar8 + 0x18) >> 3);
      plVar9 = (long *)(*(long *)(uVar2 + 0x10) + uVar10 * 0x18);
      lVar11 = *plVar9;
      while (lVar11 != 0) {
        if (lVar11 == lVar8) {
          if (((lVar8 != 0) && (plVar9 != (long *)0x0)) && (plVar9[1] != 0)) {
            return plVar9[1];
          }
          break;
        }
        uVar10 = (ulong)((int)uVar10 + 1U & uVar3);
        plVar9 = (long *)(*(long *)(uVar2 + 0x10) + uVar10 * 0x18);
        lVar11 = *plVar9;
      }
    }
    if (*(undefined8 **)(this + 0x68) != (undefined8 *)0x0) {
      pVVar7 = pVVar1;
      if ((*(uint *)(param_1 + 4) >> 8 & 1) != 0) {
        pVVar7 = (VariableProxy *)(*(long *)pVVar1 + 8);
      }
      puVar12 = *(undefined8 **)pVVar7;
      iVar6 = ScopeInfo::ContextSlotIndex
                        (**(undefined8 **)(this + 0x68),*(undefined8 *)*puVar12,local_44,auStack_48,
                         auStack_4c,local_50);
      if (-1 < iVar6) {
        lVar11 = DeclarePrivateName(this,puVar12,local_44[0],local_50[0],auStack_54);
        *(int *)(lVar11 + 0x20) = iVar6;
        *(ushort *)(lVar11 + 0x28) = *(ushort *)(lVar11 + 0x28) & 0xfdff | 0x180;
        if (lVar11 != 0) {
          return lVar11;
        }
      }
    }
    pCVar5 = *(ClassScope **)(this + 8);
    pCVar4 = this;
    while( true ) {
      this = pCVar5;
      if (this == (ClassScope *)0x0) {
        return 0;
      }
      if ((this[0x80] == (ClassScope)0x0) && (((byte)pCVar4[0x82] >> 1 & 1) == 0)) break;
      pCVar5 = *(ClassScope **)(this + 8);
      pCVar4 = this;
    }
  } while( true );
}

