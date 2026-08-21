
/* v8::internal::compiler::BytecodeGraphBuilder::Environment::FillWithOsrValues() */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::Environment::FillWithOsrValues(Environment *this)

{
  int iVar1;
  Graph *pGVar2;
  long lVar3;
  long lVar4;
  Operator *pOVar5;
  undefined8 uVar6;
  Node *pNVar7;
  ulong uVar8;
  Node *local_28;
  
  pGVar2 = (Graph *)**(undefined8 **)(*(long *)this + 0x10);
  pNVar7 = *(Node **)(pGVar2 + 8);
  pOVar5 = (Operator *)
           CommonOperatorBuilder::OsrValue
                     ((CommonOperatorBuilder *)(*(undefined8 **)(*(long *)this + 0x10))[1],-1);
  local_28 = pNVar7;
  uVar6 = Graph::NewNode(pGVar2,pOVar5,1,&local_28,false);
  lVar3 = *(long *)(this + 0x28);
  lVar4 = *(long *)(this + 0x30);
  *(undefined8 *)(this + 0x10) = uVar6;
  if (0 < (int)((ulong)(lVar4 - lVar3) >> 3)) {
    uVar8 = 0;
    do {
      pGVar2 = (Graph *)**(undefined8 **)(*(long *)this + 0x10);
      iVar1 = (int)uVar8;
      if ((long)*(int *)(this + 0x58) <= (long)uVar8) {
        iVar1 = (int)uVar8 + 2;
      }
      if ((long)*(int *)(this + 0x5c) <= (long)uVar8) {
        iVar1 = -1;
      }
      pOVar5 = (Operator *)
               CommonOperatorBuilder::OsrValue
                         ((CommonOperatorBuilder *)(*(undefined8 **)(*(long *)this + 0x10))[1],iVar1
                         );
      local_28 = pNVar7;
      uVar6 = Graph::NewNode(pGVar2,pOVar5,1,&local_28,false);
      if ((ulong)(*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(*(long *)(this + 0x28) + uVar8 * 8) = uVar6;
      uVar8 = uVar8 + 1;
    } while (((ulong)(lVar4 - lVar3) >> 3 & 0xffffffff) != uVar8);
  }
  return;
}

