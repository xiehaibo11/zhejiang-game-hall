
/* v8::internal::compiler::TypedOptimization::TryReduceStringComparisonOfStringFromSingleCharCode(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Type, bool) */

long __thiscall
v8::internal::compiler::TypedOptimization::TryReduceStringComparisonOfStringFromSingleCharCode
          (TypedOptimization *this,Node *param_1,Node *param_2,int *param_4,byte param_5)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  Operator *pOVar6;
  Node *pNVar7;
  Operator *pOVar8;
  Node *pNVar9;
  Graph *pGVar10;
  JSGraph *this_00;
  long local_88;
  StringRef local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  Node *local_60;
  Node *pNStack_58;
  int *local_38;
  
  if ((((ulong)param_4 & 1) == 0) && (*param_4 == 0)) {
    local_38 = param_4;
    lVar4 = Type::AsHeapConstant((Type *)&local_38);
    uStack_68 = *(undefined8 *)(lVar4 + 0x10);
    local_70 = *(undefined8 *)(lVar4 + 8);
    uVar5 = ObjectRef::IsString((ObjectRef *)&local_70);
    if ((uVar5 & 1) != 0) {
      local_80 = (StringRef  [16])ObjectRef::AsString((ObjectRef *)&local_70);
      lVar4 = TryReduceStringComparisonOfStringFromSingleCharCodeToConstant
                        (this,param_1,local_80,(bool)(param_5 & 1));
      if (lVar4 != 0) {
        return lVar4;
      }
      sVar1 = *(short *)(*(long *)param_1 + 0x10);
      if (sVar1 == 0x7b) {
        pOVar6 = (Operator *)
                 SimplifiedOperatorBuilder::NumberLessThanOrEqual
                           (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x18) + 0x178));
      }
      else if (sVar1 == 0x7a) {
        pOVar6 = (Operator *)
                 SimplifiedOperatorBuilder::NumberLessThan
                           (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x18) + 0x178));
      }
      else {
        if (sVar1 != 0x79) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        pOVar6 = (Operator *)
                 SimplifiedOperatorBuilder::NumberEqual
                           (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x18) + 0x178));
      }
      pNVar7 = (Node *)NodeProperties::GetValueInput(param_2,0);
      local_88 = *(long *)(pNVar7 + 8);
      if (local_88 != *(long *)(*(long *)(this + 0x38) + 0x80)) {
        uVar5 = Type::SlowIs((Type *)&local_88);
        if ((uVar5 & 1) == 0) {
          pGVar10 = (Graph *)**(undefined8 **)(this + 0x18);
          pOVar8 = (Operator *)
                   SimplifiedOperatorBuilder::NumberToInt32
                             ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f]);
          local_60 = pNVar7;
          pNVar7 = (Node *)Graph::NewNode(pGVar10,pOVar8,1,&local_60,false);
          pGVar10 = (Graph *)**(undefined8 **)(this + 0x18);
          pOVar8 = (Operator *)
                   SimplifiedOperatorBuilder::NumberBitwiseAnd
                             ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x18))[0x2f]);
          pNStack_58 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x18),65535.0);
          local_60 = pNVar7;
          pNVar7 = (Node *)Graph::NewNode(pGVar10,pOVar8,2,&local_60,false);
        }
      }
      this_00 = *(JSGraph **)(this + 0x18);
      uVar2 = StringRef::GetFirstChar(local_80);
      pNVar9 = (Node *)JSGraph::Constant(this_00,(double)uVar2);
      iVar3 = StringRef::length(local_80);
      if ((param_5 & 1) == 0) {
        if ((1 < iVar3) && (*(short *)(*(long *)param_1 + 0x10) == 0x7a)) {
          pOVar6 = (Operator *)
                   SimplifiedOperatorBuilder::NumberLessThanOrEqual
                             (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x18) + 0x178));
        }
        pGVar10 = (Graph *)**(undefined8 **)(this + 0x18);
        local_60 = pNVar7;
        pNStack_58 = pNVar9;
      }
      else {
        if ((1 < iVar3) && (*(short *)(*(long *)param_1 + 0x10) == 0x7b)) {
          pOVar6 = (Operator *)
                   SimplifiedOperatorBuilder::NumberLessThan
                             (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x18) + 0x178));
        }
        pGVar10 = (Graph *)**(undefined8 **)(this + 0x18);
        local_60 = pNVar9;
        pNStack_58 = pNVar7;
      }
      lVar4 = Graph::NewNode(pGVar10,pOVar6,2,&local_60,false);
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,lVar4,0,0);
      return lVar4;
    }
  }
  return 0;
}

