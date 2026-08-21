
/* v8::internal::compiler::LoopVariableOptimizer::TryGetInductionVariable(v8::internal::compiler::Node*)
    */

undefined8 * __thiscall
v8::internal::compiler::LoopVariableOptimizer::TryGetInductionVariable
          (LoopVariableOptimizer *this,Node *param_1)

{
  uint uVar1;
  short sVar2;
  long lVar3;
  Zone *this_00;
  undefined8 *puVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  Node *pNVar9;
  Node *pNVar10;
  long *plVar11;
  long *plVar12;
  undefined8 uVar13;
  long *plVar14;
  
  lVar3 = NodeProperties::GetControlInput(param_1,0);
  pNVar9 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
  }
  plVar6 = *(long **)(pNVar9 + 8);
  uVar5 = 0;
  sVar2 = *(short *)(*plVar6 + 0x10);
  uVar7 = *(undefined8 *)pNVar9;
  switch(sVar2) {
  case 0x7c:
  case 0x8e:
  case 0x99:
    break;
  case 0x7d:
  case 0x8f:
  case 0x9a:
switchD_017762ac_caseD_7d:
    uVar5 = 1;
    break;
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x90:
  case 0x91:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x98:
    goto switchD_017762ac_caseD_7e;
  default:
    if (sVar2 != 0x2bd) {
      if (sVar2 != 0x2be) {
        return (undefined8 *)0x0;
      }
      goto switchD_017762ac_caseD_7d;
    }
  }
  plVar8 = plVar6 + 4;
  uVar1 = *(uint *)((long)plVar6 + 0x14) & 0xf000000;
  plVar12 = plVar8;
  if (uVar1 == 0xf000000) {
    plVar12 = (long *)(*plVar8 + 0x10);
  }
  pNVar9 = (Node *)*plVar12;
  if ((*(ushort *)(*(long *)pNVar9 + 0x10) - 0x2c8 < 2) ||
     (*(ushort *)(*(long *)pNVar9 + 0x10) == 0xc0)) {
    pNVar10 = pNVar9 + 0x20;
    if ((~*(uint *)(pNVar9 + 0x14) & 0xf000000) == 0) {
      pNVar10 = (Node *)(*(long *)pNVar10 + 0x10);
    }
    pNVar9 = *(Node **)pNVar10;
  }
  if ((pNVar9 == param_1) && (plVar12 = *(long **)(lVar3 + 0x18), plVar12 != (long *)0x0)) {
    plVar11 = (long *)0x0;
    do {
      plVar14 = plVar12 + (ulong)(*(uint *)(plVar12 + 2) >> 1) * 3 + 3;
      if ((*(uint *)(plVar12 + 2) & 1) == 0) {
        plVar14 = (long *)*plVar14;
      }
      plVar12 = (long *)*plVar12;
      if (*(short *)(*plVar14 + 0x10) != 0x24) {
        plVar14 = plVar11;
      }
      plVar11 = plVar14;
    } while (plVar12 != (long *)0x0);
    if (plVar14 != (long *)0x0) {
      if (uVar1 == 0xf000000) {
        plVar8 = (long *)(*plVar8 + 0x10);
      }
      this_00 = *(Zone **)(this + 0x18);
      lVar3 = plVar8[1];
      puVar4 = *(undefined8 **)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar4) < 0x70) {
        puVar4 = (undefined8 *)Zone::NewExpand(this_00,0x70);
      }
      else {
        *(undefined8 **)(this_00 + 0x10) = puVar4 + 0xe;
      }
      uVar13 = *(undefined8 *)(this + 0x18);
      *puVar4 = param_1;
      puVar4[1] = plVar14;
      puVar4[2] = plVar6;
      puVar4[3] = lVar3;
      puVar4[4] = uVar7;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[8] = uVar13;
      puVar4[9] = 0;
      puVar4[0xc] = uVar13;
      *(undefined4 *)(puVar4 + 0xd) = uVar5;
      return puVar4;
    }
  }
switchD_017762ac_caseD_7e:
  return (undefined8 *)0x0;
}

