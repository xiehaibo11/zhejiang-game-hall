
/* v8::internal::compiler::Node::OutOfLineInputs::ExtractFrom(v8::internal::compiler::Node::Use*,
   v8::internal::compiler::Node**, int) */

void __thiscall
v8::internal::compiler::Node::OutOfLineInputs::ExtractFrom
          (OutOfLineInputs *this,Use *param_1,Node **param_2,int param_3)

{
  Use *pUVar1;
  Node *pNVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  OutOfLineInputs *pOVar6;
  Node *pNVar7;
  
  if (0 < param_3) {
    iVar4 = 0;
    lVar5 = 0;
    pOVar6 = this + 0x10;
    iVar3 = param_3;
    do {
      *(int *)(this + lVar5 + -8) = iVar4;
      pNVar7 = *param_2;
      if (pNVar7 == (Node *)0x0) {
        *(undefined8 *)pOVar6 = 0;
      }
      else {
        *param_2 = (Node *)0x0;
        pUVar1 = param_1 + lVar5;
        pNVar2 = pNVar7 + 0x18;
        if (*(Node **)(pUVar1 + 8) != (Node *)0x0) {
          pNVar2 = *(Node **)(pUVar1 + 8);
        }
        *(undefined8 *)pNVar2 = *(undefined8 *)pUVar1;
        if (*(long *)pUVar1 != 0) {
          *(undefined8 *)(*(long *)pUVar1 + 8) = *(undefined8 *)(pUVar1 + 8);
        }
        *(Node **)pOVar6 = pNVar7;
        *(undefined8 *)(this + lVar5 + -0x18) = *(undefined8 *)(pNVar7 + 0x18);
        *(undefined8 *)(this + lVar5 + -0x10) = 0;
        if (*(long *)(pNVar7 + 0x18) != 0) {
          *(OutOfLineInputs **)(*(long *)(pNVar7 + 0x18) + 8) = this + lVar5 + -0x18;
        }
        *(OutOfLineInputs **)(pNVar7 + 0x18) = this + lVar5 + -0x18;
      }
      param_2 = param_2 + 1;
      pOVar6 = pOVar6 + 8;
      lVar5 = lVar5 + -0x18;
      iVar3 = iVar3 + -1;
      iVar4 = iVar4 + 2;
    } while (iVar3 != 0);
  }
  *(int *)(this + 8) = param_3;
  return;
}

