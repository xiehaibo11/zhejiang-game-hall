
/* v8::internal::compiler::LoadElimination::AliasStateInfo::MayAlias(v8::internal::compiler::Node*)
   const */

bool __thiscall
v8::internal::compiler::LoadElimination::AliasStateInfo::MayAlias
          (AliasStateInfo *this,Node *param_1)

{
  short sVar1;
  bool bVar2;
  Node *pNVar3;
  ulong uVar4;
  long *plVar5;
  ulong *puVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  Node *pNVar10;
  
  pNVar3 = *(Node **)(this + 8);
  if (*(short *)(*(long *)pNVar3 + 0x10) == 0xe7) {
    return pNVar3 == param_1;
  }
  uVar4 = FUN_0176c280(pNVar3,param_1);
  if ((uVar4 & 1) == 0) {
LAB_0176cf90:
    bVar2 = false;
  }
  else {
    if ((*(ulong *)(this + 0x10) != 0) && (*(long *)(*(long *)this + 0x208) != 0)) {
      while ((sVar1 = *(short *)(*(long *)param_1 + 0x10), sVar1 == 0x28 ||
             ((sVar1 == 0xde || (sVar1 == 0x3a))))) {
        pNVar3 = param_1 + 0x20;
        uVar9 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
        pNVar10 = pNVar3;
        if (uVar9 == 0xf) {
          uVar9 = *(uint *)(*(long *)pNVar3 + 8);
          pNVar10 = (Node *)(*(long *)pNVar3 + 0x10);
        }
        if ((0 < (int)uVar9) && (*(long *)pNVar10 == 0)) break;
        if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
          pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
        }
        param_1 = *(Node **)pNVar3;
      }
      plVar5 = (long *)(*(long *)(*(long *)this + 0x208) + 8);
      plVar8 = (long *)*plVar5;
      plVar7 = plVar5;
      if (plVar8 != (long *)0x0) {
        do {
          if ((Node *)plVar8[4] >= param_1) {
            plVar7 = plVar8;
          }
          plVar8 = (long *)plVar8[(Node *)plVar8[4] < param_1];
        } while (plVar8 != (long *)0x0);
        if ((plVar7 != plVar5) && ((Node *)plVar7[4] <= param_1)) {
          uVar4 = plVar7[5];
          if ((uVar4 & 3) == 0) {
LAB_0176cf80:
            if (uVar4 != *(ulong *)(this + 0x10)) goto LAB_0176cf90;
          }
          else if ((uVar4 & 3) != 1) {
            puVar6 = *(ulong **)(uVar4 - 2);
            if ((long)*(ulong **)(uVar4 + 6) - (long)puVar6 == 8) {
              if (*(ulong **)(uVar4 + 6) == puVar6) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              uVar4 = *puVar6;
              goto LAB_0176cf80;
            }
          }
        }
      }
    }
    bVar2 = true;
  }
  return bVar2;
}

