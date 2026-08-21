
/* v8::internal::compiler::JSCreateLowering::AllocateArguments(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSCreateLowering::AllocateArguments
          (JSCreateLowering *this,Node *param_1,Node *param_2,Node *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  AccessBuilder *this_00;
  Node *pNVar5;
  undefined8 uVar6;
  Operator *pOVar7;
  int iVar8;
  Graph *pGVar9;
  double dVar10;
  ElementAccess aEStack_240 [24];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 *local_218;
  Node *local_210;
  Node *local_208;
  Node *local_200;
  Node *local_1f8;
  Node *pNStack_1f0;
  undefined8 local_1e8;
  Node *pNStack_1e0;
  Node *local_1d8;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = FrameStateInfoOf(*(Operator **)param_3);
  if (*(long *)(lVar2 + 0x10) == 0) {
    iVar8 = -1;
  }
  else {
    iVar8 = *(int *)(*(long *)(lVar2 + 0x10) + 4) + -1;
    if (iVar8 == 0) {
      JSGraph::EmptyFixedArrayConstant(*(JSGraph **)(this + 0x18));
      goto LAB_01701054;
    }
  }
  pNVar5 = param_3 + 0x20;
  if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
    pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
  }
  StateValuesAccess::iterator::iterator((iterator *)&local_1f8,*(Node **)pNVar5);
  puVar3 = (undefined8 *)StateValuesAccess::iterator::operator++((iterator *)&local_1f8);
  uStack_128 = puVar3[1];
  local_130 = *puVar3;
  uStack_118 = puVar3[3];
  local_120 = puVar3[2];
  uStack_108 = puVar3[5];
  uStack_110 = puVar3[4];
  uStack_f8 = puVar3[7];
  local_100 = puVar3[6];
  uStack_e8 = puVar3[9];
  uStack_f0 = puVar3[8];
  uStack_d8 = puVar3[0xb];
  local_e0 = puVar3[10];
  uStack_c8 = puVar3[0xd];
  uStack_d0 = puVar3[0xc];
  uStack_b8 = puVar3[0xf];
  local_c0 = puVar3[0xe];
  uStack_a8 = puVar3[0x11];
  uStack_b0 = puVar3[0x10];
  uStack_98 = puVar3[0x13];
  local_a0 = puVar3[0x12];
  uStack_88 = puVar3[0x15];
  uStack_90 = puVar3[0x14];
  local_70 = puVar3[0x18];
  uStack_78 = puVar3[0x17];
  local_80 = puVar3[0x16];
  local_218 = *(undefined8 **)(this + 0x18);
  local_210 = (Node *)0x0;
  local_208 = param_1;
  local_200 = param_2;
  ObjectRef::ObjectRef
            ((ObjectRef *)&local_228,*(undefined8 *)(this + 0x20),local_218[0x2d] + 0xe0,0);
  uVar4 = ObjectRef::IsMap((ObjectRef *)&local_228);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsMap()");
  }
  this_00 = (AccessBuilder *)
            AllocationBuilder::AllocateArray(&local_218,iVar8,local_228,uStack_220,0);
  if (0 < iVar8) {
    dVar10 = 0.0;
    do {
      AccessBuilder::ForFixedArrayElement(this_00);
      pNVar5 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x18),dVar10);
      uVar6 = StateValuesAccess::iterator::operator*((iterator *)&local_130);
      pGVar9 = (Graph *)*local_218;
      pOVar7 = (Operator *)
               SimplifiedOperatorBuilder::StoreElement
                         ((SimplifiedOperatorBuilder *)local_218[0x2f],aEStack_240);
      local_1f8 = local_210;
      pNStack_1e0 = local_208;
      local_1d8 = local_200;
      pNStack_1f0 = pNVar5;
      local_1e8 = uVar6;
      local_208 = (Node *)Graph::NewNode(pGVar9,pOVar7,5,&local_1f8,false);
      dVar10 = dVar10 + 1.0;
      this_00 = (AccessBuilder *)StateValuesAccess::iterator::operator++((iterator *)&local_130);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  pGVar9 = (Graph *)*local_218;
  pOVar7 = (Operator *)CommonOperatorBuilder::FinishRegion((CommonOperatorBuilder *)local_218[1]);
  local_1f8 = local_210;
  pNStack_1f0 = local_208;
  Graph::NewNode(pGVar9,pOVar7,2,&local_1f8,false);
LAB_01701054:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

