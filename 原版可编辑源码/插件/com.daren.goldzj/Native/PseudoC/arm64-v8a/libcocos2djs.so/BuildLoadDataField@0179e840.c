
/* v8::internal::compiler::PropertyAccessBuilder::BuildLoadDataField(v8::internal::compiler::NameRef
   const&, v8::internal::compiler::PropertyAccessInfo const&, v8::internal::compiler::Node*,
   v8::internal::compiler::Node**, v8::internal::compiler::Node**) */

void __thiscall
v8::internal::compiler::PropertyAccessBuilder::BuildLoadDataField
          (PropertyAccessBuilder *this,NameRef *param_1,PropertyAccessInfo *param_2,Node *param_3,
          Node **param_4,Node **param_5)

{
  uint uVar1;
  uint uVar2;
  JSGraph *this_00;
  PropertyAccessInfo PVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  AccessBuilder *this_01;
  Operator *pOVar7;
  undefined8 uVar8;
  Node *pNVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined2 uVar12;
  uint uVar13;
  Graph *pGVar14;
  SimplifiedOperatorBuilder *this_02;
  AccessBuilder *local_f0;
  Node *pNStack_e8;
  Node *local_e0;
  AccessBuilder *local_d8;
  Node *local_d0;
  Node *local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined1 local_a8;
  ObjectRef local_a0 [4];
  uint local_9c;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined4 local_7c;
  undefined8 local_78;
  undefined1 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar6 = TryBuildLoadConstantDataField(this,param_1,param_2,param_3);
  if (lVar6 != 0) {
LAB_0179eb20:
    if (*(long *)(lVar5 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  PVar3 = param_2[0x68];
  if ((int)(char)PVar3 - 1U < 4) {
    uVar8 = *(undefined8 *)(param_2 + 0x60);
    uVar11 = *(undefined8 *)(param_2 + 0x70);
    this_01 = (AccessBuilder *)0x0;
    if (*(long *)(param_2 + 0x58) != 0) {
      this_00 = *(JSGraph **)this;
      ObjectRef::ObjectRef(local_a0,*(undefined8 *)(this + 8),*(long *)(param_2 + 0x58),1);
      this_01 = (AccessBuilder *)JSGraph::Constant(this_00,local_a0);
      param_3 = (Node *)this_01;
    }
    uVar4 = 0x87c6 >> (ulong)(((int)(char)PVar3 - 1U) * 4 & 0x1c);
    uVar13 = (uint)uVar8;
    if ((uVar13 >> 0xd & 1) == 0) {
      pGVar14 = (Graph *)**(undefined8 **)this;
      this_02 = (SimplifiedOperatorBuilder *)(*(undefined8 **)this)[0x2f];
      AccessBuilder::ForJSObjectPropertiesOrHashKnownPointer(this_01);
      pOVar7 = (Operator *)SimplifiedOperatorBuilder::LoadField(this_02,(FieldAccess *)local_a0);
      local_d0 = *param_4;
      local_c8 = *param_5;
      local_d8 = (AccessBuilder *)param_3;
      param_3 = (Node *)Graph::NewNode(pGVar14,pOVar7,3,(Node **)&local_d8,false);
      *param_4 = param_3;
    }
    uVar8 = NameRef::object(param_1);
    uVar1 = uVar4 & 0xf;
    if (uVar1 - 6 < 7) {
      uVar2 = uVar13 & 0x1fff;
      uVar12 = 0x60b;
      switch(uVar1) {
      case 6:
        uVar12 = 0x206;
        break;
      case 7:
        uVar12 = 0x707;
        break;
      case 8:
        uVar12 = 0x708;
        break;
      case 9:
        uVar12 = 0x709;
        break;
      case 10:
        uVar12 = 0x70a;
        break;
      case 0xc:
        uVar12 = 0x60c;
      }
      local_78 = PropertyAccessInfo::GetConstFieldInfo(param_2);
      uVar4 = uVar4 & 0xf;
      local_90 = 0;
      local_7c = 0;
      local_a0[0] = (ObjectRef)0x1;
      local_7e = 5;
      local_70 = 0;
      local_9c = uVar2;
      local_98 = uVar8;
      local_88 = uVar11;
      local_80 = uVar12;
      if ((uVar4 == 7) || (uVar4 == 9)) {
        lVar6 = *(long *)(param_2 + 0x80);
        if (lVar6 != 0) {
          ObjectRef::ObjectRef((ObjectRef *)&local_d8,*(undefined8 *)(this + 8),lVar6,0);
          uVar10 = ObjectRef::IsMap((ObjectRef *)&local_d8);
          if ((uVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","IsMap()");
          }
          uVar10 = MapRef::is_stable((MapRef *)&local_d8);
          if ((uVar10 & 1) != 0) {
            CompilationDependencies::DependOnStableMap
                      (*(CompilationDependencies **)(this + 0x10),(MapRef *)&local_d8);
            local_90 = lVar6;
          }
        }
      }
      else if (uVar4 == 0xc) {
        pNVar9 = (Node *)NameRef::object(param_1);
        local_b0 = PropertyAccessInfo::GetConstFieldInfo(param_2);
        uVar8 = CONCAT44(uVar13,local_d8._0_4_);
        local_c8 = (Node *)0x0;
        local_b4 = 0;
        local_a8 = 0;
        local_d8 = (AccessBuilder *)CONCAT71((uint7)((ulong)uVar8 >> 8) & 0x1fffffffff,1);
        local_c0 = 0x1000001;
        local_b8 = 0x707;
        local_b6 = 3;
        pGVar14 = (Graph *)**(undefined8 **)this;
        local_d0 = pNVar9;
        pOVar7 = (Operator *)
                 SimplifiedOperatorBuilder::LoadField
                           ((SimplifiedOperatorBuilder *)(*(undefined8 **)this)[0x2f],
                            (FieldAccess *)&local_d8);
        local_e0 = *param_5;
        pNStack_e8 = *param_4;
        local_f0 = (AccessBuilder *)param_3;
        param_3 = (Node *)Graph::NewNode(pGVar14,pOVar7,3,(Node **)&local_f0,false);
        *param_4 = param_3;
        local_9c = 4;
        local_98 = 0;
      }
      pGVar14 = (Graph *)**(undefined8 **)this;
      pOVar7 = (Operator *)
               SimplifiedOperatorBuilder::LoadField
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)this)[0x2f],
                          (FieldAccess *)local_a0);
      local_c8 = *param_5;
      local_d0 = *param_4;
      local_d8 = (AccessBuilder *)param_3;
      pNVar9 = (Node *)Graph::NewNode(pGVar14,pOVar7,3,(Node **)&local_d8,false);
      *param_4 = pNVar9;
      goto LAB_0179eb20;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

