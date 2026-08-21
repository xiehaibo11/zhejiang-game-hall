
/* v8::internal::compiler::Typer::Visitor::TypeParameter(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::Typer::Visitor::TypeParameter(Visitor *this,Node *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  Node *pNVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  pNVar4 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  uVar6 = 0x200001;
  iVar1 = *(int *)(**(long **)pNVar4 + 0x20);
  iVar2 = ParameterIndexOf(*(Operator **)param_1);
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      if ((**(byte **)(this + 8) & 1) == 0) {
        puVar5 = *(undefined8 **)(*(byte **)(this + 8) + 8);
        uVar6 = 0x800001;
        uVar3 = 0xc7f7fff;
LAB_01308314:
        uVar6 = Type::Union(uVar6,uVar3,*puVar5);
        return uVar6;
      }
      uVar6 = 0x47f0001;
    }
    else if (iVar2 == iVar1 + -4) {
      uVar6 = 0x47f0001;
      if ((**(byte **)(this + 8) >> 1 & 1) == 0) {
        puVar5 = *(undefined8 **)(*(byte **)(this + 8) + 8);
        uVar6 = 0x47f0001;
        uVar3 = 0x101;
        goto LAB_01308314;
      }
    }
    else {
      if (iVar2 == iVar1 + -3) {
        uVar6 = Type::Range(0.0,134217725.0,(Zone *)**(undefined8 **)(*(long *)(this + 8) + 8));
        return uVar6;
      }
      uVar6 = 0x1000001;
      if (iVar2 != iVar1 + -2) {
        uVar6 = 0xc7f7fff;
      }
    }
  }
  return uVar6;
}

