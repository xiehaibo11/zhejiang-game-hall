
/* v8::internal::compiler::RedundancyElimination::EffectPathChecks::LookupCheck(v8::internal::compiler::Node*)
   const */

long __thiscall
v8::internal::compiler::RedundancyElimination::EffectPathChecks::LookupCheck
          (EffectPathChecks *this,Node *param_1)

{
  char cVar1;
  ushort uVar2;
  Operator *pOVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  ushort uVar7;
  Operator *pOVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  Node *pNVar12;
  long *plVar13;
  long *plVar14;
  long local_48;
  
  plVar13 = *(long **)this;
  if (plVar13 != (long *)0x0) {
    do {
      plVar14 = (long *)*plVar13;
      pOVar8 = *(Operator **)param_1;
      pOVar3 = (Operator *)*plVar14;
      if (pOVar3 == pOVar8) goto switchD_012b0248_caseD_5c;
      uVar2 = *(ushort *)(pOVar3 + 0x10);
      if (0xd7 < uVar2) {
        if (uVar2 == 0xd8) {
          uVar7 = *(ushort *)(pOVar8 + 0x10);
          if (uVar7 != 0xdb) goto LAB_012b0228;
        }
        else if (uVar2 == 0xd9) {
          uVar7 = *(ushort *)(pOVar8 + 0x10);
          if (uVar7 != 0xda) goto LAB_012b0228;
        }
        else {
          if (uVar2 != 0xdd) goto LAB_012b0224;
          uVar7 = *(ushort *)(pOVar8 + 0x10);
          if (uVar7 != 0xd7) goto LAB_012b0228;
        }
        goto switchD_012b0248_caseD_5c;
      }
      if (uVar2 == 0x67) {
        uVar7 = *(ushort *)(pOVar8 + 0x10);
        if ((uVar7 & 0xfffe) == 0x68) goto switchD_012b0248_caseD_5c;
      }
      else if (uVar2 == 0x68) {
        uVar7 = *(ushort *)(pOVar8 + 0x10);
        if (uVar7 == 0x69) goto switchD_012b0248_caseD_5c;
      }
      else {
LAB_012b0224:
        uVar7 = *(ushort *)(pOVar8 + 0x10);
      }
LAB_012b0228:
      if (uVar2 != uVar7) goto switchD_012b0248_caseD_6f;
      switch(uVar2) {
      case 0x65:
      case 0x66:
      case 0x68:
      case 0x6c:
        pcVar5 = (char *)CheckMinusZeroParametersOf(pOVar3);
        pcVar6 = (char *)CheckMinusZeroParametersOf(*(Operator **)param_1);
        cVar1 = *pcVar5;
LAB_012b0324:
        if (cVar1 == *pcVar6) goto switchD_012b0248_caseD_5c;
        break;
      case 0x6a:
      case 0x6b:
        pcVar5 = (char *)CheckTaggedInputParametersOf(pOVar3);
        pcVar6 = (char *)CheckTaggedInputParametersOf(*(Operator **)param_1);
        cVar1 = *pcVar5;
        if (cVar1 != '\0') goto LAB_012b0324;
      case 0x5c:
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 99:
      case 100:
      case 0x67:
      case 0x69:
      case 0x6d:
      case 0x6e:
      case 0xbf:
      case 0xd4:
      case 0xd7:
      case 0xdb:
      case 0xdd:
switchD_012b0248_caseD_5c:
        lVar10 = (long)*(int *)(*plVar14 + 0x14);
        do {
          lVar9 = lVar10 + -1;
          if (lVar10 < 1) {
            if ((((*(long *)(param_1 + 8) == 0) ||
                 (local_48 = *(long *)(*plVar13 + 8), local_48 == 0)) ||
                (local_48 == *(long *)(param_1 + 8))) ||
               (uVar4 = Type::SlowIs((Type *)&local_48), (uVar4 & 1) != 0)) {
              return *plVar13;
            }
            break;
          }
          plVar11 = plVar14 + 4;
          if ((~*(uint *)((long)plVar14 + 0x14) & 0xf000000) == 0) {
            plVar11 = (long *)(plVar14[4] + 0x10);
          }
          pNVar12 = param_1 + 0x20;
          if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
            pNVar12 = (Node *)(*(long *)(param_1 + 0x20) + 0x10);
          }
          lVar10 = lVar9;
        } while (plVar11[lVar9] == *(long *)(pNVar12 + lVar9 * 8));
      }
switchD_012b0248_caseD_6f:
      plVar13 = (long *)plVar13[1];
    } while (plVar13 != (long *)0x0);
  }
  return 0;
}

