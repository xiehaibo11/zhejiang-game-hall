
/* v8::internal::compiler::CsaLoadEliminationHelpers::ObjectMayAlias(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

undefined8
v8::internal::compiler::CsaLoadEliminationHelpers::ObjectMayAlias(Node *param_1,Node *param_2)

{
  Node *pNVar1;
  short sVar2;
  
  if (param_1 != param_2) {
    pNVar1 = param_2;
    if (*(short *)(*(long *)param_2 + 0x10) != 0xe7) {
      pNVar1 = param_1;
    }
    if (*(short *)(*(long *)pNVar1 + 0x10) == 0xe7) {
      if (*(short *)(*(long *)param_2 + 0x10) != 0xe7) {
        param_1 = param_2;
      }
      sVar2 = *(short *)(*(long *)param_1 + 0x10);
      if (sVar2 == 0x1e) {
        return 0;
      }
      if (sVar2 == 0x32) {
        return 0;
      }
      if (sVar2 == 0xe7) {
        return 0;
      }
    }
  }
  return 1;
}

