
/* v8::internal::compiler::BytecodeGraphBuilder::Environment::Environment(v8::internal::compiler::BytecodeGraphBuilder*,
   int, int, v8::internal::interpreter::Register, v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::Environment::Environment
          (Environment *this,long param_1,int param_2,int param_3,int param_5,undefined8 param_6)

{
  ulong uVar1;
  char *pcVar2;
  Operator *pOVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  Zone *pZVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
  *pvVar13;
  int iVar14;
  undefined8 local_70;
  Node *local_68;
  
  *(long *)this = param_1;
  *(int *)(this + 8) = param_2;
  *(int *)(this + 0xc) = param_3;
  *(undefined8 *)(this + 0x18) = param_6;
  *(undefined8 *)(this + 0x20) = param_6;
  uVar4 = *(undefined8 *)(param_1 + 8);
  pvVar13 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
             *)(this + 0x28);
  *(undefined8 *)pvVar13 = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x40) = uVar4;
  if (param_3 < 1) {
    lVar5 = 0;
    puVar6 = (undefined8 *)0x0;
  }
  else {
    iVar14 = 0;
    lVar5 = param_1;
    while( true ) {
      pcVar2 = "%this";
      if (iVar14 != 0) {
        pcVar2 = (char *)0x0;
      }
      pOVar3 = (Operator *)
               CommonOperatorBuilder::Parameter
                         (*(CommonOperatorBuilder **)(*(long *)(lVar5 + 0x10) + 8),iVar14,pcVar2);
      local_68 = *(Node **)(**(long **)(*(long *)this + 0x10) + 8);
      uVar4 = Graph::NewNode((Graph *)**(undefined8 **)(param_1 + 0x10),pOVar3,1,&local_68,false);
      puVar6 = *(undefined8 **)(this + 0x30);
      if (puVar6 == *(undefined8 **)(this + 0x38)) {
        lVar5 = (long)puVar6 - *(long *)pvVar13 >> 3;
        uVar1 = lVar5 + 1;
        if (uVar1 >> 0x1c != 0) goto LAB_0166eca4;
        lVar7 = (long)*(undefined8 **)(this + 0x38) - *(long *)pvVar13;
        uVar10 = lVar7 >> 2;
        if (uVar1 <= uVar10) {
          uVar1 = uVar10;
        }
        if (0x7fffffe < (ulong)(lVar7 >> 3)) {
          uVar1 = 0xfffffff;
        }
        if (uVar1 == 0) {
          lVar7 = 0;
        }
        else {
          pZVar8 = *(Zone **)(this + 0x40);
          uVar10 = uVar1 * 8;
          lVar7 = *(long *)(pZVar8 + 0x10);
          if (uVar10 < (ulong)(*(long *)(pZVar8 + 0x18) - lVar7) ||
              uVar10 - (*(long *)(pZVar8 + 0x18) - lVar7) == 0) {
            *(ulong *)(pZVar8 + 0x10) = lVar7 + uVar10;
          }
          else {
            lVar7 = Zone::NewExpand(pZVar8,uVar10);
          }
        }
        puVar9 = (undefined8 *)(lVar7 + lVar5 * 8);
        puVar6 = puVar9 + 1;
        *puVar9 = uVar4;
        puVar12 = *(undefined8 **)(this + 0x28);
        puVar11 = *(undefined8 **)(this + 0x30);
        while (puVar11 != puVar12) {
          puVar11 = puVar11 + -1;
          puVar9 = puVar9 + -1;
          *puVar9 = *puVar11;
        }
        *(undefined8 **)(this + 0x28) = puVar9;
        *(undefined8 **)(this + 0x30) = puVar6;
        *(ulong *)(this + 0x38) = lVar7 + uVar1 * 8;
      }
      else {
        *puVar6 = uVar4;
        puVar6 = (undefined8 *)(*(long *)(this + 0x30) + 8);
        *(undefined8 **)(this + 0x30) = puVar6;
      }
      iVar14 = iVar14 + 1;
      if (iVar14 == param_3) break;
      lVar5 = *(long *)this;
    }
    lVar5 = *(long *)pvVar13;
  }
  *(int *)(this + 0x58) = (int)((ulong)((long)puVar6 - lVar5) >> 3);
  local_70 = JSGraph::UndefinedConstant(*(JSGraph **)(param_1 + 0x10));
  std::__ndk1::
  vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>::
  insert(pvVar13,*(undefined8 *)(this + 0x30),(long)param_2,&local_70);
  puVar6 = *(undefined8 **)(this + 0x30);
  lVar5 = (long)puVar6 - *(long *)(this + 0x28) >> 3;
  *(int *)(this + 0x5c) = (int)lVar5;
  if (*(undefined8 **)(this + 0x38) == puVar6) {
    uVar1 = lVar5 + 1;
    if (uVar1 >> 0x1c != 0) goto LAB_0166eca4;
    lVar7 = (long)*(undefined8 **)(this + 0x38) - *(long *)(this + 0x28);
    uVar10 = lVar7 >> 2;
    if (uVar1 <= uVar10) {
      uVar1 = uVar10;
    }
    if (0x7fffffe < (ulong)(lVar7 >> 3)) {
      uVar1 = 0xfffffff;
    }
    if (uVar1 == 0) {
      lVar7 = 0;
    }
    else {
      pZVar8 = *(Zone **)(this + 0x40);
      uVar10 = uVar1 * 8;
      lVar7 = *(long *)(pZVar8 + 0x10);
      if (uVar10 < (ulong)(*(long *)(pZVar8 + 0x18) - lVar7) ||
          uVar10 - (*(long *)(pZVar8 + 0x18) - lVar7) == 0) {
        *(ulong *)(pZVar8 + 0x10) = lVar7 + uVar10;
      }
      else {
        lVar7 = Zone::NewExpand(pZVar8,uVar10);
      }
    }
    puVar6 = (undefined8 *)(lVar7 + lVar5 * 8);
    puVar11 = puVar6 + 1;
    *puVar6 = local_70;
    puVar9 = *(undefined8 **)(this + 0x28);
    puVar12 = *(undefined8 **)(this + 0x30);
    while (puVar12 != puVar9) {
      puVar12 = puVar12 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar12;
    }
    *(undefined8 **)(this + 0x28) = puVar6;
    *(undefined8 **)(this + 0x30) = puVar11;
    *(ulong *)(this + 0x38) = lVar7 + uVar1 * 8;
  }
  else {
    *puVar6 = local_70;
    *(long *)(this + 0x30) = *(long *)(this + 0x30) + 8;
  }
  pOVar3 = (Operator *)
           CommonOperatorBuilder::Parameter
                     (*(CommonOperatorBuilder **)(*(long *)(*(long *)this + 0x10) + 8),param_3 + 2,
                      "%context");
  local_68 = *(Node **)(**(long **)(*(long *)this + 0x10) + 8);
  uVar4 = Graph::NewNode((Graph *)**(undefined8 **)(param_1 + 0x10),pOVar3,1,&local_68,false);
  *(undefined8 *)(this + 0x10) = uVar4;
  if (param_5 != 0x7fffffff) {
    pOVar3 = (Operator *)
             CommonOperatorBuilder::Parameter
                       (*(CommonOperatorBuilder **)(*(long *)(*(long *)this + 0x10) + 8),param_3,
                        "%new.target");
    local_68 = *(Node **)(**(long **)(*(long *)this + 0x10) + 8);
    uVar4 = Graph::NewNode((Graph *)**(undefined8 **)(param_1 + 0x10),pOVar3,1,&local_68,false);
    local_68 = (Node *)CONCAT44(local_68._4_4_,param_5);
    if (param_5 < 0) {
      param_5 = interpreter::Register::ToParameterIndex((Register *)&local_68,*(int *)(this + 0xc));
    }
    else {
      param_5 = *(int *)(this + 0x58) + param_5;
    }
    if ((ulong)(*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3) <= (ulong)(long)param_5) {
LAB_0166eca4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(*(long *)(this + 0x28) + (long)param_5 * 8) = uVar4;
  }
  return;
}

