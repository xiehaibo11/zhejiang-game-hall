
/* v8::internal::compiler::JSCreateLowering::AllocateFastLiteralElements(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::JSObjectRef, v8::internal::AllocationType)
    */

void v8::internal::compiler::JSCreateLowering::AllocateFastLiteralElements
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,uint param_6)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  Zone *this;
  ulong uVar6;
  AccessBuilder *this_00;
  Operator *pOVar7;
  undefined8 *puVar8;
  JSGraph *pJVar9;
  undefined8 *puVar10;
  Graph *pGVar11;
  long lVar12;
  undefined8 uVar13;
  double dVar14;
  undefined1 auVar15 [16];
  ElementAccess aEStack_f0 [24];
  undefined1 local_d8 [8];
  Node *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  FixedArrayBaseRef local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_98 = param_4;
  uStack_90 = param_5;
  local_a8 = (FixedArrayBaseRef  [16])JSObjectRef::elements((JSObjectRef *)&local_98);
  uVar2 = FixedArrayBaseRef::length(local_a8);
  local_b8 = HeapObjectRef::map((HeapObjectRef *)local_a8);
  iVar3 = FixedArrayBaseRef::length(local_a8);
  if (iVar3 != 0) {
    uVar4 = MapRef::IsFixedCowArrayMap((MapRef *)local_b8);
    if ((uVar4 & 1) == 0) {
      if (uVar2 == 0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        if (uVar2 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        this = *(Zone **)(param_1 + 0x28);
        lVar12 = (long)(int)uVar2;
        uVar4 = lVar12 * 8;
        puVar8 = *(undefined8 **)(this + 0x10);
        if (uVar4 < (ulong)(*(long *)(this + 0x18) - (long)puVar8) ||
            uVar4 - (*(long *)(this + 0x18) - (long)puVar8) == 0) {
          *(undefined8 **)(this + 0x10) = puVar8 + lVar12;
          puVar10 = puVar8;
        }
        else {
          puVar8 = (undefined8 *)Zone::NewExpand(this,uVar4);
          puVar10 = puVar8;
        }
        do {
          *puVar8 = 0;
          lVar12 = lVar12 + -1;
          puVar8 = puVar8 + 1;
        } while (lVar12 != 0);
      }
      sVar1 = MapRef::instance_type((MapRef *)local_b8);
      if (sVar1 == 0x87) {
        local_88 = ObjectRef::AsFixedDoubleArray((ObjectRef *)local_a8);
        if (0 < (int)uVar2) {
          uVar4 = 0;
          do {
            uVar6 = FixedDoubleArrayRef::is_the_hole((FixedDoubleArrayRef *)local_88,(int)uVar4);
            pJVar9 = *(JSGraph **)(param_1 + 0x18);
            if ((uVar6 & 1) == 0) {
              dVar14 = (double)FixedDoubleArrayRef::get_scalar
                                         ((FixedDoubleArrayRef *)local_88,(int)uVar4);
              uVar5 = JSGraph::Constant(pJVar9,dVar14);
            }
            else {
              uVar5 = JSGraph::TheHoleConstant(pJVar9);
            }
            puVar10[uVar4] = uVar5;
            uVar4 = uVar4 + 1;
          } while (uVar2 != uVar4);
        }
      }
      else {
        local_88 = ObjectRef::AsFixedArray((ObjectRef *)local_a8);
        if (0 < (int)uVar2) {
          uVar4 = 0;
          do {
            auVar15 = FixedArrayRef::get((FixedArrayRef *)local_88,(int)uVar4);
            _local_d8 = auVar15;
            uVar6 = ObjectRef::IsJSObject((ObjectRef *)local_d8);
            if ((uVar6 & 1) == 0) {
              uVar5 = JSGraph::Constant(*(JSGraph **)(param_1 + 0x18),(ObjectRef *)local_d8);
            }
            else {
              auVar15 = ObjectRef::AsJSObject((ObjectRef *)local_d8);
              uVar5 = AllocateFastLiteral(param_1,param_2,param_3,auVar15._0_8_,auVar15._8_8_,
                                          param_6);
              param_2 = uVar5;
            }
            puVar10[uVar4] = uVar5;
            uVar4 = uVar4 + 1;
          } while (uVar2 != uVar4);
        }
      }
      local_d8 = *(undefined1 (*) [8])(param_1 + 0x18);
      local_d0 = (Node *)0x0;
      local_c8 = param_2;
      local_c0 = param_3;
      AllocationBuilder::AllocateArray(local_d8,uVar2,local_b8._0_8_,local_b8._8_8_,param_6);
      this_00 = (AccessBuilder *)MapRef::instance_type((MapRef *)local_b8);
      if (((uint)this_00 & 0xffff) == 0x87) {
        AccessBuilder::ForFixedDoubleArrayElement(this_00);
      }
      else {
        AccessBuilder::ForFixedArrayElement(this_00);
      }
      if (0 < (int)uVar2) {
        uVar4 = 0;
        do {
          uVar5 = JSGraph::Constant(*(JSGraph **)(param_1 + 0x18),(double)(int)uVar4);
          uVar13 = puVar10[uVar4];
          pGVar11 = *(Graph **)local_d8;
          pOVar7 = (Operator *)
                   SimplifiedOperatorBuilder::StoreElement
                             (*(SimplifiedOperatorBuilder **)((long)local_d8 + 0x178),aEStack_f0);
          local_88._0_8_ = local_d0;
          uStack_70 = local_c8;
          local_68 = local_c0;
          local_88._8_8_ = uVar5;
          local_78 = uVar13;
          local_c8 = Graph::NewNode(pGVar11,pOVar7,5,(Node **)local_88,false);
          uVar4 = uVar4 + 1;
        } while (uVar2 != uVar4);
      }
      pGVar11 = *(Graph **)local_d8;
      pOVar7 = (Operator *)
               CommonOperatorBuilder::FinishRegion(*(CommonOperatorBuilder **)((long)local_d8 + 8));
      local_88._0_8_ = local_d0;
      local_88._8_8_ = local_c8;
      Graph::NewNode(pGVar11,pOVar7,2,(Node **)local_88,false);
      return;
    }
  }
  auVar15 = (undefined1  [16])local_a8;
  if ((param_6 & 0xff) == 1) {
    JSObjectRef::EnsureElementsTenured((JSObjectRef *)&local_98);
    auVar15 = JSObjectRef::elements((JSObjectRef *)&local_98);
  }
  pJVar9 = *(JSGraph **)(param_1 + 0x18);
  local_a8 = (FixedArrayBaseRef  [16])auVar15;
  uVar5 = FixedArrayBaseRef::object(local_a8);
  JSGraph::HeapConstant(pJVar9,uVar5);
  return;
}

