
/* v8::internal::compiler::BranchElimination::BranchElimination(v8::internal::compiler::AdvancedReducer::Editor*,
   v8::internal::compiler::JSGraph*, v8::internal::Zone*,
   v8::internal::compiler::BranchElimination::Phase) */

void __thiscall
v8::internal::compiler::BranchElimination::BranchElimination
          (BranchElimination *this,undefined8 param_1,long *param_2,Zone *param_3,undefined4 param_5
          )

{
  Graph *this_00;
  uint uVar1;
  long lVar2;
  Operator *pOVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  Node *local_48;
  bool local_24 [4];
  
  *(long **)(this + 0x10) = param_2;
  *(undefined ***)this = &PTR__BranchElimination_01cca770;
  *(undefined8 *)(this + 8) = param_1;
  uVar1 = *(uint *)(*param_2 + 0x1c);
  uVar6 = (ulong)uVar1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(Zone **)(this + 0x30) = param_3;
  if (uVar1 != 0) {
    if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar4 = *(undefined8 **)(param_3 + 0x10);
    uVar5 = uVar6 * 8;
    if (uVar5 < (ulong)(*(long *)(param_3 + 0x18) - (long)puVar4) ||
        uVar5 - (*(long *)(param_3 + 0x18) - (long)puVar4) == 0) {
      *(undefined8 **)(param_3 + 0x10) = puVar4 + uVar6;
    }
    else {
      puVar4 = (undefined8 *)Zone::NewExpand(param_3,uVar5);
    }
    *(undefined8 **)(this + 0x18) = puVar4;
    *(undefined8 **)(this + 0x20) = puVar4;
    *(undefined8 **)(this + 0x28) = puVar4 + uVar6;
    do {
      *puVar4 = 0;
      uVar6 = uVar6 - 1;
      puVar4 = (undefined8 *)(*(long *)(this + 0x20) + 8);
      *(undefined8 **)(this + 0x20) = puVar4;
    } while (uVar6 != 0);
  }
  local_24[0] = false;
  local_48 = (Node *)param_3;
  std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>::vector
            ((vector<bool,v8::internal::ZoneAllocator<bool>> *)(this + 0x38),
             (ulong)*(uint *)(*param_2 + 0x1c),local_24,(ZoneAllocator *)&local_48);
  *(Zone **)(this + 0x58) = param_3;
  lVar2 = param_2[0x2c];
  if (lVar2 == 0) {
    this_00 = (Graph *)*param_2;
    pOVar3 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)param_2[1]);
    local_48 = (Node *)0x0;
    lVar2 = Graph::NewNode(this_00,pOVar3,0,&local_48,false);
    param_2[0x2c] = lVar2;
  }
  *(long *)(this + 0x60) = lVar2;
  *(undefined4 *)(this + 0x68) = param_5;
  return;
}

