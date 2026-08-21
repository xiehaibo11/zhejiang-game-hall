
/* v8::internal::compiler::JSCreateLowering::AllocateElements(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::ElementsKind, int, v8::internal::AllocationType) */

void __thiscall
v8::internal::compiler::JSCreateLowering::AllocateElements
          (JSCreateLowering *this,undefined8 param_1,undefined8 param_2,uint param_4,int param_5,
          undefined4 param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  Operator *pOVar4;
  Graph *pGVar5;
  long lVar6;
  double dVar7;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  Node *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ElementAccess aEStack_90 [24];
  Node *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((param_4 & 0xfe) == 4) {
    lVar6 = *(long *)(*(long *)(this + 0x18) + 0x168) + 0x1e8;
    AccessBuilder::ForFixedDoubleArrayElement((AccessBuilder *)this);
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 0x18) + 0x168) + 0xe0;
    AccessBuilder::ForFixedArrayElement((AccessBuilder *)this);
  }
  uVar1 = JSGraph::TheHoleConstant(*(JSGraph **)(this + 0x18));
  local_b0 = *(undefined8 **)(this + 0x18);
  local_a8 = (Node *)0x0;
  local_a0 = param_1;
  local_98 = param_2;
  ObjectRef::ObjectRef((ObjectRef *)&local_c0,*(undefined8 *)(this + 0x20),lVar6,0);
  uVar2 = ObjectRef::IsMap((ObjectRef *)&local_c0);
  if ((uVar2 & 1) != 0) {
    AllocationBuilder::AllocateArray(&local_b0,param_5,local_c0,uStack_b8,param_6);
    if (0 < param_5) {
      dVar7 = 0.0;
      do {
        uVar3 = JSGraph::Constant(*(JSGraph **)(this + 0x18),dVar7);
        pGVar5 = (Graph *)*local_b0;
        pOVar4 = (Operator *)
                 SimplifiedOperatorBuilder::StoreElement
                           ((SimplifiedOperatorBuilder *)local_b0[0x2f],aEStack_90);
        local_78 = local_a8;
        uStack_60 = local_a0;
        local_58 = local_98;
        uStack_70 = uVar3;
        local_68 = uVar1;
        local_a0 = Graph::NewNode(pGVar5,pOVar4,5,&local_78,false);
        param_5 = param_5 + -1;
        dVar7 = dVar7 + 1.0;
      } while (param_5 != 0);
    }
    pGVar5 = (Graph *)*local_b0;
    pOVar4 = (Operator *)CommonOperatorBuilder::FinishRegion((CommonOperatorBuilder *)local_b0[1]);
    local_78 = local_a8;
    uStack_70 = local_a0;
    Graph::NewNode(pGVar5,pOVar4,2,&local_78,false);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsMap()");
}

