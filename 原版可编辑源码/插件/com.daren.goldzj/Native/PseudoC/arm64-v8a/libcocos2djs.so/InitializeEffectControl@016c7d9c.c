
/* v8::internal::compiler::GraphAssembler::InitializeEffectControl(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::GraphAssembler::InitializeEffectControl
          (GraphAssembler *this,Node *param_1,Node *param_2)

{
  *(Node **)(this + 0x20) = param_1;
  *(Node **)(this + 0x28) = param_2;
  return;
}

