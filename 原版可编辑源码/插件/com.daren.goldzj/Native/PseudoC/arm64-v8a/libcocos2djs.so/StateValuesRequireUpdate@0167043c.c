
/* v8::internal::compiler::BytecodeGraphBuilder::Environment::StateValuesRequireUpdate(v8::internal::compiler::Node**,
   v8::internal::compiler::Node**, int) */

undefined8 __thiscall
v8::internal::compiler::BytecodeGraphBuilder::Environment::StateValuesRequireUpdate
          (Environment *this,Node **param_1,Node **param_2,int param_3)

{
  Node *pNVar1;
  Node *pNVar2;
  uint uVar3;
  ulong uVar4;
  
  pNVar1 = *param_1;
  if (pNVar1 != (Node *)0x0) {
    pNVar2 = pNVar1 + 0x20;
    uVar3 = (byte)pNVar1[0x17] & 0xf;
    if (uVar3 == 0xf) {
      uVar3 = *(uint *)(*(long *)pNVar2 + 8);
      pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
    }
    if (uVar3 == param_3) {
      if (0 < param_3) {
        uVar4 = (ulong)(uint)param_3;
        do {
          if (*(Node **)pNVar2 != *param_2) {
            return 1;
          }
          param_2 = param_2 + 1;
          uVar4 = uVar4 - 1;
          pNVar2 = pNVar2 + 8;
        } while (uVar4 != 0);
      }
      return 0;
    }
  }
  return 1;
}

