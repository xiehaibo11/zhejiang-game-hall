
/* v8::internal::compiler::RepresentationSelector::DeferReplacement(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::RepresentationSelector::DeferReplacement
          (RepresentationSelector *this,Node *param_1,Node *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  Zone *pZVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  
  if (FLAG_trace_representation != '\0') {
    PrintF("defer replacement #%d:%s with #%d:%s\n",(ulong)(*(uint *)(param_1 + 0x14) & 0xffffff),
           *(undefined8 *)(*(long *)param_1 + 8),(ulong)(*(uint *)(param_2 + 0x14) & 0xffffff),
           *(undefined8 *)(*(long *)param_2 + 8));
  }
  if (0 < *(int *)(*(long *)param_1 + 0x18)) {
    uVar2 = NodeProperties::GetControlInput(param_1,0);
    uVar3 = NodeProperties::GetEffectInput(param_1,0);
    FUN_012e8f08(param_1,uVar3,uVar2);
  }
  puVar7 = *(undefined8 **)(this + 0x60);
  if (puVar7 == *(undefined8 **)(this + 0x68)) {
    lVar12 = (long)puVar7 - *(long *)(this + 0x58) >> 3;
    uVar1 = lVar12 + 1;
    if (uVar1 >> 0x1c != 0) goto LAB_012d0f04;
    lVar5 = (long)*(undefined8 **)(this + 0x68) - *(long *)(this + 0x58);
    uVar10 = lVar5 >> 2;
    if (uVar1 <= uVar10) {
      uVar1 = uVar10;
    }
    if (0x7fffffe < (ulong)(lVar5 >> 3)) {
      uVar1 = 0xfffffff;
    }
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      pZVar6 = *(Zone **)(this + 0x70);
      uVar10 = uVar1 * 8;
      lVar5 = *(long *)(pZVar6 + 0x10);
      if (uVar10 < (ulong)(*(long *)(pZVar6 + 0x18) - lVar5) ||
          uVar10 - (*(long *)(pZVar6 + 0x18) - lVar5) == 0) {
        *(ulong *)(pZVar6 + 0x10) = lVar5 + uVar10;
      }
      else {
        lVar5 = Zone::NewExpand(pZVar6,uVar10);
      }
    }
    puVar9 = (undefined8 *)(lVar5 + lVar12 * 8);
    puVar7 = puVar9 + 1;
    *puVar9 = param_1;
    puVar8 = *(undefined8 **)(this + 0x58);
    puVar11 = *(undefined8 **)(this + 0x60);
    puVar4 = (undefined8 *)(lVar5 + uVar1 * 8);
    while (puVar11 != puVar8) {
      puVar11 = puVar11 + -1;
      puVar9 = puVar9 + -1;
      *puVar9 = *puVar11;
    }
    *(undefined8 **)(this + 0x58) = puVar9;
    *(undefined8 **)(this + 0x60) = puVar7;
    *(undefined8 **)(this + 0x68) = puVar4;
    if (puVar7 == puVar4) goto LAB_012d0e2c;
  }
  else {
    *puVar7 = param_1;
    puVar4 = *(undefined8 **)(this + 0x68);
    puVar7 = (undefined8 *)(*(long *)(this + 0x60) + 8);
    *(undefined8 **)(this + 0x60) = puVar7;
    if (puVar7 == puVar4) {
LAB_012d0e2c:
      lVar12 = (long)puVar7 - *(long *)(this + 0x58) >> 3;
      uVar1 = lVar12 + 1;
      if (uVar1 >> 0x1c != 0) {
LAB_012d0f04:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar5 = (long)puVar4 - *(long *)(this + 0x58);
      uVar10 = lVar5 >> 2;
      if (uVar1 <= uVar10) {
        uVar1 = uVar10;
      }
      if (0x7fffffe < (ulong)(lVar5 >> 3)) {
        uVar1 = 0xfffffff;
      }
      if (uVar1 == 0) {
        lVar5 = 0;
      }
      else {
        pZVar6 = *(Zone **)(this + 0x70);
        uVar10 = uVar1 * 8;
        lVar5 = *(long *)(pZVar6 + 0x10);
        if (uVar10 < (ulong)(*(long *)(pZVar6 + 0x18) - lVar5) ||
            uVar10 - (*(long *)(pZVar6 + 0x18) - lVar5) == 0) {
          *(ulong *)(pZVar6 + 0x10) = lVar5 + uVar10;
        }
        else {
          lVar5 = Zone::NewExpand(pZVar6,uVar10);
        }
      }
      puVar7 = (undefined8 *)(lVar5 + lVar12 * 8);
      puVar8 = puVar7 + 1;
      *puVar7 = param_2;
      puVar9 = *(undefined8 **)(this + 0x58);
      puVar4 = *(undefined8 **)(this + 0x60);
      while (puVar4 != puVar9) {
        puVar4 = puVar4 + -1;
        puVar7 = puVar7 + -1;
        *puVar7 = *puVar4;
      }
      *(undefined8 **)(this + 0x58) = puVar7;
      *(undefined8 **)(this + 0x60) = puVar8;
      *(ulong *)(this + 0x68) = lVar5 + uVar1 * 8;
      goto LAB_012d0ec4;
    }
  }
  *puVar7 = param_2;
  *(long *)(this + 0x60) = *(long *)(this + 0x60) + 8;
LAB_012d0ec4:
  Node::NullAllInputs(param_1);
  return;
}

