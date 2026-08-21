
/* v8::internal::compiler::JSCreateLowering::AllocateElements(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::ElementsKind,
   std::__ndk1::vector<v8::internal::compiler::Node*,
   std::__ndk1::allocator<v8::internal::compiler::Node*> > const&, v8::internal::AllocationType) */

void __thiscall
v8::internal::compiler::JSCreateLowering::AllocateElements
          (JSCreateLowering *this,undefined8 param_1,undefined8 param_2,uint param_4,long *param_5,
          undefined4 param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  Operator *pOVar5;
  Graph *pGVar6;
  long lVar7;
  undefined8 uVar8;
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
  
  lVar1 = *param_5;
  lVar2 = param_5[1];
  if ((param_4 & 0xfe) == 4) {
    lVar7 = *(long *)(*(long *)(this + 0x18) + 0x168) + 0x1e8;
    AccessBuilder::ForFixedDoubleArrayElement((AccessBuilder *)this);
  }
  else {
    lVar7 = *(long *)(*(long *)(this + 0x18) + 0x168) + 0xe0;
    AccessBuilder::ForFixedArrayElement((AccessBuilder *)this);
  }
  local_b0 = *(undefined8 **)(this + 0x18);
  local_a8 = (Node *)0x0;
  local_a0 = param_1;
  local_98 = param_2;
  ObjectRef::ObjectRef((ObjectRef *)&local_c0,*(undefined8 *)(this + 0x20),lVar7,0);
  uVar3 = ObjectRef::IsMap((ObjectRef *)&local_c0);
  if ((uVar3 & 1) != 0) {
    uVar3 = (ulong)(lVar2 - lVar1) >> 3;
    AllocationBuilder::AllocateArray(&local_b0,uVar3 & 0xffffffff,local_c0,uStack_b8,param_6);
    if (0 < (int)uVar3) {
      uVar3 = 0;
      do {
        uVar4 = JSGraph::Constant(*(JSGraph **)(this + 0x18),(double)(int)uVar3);
        uVar8 = *(undefined8 *)(*param_5 + uVar3 * 8);
        pGVar6 = (Graph *)*local_b0;
        pOVar5 = (Operator *)
                 SimplifiedOperatorBuilder::StoreElement
                           ((SimplifiedOperatorBuilder *)local_b0[0x2f],aEStack_90);
        local_78 = local_a8;
        uStack_60 = local_a0;
        local_58 = local_98;
        uStack_70 = uVar4;
        local_68 = uVar8;
        local_a0 = Graph::NewNode(pGVar6,pOVar5,5,&local_78,false);
        uVar3 = uVar3 + 1;
      } while (((ulong)(lVar2 - lVar1) >> 3 & 0xffffffff) != uVar3);
    }
    pGVar6 = (Graph *)*local_b0;
    pOVar5 = (Operator *)CommonOperatorBuilder::FinishRegion((CommonOperatorBuilder *)local_b0[1]);
    local_78 = local_a8;
    uStack_70 = local_a0;
    Graph::NewNode(pGVar6,pOVar5,2,&local_78,false);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","IsMap()");
}

