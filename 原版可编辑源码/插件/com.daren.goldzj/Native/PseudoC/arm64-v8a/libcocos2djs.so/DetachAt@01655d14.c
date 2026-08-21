
/* v8::internal::compiler::LiveRange::DetachAt(v8::internal::compiler::LifetimePosition,
   v8::internal::compiler::LiveRange*, v8::internal::Zone*,
   v8::internal::compiler::LiveRange::HintConnectionOption) */

long __thiscall
v8::internal::compiler::LiveRange::DetachAt
          (LiveRange *this,int param_2,long param_3,Zone *param_4,ulong param_5)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  LiveRange *pLVar5;
  long lVar6;
  LiveRange *pLVar7;
  int *piVar8;
  long lVar9;
  
  pLVar7 = this + 0x30;
  if (*(int **)pLVar7 == (int *)0x0) {
LAB_01655d40:
    pLVar5 = this + 0x10;
  }
  else {
    pLVar5 = pLVar7;
    if (param_2 < **(int **)pLVar7) {
      *(undefined8 *)(this + 0x30) = 0;
      goto LAB_01655d40;
    }
  }
  piVar4 = *(int **)pLVar5;
  if (**(int **)pLVar5 == param_2) {
    piVar4 = *(int **)(this + 0x10);
  }
  do {
    piVar2 = piVar4;
    if (piVar2 == (int *)0x0) {
      bVar3 = false;
      piVar4 = (int *)0x0;
      goto LAB_01655de0;
    }
    if ((*piVar2 <= param_2) && (param_2 < piVar2[1])) {
      piVar4 = *(int **)(param_4 + 0x10);
      if ((ulong)(*(long *)(param_4 + 0x18) - (long)piVar4) < 0x10) {
        piVar4 = (int *)Zone::NewExpand(param_4,0x10);
        param_5 = param_5 & 0xffffffff;
      }
      else {
        *(int **)(param_4 + 0x10) = piVar4 + 4;
      }
      iVar1 = piVar2[1];
      piVar4[2] = 0;
      piVar4[3] = 0;
      bVar3 = false;
      *piVar4 = param_2;
      piVar4[1] = iVar1;
      *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(piVar2 + 2);
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[1] = param_2;
      goto LAB_01655de0;
    }
    piVar4 = *(int **)(piVar2 + 2);
    bVar3 = *piVar4 == param_2;
  } while (*piVar4 < param_2);
  piVar2[2] = 0;
  piVar2[3] = 0;
LAB_01655de0:
  piVar8 = *(int **)(this + 8);
  *(int **)(param_3 + 0x10) = piVar4;
  if (piVar8 != piVar2) {
    piVar4 = piVar8;
  }
  *(int **)(param_3 + 8) = piVar4;
  lVar9 = *(long *)(this + 0x48);
  *(int **)(this + 8) = piVar2;
  if ((lVar9 == 0) || (param_2 < *(int *)(lVar9 + 0x18))) {
    lVar9 = *(long *)(this + 0x18);
  }
  if (bVar3) {
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x18) < param_2) {
        do {
          lVar6 = lVar9;
          lVar9 = *(long *)(lVar6 + 0x10);
          if (lVar9 == 0) goto LAB_01655e8c;
        } while (*(int *)(lVar9 + 0x18) < param_2);
      }
      else {
LAB_01655e50:
        lVar6 = 0;
      }
LAB_01655e54:
      if (lVar6 != 0) {
        bVar3 = true;
        goto LAB_01655e98;
      }
    }
  }
  else if (lVar9 != 0) {
    if (param_2 < *(int *)(lVar9 + 0x18)) goto LAB_01655e50;
    do {
      lVar6 = lVar9;
      lVar9 = *(long *)(lVar6 + 0x10);
      if (lVar9 == 0) goto LAB_01655e8c;
    } while (*(int *)(lVar9 + 0x18) <= param_2);
    goto LAB_01655e54;
  }
  bVar3 = false;
  lVar6 = 0;
  pLVar5 = this + 0x18;
  goto LAB_01655e9c;
LAB_01655e8c:
  bVar3 = lVar6 != 0;
  lVar9 = 0;
LAB_01655e98:
  pLVar5 = (LiveRange *)(lVar6 + 0x10);
LAB_01655e9c:
  *(undefined8 *)pLVar5 = 0;
  *(long *)(param_3 + 0x18) = lVar9;
  *(undefined8 *)pLVar7 = 0;
  *(undefined8 *)(this + 0x38) = 0;
  if (((lVar9 != 0) && (bVar3)) && ((param_5 & 1) != 0)) {
    *(long *)(lVar9 + 8) = lVar6;
    *(uint *)(lVar9 + 0x1c) = *(uint *)(lVar9 + 0x1c) & 0xffffffe3 | 8;
  }
  return lVar6;
}

