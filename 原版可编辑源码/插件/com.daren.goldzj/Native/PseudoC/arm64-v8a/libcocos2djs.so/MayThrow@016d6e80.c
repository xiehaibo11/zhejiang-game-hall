
/* v8::internal::compiler::JSCallReducerAssembler::MayThrow(std::__ndk1::function<v8::internal::TNode<v8::internal::Object>
   ()> const&) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducerAssembler::MayThrow
          (JSCallReducerAssembler *this,function *param_1)

{
  ulong uVar1;
  Graph *pGVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  Operator *pOVar5;
  Node *pNVar6;
  undefined8 uVar7;
  Node *pNVar8;
  long *plVar9;
  long lVar10;
  Zone *this_00;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  Node *pNVar15;
  long lVar16;
  Node *local_50;
  Node *pNStack_48;
  
  plVar9 = *(long **)(param_1 + 0x20);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_008589d0();
  }
  uVar4 = (**(code **)(*plVar9 + 0x30))(plVar9);
  if (this[0x40] != (JSCallReducerAssembler)0x0) {
    pNVar8 = *(Node **)(this + 0x20);
    pNVar15 = *(Node **)(this + 0x28);
    pGVar2 = (Graph *)**(undefined8 **)(this + 0x18);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::IfException
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1]);
    local_50 = pNVar8;
    pNStack_48 = pNVar15;
    pNVar6 = (Node *)Graph::NewNode(pGVar2,pOVar5,2,&local_50,false);
    uVar7 = GraphAssembler::AddNode((GraphAssembler *)this,pNVar6);
    puVar11 = *(undefined8 **)(this + 0x58);
    if (puVar11 == *(undefined8 **)(this + 0x60)) {
      lVar16 = (long)puVar11 - *(long *)(this + 0x50) >> 3;
      uVar1 = lVar16 + 1;
      if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar10 = (long)*(undefined8 **)(this + 0x60) - *(long *)(this + 0x50);
      uVar12 = lVar10 >> 2;
      if (uVar1 <= uVar12) {
        uVar1 = uVar12;
      }
      if (0x7fffffe < (ulong)(lVar10 >> 3)) {
        uVar1 = 0xfffffff;
      }
      if (uVar1 == 0) {
        lVar10 = 0;
      }
      else {
        this_00 = *(Zone **)(this + 0x68);
        uVar12 = uVar1 * 8;
        lVar10 = *(long *)(this_00 + 0x10);
        if (uVar12 < (ulong)(*(long *)(this_00 + 0x18) - lVar10) ||
            uVar12 - (*(long *)(this_00 + 0x18) - lVar10) == 0) {
          *(ulong *)(this_00 + 0x10) = lVar10 + uVar12;
        }
        else {
          lVar10 = Zone::NewExpand(this_00,uVar12);
        }
      }
      puVar11 = (undefined8 *)(lVar10 + lVar16 * 8);
      puVar13 = puVar11 + 1;
      *puVar11 = uVar7;
      puVar3 = *(undefined8 **)(this + 0x50);
      puVar14 = *(undefined8 **)(this + 0x58);
      while (puVar14 != puVar3) {
        puVar14 = puVar14 + -1;
        puVar11 = puVar11 + -1;
        *puVar11 = *puVar14;
      }
      *(undefined8 **)(this + 0x50) = puVar11;
      *(undefined8 **)(this + 0x58) = puVar13;
      *(ulong *)(this + 0x60) = lVar10 + uVar1 * 8;
    }
    else {
      *puVar11 = uVar7;
      *(long *)(this + 0x58) = *(long *)(this + 0x58) + 8;
    }
    GraphAssembler::InitializeEffectControl((GraphAssembler *)this,pNVar8,pNVar15);
    pGVar2 = (Graph *)**(undefined8 **)(this + 0x18);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::IfSuccess
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1]);
    local_50 = pNVar15;
    pNVar8 = (Node *)Graph::NewNode(pGVar2,pOVar5,1,&local_50,false);
    GraphAssembler::AddNode((GraphAssembler *)this,pNVar8);
  }
  return uVar4;
}

