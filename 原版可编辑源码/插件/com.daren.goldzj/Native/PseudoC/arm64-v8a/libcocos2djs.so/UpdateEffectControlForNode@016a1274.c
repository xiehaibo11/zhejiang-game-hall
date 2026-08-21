
/* v8::internal::compiler::EffectControlLinearizer::UpdateEffectControlForNode(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::UpdateEffectControlForNode
          (EffectControlLinearizer *this,Node *param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)param_1;
  if (0 < *(int *)(lVar1 + 0x18)) {
    NodeProperties::ReplaceEffectInput(param_1,*(Node **)(this + 0x58),0);
    lVar1 = *(long *)param_1;
  }
  if (0 < *(int *)(lVar1 + 0x1c)) {
    iVar2 = 0;
    do {
      NodeProperties::ReplaceControlInput(param_1,*(Node **)(this + 0x60),iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(long *)param_1 + 0x1c));
  }
  return;
}

