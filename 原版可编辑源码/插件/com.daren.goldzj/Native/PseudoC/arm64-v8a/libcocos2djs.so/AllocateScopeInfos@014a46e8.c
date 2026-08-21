
/* v8::internal::DeclarationScope::AllocateScopeInfos(v8::internal::ParseInfo*,
   v8::internal::Isolate*) */

void v8::internal::DeclarationScope::AllocateScopeInfos(ParseInfo *param_1,Isolate *param_2)

{
  Scope SVar1;
  Scope *pSVar2;
  ulong uVar3;
  ulong *puVar4;
  Scope *pSVar5;
  long lVar6;
  Scope *pSVar7;
  undefined8 uVar8;
  
  pSVar7 = *(Scope **)(*(long *)(param_1 + 0xa8) + 0x28);
  if (*(long *)(pSVar7 + 0x68) == 0) {
    if (*(long *)(pSVar7 + 8) == 0) {
      uVar8 = 0;
      SVar1 = pSVar7[0x84];
    }
    else {
      uVar8 = *(undefined8 *)(*(long *)(pSVar7 + 8) + 0x68);
      SVar1 = pSVar7[0x84];
    }
    pSVar2 = pSVar7;
    if (((byte)SVar1 >> 5 & 1) != 0) {
LAB_014a4748:
      do {
        pSVar5 = pSVar2;
        lVar6 = *(long *)(pSVar5 + 8);
        if (lVar6 == 0) {
LAB_014a4790:
          pSVar2 = *(Scope **)(pSVar5 + 0x10);
          if (*(Scope **)(pSVar5 + 0x10) != (Scope *)0x0) goto LAB_014a4748;
        }
        else {
          if (*(int *)(lVar6 + 0x7c) < 1) {
            *(ushort *)(pSVar5 + 0x81) =
                 *(ushort *)(pSVar5 + 0x81) & 0xfdff | *(ushort *)(lVar6 + 0x81) & 0x200;
          }
          if ((pSVar5[0x80] != (Scope)0x2) || (((byte)pSVar5[0x83] & 0x44) != 0)) goto LAB_014a4790;
        }
        while( true ) {
          if (*(Scope **)(pSVar5 + 0x18) != (Scope *)0x0) break;
          if (pSVar5 == pSVar7) goto LAB_014a47b8;
          pSVar5 = *(Scope **)(pSVar5 + 8);
        }
        pSVar2 = *(Scope **)(pSVar5 + 0x18);
        if (pSVar5 == pSVar7) break;
      } while( true );
    }
LAB_014a47b8:
    Scope::AllocateScopeInfosRecursively(pSVar7,param_2,uVar8);
    if (*(long *)(pSVar7 + 0x68) == 0) {
      uVar8 = ScopeInfo::Create(param_2,*(undefined8 *)pSVar7,pSVar7,uVar8);
      *(undefined8 *)(pSVar7 + 0x68) = uVar8;
    }
    if ((*(long *)(param_1 + 0x18) != 0) && (*(long *)(*(long *)(param_1 + 0x18) + 0x68) == 0)) {
      uVar3 = ScopeInfo::Empty(param_2);
      if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(param_2 + 0x95a0);
        if (puVar4 == *(ulong **)(param_2 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(param_2);
        }
        *(ulong **)(param_2 + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar3;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar3);
      }
      *(ulong **)(*(long *)(param_1 + 0x18) + 0x68) = puVar4;
    }
  }
  return;
}

